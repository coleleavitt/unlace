__int64 __fastcall sub_20000(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r14d
  const char **i; // r12
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // dl
  __int16 v16; // ax
  bool v17; // zf
  char **v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  char v21; // al
  __int16 v22; // dx
  __int16 v23; // ax
  __int16 v24; // cx
  __int16 v25; // ax
  __int16 v26; // cx
  __int16 v27; // cx
  __int16 v28; // ax
  __int16 v29; // cx
  __int16 v30; // cx
  __int16 v31; // ax
  __int16 v32; // cx
  __int16 v33; // cx
  __int16 v34; // ax
  __int16 v35; // cx
  __int16 v36; // cx
  __int16 v37; // ax
  __int16 v38; // cx
  __int16 v39; // cx
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // eax
  int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // eax
  int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // eax
  int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // eax
  int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // eax
  int v60; // ecx
  unsigned int v61; // [rsp+8h] [rbp-50h]
  char v62; // [rsp+Ch] [rbp-4Ch]
  _QWORD v63[9]; // [rsp+10h] [rbp-48h] BYREF

  v61 = a3;
  v62 = a5;
  v63[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    LOWORD(v63[0]) = (*(_BYTE *)(a1 + 468) & 1) != 0;
    v21 = getinf_flag(11, 4, a3, a4, a5, a6);
    v22 = *(_WORD *)(a1 + 468);
    if ( v21 || (v22 & 2) != 0 )
      v23 = LOWORD(v63[0]) | 2;
    else
      v23 = v63[0] & 0xFFFD;
    v24 = v23;
    v25 = v23 & 0xFFFB;
    v26 = v24 | 4;
    if ( (v22 & 4) != 0 )
      v25 = v26;
    v27 = v25;
    v28 = v25 & 0xFFF7;
    v29 = v27 | 8;
    if ( (v22 & 8) != 0 )
      v28 = v29;
    v30 = v28;
    v31 = v28 & 0xFFEF;
    v32 = v30 | 0x10;
    if ( (v22 & 0x10) != 0 )
      v31 = v32;
    v33 = v31;
    v34 = v31 & 0xFFDF;
    v35 = v33 | 0x20;
    if ( (v22 & 0x20) != 0 )
      v34 = v35;
    v36 = v34;
    v37 = v34 & 0xFFBF;
    v38 = v36 | 0x40;
    if ( (v22 & 0x40) != 0 )
      v37 = v38;
    v39 = v37;
    LOBYTE(v37) = v37 & 0x7F;
    LOBYTE(v39) = v39 | 0x80;
    if ( (v22 & 0x80) != 0 )
      v37 = v39;
    LOWORD(v63[0]) = v37;
    if ( (unsigned int)sub_1F480(
                         (__int64)"HELP\n"
                                  "Risc-V specific options\n"
                                  "\n"
                                  " Use mnemonic register names\n"
                                  "\n"
                                  "       If checked, IDA will use mnemonic names of the registers,\n"
                                  "       like a0, a1, t0, gp...\n"
                                  "\n"
                                  " Simplify instructions\n"
                                  "\n"
                                  "       If this option is on, IDA will simplify instructions and replace\n"
                                  "       them by clearer pseudo-instructions\n"
                                  "       For example,\n"
                                  "\n"
                                  "               addi    x5, x2, 0\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               mv      x5, x2\n"
                                  "\n"
                                  " Simplify instructions using gp\n"
                                  "\n"
                                  "       Instruction that use gp register will be simplified.\n"
                                  "       For example,\n"
                                  "\n"
                                  "               sw      a0, (snek_qemu_file - 80080810h)(gp)\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               sw      a0, snek_qemu_file\n"
                                  "\n"
                                  "       Only applies if the gp segment register has a valid value.\n"
                                  "\n"
                                  " Float instruction uses x register\n"
                                  "\n"
                                  "       If this option is on, floating-point operations use integer registers\n"
                                  "       instead of floating-point registers as specified in Zfinx specifications.\n"
                                  "       Note that float transfer instructions are forbidden by this\n"
                                  "       extension, and will fail to decode if enabled.\n"
                                  "       An example,\n"
                                  "\n"
                                  "               fdiv.s  fs9, fs10, fs11\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               fdiv.s  s9, s10, s11\n"
                                  "\n"
                                  " Reject unknown instructions\n"
                                  "\n"
                                  "       If this option is on, IDA will not decode unknown instructions.\n"
                                  "       By default, unknown instructions are decoded with their size preserved\n"
                                  "       to allow continuation of the disasembly. Enable this to strictly reject them.\n"
                                  "\n"
                                  " Hide extension prefixes\n"
                                  "\n"
                                  "       If this option is on, vendor extension prefixes (\"nds.\", \"th.\") will\n"
                                  "       be hidden in instruction mnemonics. For example, \"nds.bfoz\" will be\n"
                                  "       displayed as \"bfoz\".\n"
                                  "\n"
                                  " Decode T-head XThead extension\n"
                                  "\n"
                                  "       If this option is on, IDA will decode T-head (XThead) vendor-specific\n"
                                  "       extension instructions that use the CUSTOM0 opcode (0x0b).\n"
                                  "       These include memory access, bit manipulation, and vector operations.\n"
                                  "\n"
                                  " Decode Andes XAndesPerf extension\n"
                                  "\n"
                                  "       If this option is on, IDA will decode Andes (XAndesPerf) vendor-specific\n"
                                  "       extension instructions. These include GP-relative load/store,\n"
                                  "       bit-field operations, branch-on-bit, and load-effective-address.\n"
                                  "\n"
                                  "ENDHELP\n"
                                  "Risc-V specific options\n"
                                  "%/\n"
                                  " <Use m~n~emonic register names:C1>\n"
                                  " <~S~implify instructions:C2>\n"
                                  " <Simplify instructions using ~g~p:C3>\n"
                                  " <Float instruction uses int~e~ger register:C4>\n"
                                  " <~R~eject unknown instructions:C5>\n"
                                  " <~H~ide extension prefixes:C6>\n"
                                  " <Decode ~T~-head XThead extension:C7>\n"
                                  " <Decode ~A~ndes XAndesPerf extension:C8>>\n"
                                  "\n",
                         sub_1F320,
                         v63) )
    {
      v40 = *(unsigned __int16 *)(a1 + 468);
      v41 = v40 & 0xFFFFFFFE;
      v42 = v40 | 1;
      if ( (v63[0] & 1) != 0 )
        v41 = v42;
      v43 = v41;
      v44 = v41 & 0xFFFFFFFD;
      v45 = v43 | 2;
      if ( (v63[0] & 2) != 0 )
        v44 = v45;
      v46 = v44;
      v47 = v44 & 0xFFFFFFFB;
      v48 = v46 | 4;
      if ( (v63[0] & 4) != 0 )
        v47 = v48;
      v49 = v47;
      v50 = v47 & 0xFFFFFFF7;
      v51 = v49 | 8;
      if ( (v63[0] & 8) != 0 )
        v50 = v51;
      v52 = v50;
      v53 = v50 & 0xFFFFFFEF;
      v54 = v52 | 0x10;
      if ( (v63[0] & 0x10) != 0 )
        v53 = v54;
      v55 = v53;
      v56 = v53 & 0xFFFFFFDF;
      v57 = v55 | 0x20;
      if ( (v63[0] & 0x20) != 0 )
        v56 = v57;
      v58 = v56;
      v59 = v56 & 0xFFFFFFBF;
      v60 = v58 | 0x40;
      if ( (v63[0] & 0x40) != 0 )
        v59 = v60;
      v12 = v59;
      LOBYTE(v59) = v59 | 0x80;
      LOBYTE(v12) = v12 & 0x7F;
      v11 = v63[0] & 0x80;
      if ( (v63[0] & 0x80) == 0 )
        LOWORD(v59) = v12;
      *(_WORD *)(a1 + 468) = v59;
    }
LABEL_8:
    v15 = getinf_flag(11, 4, v11, v12, v13, v14);
    v16 = *(_WORD *)(a1 + 468);
    if ( v15 )
    {
      v16 |= 2u;
      *(_WORD *)(a1 + 468) = v16;
    }
    v17 = (v16 & 1) == 0;
    v18 = (char **)&off_34620;
    if ( v17 )
      v18 = off_342E0;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = v18;
    if ( v62 )
    {
      v19 = *(_QWORD *)(a1 + 152);
      v63[0] = *(unsigned __int16 *)(a1 + 468);
      netnode_supset(v19, -1, v63, 8, 65);
      v20 = *(_QWORD *)(a1 + 152);
      v63[0] = 1;
      netnode_supset(v20, -2, v63, 8, 65);
    }
    return 0;
  }
  v8 = 0;
  for ( i = (const char **)&off_34020; strcmp(*i, a2); i += 5 )
  {
    if ( ++v8 == 8 )
      return 1;
  }
  result = cfgopt_t__apply3(&(&off_34020)[5 * v8], 0, v61, a4, a1);
  if ( !result )
    goto LABEL_8;
  return result;
}
