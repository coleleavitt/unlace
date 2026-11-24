	.text
	.global fma3
fma3:
	fmtvr.32.1	fr0, r0
	fmtvr.32.1	fr1, r1
	fmul.32	fr2, fr0, fr1
	fadd.32	fr2, fr2, fr0
	fmfvr.32.1	r0, fr2
	rts
	.global dmul
dmul:
	fld.64	fr0, (r0, 0)
	fld.64	fr17, (r0, 8)
	fmul.64	fr0, fr0, fr17
	fst.64	fr0, (r1, 0)
	rts
	.global half
half:
	fmovi.32	fr1, 0.5
	fld.32	fr0, (r0, 0)
	fmul.32	fr0, fr0, fr1
	fst.32	fr0, (r0, 0)
	rts
