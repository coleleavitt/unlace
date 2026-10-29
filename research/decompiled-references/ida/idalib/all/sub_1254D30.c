__int64 __fastcall sub_1254D30(__int64 a1, __int64 a2)
{
  const __m128i *v4; // rsi
  const __m128i *v5; // r8
  signed __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  const __m128i *v9; // rdx
  unsigned __int64 v10; // rcx
  __m128i v11; // xmm1
  __int64 v12; // rax
  int v13; // r13d
  unsigned __int64 v14; // rax
  __m128 v15; // xmm0
  __int64 v16; // rbx
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  void *v23; // rcx
  unsigned int v24; // r13d
  _QWORD *v25; // rbp
  _QWORD *v26; // rbx
  void *v27; // rdi
  _BYTE *v29; // rdx
  signed __int64 v30; // rsi
  __int64 v31; // rax
  __m128i v32; // xmm2
  __m128i *v33; // rcx
  unsigned __int64 v34; // [rsp+0h] [rbp-E0h] BYREF
  void *v35[2]; // [rsp+8h] [rbp-D8h] BYREF
  unsigned __int64 v36; // [rsp+18h] [rbp-C8h]
  void *v37[3]; // [rsp+28h] [rbp-B8h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-A0h]
  __m128 v39; // [rsp+48h] [rbp-98h]
  __m128 v40; // [rsp+58h] [rbp-88h]
  void **v41; // [rsp+68h] [rbp-78h]
  void *v42; // [rsp+70h] [rbp-70h]
  _QWORD *v43; // [rsp+78h] [rbp-68h]
  _QWORD *v44; // [rsp+80h] [rbp-60h]
  void *v45[2]; // [rsp+88h] [rbp-58h]
  __int64 v46; // [rsp+98h] [rbp-48h]
  void *v47; // [rsp+A0h] [rbp-40h]
  __int64 v48; // [rsp+A8h] [rbp-38h]
  int v49; // [rsp+B0h] [rbp-30h]

  v4 = *(const __m128i **)(a1 + 8);
  v5 = *(const __m128i **)a1;
  *(_OWORD *)v35 = 0;
  v36 = 0;
  v6 = (char *)v4 - (char *)v5;
  v7 = 0xAAAAAAAAAAAAAAABLL * (((char *)v4 - (char *)v5) >> 3);
  if ( v7 )
  {
    if ( v7 > 0xAAAAAAAAAAAAAAALL )
      goto LABEL_40;
    v7 = operator new((char *)v4 - (char *)v5);
    v4 = *(const __m128i **)(a1 + 8);
    v5 = *(const __m128i **)a1;
  }
  v34 = v7;
  v8 = _mm_loadl_epi64((const __m128i *)&v34);
  v36 = v7 + v6;
  *(__m128i *)v35 = _mm_unpacklo_epi64(v8, v8);
  if ( v4 != v5 )
  {
    v9 = v5;
    v10 = v7;
    do
    {
      v11 = _mm_loadu_si128(v9);
      v9 = (const __m128i *)((char *)v9 + 24);
      v10 += 24LL;
      *(__m128i *)(v10 - 24) = v11;
      *(_QWORD *)(v10 - 8) = v9[-1].m128i_i64[1];
    }
    while ( v4 != v9 );
    v7 += 8 * ((unsigned __int64)((char *)&v4[-2].m128i_u64[1] - (char *)v5) >> 3) + 24;
  }
  v35[1] = (void *)v7;
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_DWORD *)(a1 + 136);
  memset(v37, 0, sizeof(v37));
  v14 = *(_QWORD *)(v12 + 16);
  v15 = _mm_loadh_ps((const double *)(a1 + 40));
  v41 = v35;
  v34 = v14;
  v16 = *(_QWORD *)(v14 + 64);
  v39 = v15;
  v38 = 0;
  v40 = _mm_loadh_ps((const double *)&v34);
  v17 = v16 - *(_QWORD *)(v14 + 56);
  v42 = nullptr;
  v43 = nullptr;
  v18 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 4);
  v44 = nullptr;
  if ( !v18 )
  {
    v46 = 0;
    *(_OWORD *)v45 = 0;
    v23 = (void *)operator new[](0);
    goto LABEL_14;
  }
  if ( v18 > 0xFFFFFFFFFFFFFFFLL )
LABEL_40:
    std::__throw_bad_alloc();
  v19 = (_QWORD *)operator new(16 * v18);
  v20 = &v19[2 * v18];
  v42 = v19;
  v44 = v20;
  do
  {
    *v19 = 0;
    v19 += 2;
    *((_DWORD *)v19 - 2) = 0;
    --v18;
  }
  while ( v18 );
  v21 = *(_QWORD *)(v40.m128_u64[1] + 64) - *(_QWORD *)(v40.m128_u64[1] + 56);
  v43 = v20;
  *(_OWORD *)v45 = 0;
  v46 = 0;
  v22 = 0xAAAAAAAAAAAAAAABLL * (v21 >> 4);
  v23 = (void *)operator new[](v22);
  if ( (__int64)(v22 - 1) >= 0 )
    v23 = memset(v23, 0, v22);
LABEL_14:
  v47 = v23;
  v48 = a2;
  if ( (v13 & 0x80u) != 0 )
    v13 &= 0xFFFFFFFA;
  v49 = v13;
  v38 = v39.m128_u64[0];
  v24 = sub_1254A00((__int64)v37, 1u);
  if ( (_BYTE)v24 )
  {
    v29 = v35[0];
    v30 = (char *)v35[1] - (char *)v35[0];
    v31 = 0;
    if ( 0xAAAAAAAAAAAAAAABLL * (((char *)v35[1] - (char *)v35[0]) >> 3) )
    {
      do
      {
        if ( v29[v31 + 16] )
        {
          v32 = _mm_loadu_si128((const __m128i *)&v29[v31]);
          v33 = (__m128i *)(v31 + *(_QWORD *)a1);
          v33[1].m128i_i8[0] = 1;
          *v33 = v32;
        }
        v31 += 24;
      }
      while ( v31 != v30 );
    }
  }
  if ( v47 )
    operator delete[](v47);
  v25 = v45[1];
  v26 = v45[0];
  if ( v45[1] != v45[0] )
  {
    do
    {
      while ( 1 )
      {
        v27 = (void *)v26[1];
        if ( !v27 )
          break;
        operator delete(v27);
        v26 += 4;
        if ( v26 == v25 )
          goto LABEL_22;
      }
      v26 += 4;
    }
    while ( v25 != v26 );
LABEL_22:
    v26 = v45[0];
  }
  if ( v26 )
    operator delete(v26);
  if ( v42 )
    operator delete(v42);
  if ( v37[0] )
    operator delete(v37[0]);
  if ( v35[0] )
    operator delete(v35[0]);
  return v24;
}
