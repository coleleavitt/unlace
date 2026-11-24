# Raw-image routines for ppc_gekko.rs, assembled with powerpc-elf-as -mgekko
# -mregnames (2.43.1) and copied out with objcopy -O binary; base 0x80003000.
	.text
	.globl vadd
vadd:
	psq_l f0,0(r3),0,0
	psq_l f1,0(r4),0,0
	ps_add f0,f0,f1
	psq_st f0,0(r5),0,0
	blr
	.balign 16
dot:
	psq_l f0,0(r3),0,0
	psq_l f2,0(r4),0,0
	ps_mul f0,f0,f2
	ps_sum0 f1,f0,f0,f0
	blr
	.balign 16
scale:
	psq_l f0,0(r3),0,0
	ps_muls0 f0,f0,f1
	psq_st f0,0(r3),0,0
	blr
	.balign 16
quant:
	psq_l f1,0(r3),1,2
	blr
	.balign 16
