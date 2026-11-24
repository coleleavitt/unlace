def f(n):
    s = 0
    for i in range(n):
        if i % 3 == 0:
            continue
        s += i
    while s > 100:
        s -= 7
    return s

def g(a, b):
    if a is None:
        return b
    return a.x + b[1] * 2
