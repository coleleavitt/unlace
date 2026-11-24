# Every Gekko paired-single instruction once (plus the GQR and W variants of
# psq_l/psq_st), assembled with powerpc-elf-as -mgekko -mregnames (2.43.1).
	.text
	.globl probe
	.type probe,@function
probe:
	ps_div 1,2,3
	ps_sub 1,2,3
	ps_add 1,2,3
	ps_sel 1,2,4,3
	ps_res 1,3
	ps_mul 1,2,4
	ps_rsqrte 1,3
	ps_msub 1,2,4,3
	ps_madd 1,2,4,3
	ps_nmsub 1,2,4,3
	ps_nmadd 1,2,4,3
	ps_sum0 1,2,4,3
	ps_sum1 1,2,4,3
	ps_muls0 1,2,4
	ps_muls1 1,2,4
	ps_madds0 1,2,4,3
	ps_madds1 1,2,4,3
	ps_add. 1,2,3
	ps_cmpu0 2,1,3
	ps_cmpo0 2,1,3
	ps_cmpu1 2,1,3
	ps_cmpo1 2,1,3
	ps_neg 1,3
	ps_mr 1,3
	ps_nabs 1,3
	ps_abs 1,3
	ps_merge00 1,2,3
	ps_merge01 1,2,3
	ps_merge10 1,2,3
	ps_merge11 1,2,3
	dcbz_l 4,5
	psq_lx 1,4,5,1,3
	psq_stx 1,4,5,1,3
	psq_lux 1,4,5,0,2
	psq_stux 1,4,5,0,2
	psq_l 1,-8(4),1,5
	psq_lu 1,8(4),0,0
	psq_st 1,16(4),0,7
	psq_stu 1,-16(4),1,0
	psq_l 1,4(3),0,3
	psq_l 1,4(3),1,0
	psq_st 1,4(3),1,3
	psq_st 1,4(3),0,3
	psq_stx 1,3,4,1,0
	psq_lux 1,3,4,1,6
	ps_madd. 1,2,4,3
	ps_merge01. 1,2,3
	blr
	.size probe,.-probe
