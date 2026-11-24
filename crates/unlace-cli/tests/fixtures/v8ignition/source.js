function f(a, b) { let s = 0; for (let i = 0; i < a; i++) { s += i * b; if (s > 1000) break; } return s; }
function g(o) { return o.x + o["y"] + o.z(1, 2); }
function h(a) { if (a == null) return -1; return typeof a === "number" ? a * 3 : a.length; }
function w(a) { let v = 0; v = a + 300; v = v * 100000; return v; }
f(3,4); g({x:1,y:2,z:(a,b)=>a+b}); h(5); w(3);
