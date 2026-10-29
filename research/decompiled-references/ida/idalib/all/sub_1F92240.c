__int64 __fastcall sub_1F92240(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r8
  const __m128i *v19; // r12
  const __m128i *v20; // r15
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // esi
  int v26; // esi
  __int64 *v27; // rdx
  __int64 v28; // r10
  __int64 v29; // rsi
  unsigned __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rax
  char ***v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  void *v36; // rdi
  __int64 v37; // rbp
  _QWORD *v38; // rsi
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // r13
  _QWORD *v42; // rdx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r9
  unsigned int v53; // esi
  __int64 *v54; // rax
  bool v55; // zf
  _QWORD *v56; // rbp
  __int64 v57; // r8
  unsigned int v58; // edx
  __int64 v59; // rcx
  int v60; // esi
  int v61; // r10d
  __int64 v62; // r8
  __int64 v63; // rax
  int v64; // edx
  int v65; // r10d
  __int64 v66; // rdx
  __int64 v67; // r11
  _QWORD *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rbp
  int v76; // r11d
  __int64 *v77; // r10
  int v78; // ecx
  int v79; // esi
  __int64 v80; // [rsp+0h] [rbp-88h]
  __m128i v81; // [rsp+10h] [rbp-78h] BYREF
  __int64 v82; // [rsp+20h] [rbp-68h]
  unsigned __int64 v83; // [rsp+28h] [rbp-60h] BYREF
  __int64 v84; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v85; // [rsp+38h] [rbp-50h] BYREF
  __m128 v86[4]; // [rsp+40h] [rbp-48h] BYREF

  v83 = a2;
  if ( !a2 )
    return 0;
  v3 = *(unsigned int *)(a1 + 1344);
  v80 = a1 + 1328;
  v4 = *(_QWORD *)(a1 + 1328);
  if ( !(_DWORD)v3 )
    goto LABEL_61;
  v6 = (v3 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v7 = (__int64 *)(v4 + 16LL * v6);
  v8 = *v7;
  if ( a2 != *v7 )
  {
    v60 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v61 = v60 + 1;
        v6 = (v3 - 1) & (v60 + v6);
        v7 = (__int64 *)(v4 + 16LL * v6);
        v62 = *v7;
        if ( a2 == *v7 )
          goto LABEL_4;
        v60 = v61;
      }
      while ( v62 != -4096 );
    }
LABEL_61:
    sub_1F7A030(v86, (_QWORD *)(v4 + 16LL * (unsigned int)v3), (_QWORD *)(v4 + 16LL * (unsigned int)v3), v80, 1);
    v9 = v86[0].m128_u64[0];
    goto LABEL_5;
  }
LABEL_4:
  sub_1F7A030(v86, v7, (_QWORD *)(16 * v3 + v4), v80, 1);
  v9 = v86[0].m128_u64[0];
LABEL_5:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 1328) + 16LL * *(unsigned int *)(a1 + 1344));
  sub_1F7A030(v86, v10, v10, v80, 1);
  if ( v86[0].m128_u64[0] == v9 )
    goto LABEL_36;
  v15 = *(_QWORD *)(a1 + 1352);
  v16 = v15 + 40LL * *(unsigned int *)(v9 + 8);
  v17 = *(unsigned int *)(a1 + 1360);
  v12 = 40 * v17;
  v11 = 40 * v17 + v15;
  if ( v16 == v11 )
    goto LABEL_36;
  v18 = *(_QWORD *)(v16 + 8);
  v19 = (const __m128i *)(v18 + 16LL * *(unsigned int *)(v16 + 16));
  if ( (const __m128i *)v18 != v19 )
  {
    v20 = *(const __m128i **)(v16 + 8);
    do
    {
      while ( 1 )
      {
        v21 = sub_1F8B440(a1 + 1288, (__int64 *)&v83, v11, v12, v18, v14);
        v22 = _mm_loadu_si128(v20);
        v23 = *(unsigned int *)(v21 + 8);
        v11 = v23 + 1;
        if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(v21 + 12) )
          break;
        ++v20;
        v12 = *(_QWORD *)v21 + 16 * v23;
        *(__m128i *)v12 = v22;
        ++*(_DWORD *)(v21 + 8);
        if ( v19 == v20 )
          goto LABEL_12;
      }
      ++v20;
      v81 = v22;
      v82 = v21;
      sub_2237220(v21, v21 + 16, v11, 16);
      v24 = v82;
      v11 = *(_QWORD *)v82 + 16LL * *(unsigned int *)(v82 + 8);
      *(__m128i *)v11 = _mm_load_si128(&v81);
      ++*(_DWORD *)(v24 + 8);
    }
    while ( v19 != v20 );
LABEL_12:
    LODWORD(v17) = *(_DWORD *)(a1 + 1360);
    v12 = 40LL * (unsigned int)v17;
  }
  v25 = *(_DWORD *)(a1 + 1344);
  v13 = *(_QWORD *)(a1 + 1328);
  if ( v25 )
  {
    v26 = v25 - 1;
    v14 = v26 & (((unsigned int)*(_QWORD *)v16 >> 9) ^ ((unsigned int)*(_QWORD *)v16 >> 4));
    v27 = (__int64 *)(v13 + 16 * v14);
    v28 = *v27;
    if ( *(_QWORD *)v16 == *v27 )
    {
LABEL_15:
      *v27 = -8192;
      --*(_DWORD *)(a1 + 1336);
      ++*(_DWORD *)(a1 + 1340);
      goto LABEL_16;
    }
    v64 = 1;
    if ( v28 != -4096 )
    {
      do
      {
        v65 = v64 + 1;
        v66 = v26 & (unsigned int)(v14 + v64);
        v14 = (unsigned int)v66;
        v27 = (__int64 *)(v13 + 16 * v66);
        v67 = *v27;
        if ( *(_QWORD *)v16 == *v27 )
          goto LABEL_15;
        v64 = v65;
      }
      while ( v67 != -4096 );
    }
  }
LABEL_16:
  v29 = *(_QWORD *)(a1 + 1352);
  v11 = v29 - v16 + v12 - 40;
  v12 = 0xCCCCCCCCCCCCCCCDLL;
  v30 = 0xCCCCCCCCCCCCCCCDLL * (v11 >> 3);
  if ( v11 > 0 )
  {
    v31 = v16 + 8;
    do
    {
      v32 = *(_QWORD *)(v31 + 32);
      v33 = (char ***)v31;
      v31 += 40;
      *(_QWORD *)(v31 - 48) = v32;
      sub_1F7E350(v33, (char ***)v31);
      --v30;
    }
    while ( v30 );
    LODWORD(v17) = *(_DWORD *)(a1 + 1360);
    v29 = *(_QWORD *)(a1 + 1352);
  }
  v34 = (unsigned int)(v17 - 1);
  *(_DWORD *)(a1 + 1360) = v34;
  v35 = v29 + 40 * v34;
  v36 = *(void **)(v35 + 8);
  if ( v36 != (void *)(v35 + 24) )
  {
    free(v36);
    v29 = *(_QWORD *)(a1 + 1352);
  }
  if ( v16 != v29 + 40LL * *(unsigned int *)(a1 + 1360) )
  {
    v37 = v16 - v29;
    v38 = *(_QWORD **)(a1 + 1328);
    v39 = 0xCCCCCCCCCCCCCCCDLL * (v37 >> 3);
    if ( *(_DWORD *)(a1 + 1336) )
      sub_1F7A030(v86, v38, &v38[2 * *(unsigned int *)(a1 + 1344)], v80, 0);
    else
      sub_1F7A030(v86, &v38[2 * *(unsigned int *)(a1 + 1344)], &v38[2 * *(unsigned int *)(a1 + 1344)], v80, 1);
    v41 = v86[0].m128_u64[1];
    v40 = v86[0].m128_u64[0];
    v42 = (_QWORD *)(*(_QWORD *)(a1 + 1328) + 16LL * *(unsigned int *)(a1 + 1344));
    sub_1F7A030(v86, v42, v42, v80, 1);
    v12 = v86[0].m128_u64[0];
    while ( v40 != v12 )
    {
      while ( 1 )
      {
        v43 = *(unsigned int *)(v40 + 8);
        if ( v39 < v43 )
          *(_DWORD *)(v40 + 8) = v43 - 1;
        v11 = v40 + 16;
        if ( v40 + 16 != v41 )
          break;
LABEL_62:
        v40 = v41;
        if ( v41 == v12 )
          goto LABEL_36;
      }
      v44 = *(_QWORD *)(v40 + 16);
      if ( v44 == -8192 || v44 == -4096 )
      {
        v45 = (__int64 *)(v40 + 32);
        while ( 1 )
        {
          v40 = (unsigned __int64)v45;
          if ( v45 == (__int64 *)v41 )
            goto LABEL_62;
          v11 = *v45;
          v45 += 2;
          if ( v11 != -4096 && v11 != -8192 )
            goto LABEL_35;
        }
      }
      v40 += 16LL;
LABEL_35:
      ;
    }
  }
LABEL_36:
  v46 = v83;
  if ( *(char *)(v83 + 29) < 0 )
  {
    v47 = *(_QWORD *)(a1 + 56);
    if ( !v47 )
      return sub_B88050(v46);
    v48 = *(_DWORD *)(v47 + 36);
    if ( v48 > 7 )
      return sub_B88050(v46);
    if ( ((1LL << v48) & 0xBC) == 0 )
      return sub_B88050(v46);
    v49 = sub_B8CAB0(v83);
    v46 = v83;
    if ( !v49 )
      return sub_B88050(v46);
    v50 = sub_B8CAB0(v83);
    v84 = sub_FEEE40(v50);
    if ( (unsigned __int8)sub_12EEFE0((__int64 *)(a1 + 1208), &v84, &v85) )
    {
      sub_A8BB00(v86, v85, (_QWORD *)(*(_QWORD *)(a1 + 1208) + 8LL * *(unsigned int *)(a1 + 1224)), a1 + 1208, 1);
LABEL_43:
      v46 = v83;
      return sub_B88050(v46);
    }
    v68 = v85;
    v69 = (unsigned int)(*(_DWORD *)(a1 + 1216) + 1);
    v70 = *(unsigned int *)(a1 + 1224);
    v86[0].m128_u64[0] = (unsigned __int64)v85;
    v71 = (unsigned int)(4 * v69);
    v72 = (unsigned int)(2 * v70);
    if ( (unsigned int)v71 >= 3 * (int)v70 )
    {
      v79 = 2 * v70;
    }
    else
    {
      v72 = (unsigned int)(v70 - *(_DWORD *)(a1 + 1220) - v69);
      if ( (unsigned int)v72 > (unsigned int)v70 >> 3 )
      {
LABEL_72:
        v55 = *v68 == -4096;
        *(_DWORD *)(a1 + 1216) = v69;
        if ( !v55 )
          --*(_DWORD *)(a1 + 1220);
        *v68 = v84;
        v73 = *(_QWORD *)(a1 + 1208);
        v85 = v68;
        sub_A8BB00(v86, v68, (_QWORD *)(v73 + 8 * v70), a1 + 1208, 1);
        v74 = *(unsigned int *)(a1 + 1240);
        v75 = v84;
        if ( v74 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1244) )
        {
          sub_2237220(a1 + 1232, a1 + 1248, v74 + 1, 8);
          v74 = *(unsigned int *)(a1 + 1240);
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 1232) + 8 * v74) = v75;
        ++*(_DWORD *)(a1 + 1240);
        goto LABEL_43;
      }
      v79 = v70;
    }
    sub_AB4280(a1 + 1208, v79, v69, v72, v71, v51);
    sub_12EEFE0((__int64 *)(a1 + 1208), &v84, v86);
    v70 = *(unsigned int *)(a1 + 1224);
    v68 = (_QWORD *)v86[0].m128_u64[0];
    LODWORD(v69) = *(_DWORD *)(a1 + 1216) + 1;
    goto LABEL_72;
  }
  v53 = *(_DWORD *)(a1 + 440);
  if ( !v53 )
  {
    v86[0].m128_u64[0] = 0;
    goto LABEL_47;
  }
  v14 = v53 - 1;
  v57 = *(_QWORD *)(a1 + 424);
  v58 = v14 & (((unsigned int)v83 >> 9) ^ ((unsigned int)v83 >> 4));
  v54 = (__int64 *)(v57 + 16LL * v58);
  v59 = *v54;
  if ( v83 == *v54 )
  {
LABEL_55:
    v56 = v54 + 1;
    if ( v54[1] )
      return *v56;
    goto LABEL_52;
  }
  v76 = 1;
  v77 = nullptr;
  if ( v59 != -4096 )
  {
    while ( 1 )
    {
      if ( !v77 && v59 == -8192 )
        v77 = v54;
      v58 = v14 & (v76 + v58);
      v54 = (__int64 *)(v57 + 16LL * v58);
      v59 = *v54;
      if ( v83 == *v54 )
        goto LABEL_55;
      if ( v59 == -4096 )
      {
        if ( v77 )
          v54 = v77;
        break;
      }
      ++v76;
    }
  }
  v78 = *(_DWORD *)(a1 + 432);
  v86[0].m128_u64[0] = (unsigned __int64)v54;
  v11 = (unsigned int)(v78 + 1);
  v12 = 3 * v53;
  v13 = (unsigned int)(4 * v11);
  if ( (unsigned int)v13 < (unsigned int)v12 )
  {
    v12 = v53 - *(_DWORD *)(a1 + 436) - (unsigned int)v11;
    v13 = v53 >> 3;
    if ( (unsigned int)v12 > (unsigned int)v13 )
      goto LABEL_49;
    goto LABEL_48;
  }
LABEL_47:
  v53 *= 2;
LABEL_48:
  sub_1F85BC0(a1 + 424, v53, v11, v12, v13, v14);
  sub_1F747D0((__int64 *)(a1 + 424), (__int64 *)&v83, v86);
  v46 = v83;
  LODWORD(v11) = *(_DWORD *)(a1 + 432) + 1;
  v54 = (__int64 *)v86[0].m128_u64[0];
LABEL_49:
  v55 = *v54 == -4096;
  *(_DWORD *)(a1 + 432) = v11;
  if ( !v55 )
    --*(_DWORD *)(a1 + 436);
  *v54 = v46;
  v56 = v54 + 1;
  v54[1] = 0;
LABEL_52:
  if ( *(_BYTE *)(a1 + 155) )
    return 0;
  v63 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v63 + 1;
  *v56 = v63;
  v86[0].m128_i8[8] = 0;
  v86[0].m128_u64[0] = v83;
  sub_1F79E00(a1 + 184, (__int64)v86);
  return *v56;
}
