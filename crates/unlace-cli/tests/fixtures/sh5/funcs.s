# Raw-image routines for sh5_raw.rs. Assembled with sh64-elf-as --abi=32
# (--little for funcs.bin, --big for funcs_be.bin) from binutils 2.29.1 and
# copied out with objcopy -O binary; base 0x1000.
	.mode SHmedia
	.section .text,"ax"
f_add:
	add r2,r3,r2
	ptabs r18,tr0
	blink tr0,r63
	.balign 16
f_max:
	pta 1f,tr0
	bge r2,r3,tr0
	or r3,r63,r2
1:	ptabs r18,tr0
	blink tr0,r63
	.balign 16
f_abs:
	movi 0x1234,r1
	shori 0x5678,r1
	ld.l r1,0,r2
	ptabs r18,tr0
	blink tr0,r63
	.balign 16
f_call:
	addi r15,-16,r15
	st.q r15,0,r18
	pta f_add,tr0
	movi 7,r3
	blink tr0,r18
	ld.q r15,0,r18
	addi r15,16,r15
	ptabs r18,tr0
	blink tr0,r63
	.balign 16
f_fadd:
	fadd.s fr0,fr1,fr0
	ptabs r18,tr0
	blink tr0,r63
