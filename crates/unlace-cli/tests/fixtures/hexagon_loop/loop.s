	.text
	.globl	f
	.p2align 4
f:
	{ r2 = #0
	  loop0(.Lbody0, r1) }
.Lbody0:
	{ r3 = memw(r0++#4) }
	{ r2 = add(r2, r3) }:endloop0
	{ r0 = r2
	  jumpr r31 }
	.globl	g
	.p2align 4
g:
	{ r2 = #0
	  loop1(.Lbody1, #10) }
.Lbody1:
	{ r3 = memw(r0++#4) }
	{ r2 = xor(r2, r3) }:endloop1
	{ r0 = r2
	  jumpr r31 }
