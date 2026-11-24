	.text
	.global vsum
vsum:
	movi	r2, 0
.L1:
	ldbi.w	r3, (r0)
	addu	r2, r3
	subi	r1, r1, 1
	bnez	r1, .L1
	mov	r0, r2
	rts
	.global vmax
vmax:
	max.s32	r0, r0, r1
	rts
	.global bytes
bytes:
	padd.8	r0, r0, r1
	rts
