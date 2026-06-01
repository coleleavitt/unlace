__int64 __fastcall sub_250450(__int64 a1, __int64 *a2, char a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  signed __int64 v9; // r14
  void *v10; // rdi
  _BYTE *v11; // r15
  signed __int64 v12; // r14
  void *v13; // rdi
  _BYTE *v14; // r15
  void *v15; // rdi
  signed __int64 v16; // r14
  char v17; // al
  _BYTE *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rsi
  __m128 v25; // xmm0
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rbp
  __int64 v35; // rbp
  __int64 v36; // rbp
  __int64 v37; // rbp
  __int64 v38; // rbp
  __int64 v39; // rbp
  __int64 v40; // rbp
  __int64 v41; // rbp
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+8h] [rbp-A0h]
  _BYTE v47[8]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v48[8]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v49[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v50[8]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v51[8]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v52[8]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v53[8]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v54[8]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v55[8]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v56[8]; // [rsp+68h] [rbp-40h] BYREF

  v5 = (_QWORD *)sub_186B270(0xC0u);
  *(_DWORD *)(a1 + 16) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[12] = 0;
  v5[13] = 0;
  v5[15] = 0;
  v5[16] = 0;
  v5[18] = 0;
  v5[19] = 0;
  v5[21] = 0;
  v5[22] = 0;
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = 8;
  v6 = (_QWORD *)sub_186B270(0xC0u);
  *v6 = 0;
  v6[1] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[12] = 0;
  v6[13] = 0;
  v6[15] = 0;
  v6[16] = 0;
  v6[18] = 0;
  v6[19] = 0;
  v6[21] = 0;
  v6[22] = 0;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = 8;
  *(_DWORD *)(a1 + 40) = 0;
  v7 = (_QWORD *)sub_186B270(0xC0u);
  *v7 = 0;
  v7[1] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v7[9] = 0;
  v7[10] = 0;
  v7[12] = 0;
  v7[13] = 0;
  v7[15] = 0;
  v7[16] = 0;
  v7[18] = 0;
  v7[19] = 0;
  v7[21] = 0;
  v7[22] = 0;
  *(_QWORD *)(a1 + 48) = v7;
  *(_QWORD *)(a1 + 56) = 8;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  if ( !a2 )
  {
    memset((void *)(a1 + 96), 0, 0x80u);
    v46 = a1 + 96;
    sub_15B16F0(a1 + 96);
    *(_QWORD *)(a1 + 216) = 0;
    goto LABEL_12;
  }
  v8 = *a2;
  v9 = a2[2];
  v10 = (void *)(a1 + 120);
  *(_QWORD *)(a1 + 104) = a1 + 120;
  v11 = (_BYTE *)a2[1];
  *(_QWORD *)(a1 + 96) = v8;
  if ( (unsigned __int64)v9 > 0xF )
  {
    if ( v9 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v9 + 1 < 0 )
      std::__throw_bad_alloc();
    v43 = operator new(v9 + 1);
    *(_QWORD *)(a1 + 104) = v43;
    v10 = (void *)v43;
    *(_QWORD *)(a1 + 120) = v9;
LABEL_16:
    memcpy(v10, v11, v9);
    v10 = *(void **)(a1 + 104);
    goto LABEL_5;
  }
  if ( v9 == 1 )
  {
    *(_BYTE *)(a1 + 120) = *v11;
    goto LABEL_5;
  }
  if ( v9 )
    goto LABEL_16;
LABEL_5:
  *(_QWORD *)(a1 + 112) = v9;
  *((_BYTE *)v10 + v9) = 0;
  v12 = a2[6];
  v13 = (void *)(a1 + 152);
  *(_QWORD *)(a1 + 136) = a1 + 152;
  v14 = (_BYTE *)a2[5];
  if ( (unsigned __int64)v12 > 0xF )
  {
    if ( v12 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v12 + 1 < 0 )
      std::__throw_bad_alloc();
    v44 = operator new(v12 + 1);
    *(_QWORD *)(a1 + 136) = v44;
    v13 = (void *)v44;
    *(_QWORD *)(a1 + 152) = v12;
LABEL_21:
    memcpy(v13, v14, v12);
    v13 = *(void **)(a1 + 136);
    goto LABEL_8;
  }
  if ( v12 == 1 )
  {
    *(_BYTE *)(a1 + 152) = *v14;
    goto LABEL_8;
  }
  if ( v12 )
    goto LABEL_21;
LABEL_8:
  *(_QWORD *)(a1 + 144) = v12;
  *((_BYTE *)v13 + v12) = 0;
  v15 = (void *)(a1 + 200);
  v16 = a2[12];
  *(_QWORD *)(a1 + 168) = a2[9];
  *(_WORD *)(a1 + 176) = *((_WORD *)a2 + 40);
  v17 = *((_BYTE *)a2 + 82);
  *(_QWORD *)(a1 + 184) = a1 + 200;
  v18 = (_BYTE *)a2[11];
  *(_BYTE *)(a1 + 178) = v17;
  if ( (unsigned __int64)v16 > 0xF )
  {
    if ( v16 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v16 + 1 < 0 )
      std::__throw_bad_alloc();
    v45 = operator new(v16 + 1);
    *(_QWORD *)(a1 + 184) = v45;
    v15 = (void *)v45;
    *(_QWORD *)(a1 + 200) = v16;
    goto LABEL_26;
  }
  if ( v16 != 1 )
  {
    if ( !v16 )
      goto LABEL_11;
LABEL_26:
    memcpy(v15, v18, v16);
    v15 = *(void **)(a1 + 184);
    goto LABEL_11;
  }
  *(_BYTE *)(a1 + 200) = *v18;
LABEL_11:
  *(_QWORD *)(a1 + 192) = v16;
  *((_BYTE *)v15 + v16) = 0;
  *(_QWORD *)(a1 + 216) = a2[15];
  v46 = a1 + 96;
LABEL_12:
  *(_BYTE *)(a1 + 224) = a3;
  *(_BYTE *)(a1 + 225) = 0;
  v19 = sub_DF7550(v46);
  *(_QWORD *)(a1 + 232) = v19;
  *(_QWORD *)(a1 + 240) = 0;
  sub_15C47A0(v19);
  *(_QWORD *)(a1 + 288) = 0;
  v20 = *(_QWORD *)(a1 + 232);
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  sub_16669D0(a1 + 296, v20);
  sub_16744A0(a1 + 312, *(_QWORD *)(a1 + 232));
  sub_1624F90(a1 + 336, *(_QWORD *)(a1 + 232));
  sub_15C5470(a1 + 368, *(_QWORD *)(a1 + 232));
  v21 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 432) = v21;
  sub_180C5A0(v56, "seq");
  v22 = sub_15DA4C0(v21 + 560, v56);
  v23 = sub_15D2690(v21, v22);
  v24 = *(_QWORD *)(a1 + 232);
  *(__m128 *)(a1 + 440) = _mm_loadh_ps((const double *)(v23 + 88));
  LODWORD(v23) = *(_DWORD *)(v23 + 16);
  *(_QWORD *)(a1 + 512) = 0;
  v25 = _mm_loadh_ps((const double *)(a1 + 432));
  *(_DWORD *)(a1 + 456) = v23;
  *(_DWORD *)(a1 + 480) = v23;
  *(_DWORD *)(a1 + 504) = v23;
  v26 = *(_QWORD *)(a1 + 432);
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 520) = v26;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 560) = 0;
  *(__m128 *)(a1 + 464) = v25;
  *(__m128 *)(a1 + 488) = v25;
  sub_162A710(a1 + 568, v24);
  v56[0] = 0;
  sub_2527E0(a1 + 592, (unsigned int)v56, v27, v28, v29, v30);
  sub_18572D0(v56);
  v31 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 1392) = 0;
  *(_QWORD *)(a1 + 1400) = 0;
  *(_QWORD *)(a1 + 1384) = v31;
  *(_OWORD *)(a1 + 1352) = 0;
  *(_OWORD *)(a1 + 1368) = 0;
  v32 = (_QWORD *)sub_186B270(0xC0u);
  *v32 = 0;
  v32[3] = 0;
  v32[6] = 0;
  v32[9] = 0;
  v32[12] = 0;
  v32[15] = 0;
  v32[18] = 0;
  v32[21] = 0;
  *(_QWORD *)(a1 + 1408) = v32;
  *(_QWORD *)(a1 + 1488) = a1 + 1504;
  *(_QWORD *)(a1 + 1536) = a1 + 1552;
  *(_QWORD *)(a1 + 1416) = 8;
  *(_DWORD *)(a1 + 1424) = 0;
  *(_QWORD *)(a1 + 1432) = 0;
  *(_QWORD *)(a1 + 1496) = 0;
  *(_BYTE *)(a1 + 1504) = 0;
  *(_QWORD *)(a1 + 1544) = 0;
  *(_BYTE *)(a1 + 1552) = 0;
  *(_QWORD *)(a1 + 1576) = 0;
  *(_QWORD *)(a1 + 1584) = a1 + 1600;
  *(_QWORD *)(a1 + 1592) = 0x1000000000LL;
  *(_QWORD *)(a1 + 1616) = 0;
  sub_1829070(a1 + 1624);
  sub_1839FF0(a1 + 1664);
  sub_1787100(a1 + 2264, a1 + 1624, a1 + 1664, 0);
  sub_1839FF0(a1 + 2272);
  *(_QWORD *)(a1 + 2872) = 0;
  *(_QWORD *)(a1 + 2880) = 0;
  v33 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 2888) = 0;
  *(_QWORD *)(a1 + 2896) = 0;
  *(_QWORD *)(a1 + 2904) = 0;
  *(_QWORD *)(a1 + 2912) = 0;
  *(_QWORD *)(a1 + 2920) = 0;
  *(_QWORD *)(a1 + 2928) = 0;
  *(_QWORD *)(a1 + 2936) = 0;
  *(_QWORD *)(a1 + 2944) = 0;
  *(_QWORD *)(a1 + 2952) = 1;
  *(_QWORD *)(a1 + 2960) = 0;
  *(_QWORD *)(a1 + 2968) = 0;
  *(_QWORD *)(a1 + 2976) = 0;
  *(_QWORD *)(a1 + 2984) = 1;
  *(_DWORD *)(a1 + 1520) = 0;
  *(_DWORD *)(a1 + 1568) = 0;
  *(_QWORD *)(a1 + 1528) = sub_24F6A0;
  *(_OWORD *)(a1 + 2992) = 0;
  sub_180C5A0(v47, "bv");
  *(_DWORD *)(a1 + 1444) = sub_15DA4C0(v33 + 560, v47);
  v34 = *(_QWORD *)(a1 + 232);
  sub_180C5A0(v48, "pb");
  *(_DWORD *)(a1 + 1456) = sub_15DA4C0(v34 + 560, v48);
  v35 = *(_QWORD *)(a1 + 232);
  sub_180C5A0(v49, "array");
  *(_DWORD *)(a1 + 1440) = sub_15DA4C0(v35 + 560, v49);
  v36 = *(_QWORD *)(a1 + 232);
  sub_180C5A0(v50, "datatype");
  *(_DWORD *)(a1 + 1448) = sub_15DA4C0(v36 + 560, v50);
  v37 = *(_QWORD *)(a1 + 232);
  sub_180C5A0(v51, "datalog_relation");
  *(_DWORD *)(a1 + 1452) = sub_15DA4C0(v37 + 560, v51);
  v38 = *(_QWORD *)(a1 + 232);
  sub_180C5A0(v52, "fpa");
  *(_DWORD *)(a1 + 1460) = sub_15DA4C0(v38 + 560, v52);
  v39 = *(_QWORD *)(a1 + 232);
  sub_180C5A0(v53, "seq");
  *(_DWORD *)(a1 + 1464) = sub_15DA4C0(v39 + 560, v53);
  v40 = *(_QWORD *)(a1 + 232);
  sub_180C5A0(v54, "char");
  *(_DWORD *)(a1 + 1468) = sub_15DA4C0(v40 + 560, v54);
  v41 = *(_QWORD *)(a1 + 232);
  sub_180C5A0(v55, "specrels");
  *(_DWORD *)(a1 + 1472) = sub_15DA4C0(v41 + 560, v55);
  *(_QWORD *)(a1 + 1480) = sub_15D2690(*(_QWORD *)(a1 + 232), *(unsigned int *)(a1 + 1448));
  return sub_22C4F0(a1);
}

