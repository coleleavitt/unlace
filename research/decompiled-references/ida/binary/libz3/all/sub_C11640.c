__int64 __fastcall sub_C11640(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r12d
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r12
  int v14; // r10d
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // r15
  int v18; // r9d
  __int64 v19; // r13
  int v20; // r8d
  __int64 v21; // rsi
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // r13
  int v27; // edi
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r13
  void *v31; // rdi
  void *v33; // [rsp+0h] [rbp-D8h]
  __int64 v34; // [rsp+10h] [rbp-C8h]
  int v35[2]; // [rsp+98h] [rbp-40h] BYREF

  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = a2;
  sub_1858590(a1 + 16, a4);
  *(_QWORD *)v35 = 0;
  sub_14B7810(a1 + 24, a2, (int)v35, v6, v7, v8, (void *)(a1 + 16));
  sub_18572D0(v35);
  sub_1694970(a1 + 40, a2);
  *(__m128 *)(a1 + 96) = _mm_loadh_ps((const double *)(a1 + 40));
  *(_OWORD *)(a1 + 112) = 0;
  sub_13A2DE0(a1 + 128, a2, "z3name");
  sub_15BAB00(a1 + 144, a2);
  *(_QWORD *)(a1 + 936) = 0;
  *(_DWORD *)(a1 + 944) = 0;
  v34 = a1 + 952;
  sub_1380990(a1 + 952, a2);
  v9 = *(_DWORD *)(a2 + 712);
  *(_QWORD *)(a1 + 1520) = 0;
  sub_C16610(a1 + 1528, a2, v9 != 0, a1 + 2064);
  *(_QWORD *)(a1 + 1528) = &off_1C55A60;
  sub_15352B0(a1 + 2064, a2);
  v10 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 2208) = 0;
  *(_QWORD *)(a1 + 2240) = "reduce-asserted";
  *(_QWORD *)(a1 + 2216) = off_1C58168;
  *(_QWORD *)(a1 + 2272) = "distribute-forall";
  *(_WORD *)(a1 + 2200) = 0;
  *(_QWORD *)(a1 + 2224) = a1;
  *(_QWORD *)(a1 + 2232) = v10;
  *(_QWORD *)(a1 + 2256) = a1;
  *(_QWORD *)(a1 + 2264) = v10;
  *(_QWORD *)(a1 + 2248) = &off_1C6F2B8;
  sub_15365A0(a1 + 2280);
  v11 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 2408) = a1;
  *(_QWORD *)(a1 + 2424) = "pattern-inference";
  v12 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 2400) = &off_1C6F2F8;
  *(_QWORD *)(a1 + 2416) = v11;
  sub_DB2A00(a1 + 2432, v11, v12);
  v13 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 3480) = a1;
  *(_QWORD *)(a1 + 3496) = "refine-injectivity";
  *(_QWORD *)(a1 + 3472) = off_1C58328;
  v14 = *(_DWORD *)(v13 + 712);
  *(_QWORD *)(a1 + 3528) = "maximizing-bv-sharing";
  *(_QWORD *)(a1 + 3504) = off_1C582A8;
  *(_QWORD *)(a1 + 3560) = "elim-term-ite";
  *(_QWORD *)(a1 + 3536) = &off_1C6F338;
  *(_QWORD *)(a1 + 3488) = v13;
  *(_QWORD *)(a1 + 3512) = a1;
  *(_QWORD *)(a1 + 3520) = v13;
  *(_QWORD *)(a1 + 3544) = a1;
  *(_QWORD *)(a1 + 3552) = v13;
  sub_C16A50(a1 + 3568, v13, v14 != 0, a1 + 4104);
  v15 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 4112) = v13;
  *(_QWORD *)(a1 + 3568) = &off_1C4C1E8;
  *(_QWORD *)(a1 + 4104) = &off_1C4C1A8;
  *(_QWORD *)(a1 + 4128) = 0;
  *(_QWORD *)(a1 + 4120) = a1 + 128;
  *(_QWORD *)(a1 + 4168) = "qe-lite";
  *(_QWORD *)(a1 + 4144) = &off_1C6F4F8;
  *(_QWORD *)(a1 + 4136) = 0;
  *(_QWORD *)(a1 + 4152) = a1;
  *(_QWORD *)(a1 + 4160) = v15;
  sub_E66730(a1 + 4176, v15, v33, 1);
  v16 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 4192) = a1;
  *(_QWORD *)(a1 + 4208) = "pull-nested-quantifiers";
  *(_QWORD *)(a1 + 4184) = &off_1C6F378;
  *(_QWORD *)(a1 + 4200) = v16;
  sub_13ACB90(a1 + 4216, v16);
  v17 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 4232) = a1;
  *(_QWORD *)(a1 + 4248) = "eliminate-bit-vectors-from-quantifiers";
  v18 = *(_DWORD *)(v17 + 712);
  *(_QWORD *)(a1 + 4224) = &off_1C6F3F8;
  *(_QWORD *)(a1 + 4240) = v17;
  sub_1584DD0(a1 + 4256, v17, v18 != 0);
  *(_QWORD *)(a1 + 4400) = a1 + 4792;
  *(_QWORD *)(a1 + 4256) = &off_1C55A80;
  *(_DWORD *)(a1 + 4408) = 0;
  *(_QWORD *)(a1 + 4416) = 0;
  sub_1584DD0(a1 + 4424, v17, 0);
  *(_QWORD *)(a1 + 4568) = 0;
  *(_DWORD *)(a1 + 4576) = 0;
  *(_QWORD *)(a1 + 4424) = &off_1C61DB8;
  sub_1584DD0(a1 + 4584, v17, 0);
  v19 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 4728) = 0;
  *(_QWORD *)(a1 + 4744) = v17;
  v20 = *(_DWORD *)(v19 + 712);
  *(_QWORD *)(a1 + 4736) = 0;
  *(_QWORD *)(a1 + 4584) = &off_1C61DE0;
  *(_QWORD *)(a1 + 4256) = &off_1C58148;
  *(_QWORD *)(a1 + 4824) = "cheap-fourier-motzkin";
  *(_QWORD *)(a1 + 4800) = &off_1C6F3B8;
  *(_QWORD *)(a1 + 4752) = 0;
  *(_QWORD *)(a1 + 4760) = v17;
  *(_QWORD *)(a1 + 4768) = 0;
  *(_QWORD *)(a1 + 4776) = v17;
  *(_QWORD *)(a1 + 4784) = 0;
  *(_QWORD *)(a1 + 4792) = v17;
  *(_QWORD *)(a1 + 4808) = a1;
  *(_QWORD *)(a1 + 4816) = v19;
  sub_1584DD0(a1 + 4832, v19, v20 != 0);
  *(_QWORD *)(a1 + 4976) = a1 + 5368;
  *(_QWORD *)(a1 + 4832) = &off_1C4C100;
  *(_DWORD *)(a1 + 4984) = 0;
  *(_QWORD *)(a1 + 4992) = 0;
  sub_1584DD0(a1 + 5000, v19, 0);
  *(_QWORD *)(a1 + 5000) = &off_1C61DB8;
  *(_QWORD *)(a1 + 5144) = 0;
  *(_DWORD *)(a1 + 5152) = 0;
  sub_1584DD0(a1 + 5160, v19, 0);
  *(_DWORD *)(a1 + 5304) = 0;
  *(_QWORD *)(a1 + 5312) = 0;
  *(_QWORD *)(a1 + 5320) = v19;
  *(_QWORD *)(a1 + 5160) = &off_1C61DE0;
  *(_QWORD *)(a1 + 5328) = 0;
  *(_QWORD *)(a1 + 5336) = v19;
  *(_QWORD *)(a1 + 5344) = 0;
  *(_QWORD *)(a1 + 5352) = v19;
  *(_QWORD *)(a1 + 5360) = 0;
  *(_QWORD *)(a1 + 4832) = &off_1C4C120;
  sub_1516000(a1 + 5368, v19);
  v21 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 5400) = a1;
  *(_QWORD *)(a1 + 5416) = "propagate-bit-vector-over-integers";
  *(_QWORD *)(a1 + 5392) = &off_1C6F438;
  *(_QWORD *)(a1 + 5408) = v21;
  sub_1448220(a1 + 5424, v21, v22, v23, v24, v25);
  v26 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 5744) = "bv-size-reduce";
  *(_QWORD *)(a1 + 5720) = &off_1C58368;
  v27 = *(_DWORD *)(v26 + 712);
  *(_QWORD *)(a1 + 5832) = a1 + 5880;
  *(_QWORD *)(a1 + 5888) = &off_1C6F478;
  *(_QWORD *)(a1 + 5728) = a1;
  *(_QWORD *)(a1 + 5736) = v26;
  *(_QWORD *)(a1 + 5752) = v26;
  *(_QWORD *)(a1 + 5760) = v26;
  *(_QWORD *)(a1 + 5768) = 0;
  *(_QWORD *)(a1 + 5776) = v26;
  *(_QWORD *)(a1 + 5784) = 0;
  *(_QWORD *)(a1 + 5792) = 0;
  *(_QWORD *)(a1 + 5800) = 0;
  *(_QWORD *)(a1 + 5808) = 0;
  *(_QWORD *)(a1 + 5816) = v26;
  *(_QWORD *)(a1 + 5824) = 0;
  *(_QWORD *)(a1 + 5840) = 1;
  *(_QWORD *)(a1 + 5848) = 0;
  *(_QWORD *)(a1 + 5856) = 0;
  *(_DWORD *)(a1 + 5864) = 1065353216;
  *(_QWORD *)(a1 + 5872) = 0;
  *(_QWORD *)(a1 + 5880) = 0;
  *(_QWORD *)(a1 + 5896) = a1;
  *(_QWORD *)(a1 + 5904) = v26;
  *(_QWORD *)(a1 + 5912) = "lift-ite";
  sub_C16740(a1 + 5920, v26, v27 != 0, a1 + 6456);
  *(_QWORD *)(a1 + 6464) = v26;
  v28 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 5920) = &off_1C4C2F8;
  *(_BYTE *)(a1 + 6472) = 1;
  LODWORD(v21) = *(_DWORD *)(v28 + 712);
  *(_QWORD *)(a1 + 6456) = off_1C61D48;
  *(_QWORD *)(a1 + 6488) = a1;
  *(_QWORD *)(a1 + 6496) = v28;
  *(_QWORD *)(a1 + 6504) = "lift-ite";
  *(_QWORD *)(a1 + 6480) = &off_1C6F4B8;
  sub_C16870(a1 + 6512, v28, (_DWORD)v21 != 0, a1 + 7048);
  *(_QWORD *)(a1 + 7056) = v28;
  *(_QWORD *)(a1 + 7096) = "find-macros";
  *(_QWORD *)(a1 + 7072) = off_1C581A8;
  *(_QWORD *)(a1 + 7128) = "propagate-values";
  *(_QWORD *)(a1 + 7048) = off_1C61D70;
  v29 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 7104) = off_1C58268;
  *(_QWORD *)(a1 + 7160) = "nnf-cnf";
  *(_QWORD *)(a1 + 7088) = v29;
  *(_QWORD *)(a1 + 7120) = v29;
  *(_QWORD *)(a1 + 7152) = v29;
  *(_QWORD *)(a1 + 7136) = off_1C58228;
  *(_QWORD *)(a1 + 7184) = v29;
  *(_QWORD *)(a1 + 7216) = v29;
  *(_QWORD *)(a1 + 7192) = "find-quasi-macros";
  *(_QWORD *)(a1 + 7224) = "flatten-clauses";
  *(_QWORD *)(a1 + 6512) = &off_1C4C338;
  *(_BYTE *)(a1 + 7064) = 1;
  *(_QWORD *)(a1 + 7080) = a1;
  *(_QWORD *)(a1 + 7112) = a1;
  *(_QWORD *)(a1 + 7144) = a1;
  *(_QWORD *)(a1 + 7176) = a1;
  *(_QWORD *)(a1 + 7168) = off_1C581E8;
  *(_QWORD *)(a1 + 7208) = a1;
  *(_QWORD *)(a1 + 7200) = off_1C582E8;
  *(_DWORD *)(a1 + 7232) = 0;
  v30 = sub_186B270(0x28u);
  sub_139A1A0(v30, a2, v34);
  v31 = *(void **)(a1 + 1520);
  if ( (void *)v30 != v31 )
  {
    if ( v31 )
      sub_186B220(v31);
    *(_QWORD *)(a1 + 1520) = v30;
  }
  *(_BYTE *)(a1 + 948) = 1;
  return sub_C0EEE0(a1, 0);
}

