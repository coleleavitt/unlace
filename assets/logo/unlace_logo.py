"""Draw the Unlace logo: a pencil sketch of a black-and-white low-top sneaker coming unlaced.

Every line is computed: Catmull-Rom splines through hand-placed control points, a wobble made of
three summed sines for the pencil hand, repeated passes for the sketchy edges, and crosshatching
clipped to the black panels. Deterministic (fixed seed).

    python3 assets/logo/unlace_logo.py assets/logo/unlace-logo.svg
    rsvg-convert -w 900 assets/logo/unlace-logo.svg -o assets/logo/unlace-logo.png
"""
import math, random
random.seed(7)
W,H=900,560

def catmull(pts, closed=False, n=16):
    P=list(pts)
    if closed: P=[P[-1]]+P+[P[0],P[1]]
    else: P=[P[0]]+P+[P[-1]]
    out=[]
    for i in range(1,len(P)-2):
        p0,p1,p2,p3=P[i-1],P[i],P[i+1],P[i+2]
        for k in range(n):
            t=k/n; t2=t*t; t3=t2*t
            x=0.5*((2*p1[0])+(-p0[0]+p2[0])*t+(2*p0[0]-5*p1[0]+4*p2[0]-p3[0])*t2+(-p0[0]+3*p1[0]-3*p2[0]+p3[0])*t3)
            y=0.5*((2*p1[1])+(-p0[1]+p2[1])*t+(2*p0[1]-5*p1[1]+4*p2[1]-p3[1])*t2+(-p0[1]+3*p1[1]-3*p2[1]+p3[1])*t3)
            out.append((x,y))
    if not closed: out.append(P[-2])
    return out

def wobble(pts, amp):
    ph=[random.uniform(0,6.28) for _ in range(3)]; fr=[random.uniform(0.01,0.03),random.uniform(0.04,0.08),random.uniform(0.1,0.2)]
    out=[]; s=0
    for i,(x,y) in enumerate(pts):
        if i: s+=math.dist(pts[i-1],(x,y))
        dx=sum(amp/(j+1)*math.sin(fr[j]*s+ph[j]) for j in range(3))
        dy=sum(amp/(j+1)*math.cos(fr[j]*s+ph[j]*1.3) for j in range(3))
        out.append((x+dx,y+dy))
    return out

def poly(pts):
    return "M"+" L".join(f"{x:.1f},{y:.1f}" for x,y in pts)

def sketch(pts, passes=3, amp=1.4, w=1.6, color="#2b2b2b", op=0.75, closed=False):
    s=[]
    for p in range(passes):
        q=wobble(pts, amp*(1+0.4*p))
        # pencil strokes overshoot a little at the ends and do not always start at the same place
        a=random.randint(0,2); b=len(q)-random.randint(0,2)
        q=q[a:b] if not closed else q+[q[0]]
        s.append(f'<path d="{poly(q)}" fill="none" stroke="{color}" stroke-width="{w*(1-0.2*p):.2f}" stroke-linecap="round" stroke-linejoin="round" opacity="{op*(1-0.25*p):.2f}"/>')
    return "\n".join(s)

def hatch(clip_id, box, angle=-50, gap=5.2, amp=0.6, color="#1a1a1a", op=0.8, w=1.3, cross=True):
    x0,y0,x1,y1=box; out=[f'<g clip-path="url(#{clip_id})">']
    for ang,g,o in ([(angle,gap,op)]+([(angle+75,gap*1.35,op*0.7)] if cross else [])):
        a=math.radians(ang); dx,dy=math.cos(a),math.sin(a); nx,ny=-dy,dx
        cx,cy=(x0+x1)/2,(y0+y1)/2; R=math.hypot(x1-x0,y1-y0)/2+10
        k=-R
        while k<R:
            px,py=cx+nx*k,cy+ny*k
            line=[(px+dx*t,py+dy*t) for t in range(int(-R),int(R),6)]
            line=wobble(line,amp)
            out.append(f'<path d="{poly(line)}" fill="none" stroke="{color}" stroke-width="{w*random.uniform(0.7,1.1):.2f}" stroke-linecap="round" opacity="{o*random.uniform(0.75,1):.2f}"/>')
            k+=g*random.uniform(0.8,1.2)
    out.append("</g>"); return "\n".join(out)

def clip(cid, pts):
    return f'<clipPath id="{cid}"><path d="{poly(pts)} Z"/></clipPath>'

def bbox(pts):
    xs=[p[0] for p in pts]; ys=[p[1] for p in pts]; return (min(xs),min(ys),max(xs),max(ys))

# ---- shoe geometry (side view, toe to the right) ----
# midsole: one band glued to the upper, toe spring at the front
sole_top=catmull([(112,360),(220,366),(420,370),(600,366),(700,354),(752,334)],n=20)
sole_bot=catmull([(114,404),(240,412),(440,414),(620,408),(720,390),(760,358),(754,338)],n=20)
outsole=catmull([(113,388),(300,396),(500,398),(660,388),(740,362)],n=20)
upper=catmull([(112,360),(102,300),(108,232),(132,184),(176,160),(222,162),(262,184),(300,204),(334,196),(352,170),(368,150),(396,144),(410,166),(418,200),(452,238),(520,270),(600,294),(680,312),(736,326),(752,334),(700,354),(600,366),(420,370),(220,366)],closed=True,n=18)
toe_cap=catmull([(752,334),(736,326),(690,314),(640,302),(606,316),(596,344),(608,366),(700,354)],closed=True,n=14)
mudguard=catmull([(112,360),(108,334),(200,338),(330,342),(460,338),(560,326),(600,318),(596,344),(608,366),(420,370),(220,366)],closed=True,n=14)
heel=catmull([(112,360),(102,300),(108,232),(132,184),(176,160),(196,214),(206,270),(236,334),(200,338),(108,334)],closed=True,n=14)
collar=catmull([(176,160),(222,162),(262,184),(300,204),(334,196),(326,214),(292,224),(250,204),(214,186),(190,182)],closed=True,n=12)
eyestay=catmull([(334,196),(352,170),(368,152),(392,170),(426,206),(470,240),(540,268),(598,288),(604,306),(560,300),(490,276),(430,250),(382,224),(346,222)],closed=True,n=14)
side_line=catmull([(206,280),(280,262),(360,258),(450,272),(540,300)],n=14)

eyelets=[(364,192),(388,206),(414,222),(442,238),(474,252),(508,266),(544,280),(578,292)]

parts=[]
defs=[clip("toe",toe_cap),clip("mud",mudguard),clip("heel",heel),clip("eye",eyestay),clip("collar",collar)]
for cid,shape in (("toe",toe_cap),("mud",mudguard),("heel",heel),("eye",eyestay)):
    parts.append(hatch(cid,bbox(shape),angle=random.choice([-48,-52,-44]),gap=4.0))
parts.append(hatch("collar",bbox(collar),angle=30,gap=6,op=0.45,cross=False))
parts.append(f'<path d="{poly(sole_top+list(reversed(sole_bot)))} Z" fill="#fbfaf6"/>')
for shape in (upper,toe_cap,mudguard,heel,eyestay,collar):
    parts.append(sketch(shape,passes=3,closed=True))
for line in (sole_top,sole_bot,outsole,side_line):
    parts.append(sketch(line,passes=2,w=1.5))
parts.append(sketch(catmull([(112,360),(110,384),(114,404)],n=8),passes=2,w=1.5))
for x in range(130,720,13):
    t=(x-113)/(740-113); y=388+8*math.sin(math.pi*min(t,1))
    if x>660: y=388-(x-660)*0.33
    parts.append(sketch([(x,y+3),(x+2,y+12)],passes=1,w=1.0,op=0.45))
for shape in (toe_cap,mudguard,heel,eyestay):
    pts=wobble(shape,0.8)
    d=" ".join(f"M{pts[i][0]:.1f},{pts[i][1]:.1f} L{pts[i+1][0]:.1f},{pts[i+1][1]:.1f}" for i in range(0,len(pts)-1,3))
    parts.append(f'<path d="{d}" stroke="#f4f1ea" stroke-width="1.2" opacity="0.85" fill="none" transform="translate(0,4)"/>')
tongue=catmull([(368,150),(366,104),(384,78),(420,74),(440,96),(434,150),(418,200)],n=14)
parts.append(f'<path d="{poly(tongue)} Z" fill="#fbfaf6"/>')
parts.append(sketch(tongue,passes=3))
tag=catmull([(386,96),(420,92),(424,116),(390,120)],closed=True,n=6)
parts.append(sketch(tag,passes=2,w=1.1,op=0.6,closed=True))
for (x,y) in eyelets:
    ring=[(x+5.5*math.cos(t/12*6.283),y+4*math.sin(t/12*6.283)) for t in range(13)]
    parts.append(f'<ellipse cx="{x}" cy="{y}" rx="5.5" ry="4" fill="#f4f1ea"/>')
    parts.append(sketch(ring,passes=2,amp=0.4,w=1.3))

lace_w=4.2
def lace(pts,amp=1.0):
    q=catmull(pts,n=14)
    return "\n".join([sketch(q,passes=2,amp=amp,w=lace_w+1.8,color="#2b2b2b",op=0.9),
                      f'<path d="{poly(wobble(q,0.5))}" fill="none" stroke="#fbfaf6" stroke-width="{lace_w-0.8}" stroke-linecap="round"/>'])
# the lower eyelets are still laced: each pair crosses over the throat
crosses=[[(578,292),(560,266),(544,280)],[(544,280),(526,252),(508,266)],[(508,266),(490,238),(474,252)]]
for c in crosses: parts.append(lace(c,0.4))
# one end has pulled free and curls away up and to the right
free=[(474,252),(462,226),(470,190),(506,152),(560,124),(616,112),(656,128),(664,162),(640,180),(616,166),(628,136),(676,104),(748,82),(812,76)]
parts.append(lace(free,1.1))
parts.append(sketch([(812,76),(842,73)],passes=2,w=6.5,color="#2b2b2b",op=0.9))
# the other end drops down the side
hang=[(442,238),(428,262),(424,302),(436,340),(462,362),(490,370)]
parts.append(lace(hang,0.9))
parts.append(sketch([(490,370),(516,372)],passes=2,w=6.5,color="#2b2b2b",op=0.9))
for (x,y) in eyelets[:3]:
    parts.append(sketch([(x-9,y-10),(x-15,y-19)],passes=1,w=1.0,op=0.45))
    parts.append(sketch([(x-2,y-12),(x-3,y-22)],passes=1,w=1.0,op=0.45))
sh=[(116+i*12,420+math.sin(i)*1.2) for i in range(55)]
parts.append(sketch(sh,passes=2,w=1.0,op=0.35))
for x in range(140,760,9):
    parts.append(sketch([(x,423),(x+11,428)],passes=1,w=0.9,op=0.22))

svg=f"""<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 {W} {H}" width="{W}" height="{H}">
<title>Unlace logo: a pencil sketch of a black-and-white sneaker coming unlaced</title>
<defs>
{chr(10).join(defs)}
<filter id="grain"><feTurbulence type="fractalNoise" baseFrequency="0.9" numOctaves="2" seed="3"/><feColorMatrix values="0 0 0 0 0.1  0 0 0 0 0.1  0 0 0 0 0.1  0 0 0 0.10 0"/><feComposite in2="SourceGraphic" operator="in"/></filter>
<filter id="rough"><feTurbulence type="fractalNoise" baseFrequency="0.04" numOctaves="2" seed="9" result="n"/><feDisplacementMap in="SourceGraphic" in2="n" scale="2.2"/></filter>
</defs>
<rect width="{W}" height="{H}" fill="#f4f1ea"/>
<g filter="url(#rough)">
<path d="{poly(upper)} Z" fill="#fbfaf6"/>
{chr(10).join(parts)}
</g>
<text x="{W/2}" y="512" text-anchor="middle" font-family="'Courier New', Courier, monospace" font-size="40" letter-spacing="14" fill="#2b2b2b" filter="url(#rough)">UNLACE</text>
</svg>
"""
import sys
open(sys.argv[1],"w").write(svg)
