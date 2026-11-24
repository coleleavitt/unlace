	.text
	.global dot2
dot2:
	muls	r0, r1
	mulsa	r2, r3
	mflo	r0
	rts
	.global hi64
hi64:
	mulu	r0, r1
	mfhi	r0
	rts
