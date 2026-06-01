__int64 __fastcall sub_8BA180(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // r14
  char v19; // al
  __int64 *v20; // rdi
  unsigned __int64 i; // rbp
  __int64 v22; // rsi
  __int64 v23; // rdx
  const __m128i *v24; // rbx
  const __m128i *v25; // r14
  __m128i v26; // xmm1
  __m128i *v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rax
  __m128 v30; // xmm0
  __int64 *v31; // rax
  __int64 *v32; // rdx
  __int64 v33; // rax
  unsigned int v34; // eax
  char v35; // al
  __int64 v36; // r14
  __m128i *v37; // rax
  __int64 *v38; // rdx
  __int64 v39; // rax
  __m128 si128; // xmm0
  __int64 *v41; // rax
  __int64 *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v46; // [rsp+Ch] [rbp-5Ch]
  __m128 v47; // [rsp+10h] [rbp-58h] BYREF
  __int64 **v48; // [rsp+20h] [rbp-48h]
  __int64 v49; // [rsp+28h] [rbp-40h]

  v9 = *(_DWORD *)(a3 + 12);
  v49 = a3;
  if ( v9 <= 0x7F || (v10 = v9 & (v9 - 1)) != 0 )
    sub_378C70((__int64)"!!!VARRAY CORRUPTED: bad page size in the header\n");
  if ( (unsigned int)sub_8B8920((__int64)a1, a2, a4, v9, a5) )
    return 0xFFFFFFFFLL;
  v13 = v49;
  v14 = *(unsigned int *)(v49 + 16);
  *((_DWORD *)a1 + 10) = v14;
  v15 = *(unsigned int *)(v13 + 8);
  v46 = v14;
  v16 = **a1;
  if ( *(_DWORD *)(v13 + 8) )
  {
    v17 = **a1;
    v18 = 20;
    v48 = a1 + 2;
    v19 = is_cvt64(v14, a2, v12);
    v20 = *a1;
    if ( v19 )
      goto LABEL_21;
LABEL_6:
    for ( i = (unsigned __int64)(v17 - v18) >> 4; ; i = (unsigned __int64)(*v20 - v18) >> 3 )
    {
      v22 = v10;
      if ( i > v15 )
        i = v15;
      v24 = (const __m128i *)(v18 + sub_8BCA60(v20, v10, 1));
      if ( (unsigned __int8)is_cvt64(v20, v22, v23) )
        break;
      if ( !i )
        goto LABEL_31;
      v36 = 0;
      do
      {
        si128 = (__m128)_mm_loadu_si128(v24);
        a9 = _mm_movehl_ps(a9, si128);
        if ( si128.m128_u64[0] >= a9.m128_u64[0] )
          goto LABEL_32;
        v41 = a1[3];
        v22 = (__int64)a1[2];
        if ( v41 && *(_QWORD *)(v22 + 24LL * (_QWORD)v41 - 16) >= si128.m128_u64[0] )
LABEL_33:
          sub_378C70((__int64)"!!!VARRAY CORRUPTED: bad chunk order (prev end >= next start)\n");
        v42 = (__int64 *)((char *)v41 + 1);
        if ( a1[4] < (__int64 *)((char *)v41 + 1) )
        {
          v20 = (__int64 *)v48;
          v47 = si128;
          v43 = qvector_reserve(v48, v22, v42, 24);
          si128 = (__m128)_mm_load_si128((const __m128i *)&v47);
          a1[2] = (__int64 *)v43;
          v22 = v43;
          v41 = a1[3];
          v42 = (__int64 *)((char *)v41 + 1);
        }
        a1[3] = v42;
        ++v36;
        ++v24;
        v37 = (__m128i *)(v22 + 24LL * (_QWORD)v41);
        v37[1].m128i_i64[0] = v16;
        *v37 = (__m128i)si128;
        v38 = &a1[2][3 * (_QWORD)a1[3] - 3];
        v39 = v38[1] - *v38;
        v12 = v38[2];
        v16 = v12 + 4 * v39;
      }
      while ( i != v36 );
LABEL_19:
      v34 = v46 + 1;
      v15 -= i;
      if ( !v15 )
        goto LABEL_30;
LABEL_20:
      v10 = v46;
      v46 = v34;
      v18 = 0;
      v17 = **a1;
      v35 = is_cvt64(v20, v22, *a1);
      v20 = *a1;
      if ( !v35 )
        goto LABEL_6;
LABEL_21:
      ;
    }
    if ( i )
    {
      v25 = (const __m128i *)((char *)v24 + 8 * i);
      v26 = 0;
      while ( 1 )
      {
        v30 = (__m128)_mm_unpacklo_epi32(_mm_loadl_epi64(v24), v26);
        a8 = _mm_movehl_ps(a8, v30);
        if ( v30.m128_u64[0] >= a8.m128_u64[0] )
          break;
        v31 = a1[3];
        v22 = (__int64)a1[2];
        if ( v31 && *(_QWORD *)(v22 + 24LL * (_QWORD)v31 - 16) >= v30.m128_u64[0] )
          goto LABEL_33;
        v32 = (__int64 *)((char *)v31 + 1);
        if ( a1[4] < (__int64 *)((char *)v31 + 1) )
        {
          v20 = (__int64 *)v48;
          v47 = v30;
          v33 = qvector_reserve(v48, v22, v32, 24);
          v30 = (__m128)_mm_load_si128((const __m128i *)&v47);
          v26 = 0;
          a1[2] = (__int64 *)v33;
          v22 = v33;
          v31 = a1[3];
          v32 = (__int64 *)((char *)v31 + 1);
        }
        a1[3] = v32;
        v24 = (const __m128i *)((char *)v24 + 8);
        v27 = (__m128i *)(v22 + 24LL * (_QWORD)v31);
        v27[1].m128i_i64[0] = v16;
        *v27 = (__m128i)v30;
        v28 = &a1[2][3 * (_QWORD)a1[3] - 3];
        v29 = v28[1] - *v28;
        v12 = v28[2];
        v16 = v12 + 4 * v29;
        if ( v24 == v25 )
          goto LABEL_19;
      }
LABEL_32:
      sub_378C70((__int64)"!!!VARRAY CORRUPTED: bad VA chunk (end < start)\n");
    }
LABEL_31:
    v34 = v46 + 1;
    goto LABEL_20;
  }
LABEL_30:
  v44 = v49;
  *((_BYTE *)a1 + 100) = a1[3] != nullptr;
  return sub_8BA030(a1, *(unsigned __int16 *)(v44 + 4), v12);
}
