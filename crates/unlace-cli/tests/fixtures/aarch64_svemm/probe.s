	.text
	.globl probe
	.type probe,@function
probe:
	.inst 0x648aa000
	.inst 0x658aa000
	.inst 0x64604000
	.inst 0x64608000
	.inst 0x64e08000
	.inst 0x64e04000
	.inst 0x64e08400
	.inst 0x64e04400
	.inst 0x6460e400
	.inst 0x6420e400
	.inst 0x64e0e400
	.inst 0x64a0e400
	.inst 0xa4200000
	.inst 0xa4202000
	.inst 0xa5a00000
	.inst 0xa5a02000
	.inst 0xa4a00000
	.inst 0xa4a02000
	.inst 0xa5200000
	.inst 0xa5202000
	.inst 0x45009800
	.inst 0x44a01c00
	.inst 0x05a01800
	.inst 0x05a01c00
	.inst 0x45c09800
	.inst 0x44807800
	.inst 0x44a01800
	.inst 0x45809800
	.inst 0x05a00800
	.inst 0x05a00c00
	.inst 0x05a00000
	.inst 0x05a00400
	.size probe, .-probe
