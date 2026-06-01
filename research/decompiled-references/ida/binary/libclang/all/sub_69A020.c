__int64 __fastcall sub_69A020(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r13
  int v6; // eax
  int v7; // ebp
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // r12
  int v11; // r14d
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __m128 *v15; // rbx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r13
  int v18; // edx
  __int64 v19; // rbp
  int v20; // esi
  int v21; // edi
  unsigned int i; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 result; // rax
  char v26; // dl
  int v27; // eax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  _QWORD *v32; // rdx
  unsigned __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  _BYTE *v39; // rax
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // r15
  _BYTE *v43; // rax
  const __m128i *v44; // rbx
  unsigned __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rax
  __m128i *v49; // rax
  __int64 *v50; // rdi
  __int64 v51; // rcx
  _DWORD *v52; // rax
  _DWORD *v53; // rcx
  __m128 *v54; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+18h] [rbp-C0h]
  __m128 v56; // [rsp+20h] [rbp-B8h] BYREF
  int v57; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+34h] [rbp-A4h]
  char v59[156]; // [rsp+3Ch] [rbp-9Ch] BYREF

  v2 = *a1;
  if ( !*(_QWORD *)(*a1 + 176) )
    return 1;
  v3 = *(_DWORD *)(*a2 + 24LL);
  if ( v3 < 0 )
    return 0;
  v4 = sub_798D40(*a2);
  v5 = *(_QWORD *)(v4 + 2152);
  if ( v3 )
  {
    v27 = sub_CAE830(*(_QWORD *)(v4 + 2152));
    if ( v27 )
    {
      if ( v27 != 3 )
        return 1;
    }
  }
  v6 = sub_633200(v5, v3);
  v7 = v6;
  if ( *(_DWORD *)(v5 + 448) == v6 )
    return 0;
  LOBYTE(v54) = 0;
  if ( (unsigned int)(v6 + 1) <= 1 )
    return 0;
  if ( v6 < 0 )
  {
    v40 = (unsigned int)(-2 - v6);
    v41 = *(_QWORD *)(*(_QWORD *)(v5 + 256) + 8LL * ((unsigned int)(-2 - v6) >> 6));
    if ( _bittest64(&v41, v40) )
    {
      v42 = (_QWORD *)(*(_QWORD *)(v5 + 208) + 8 * ((unsigned __int64)(int)v40 >> 5));
      if ( *v42 )
      {
        v8 = *v42 + 24 * (v40 & 0x1F);
        goto LABEL_8;
      }
      v50 = (__int64 *)(*(_QWORD *)(v5 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v51 = *v50;
      v50[10] += 768;
      v52 = (_DWORD *)((v51 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v50[1] >= (unsigned __int64)(v52 + 192) && v51 )
      {
        *v50 = (__int64)(v52 + 192);
        v26 = 0;
      }
      else
      {
        v52 = (_DWORD *)sub_696B80((__int64)v50, 768, 3);
        v26 = (char)v54;
      }
      *v42 = v52;
      v53 = v52 + 192;
      do
      {
        *v52 = 0;
        v52 += 6;
        *((_OWORD *)v52 - 1) = 0;
      }
      while ( v53 != v52 );
      v8 = *v42 + 24 * (v40 & 0x1F);
    }
    else
    {
      v8 = sub_CA9380(v5, (unsigned int)v40, &v54);
      v26 = (char)v54;
    }
    if ( v26 || !v8 )
      return 0;
  }
  else
  {
    v8 = *(_QWORD *)(v5 + 184) + 24LL * v6;
  }
LABEL_8:
  if ( *(char *)(v8 + 3) < 0 )
    return 0;
  v9 = *(_QWORD *)((*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  if ( !v9 )
    return 0;
  v10 = *(_QWORD *)(v2 + 176);
  v11 = sub_11A1440(*(_QWORD *)(v10 + 8), (unsigned int)v3);
  if ( !v11 )
  {
    if ( !(unsigned __int8)sub_114AF00(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 104LL)) )
    {
      v43 = (_BYTE *)sub_114AB60(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 104LL), v9);
      if ( !v43 || (*v43 & 2) == 0 )
        return 0;
    }
    v12 = (_QWORD *)v9;
    do
    {
      v13 = v12[1];
      if ( !v13 )
      {
        v12 = nullptr;
        break;
      }
      v12 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
    }
    while ( (v13 & 4) != 0 && v12 );
    while ( 1 )
    {
      v14 = *(_QWORD *)(v9 + 8);
      if ( !v14 )
        break;
      v9 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v14 & 4) == 0 || !v9 )
        goto LABEL_17;
    }
    v9 = 0;
LABEL_17:
    v15 = (__m128 *)v12[7];
    v16 = *(_QWORD *)(v9 + 40);
    v17 = v12[8];
    if ( v15 )
      goto LABEL_18;
    goto LABEL_51;
  }
  v31 = sub_633200(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL), v11);
  v32 = (_QWORD *)v9;
  v33 = HIDWORD(v31);
  v11 = HIDWORD(v31);
  if ( v7 == (_DWORD)v31 )
  {
    do
    {
      v37 = v32[1];
      if ( !v37 )
      {
        v32 = nullptr;
        break;
      }
      v32 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
    }
    while ( (v37 & 4) != 0 && v32 );
    while ( 1 )
    {
      v38 = *(_QWORD *)(v9 + 8);
      if ( !v38 )
        break;
      v9 = v38 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v38 & 4) == 0 || !v9 )
        goto LABEL_58;
    }
    v9 = 0;
LABEL_58:
    v15 = (__m128 *)v32[7];
    v16 = *(_QWORD *)(v9 + 40);
    v17 = v32[8];
    if ( !v15 && !v17 && !(_DWORD)v33 )
    {
LABEL_61:
      if ( v16 )
      {
        v11 = 0;
        v17 = 0;
        v15 = nullptr;
        goto LABEL_18;
      }
      return 0;
    }
  }
  else
  {
    if ( !(unsigned __int8)sub_114AF00(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 104LL)) )
    {
      v39 = (_BYTE *)sub_114AB60(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 104LL), v9);
      if ( !v39 || (*v39 & 2) == 0 )
        return 0;
    }
    v34 = (_QWORD *)v9;
    do
    {
      v35 = v34[1];
      if ( !v35 )
      {
        v34 = nullptr;
        break;
      }
      v34 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
    }
    while ( (v35 & 4) != 0 && v34 );
    while ( 1 )
    {
      v36 = *(_QWORD *)(v9 + 8);
      if ( !v36 )
        break;
      v9 = v36 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v36 & 4) == 0 || !v9 )
        goto LABEL_50;
    }
    v9 = 0;
LABEL_50:
    v15 = (__m128 *)v34[7];
    v16 = *(_QWORD *)(v9 + 40);
    v11 = 0;
    v17 = v34[8];
    if ( !v15 )
    {
LABEL_51:
      if ( v17 )
        goto LABEL_18;
      goto LABEL_61;
    }
  }
LABEL_18:
  if ( *(__m128 **)(v10 + 1088) == v15
    && v17 == *(_QWORD *)(v10 + 1096)
    && *(_DWORD *)(v10 + 1112) == v11
    && *(_QWORD *)(v10 + 1104) == v16 )
  {
    return *(unsigned __int8 *)(v10 + 1120);
  }
  v18 = *(_DWORD *)(v10 + 40);
  *(_QWORD *)(v10 + 1088) = v15;
  *(_QWORD *)(v10 + 1096) = v17;
  *(_QWORD *)(v10 + 1104) = v16;
  *(_DWORD *)(v10 + 1112) = v11;
  if ( v18 )
  {
    v19 = *(_QWORD *)(v10 + 24);
    v57 = v11;
    v54 = &v56;
    v58 = v16;
    v55 = 0x2000000007LL;
    v56 = _mm_shuffle_ps(
            (__m128)_mm_unpacklo_epi64((__m128i)v17, (__m128i)HIDWORD(v17)),
            (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)((unsigned __int64)v15 >> 32)),
            136);
    v20 = 1;
    v21 = v18 - 1;
    for ( i = (v18 - 1) & sub_6999F0(&v56, (__int64)v59); ; i = v21 & v23 )
    {
      v24 = v19 + 32LL * i;
      if ( *(__m128 **)v24 == v15
        && v17 == *(_QWORD *)(v24 + 8)
        && *(_DWORD *)(v24 + 24) == v11
        && *(_QWORD *)(v24 + 16) == v16 )
      {
        break;
      }
      if ( !*(_QWORD *)v24 && !*(_QWORD *)(v24 + 8) && *(_DWORD *)(v24 + 24) == -1 && !*(_QWORD *)(v24 + 16) )
        goto LABEL_39;
      v23 = v20 + i;
      ++v20;
    }
    *(_BYTE *)(v10 + 1120) = 1;
    return 1;
  }
LABEL_39:
  v28 = *(unsigned int *)(v10 + 56);
  v29 = *(_QWORD *)(v10 + 48);
  *(_BYTE *)(v10 + 1120) = 0;
  v30 = v29 + 32 * v28;
  if ( v28 < *(unsigned int *)(v10 + 60) )
  {
    *(_QWORD *)v30 = v15;
    *(_QWORD *)(v30 + 8) = v17;
    *(_QWORD *)(v30 + 16) = v16;
    *(_DWORD *)(v30 + 24) = v11;
    result = *(unsigned __int8 *)(v10 + 1120);
    ++*(_DWORD *)(v10 + 56);
    return result;
  }
  v54 = v15;
  v44 = (const __m128i *)&v54;
  v45 = v28 + 1;
  v46 = v10 + 64;
  v55 = v17;
  v47 = v10 + 48;
  v56.m128_u64[0] = v16;
  v56.m128_i32[2] = v11;
  if ( (unsigned __int64)&v54 < v29 || (unsigned __int64)&v54 >= v30 )
  {
    sub_25D6060(v47, v46, v45, 32);
    v48 = *(_QWORD *)(v10 + 48);
  }
  else
  {
    sub_25D6060(v47, v46, v45, 32);
    v48 = *(_QWORD *)(v10 + 48);
    v44 = (const __m128i *)((char *)&v54 + v48 - v29);
  }
  v49 = (__m128i *)(32LL * *(unsigned int *)(v10 + 56) + v48);
  *v49 = _mm_loadu_si128(v44);
  v49[1] = _mm_loadu_si128(v44 + 1);
  ++*(_DWORD *)(v10 + 56);
  return *(unsigned __int8 *)(v10 + 1120);
}

