__int64 __fastcall sub_1405000(
        const __m128i *a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __m128i a7,
        unsigned int a8)
{
  __int64 v9; // r13
  __int64 *v10; // r12
  unsigned __int64 v11; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 *v18; // rsi
  __int64 v19; // r9
  unsigned __int64 v20; // r15
  _QWORD *v21; // rdx
  unsigned int v22; // r15d
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // rax
  __int64 v36; // rbp
  unsigned __int8 v37; // dl
  __int64 j; // r12
  __int64 v39; // rdi
  __int64 v40; // rsi
  void (*v41)(); // rax
  __int64 v42; // rax
  unsigned int v43; // esi
  __int64 v44; // rcx
  unsigned int v45; // eax
  int v46; // esi
  int v47; // r9d
  __int64 v48; // r10
  unsigned __int64 v49; // rsi
  __int64 v50; // rax
  int v51; // eax
  bool v52; // zf
  unsigned __int64 v53; // rsi
  __int64 i; // rax
  unsigned __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // r11d
  __int32 v62; // eax
  int v64; // [rsp+8h] [rbp-120h]
  __m128i v68[2]; // [rsp+20h] [rbp-108h] BYREF
  char v69; // [rsp+40h] [rbp-E8h]
  __int64 v70[2]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v71; // [rsp+60h] [rbp-C8h]
  unsigned __int8 *v72; // [rsp+68h] [rbp-C0h] BYREF
  unsigned __int8 v73; // [rsp+80h] [rbp-A8h]
  __m128 v74; // [rsp+90h] [rbp-98h] BYREF
  const __m128i *v75; // [rsp+A0h] [rbp-88h]
  int v76; // [rsp+A8h] [rbp-80h]
  int v77; // [rsp+ACh] [rbp-7Ch]
  __int64 v78; // [rsp+B0h] [rbp-78h]
  unsigned __int8 v79; // [rsp+B8h] [rbp-70h]
  char v80; // [rsp+B9h] [rbp-6Fh]
  __int64 v81; // [rsp+C0h] [rbp-68h]
  void *ptr; // [rsp+C8h] [rbp-60h]
  __int64 v83; // [rsp+D0h] [rbp-58h]
  int v84; // [rsp+D8h] [rbp-50h]
  char v85; // [rsp+DCh] [rbp-4Ch]
  __int64 v86; // [rsp+E0h] [rbp-48h] BYREF

  v9 = a2;
  v10 = &a1[35].m128i_i64[1];
  v11 = a2;
  v64 = a5;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    if ( !v13 )
      break;
    v13 &= 0xFFFFFFFFFFFFFFF8LL;
    v14 = *(_QWORD *)(v11 + 8) & 4LL;
    v11 = v13;
    if ( !v14 || !v13 )
      goto LABEL_5;
  }
  v11 = 0;
LABEL_5:
  v15 = a1[36].m128i_u32[2];
  v16 = a1[35].m128i_i64[1];
  if ( (_DWORD)v15 )
  {
    v17 = (v15 - 1) & (((unsigned int)v13 >> 4) ^ ((unsigned int)v13 >> 9));
    v18 = (__int64 *)(v16 + 16LL * v17);
    v19 = *v18;
    if ( *v18 == v11 )
    {
LABEL_7:
      sub_13C5300(&v74, v18, (_QWORD *)(16 * v15 + v16), (__int64)v10, 1);
      v20 = v74.m128_u64[0];
      goto LABEL_8;
    }
    v46 = 1;
    if ( v19 != -4096 )
    {
      do
      {
        v47 = v46 + 1;
        v17 = (v15 - 1) & (v46 + v17);
        v18 = (__int64 *)(v16 + 16LL * v17);
        v48 = *v18;
        if ( *v18 == v11 )
          goto LABEL_7;
        v46 = v47;
      }
      while ( v48 != -4096 );
    }
  }
  sub_13C5300(
    &v74,
    (_QWORD *)(v16 + 16LL * (unsigned int)v15),
    (_QWORD *)(v16 + 16LL * (unsigned int)v15),
    (__int64)v10,
    1);
  v20 = v74.m128_u64[0];
LABEL_8:
  v21 = (_QWORD *)(a1[35].m128i_i64[1] + 16LL * a1[36].m128i_u32[2]);
  sub_13C5300(&v74, v21, v21, (__int64)v10, 1);
  if ( v20 != v74.m128_u64[0] )
    return *(unsigned __int8 *)(v20 + 8);
  v24 = a1->m128i_i64[0];
  if ( !a5 )
  {
    v49 = a2;
    while ( 1 )
    {
      v50 = *(_QWORD *)(v49 + 8);
      if ( !v50 )
        break;
      v49 = v50 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v50 & 4) == 0 || !v49 )
        goto LABEL_43;
    }
    v49 = 0;
LABEL_43:
    v64 = sub_10210B0(a1->m128i_i64[0], v49);
    if ( v64 <= 0 )
      v64 = sub_1026F70(a1->m128i_i64[0], a2, a8, (unsigned int)(a3 != 0) + 3, 0, 0, a7);
    v24 = a1->m128i_i64[0];
  }
  v25 = sub_101FFD0(v24, v64);
  if ( !v25
    || (sub_101D9A0(
          v68,
          (__int64 *)(*(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFF8LL),
          *(_QWORD *)(v24 + 8),
          *(_QWORD *)(v24 + 16),
          0),
        !v69) )
  {
    while ( 1 )
    {
      v42 = *(_QWORD *)(v9 + 8);
      if ( !v42 )
        break;
      v42 &= 0xFFFFFFFFFFFFFFF8LL;
      v26 = *(_QWORD *)(v9 + 8) & 4LL;
      v9 = v42;
      if ( !v26 || !v42 )
        goto LABEL_30;
    }
    v9 = 0;
LABEL_30:
    v43 = a1[36].m128i_u32[2];
    v70[0] = v9;
    if ( v43 )
    {
      v44 = a1[35].m128i_i64[1];
      v45 = (v43 - 1) & (((unsigned int)v42 >> 4) ^ ((unsigned int)v42 >> 9));
      v26 = v44 + 16LL * v45;
      v28 = *(_QWORD *)v26;
      if ( *(_QWORD *)v26 == v9 )
      {
LABEL_32:
        *(_BYTE *)(v26 + 8) = 1;
        return 1;
      }
      v61 = 1;
      v29 = 0;
      if ( v28 != -4096 )
      {
        while ( 1 )
        {
          if ( v28 == -8192 && !v29 )
            v29 = v26;
          v45 = (v43 - 1) & (v61 + v45);
          v26 = v44 + 16LL * v45;
          v28 = *(_QWORD *)v26;
          if ( *(_QWORD *)v26 == v9 )
            goto LABEL_32;
          if ( v28 == -4096 )
          {
            if ( v29 )
              v26 = v29;
            break;
          }
          ++v61;
        }
      }
      v62 = a1[36].m128i_i32[0];
      v27 = 3 * v43;
      v74.m128_u64[0] = v26;
      v51 = v62 + 1;
      if ( 4 * v51 < (unsigned int)v27 )
      {
        v27 = v43 - a1[36].m128i_i32[1] - v51;
        if ( (unsigned int)v27 > v43 >> 3 )
          goto LABEL_50;
        goto LABEL_49;
      }
    }
    else
    {
      v74.m128_u64[0] = 0;
    }
    v43 *= 2;
LABEL_49:
    sub_13C70D0(v10, v43, v26, v27, v28, v29);
    sub_13C2B30(v10, v70, &v74);
    v9 = v70[0];
    v26 = v74.m128_u64[0];
    v51 = a1[36].m128i_i32[0] + 1;
LABEL_50:
    v52 = *(_QWORD *)v26 == -4096;
    a1[36].m128i_i32[0] = v51;
    if ( !v52 )
      --a1[36].m128i_i32[1];
    *(_QWORD *)v26 = v9;
    *(_BYTE *)(v26 + 8) = 0;
    goto LABEL_32;
  }
  sub_1415BD0((unsigned int)v70, v64, a4, a1->m128i_i64[0], a1->m128i_i64[1], a3, a6);
  v22 = v73;
  if ( v73 )
  {
    sub_FC70B0((__int64)&v74, a1->m128i_i64[1], 0, 1299);
    v53 = a2;
    for ( i = *(_QWORD *)(a2 + 8); i; i = *(_QWORD *)(v55 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v55 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v55 )
        break;
      v53 = v55;
    }
    sub_AEC220((unsigned __int8 **)&v74, (_BYTE *)(v53 + 32), *(_QWORD *)v53);
    sub_AEA040((__int64)&v74);
    v56 = _mm_loadu_si128(a1);
    v75 = a1;
    v76 = v64;
    v74 = (__m128)v56;
    v78 = a4;
    v77 = 0;
    v79 = a3;
    v80 = 0;
    v81 = 0;
    ptr = &v86;
    v83 = 2;
    v84 = 0;
    v85 = 1;
    v22 = sub_13F4000((__int64)&v74, (__int64)v70, v57, v58, v59, v60);
    if ( !v85 )
      free(ptr);
  }
  v33 = a2;
  while ( 1 )
  {
    v34 = *(_QWORD *)(v33 + 8);
    if ( !v34 )
      break;
    v33 = v34 & 0xFFFFFFFFFFFFFFF8LL;
    v34 &= 4u;
    if ( !(_DWORD)v34 || !v33 )
      goto LABEL_20;
  }
  v33 = 0;
LABEL_20:
  v74.m128_u64[0] = v33;
  v35 = sub_13C72E0((__int64)v10, (__int64 *)&v74, v34, v30, v31, v32);
  v36 = a1[2].m128i_i64[1];
  *(_BYTE *)v35 = v22;
  v37 = v73;
  for ( j = v36 + 8LL * a1[3].m128i_u32[0]; j != v36; v37 = v73 )
  {
    while ( 1 )
    {
      v39 = *(_QWORD *)v36;
      v40 = 0;
      v41 = *(void (**)())(**(_QWORD **)v36 + 24LL);
      if ( v37 )
        v40 = v71;
      if ( v41 != nullsub_657 )
        break;
      v36 += 8;
      if ( j == v36 )
        goto LABEL_25;
    }
    v36 += 8;
    ((void (__fastcall *)(__int64, __int64, unsigned __int64, _QWORD))v41)(v39, v40, a2, a3);
  }
LABEL_25:
  if ( v37 )
    sub_13F7C70(&v72);
  return v22;
}
