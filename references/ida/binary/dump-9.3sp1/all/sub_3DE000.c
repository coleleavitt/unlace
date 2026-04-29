unsigned __int64 __fastcall sub_3DE000(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // r15
  __int64 v9; // rax
  __int64 *v10; // rsi
  __m128i v11; // xmm0
  __int64 v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __m128i *v21; // rax
  char v23; // dl
  unsigned __int64 v24; // rax
  char v25; // dl
  unsigned __int64 v26; // rcx
  _BYTE *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbp
  const __m128i *v31; // rdi
  __int64 v32; // rdx
  __m128i v33; // xmm0
  bool v34; // cf
  __int64 v35; // rdx
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r14
  const __m128i *v41; // rdi
  __int64 v42; // rdx
  __m128i v43; // xmm0
  _QWORD *exception; // rdi
  __int64 v45; // [rsp+8h] [rbp-70h]
  const __m128i *v46; // [rsp+18h] [rbp-60h] BYREF
  __m128i v47; // [rsp+20h] [rbp-58h] BYREF
  __int64 v48; // [rsp+30h] [rbp-48h]
  unsigned __int64 v49; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 104);
  v49 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v4 + 144);
  if ( a3 == -1 )
    v7 = -1;
  else
    v7 = a3 & 7 | (unsigned __int64)(8 * v6);
  v8 = *(unsigned __int64 **)(a1 + 88);
  v47.m128i_i64[0] = a2;
  v47.m128i_i64[1] = v7;
  v46 = &v47;
  if ( !v8 )
  {
    v36 = qalloc();
    v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v36, (__m128i)(unsigned __int64)v36);
    if ( !v36 )
      goto LABEL_43;
    *(_QWORD *)(v36 + 32) = 0;
    *(_OWORD *)(v36 + 16) = 0;
    *(__m128i *)(v36 + 8) = v37;
    *(_QWORD *)v36 = v36 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 88) = v36;
    *(_QWORD *)v36 = v36 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v36 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 88) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 88),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 88));
    **(_QWORD **)(a1 + 88) &= ~1uLL;
    **(_QWORD **)(a1 + 88) |= 2uLL;
    v8 = *(unsigned __int64 **)(a1 + 88);
LABEL_5:
    v9 = qalloc();
    v10 = (__int64 *)v9;
    if ( v9 )
    {
      *(_QWORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 16) = 0;
      *(_OWORD *)v9 = 0;
      *(__m128i *)(v9 + 24) = _mm_load_si128(&v47);
      *(_QWORD *)v9 = (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFCLL;
      v11 = _mm_loadl_epi64((const __m128i *)(a1 + 88));
      *(_QWORD *)v9 = (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v11, v11);
      if ( *(unsigned __int64 **)(a1 + 88) == v8 )
      {
        *v8 = v9 & 0xFFFFFFFFFFFFFFFCLL | *v8 & 3;
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL) = v9;
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) = v9;
        v35 = *(_QWORD *)v9 & 2LL;
        *(_QWORD *)v9 &= ~1uLL;
        *(_QWORD *)v9 = v35 | *(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        v8[1] = v9;
        v12 = *(_QWORD *)(a1 + 88);
        if ( *(unsigned __int64 **)(v12 + 8) == v8 )
          *(_QWORD *)(v12 + 8) = v10;
        sub_3DDBF0((_QWORD *)(a1 + 88), v10);
      }
      ++*(_QWORD *)(a1 + 96);
LABEL_11:
      v13 = *(_QWORD **)(a1 + 104);
      v14 = *(_QWORD *)(a1 + 112);
      v47.m128i_i64[0] = a2;
      LODWORD(v48) = a3;
      v47.m128i_i64[1] = v14;
      v15 = v13[18];
      v16 = (__int64)(v13 + 17);
      v17 = v13[17];
      v18 = v13[19];
      v19 = v15 + 1;
      if ( (unsigned __int64)&v47 < v17 || (unsigned __int64)&v47 >= v17 + 24 * v18 )
      {
        if ( v18 < v19 )
        {
          v28 = qvector_reserve(v16, 0, v19, 24);
          v29 = v13[18];
          v30 = v13[19];
          v13[19] = v18;
          v31 = (const __m128i *)v13[17];
          v17 = v28;
          v32 = v29 - 1;
          if ( v32 >= 0 )
          {
            do
            {
              v33 = _mm_loadu_si128(v31);
              v28 += 24;
              v31 = (const __m128i *)((char *)v31 + 24);
              *(__m128i *)(v28 - 24) = v33;
              *(_QWORD *)(v28 - 8) = v31[-1].m128i_i64[1];
              v34 = v32-- == 0;
            }
            while ( !v34 );
            v31 = (const __m128i *)v13[17];
          }
          qfree((__int64)v31);
          v13[17] = v17;
          v15 = v13[18];
          v13[19] = v30;
        }
        v21 = (__m128i *)(v17 + 24 * v15);
        *v21 = _mm_load_si128(&v47);
        v21[1].m128i_i64[0] = v48;
      }
      else
      {
        if ( v18 < v19 )
        {
          v45 = v14;
          v38 = qvector_reserve(v16, 0, v19, 24);
          v39 = v13[18];
          v40 = v13[19];
          v41 = (const __m128i *)v13[17];
          v17 = v38;
          v13[19] = v18;
          v42 = v39 - 1;
          if ( v42 >= 0 )
          {
            do
            {
              v43 = _mm_loadu_si128(v41);
              v38 += 24;
              v41 = (const __m128i *)((char *)v41 + 24);
              *(__m128i *)(v38 - 24) = v43;
              *(_QWORD *)(v38 - 8) = v41[-1].m128i_i64[1];
              v34 = v42-- == 0;
            }
            while ( !v34 );
            v41 = (const __m128i *)v13[17];
          }
          qfree((__int64)v41);
          v13[17] = v17;
          v14 = v45;
          v13[19] = v40;
          v15 = v13[18];
        }
        v20 = v17 + 24 * v15;
        *(_QWORD *)v20 = a2;
        *(_QWORD *)(v20 + 8) = v14;
        *(_DWORD *)(v20 + 16) = a3;
      }
      ++v13[18];
      return v49 - __readfsqword(0x28u);
    }
LABEL_43:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_5;
  v23 = 1;
  v24 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v24 & 2) != 0 )
  {
LABEL_20:
    sub_3DDEC0((__m128i *)(a1 + 88), v8, v23, &v46);
    if ( !v25 )
      return v49 - __readfsqword(0x28u);
    goto LABEL_11;
  }
  while ( 1 )
  {
    v26 = *(_QWORD *)(v24 + 24);
    if ( a2 < v26 )
    {
      v27 = *(_BYTE **)(v24 + 8);
      v23 = 1;
      goto LABEL_25;
    }
    if ( v26 >= a2 )
      break;
    v27 = *(_BYTE **)(v24 + 16);
    v23 = 0;
LABEL_25:
    if ( (*v27 & 2) != 0 )
      goto LABEL_26;
    v24 = (unsigned __int64)v27;
  }
  if ( !v24 )
  {
LABEL_26:
    v8 = (unsigned __int64 *)v24;
    goto LABEL_20;
  }
  return v49 - __readfsqword(0x28u);
}
