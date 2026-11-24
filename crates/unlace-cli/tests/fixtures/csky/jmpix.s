	.text
	.global disp
disp:
	jmpix	r0, 16
	rts
	.global disp32
disp32:
	jmpix	r2, 40
	rts
