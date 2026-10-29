__int64 __fastcall sub_1255BF0(__int64 a1, __int64 a2)
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
  void **v13; // rsi
  int v14; // r13d
  unsigned __int64 v15; // rax
  __m128 v16; // xmm0
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  unsigned int v22; // ebx
  _BYTE *v24; // rcx
  signed __int64 v25; // rdi
  __int64 v26; // rdx
  __m128i v27; // xmm2
  __m128i *v28; // rsi
  unsigned __int64 v29; // [rsp+0h] [rbp-D0h] BYREF
  void *v30[2]; // [rsp+8h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-B8h]
  void *v32[3]; // [rsp+28h] [rbp-A8h] BYREF
  unsigned __int64 v33; // [rsp+40h] [rbp-90h]
  __m128 v34; // [rsp+48h] [rbp-88h]
  __m128 v35; // [rsp+58h] [rbp-78h]
  void **v36; // [rsp+68h] [rbp-68h]
  void *v37; // [rsp+70h] [rbp-60h]
  _QWORD *v38; // [rsp+78h] [rbp-58h]
  _QWORD *v39; // [rsp+80h] [rbp-50h]
  __int64 v40; // [rsp+88h] [rbp-48h]
  __int64 v41; // [rsp+90h] [rbp-40h]
  int v42; // [rsp+98h] [rbp-38h]
  unsigned __int8 v43; // [rsp+9Ch] [rbp-34h]

  v4 = *(const __m128i **)(a1 + 8);
  v5 = *(const __m128i **)a1;
  *(_OWORD *)v30 = 0;
  v31 = 0;
  v6 = (char *)v4 - (char *)v5;
  v7 = 0xAAAAAAAAAAAAAAABLL * (((char *)v4 - (char *)v5) >> 3);
  if ( v7 )
  {
    if ( v7 > 0xAAAAAAAAAAAAAAALL )
      goto LABEL_29;
    v7 = operator new((char *)v4 - (char *)v5);
    v4 = *(const __m128i **)(a1 + 8);
    v5 = *(const __m128i **)a1;
  }
  v29 = v7;
  v8 = _mm_loadl_epi64((const __m128i *)&v29);
  v31 = v7 + v6;
  *(__m128i *)v30 = _mm_unpacklo_epi64(v8, v8);
  if ( v5 != v4 )
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
  v30[1] = (void *)v7;
  v12 = *(_QWORD *)(a1 + 48);
  v13 = v30;
  v14 = *(_DWORD *)(a1 + 112);
  memset(v32, 0, sizeof(v32));
  v15 = *(_QWORD *)(v12 + 16);
  v16 = _mm_loadh_ps((const double *)(a1 + 40));
  v36 = v30;
  v29 = v15;
  v17 = *(_QWORD *)(v15 + 64);
  v34 = v16;
  v33 = 0;
  v35 = _mm_loadh_ps((const double *)&v29);
  v18 = v17 - *(_QWORD *)(v15 + 56);
  v37 = nullptr;
  v38 = nullptr;
  v19 = 0xAAAAAAAAAAAAAAABLL * (v18 >> 4);
  v39 = nullptr;
  if ( !v19 )
  {
    v21 = nullptr;
    goto LABEL_13;
  }
  if ( v19 > 0xFFFFFFFFFFFFFFFLL )
LABEL_29:
    std::__throw_bad_alloc();
  v20 = (_QWORD *)operator new(16 * v19);
  v21 = &v20[2 * v19];
  v37 = v20;
  v39 = v21;
  do
  {
    *v20 = 0;
    v20 += 2;
    *((_DWORD *)v20 - 2) = 0;
    --v19;
  }
  while ( v19 );
  v13 = v36;
LABEL_13:
  v38 = v21;
  v40 = a2;
  if ( (v14 & 0x80u) != 0 )
    v14 &= 0xFFFFFFFA;
  v43 = 0;
  v41 = 0;
  v42 = v14;
  v33 = v34.m128_u64[0];
  sub_1250570((const __m128i **)v32, (const __m128i **)v13);
  sub_12550F0((__int64)v32, 1, v40);
  v22 = v43;
  if ( v43 )
  {
    v24 = v30[0];
    v25 = (char *)v30[1] - (char *)v30[0];
    v26 = 0;
    if ( 0xAAAAAAAAAAAAAAABLL * (((char *)v30[1] - (char *)v30[0]) >> 3) )
    {
      do
      {
        if ( v24[v26 + 16] )
        {
          v27 = _mm_loadu_si128((const __m128i *)&v24[v26]);
          v28 = (__m128i *)(v26 + *(_QWORD *)a1);
          v28[1].m128i_i8[0] = 1;
          *v28 = v27;
        }
        v26 += 24;
      }
      while ( v26 != v25 );
    }
  }
  if ( v37 )
    operator delete(v37);
  if ( v32[0] )
    operator delete(v32[0]);
  if ( v30[0] )
    operator delete(v30[0]);
  return v22;
}
