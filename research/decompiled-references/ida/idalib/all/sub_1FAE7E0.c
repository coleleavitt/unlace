void __fastcall sub_1FAE7E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // bp
  __int64 v12; // rcx
  void *v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rdx
  bool v25; // al
  unsigned __int8 v26; // cl
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // r13
  unsigned __int64 v32; // r14
  int v33; // eax
  __int64 v34; // rsi
  int v35; // edi
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  unsigned int v41; // r14d
  __m128i si128; // xmm0
  volatile signed __int32 *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rdi
  unsigned __int64 v46; // rax
  int v47; // eax
  volatile signed __int32 *v48; // rdi
  __m128i v49; // xmm0
  volatile signed __int32 *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdi
  unsigned __int64 v53; // rax
  int v54; // eax
  volatile signed __int32 *v55; // rdi
  __m128i v56; // xmm0
  volatile signed __int32 *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdi
  unsigned __int64 v60; // rax
  int v61; // eax
  volatile signed __int32 *v62; // rdi
  _DWORD *v63; // rax
  __int64 v64; // rax
  _DWORD *v65; // rdx
  __int64 *v66; // r13
  __int64 *i; // r14
  _DWORD *v68; // rax
  int v69; // ecx
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 *v72; // rsi
  __int64 v73; // r14
  __int64 *v74; // rdx
  __int64 *v75; // rdx
  __int64 *v76; // r13
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rdi
  unsigned __int64 v80; // rax
  unsigned int v81; // r13d
  __int64 v82; // rdi
  __int64 v83; // r14
  __int64 v84; // r13
  void *v85; // rdi
  int v86; // esi
  __int64 v87; // r14
  __int64 v88; // r13
  void *v89; // rdi
  __int64 v90; // [rsp-10h] [rbp-8D8h]
  __m128i v91; // [rsp+8h] [rbp-8C0h] BYREF
  __m128 *v92; // [rsp+18h] [rbp-8B0h]
  void **v93; // [rsp+20h] [rbp-8A8h]
  unsigned __int64 v94; // [rsp+28h] [rbp-8A0h]
  __int64 v95; // [rsp+38h] [rbp-890h] BYREF
  __m128i v96; // [rsp+40h] [rbp-888h] BYREF
  __m128 v97; // [rsp+50h] [rbp-878h] BYREF
  void *v98; // [rsp+60h] [rbp-868h] BYREF
  __int64 v99; // [rsp+68h] [rbp-860h]
  char v100; // [rsp+70h] [rbp-858h] BYREF
  void *v101; // [rsp+270h] [rbp-658h] BYREF
  __int64 v102; // [rsp+278h] [rbp-650h]
  _BYTE v103[512]; // [rsp+280h] [rbp-648h] BYREF
  void *ptr[2]; // [rsp+480h] [rbp-448h] BYREF
  __int64 v105[135]; // [rsp+490h] [rbp-438h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v93 = &v98;
  v98 = &v100;
  v99 = 0x4000000000LL;
  sub_A25970(v4, 0xBu, 6u);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8LL);
  *(_QWORD *)(a1 + 776) = *(unsigned int *)(v5 + 48) + 8 * (v6 + sub_A1F730(v5));
  sub_1F757C0(a1);
  sub_1FB2AE0(a1);
  if ( *(_DWORD *)(a1 + 1320) )
    goto LABEL_8;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 200);
      if ( v9 == *(_QWORD *)(a1 + 232) )
        break;
      while ( 1 )
      {
        v10 = *(_QWORD *)v9;
        v11 = *(_BYTE *)(v9 + 8);
        v12 = *(_QWORD *)(a1 + 216) - 16LL;
        if ( v9 == v12 )
        {
          v13 = *(void **)(a1 + 208);
          v91.m128i_i64[1] = *(_QWORD *)v9;
          operator delete(v13);
          v14 = *(_QWORD *)(a1 + 224);
          v10 = v91.m128i_i64[1];
          v91.m128i_i64[0] = *(_QWORD *)(v14 + 8);
          v15 = _mm_loadl_epi64(&v91);
          v12 = v91.m128i_i64[0] + 512;
          *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(v15, v15);
          v91.m128i_i64[0] = v14 + 8;
          *(__m128 *)(a1 + 216) = _mm_loadh_ps((const double *)v91.m128i_i64);
        }
        else
        {
          *(_QWORD *)(a1 + 200) = v9 + 16;
        }
        if ( !v11 )
          break;
        sub_1FACE70(a1, a2, v10, v12, v7, v8);
        v9 = *(_QWORD *)(a1 + 200);
        if ( *(_QWORD *)(a1 + 232) == v9 )
          goto LABEL_7;
      }
      sub_1FC1AF0(a1, a2, v10);
    }
LABEL_7:
    if ( !*(_DWORD *)(a1 + 1320) )
      break;
LABEL_8:
    sub_1FAD6E0(a1, a2, (__int64)v93);
  }
  v16 = *(__int64 **)(a1 + 264);
  *(_BYTE *)(a1 + 155) = 1;
  v101 = v103;
  v102 = 0x4000000000LL;
  v91.m128i_i64[1] = (__int64)&v16[*(unsigned int *)(a1 + 272)];
  if ( (__int64 *)v91.m128i_i64[1] != v16 )
  {
    while ( 1 )
    {
      v23 = *v16;
      *(_OWORD *)ptr = 0;
      v24 = v23 + 48;
      *(_OWORD *)v105 = 0;
      if ( !v23 )
        v24 = 0;
      v91.m128i_i64[0] = v24;
      v25 = sub_B8E990(v24);
      v21 = 0;
      v20 = v91.m128i_i64[0];
      if ( v25 )
        goto LABEL_15;
      if ( !*(_BYTE *)(a1 + 157) )
        goto LABEL_14;
      v26 = *(_BYTE *)(v91.m128i_i64[0] + 8) & 0x7F;
      if ( v26 > 0x12u )
        break;
      if ( ((1LL << v26) & 0x40182) == 0 )
        goto LABEL_14;
LABEL_15:
      v105[1] = v21;
      sub_1FAB1D0(a1, a2, v20, (__int64 *)ptr, v18, v19);
      if ( v105[1] )
        v105[1] -= *(_QWORD *)(a1 + 776);
      if ( ptr[0] )
        ptr[0] = (char *)ptr[0] - *(_QWORD *)(a1 + 776);
      if ( ptr[1] )
        ptr[1] = (char *)ptr[1] - *(_QWORD *)(a1 + 776);
      if ( v105[0] )
        v105[0] -= *(_QWORD *)(a1 + 776);
      ++v16;
      v22 = sub_1F92240(a1, v23);
      sub_9B9C90((__int64)&v101, v22);
      sub_9B9C90((__int64)&v101, v105[1]);
      sub_9B9C90((__int64)&v101, (__int64)ptr[0]);
      sub_9B9C90((__int64)&v101, (__int64)ptr[1]);
      sub_9B9C90((__int64)&v101, v105[0]);
      if ( (__int64 *)v91.m128i_i64[1] == v16 )
        goto LABEL_31;
    }
    if ( ((v26 + 94) & 0x7Fu) <= 5 )
      goto LABEL_15;
LABEL_14:
    v17 = sub_1F96FE0(a1, v91.m128i_i64[0]);
    v20 = v91.m128i_i64[0];
    v21 = v17;
    goto LABEL_15;
  }
LABEL_31:
  sub_A25550(*(_QWORD *)(a1 + 16));
  sub_1F75DF0((_QWORD *)a1);
  if ( !(_DWORD)v99 )
  {
    if ( !(_DWORD)v102 )
      goto LABEL_33;
LABEL_90:
    sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x44u, (__int64)&v101);
    if ( !*(_DWORD *)(a1 + 736) )
      goto LABEL_34;
    goto LABEL_91;
  }
  sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x1Du, (__int64)v93);
  if ( (_DWORD)v102 )
    goto LABEL_90;
LABEL_33:
  if ( !*(_DWORD *)(a1 + 736) )
  {
LABEL_34:
    v92 = &v97;
    v91.m128i_i64[0] = (__int64)&v96;
    goto LABEL_35;
  }
LABEL_91:
  v71 = *(unsigned int *)(a1 + 744);
  v72 = *(__int64 **)(a1 + 728);
  ptr[0] = v105;
  ptr[1] = (void *)0x4000000000LL;
  v92 = &v97;
  sub_1F79DA0(&v97, v72, &v72[7 * v71], a1 + 728, 0);
  v91.m128i_i64[0] = v97.m128_i64[1];
  v73 = v97.m128_u64[0];
  v74 = (__int64 *)(*(_QWORD *)(a1 + 728) + 56LL * *(unsigned int *)(a1 + 744));
  sub_1F79DA0(v92, v74, v74, a1 + 728, 1);
  v94 = v97.m128_u64[0];
  while ( v94 != v73 )
  {
    sub_9B9C90((__int64)ptr, *(_QWORD *)v73);
    sub_9B9C90((__int64)ptr, *(unsigned int *)(v73 + 16));
    v75 = *(__int64 **)(v73 + 8);
    v76 = v75;
    v91.m128i_i64[1] = (__int64)&v75[*(unsigned int *)(v73 + 16)];
    while ( (__int64 *)v91.m128i_i64[1] != v76 )
    {
      v77 = *v76++;
      sub_9B9C90((__int64)ptr, v77);
    }
    if ( v73 + 56 != v91.m128i_i64[0] )
    {
      if ( *(_QWORD *)(v73 + 56) < 0xFFFFFFFFFFFFFFFELL )
      {
        v73 += 56;
        continue;
      }
      v78 = v73 + 112;
      while ( 1 )
      {
        v73 = v78;
        if ( v78 == v91.m128i_i64[0] )
          break;
        v78 += 56;
        if ( *(_QWORD *)v73 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_100;
      }
    }
    v73 = v91.m128i_i64[0];
LABEL_100:
    ;
  }
  v91.m128i_i64[0] = (__int64)&v96;
  sub_1F6B880(&v96);
  sub_A1FE00(v96.m128i_i64[0], 71, 1);
  sub_A1FE00(v96.m128i_i64[0], 0, 6);
  sub_A1FE00(v96.m128i_i64[0], 6, 4);
  v79 = *(_QWORD *)(a1 + 16);
  v80 = v96.m128i_u64[1];
  v97.m128_u64[0] = v96.m128i_i64[0];
  v96 = 0;
  v97.m128_u64[1] = v80;
  v81 = sub_A22F90(v79, (__int64 *)v92);
  if ( v97.m128_u64[1] )
    sub_4343A0((volatile signed __int32 *)v97.m128_u64[1]);
  v82 = *(_QWORD *)(a1 + 16);
  if ( v81 )
  {
    sub_1F763F0(v82, v81, (_DWORD *)ptr[0], LODWORD(ptr[1]), 0, 0, 0x100000047LL);
    v30 = v90;
  }
  else
  {
    sub_1F6EB90(v82, 0x47u, (__int64)ptr);
  }
  if ( v96.m128i_i64[1] )
    sub_4343A0((volatile signed __int32 *)v96.m128i_i64[1]);
  if ( ptr[0] == v105 )
  {
LABEL_35:
    if ( !*(_DWORD *)(a1 + 1400) )
      goto LABEL_36;
    goto LABEL_109;
  }
  free(ptr[0]);
  if ( !*(_DWORD *)(a1 + 1400) )
  {
LABEL_36:
    if ( !*(_DWORD *)(a1 + 1440) )
      goto LABEL_37;
    goto LABEL_114;
  }
LABEL_109:
  sub_1FA7820(a1, 0);
  sub_1F74890(a1 + 1368);
  v83 = *(_QWORD *)(a1 + 1392);
  v84 = v83 + 72LL * *(unsigned int *)(a1 + 1400);
  while ( v83 != v84 )
  {
    while ( 1 )
    {
      v84 -= 72;
      v85 = *(void **)(v84 + 8);
      if ( v85 == (void *)(v84 + 24) )
        break;
      free(v85);
      if ( v83 == v84 )
        goto LABEL_113;
    }
  }
LABEL_113:
  v86 = *(_DWORD *)(a1 + 1440);
  *(_DWORD *)(a1 + 1400) = 0;
  if ( v86 )
  {
LABEL_114:
    sub_1FA7820(a1, 1);
    sub_1F74890(a1 + 1408);
    v87 = *(_QWORD *)(a1 + 1432);
    v88 = v87 + 72LL * *(unsigned int *)(a1 + 1440);
    while ( v87 != v88 )
    {
      while ( 1 )
      {
        v88 -= 72;
        v89 = *(void **)(v88 + 8);
        if ( v89 == (void *)(v88 + 24) )
          break;
        free(v89);
        if ( v87 == v88 )
          goto LABEL_118;
      }
    }
LABEL_118:
    *(_DWORD *)(a1 + 1440) = 0;
  }
LABEL_37:
  v31 = sub_704780(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 2264) + 80LL) + 72LL),
          *(_QWORD *)(*(_QWORD *)(a2 + 2264) + 80LL),
          v27,
          v28,
          v29,
          v30);
  ptr[0] = v105;
  v32 = v31[7];
  for ( ptr[1] = (void *)0x8000000000LL; v32; v32 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL )
  {
    if ( *(char *)(v32 + 29) < 0 )
      continue;
    v33 = *(_DWORD *)(a1 + 440);
    v34 = *(_QWORD *)(a1 + 424);
    if ( !v33 )
      continue;
    v35 = v33 - 1;
    v36 = (v33 - 1) & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
    v37 = *(_QWORD *)(v34 + 16LL * v36);
    if ( v37 != v32 )
    {
      if ( v37 == -4096 )
        continue;
      v69 = 1;
      while ( 1 )
      {
        v36 = v35 & (v69 + v36);
        v70 = *(_QWORD *)(v34 + 16LL * v36);
        if ( v70 == v32 )
          break;
        ++v69;
        if ( v70 == -4096 )
          goto LABEL_42;
      }
    }
    sub_9B9C90((__int64)ptr, *(_BYTE *)(v32 + 28) & 0x7F);
    v38 = sub_1F92240(a1, v32);
    sub_9B9C90((__int64)ptr, v38);
LABEL_42:
    ;
  }
  sub_1F6B880(v91.m128i_i64[0]);
  sub_A1FE00(v96.m128i_i64[0], 22, 1);
  sub_A1FE00(v96.m128i_i64[0], 0, 10);
  v39 = *(_QWORD *)(a1 + 16);
  v40 = v96.m128i_u64[1];
  v97.m128_u64[0] = v96.m128i_i64[0];
  v96 = 0;
  v97.m128_u64[1] = v40;
  v41 = sub_A22F90(v39, (__int64 *)v92);
  if ( v97.m128_u64[1] )
    sub_4343A0((volatile signed __int32 *)v97.m128_u64[1]);
  v95 = 22;
  sub_1F76000(*(_QWORD *)(a1 + 16), v41, (unsigned __int8 *)&v95, 1, (unsigned __int64)ptr[0], 8LL * LODWORD(ptr[1]));
  sub_1F6B880(v92);
  si128 = _mm_load_si128((const __m128i *)&v97);
  v43 = (volatile signed __int32 *)v96.m128i_i64[1];
  v44 = v97.m128_u64[0];
  v97 = 0;
  v96 = si128;
  if ( v43 )
  {
    sub_4343A0(v43);
    if ( v97.m128_u64[1] )
      sub_4343A0((volatile signed __int32 *)v97.m128_u64[1]);
    v44 = v96.m128i_i64[0];
  }
  sub_A1FE00(v44, 28, 1);
  sub_A1FE00(v96.m128i_i64[0], 6, 4);
  sub_A1FE00(v96.m128i_i64[0], 0, 10);
  v45 = *(_QWORD *)(a1 + 16);
  v46 = v96.m128i_u64[1];
  v97.m128_u64[0] = v96.m128i_i64[0];
  v96 = 0;
  v97.m128_u64[1] = v46;
  v47 = sub_A22F90(v45, (__int64 *)v92);
  v48 = (volatile signed __int32 *)v97.m128_u64[1];
  *(_DWORD *)(a1 + 3472) = v47;
  if ( v48 )
    sub_4343A0(v48);
  sub_1F6B880(v92);
  v49 = _mm_load_si128((const __m128i *)&v97);
  v50 = (volatile signed __int32 *)v96.m128i_i64[1];
  v51 = v97.m128_u64[0];
  v97 = 0;
  v96 = v49;
  if ( v50 )
  {
    sub_4343A0(v50);
    if ( v97.m128_u64[1] )
      sub_4343A0((volatile signed __int32 *)v97.m128_u64[1]);
    v51 = v96.m128i_i64[0];
  }
  sub_A1FE00(v51, 76, 1);
  sub_A1FE00(v96.m128i_i64[0], 6, 4);
  sub_A1FE00(v96.m128i_i64[0], 0, 10);
  v52 = *(_QWORD *)(a1 + 16);
  v53 = v96.m128i_u64[1];
  v97.m128_u64[0] = v96.m128i_i64[0];
  v96 = 0;
  v97.m128_u64[1] = v53;
  v54 = sub_A22F90(v52, (__int64 *)v92);
  v55 = (volatile signed __int32 *)v97.m128_u64[1];
  *(_DWORD *)(a1 + 3476) = v54;
  if ( v55 )
    sub_4343A0(v55);
  sub_1F6B880(v92);
  v56 = _mm_load_si128((const __m128i *)&v97);
  v57 = (volatile signed __int32 *)v96.m128i_i64[1];
  v58 = v97.m128_u64[0];
  v97 = 0;
  v96 = v56;
  if ( v57 )
  {
    sub_4343A0(v57);
    if ( v97.m128_u64[1] )
      sub_4343A0((volatile signed __int32 *)v97.m128_u64[1]);
    v58 = v96.m128i_i64[0];
  }
  sub_A1FE00(v58, 77, 1);
  sub_A1FE00(v96.m128i_i64[0], 6, 4);
  sub_A1FE00(v96.m128i_i64[0], 0, 10);
  v59 = *(_QWORD *)(a1 + 16);
  v60 = v96.m128i_u64[1];
  v97.m128_u64[0] = v96.m128i_i64[0];
  v96 = 0;
  v97.m128_u64[1] = v60;
  v61 = sub_A22F90(v59, (__int64 *)v92);
  v62 = (volatile signed __int32 *)v97.m128_u64[1];
  *(_DWORD *)(a1 + 3480) = v61;
  if ( v62 )
    sub_4343A0(v62);
  v63 = (_DWORD *)v31[5];
  if ( v63 && *v63 >> 1 )
    sub_1FAA350(a1, a2, (__int64)(v31 + 5));
  v64 = *(_QWORD *)(a2 + 2272);
  if ( v64 )
  {
    v65 = *(_DWORD **)(v64 + 40);
    if ( v65 )
    {
      if ( *v65 >> 1 )
        sub_1FAA350(a1, a2, v64 + 40);
    }
  }
  v66 = *(__int64 **)(a1 + 2552);
  for ( i = &v66[*(unsigned int *)(a1 + 2560)]; i != v66; ++v66 )
  {
    v68 = *(_DWORD **)*v66;
    if ( v68 && *v68 >> 1 )
      sub_1FAA350(a1, a2, *v66);
  }
  if ( v96.m128i_i64[1] )
    sub_4343A0((volatile signed __int32 *)v96.m128i_i64[1]);
  if ( ptr[0] != v105 )
    free(ptr[0]);
  if ( v101 != v103 )
    free(v101);
  if ( v98 != v93 + 2 )
    free(v98);
}
