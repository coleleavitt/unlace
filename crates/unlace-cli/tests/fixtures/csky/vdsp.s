	.text
	.global vadd4
vadd4:
	vldq.32	vr0, (r0, 0)
	vldq.32	vr1, (r1, 0)
	vadd.s32	vr2, vr0, vr1
	vstq.32	vr2, (r2, 0)
	rts
