	.text
	.global fma2
fma2:
	fmtvrl	fr0, r0
	fmtvrl	fr1, r1
	fmuls	fr2, fr0, fr1
	fadds	fr2, fr2, fr0
	fmfvrl	r0, fr2
	rts
	.global dsum
dsum:
	flds	fr0, (r0, 0)
	flds	fr1, (r0, 4)
	fadds	fr0, fr0, fr1
	fsts	fr0, (r1, 0)
	rts
	.global fclamp
fclamp:
	fmtvrl	fr0, r0
	fcmpzhss	fr0
	bt	.L1
	movi	r0, 0
	rts
.L1:
	fstosi.rz	fr1, fr0
	fmfvrl	r0, fr1
	rts
	.global i2d
i2d:
	fmtvrl	fr0, r0
	fsitod	fr1, fr0
	fstd	fr1, (r1, 0)
	rts
