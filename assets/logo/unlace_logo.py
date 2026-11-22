"""Draw the Unlace logo: vector line art of a black-and-white low-top sneaker coming unlaced.

Every shape is computed: Catmull-Rom splines through control points traced from a side view of
a black-and-white ("panda") low top, filled flat black or white, outlined, with stitch lines
offset inside the panels. No randomness; the output is the same on every run.

    python3 assets/logo/unlace_logo.py assets/logo/unlace-logo.svg
    rsvg-convert -w 1000 assets/logo/unlace-logo.svg -o assets/logo/unlace-logo.png
"""
import math
import sys

W, H = 1000, 600
INK, PAPER = "#141414", "#ffffff"


def catmull(pts, closed=False, n=20):
    p = list(pts)
    p = [p[-1]] + p + [p[0], p[1]] if closed else [p[0]] + p + [p[-1]]
    out = []
    for i in range(1, len(p) - 2):
        p0, p1, p2, p3 = p[i - 1], p[i], p[i + 1], p[i + 2]
        for k in range(n):
            t = k / n
            out.append(tuple(
                0.5 * (2 * p1[j] + (p2[j] - p0[j]) * t
                       + (2 * p0[j] - 5 * p1[j] + 4 * p2[j] - p3[j]) * t * t
                       + (3 * p1[j] - p0[j] - 3 * p2[j] + p3[j]) * t ** 3)
                for j in (0, 1)))
    if not closed:
        out.append(p[-2])
    return out


def d(pts, closed=False):
    s = "M" + " L".join(f"{x:.1f},{y:.1f}" for x, y in pts)
    return s + (" Z" if closed else "")


def offset(pts, dist):
    """The polyline moved `dist` along its left normal (inside for a clockwise shape)."""
    out = []
    for i, (x, y) in enumerate(pts):
        a, b = pts[max(i - 1, 0)], pts[min(i + 1, len(pts) - 1)]
        tx, ty = b[0] - a[0], b[1] - a[1]
        n = math.hypot(tx, ty) or 1
        out.append((x - ty / n * dist, y + tx / n * dist))
    return out


def shape(pts, fill, w=3.2):
    return f'<path d="{d(pts, True)}" fill="{fill}" stroke="{INK}" stroke-width="{w}" stroke-linejoin="round"/>'


def line(pts, w=2.0, color=INK, dash=None, cap="round"):
    da = f' stroke-dasharray="{dash}"' if dash else ""
    return f'<path d="{d(pts)}" fill="none" stroke="{color}" stroke-width="{w}" stroke-linecap="{cap}" stroke-linejoin="round"{da}/>'


# ---- the shoe, side view, toe to the right ----
upper = catmull([(86, 372), (84, 320), (88, 232), (98, 182), (118, 166), (160, 176), (214, 184),
                 (270, 172), (322, 148), (360, 112), (392, 108), (424, 132), (470, 162), (540, 198),
                 (620, 236), (700, 268), (770, 288), (850, 306), (898, 326), (912, 350), (896, 370),
                 (500, 376), (200, 375)], closed=True)
collar = catmull([(98, 182), (118, 166), (160, 176), (214, 184), (270, 172), (322, 148), (360, 112),
                  (392, 108), (424, 132), (470, 162), (540, 198), (620, 236), (700, 268), (690, 292),
                  (610, 262), (530, 228), (452, 202), (400, 196), (340, 220), (250, 244), (160, 252),
                  (94, 250)], closed=True)
heel = catmull([(86, 372), (84, 320), (88, 276), (160, 278), (232, 290), (286, 318), (304, 372)], closed=True)
mudguard = catmull([(520, 374), (532, 332), (584, 306), (690, 292), (758, 312), (842, 324), (898, 334),
                    (912, 350), (896, 370)], closed=True)
heel_tab = catmull([(96, 190), (114, 176), (132, 184), (130, 230), (102, 234)], closed=True, n=10)
sole_top = catmull([(86, 372), (300, 376), (600, 376), (860, 372), (916, 360)])
sole_toe = catmull([(916, 360), (930, 378), (922, 400), (900, 414)], n=12)[1:]
sole_bot = catmull([(900, 414), (840, 422), (600, 428), (300, 428), (84, 426)])[1:]
midsole = sole_top + sole_toe + sole_bot
out_bot = [(84, 426), (86, 448)] + catmull([(100, 457), (300, 458), (600, 458), (830, 448), (890, 430), (900, 414)])
outsole = list(reversed(sole_bot)) + list(reversed(out_bot))[1:-1]
tongue = catmull([(362, 112), (358, 70), (374, 42), (408, 34), (432, 52), (430, 100), (424, 132)])
tongue_shape = tongue + catmull([(424, 132), (392, 108), (362, 112)], n=8)

eyelets = [(410, 150), (452, 174), (496, 196), (540, 216), (584, 236), (628, 254), (672, 270)]

parts = []
parts.append(shape(tongue_shape, PAPER))
parts.append(line(catmull([(376, 60), (404, 50), (422, 62)], n=10), w=1.6))
parts.append(shape(upper, PAPER))
for s in (heel, collar, mudguard):
    parts.append(shape(s, INK))
parts.append(shape(heel_tab, PAPER, w=2.0))
parts.append(shape(midsole, PAPER))
parts.append(shape(outsole, INK))

# stitching: white dashes inside the black panels, black dashes along the white ones
for s, dist in ((collar, 6), (heel, 6), (mudguard, 6)):
    parts.append(line(offset(s, dist)[:-12], w=1.3, color=PAPER, dash="5 5"))
parts.append(line(catmull([(304, 340), (380, 316), (470, 310), (530, 334)]), w=1.4, dash="5 5"))
parts.append(line(catmull([(90, 400), (300, 404), (600, 404), (850, 398), (920, 384)]), w=1.2, dash="1 6"))
# outsole tread
parts.append(f'<clipPath id="out"><path d="{d(outsole, True)}"/></clipPath><g clip-path="url(#out)">')
for x in range(108, 900, 24):
    parts.append(f'<rect x="{x}" y="444" width="11" height="20" fill="{PAPER}"/>')
parts.append("</g>")
parts.append(f'<path d="{d(outsole, True)}" fill="none" stroke="{INK}" stroke-width="3.2" stroke-linejoin="round"/>')
# perforated toe box
for row in range(3):
    for col in range(6 - row):
        cx, cy = 728 + col * 20 + row * 9, 288 + row * 9 + col * 3.6
        parts.append(f'<circle cx="{cx:.1f}" cy="{cy:.1f}" r="2" fill="{INK}"/>')
# eyelets
for x, y in eyelets:
    parts.append(f'<ellipse cx="{x}" cy="{y}" rx="6" ry="4.5" fill="{PAPER}" stroke="{INK}" stroke-width="1.6"/>')


def lace(pts):
    q = catmull(pts, n=24)
    return line(q, w=9, color=INK) + line(q, w=5, color=PAPER)


def aglet(a, b):
    return line([a, b], w=9, color=INK, cap="butt")


# the lower eyelets are still laced: each pair crosses over the throat
for a, b in ((6, 5), (5, 4), (4, 3)):
    (x1, y1), (x2, y2) = eyelets[a], eyelets[b]
    parts.append(lace([(x1, y1), ((x1 + x2) / 2 + 2, (y1 + y2) / 2 - 24), (x2, y2)]))
# the other end hangs over the quarter
parts.append(lace([(496, 196), (482, 226), (478, 268), (490, 306), (514, 328), (544, 334)]))
parts.append(aglet((544, 334), (576, 336)))
# one end has pulled free and curls away up and to the right
parts.append(lace([(540, 216), (528, 186), (540, 146), (578, 110), (632, 84), (690, 76), (732, 94),
                   (738, 128), (714, 146), (690, 132), (702, 102), (752, 72), (830, 52), (900, 46)]))
parts.append(aglet((900, 46), (936, 44)))
# motion ticks by the empty eyelets
for x, y in eyelets[:3]:
    parts.append(line([(x - 10, y - 12), (x - 16, y - 22)], w=1.8))
    parts.append(line([(x - 1, y - 14), (x - 1, y - 25)], w=1.8))
# ground line
parts.append(line([(70, 470), (950, 470)], w=1.6))

svg = f"""<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 {W} {H}" width="{W}" height="{H}">
<title>Unlace logo: line art of a black-and-white sneaker coming unlaced</title>
<rect width="{W}" height="{H}" fill="{PAPER}"/>
{chr(10).join(parts)}
<text x="{W / 2}" y="548" text-anchor="middle" font-family="'Helvetica Neue', Helvetica, Arial, sans-serif" font-weight="700" font-size="46" letter-spacing="16" fill="{INK}">UNLACE</text>
</svg>
"""
open(sys.argv[1], "w").write(svg)
