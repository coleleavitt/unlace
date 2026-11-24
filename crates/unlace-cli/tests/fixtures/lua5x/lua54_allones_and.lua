local a, b, c, d
a = 0xFFFFFFFFFFFFFFFF
assert(a == -1 and a & -1 == a and a & 35 == 35)
