_QWORD *__fastcall sub_42C880(
        _QWORD *a1,
        char *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rbp
  __m128i *v11; // r13
  __m128i *v12; // r15
  char *v13; // rdx
  __int64 v14; // rax
  char *v15; // r12
  char *v16; // rbx
  char *v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  char *v24; // rax
  char *v25; // rbp
  unsigned __int64 v26; // rbx
  char *v27; // rcx
  char *v28; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  bool v32; // cf
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r12
  __int64 *v35; // rax
  __int64 v36; // rdx
  const __m128i *v37; // rax
  unsigned __int64 v38; // r13
  __m128i *v39; // rbx
  __int64 v40; // rdi
  __m128i *v41; // [rsp+8h] [rbp-70h]
  __int64 v43; // [rsp+18h] [rbp-60h]

  if ( a3 == a2 )
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return a1;
  }
  v10 = (__int64)a2;
  v11 = nullptr;
  v12 = nullptr;
  v41 = nullptr;
  do
  {
    v13 = &a3[-v10];
    v14 = (__int64)&a3[-v10] >> 2;
    if ( v14 > 0 )
    {
      v15 = (char *)(v10 + 4 * v14);
      v16 = (char *)v10;
      while ( !sub_424BA0(*v16) )
      {
        if ( sub_424BA0(v16[1]) )
        {
          ++v16;
          goto LABEL_10;
        }
        if ( sub_424BA0(v16[2]) )
        {
          v16 += 2;
          goto LABEL_10;
        }
        if ( sub_424BA0(v16[3]) )
        {
          v16 += 3;
          goto LABEL_10;
        }
        v16 += 4;
        if ( v16 == v15 )
        {
          v13 = (char *)(a3 - v16);
          goto LABEL_28;
        }
      }
      goto LABEL_10;
    }
    v16 = (char *)v10;
LABEL_28:
    if ( v13 == (_BYTE *)&dword_0 + 2 )
      goto LABEL_37;
    if ( v13 == (_BYTE *)&dword_0 + 3 )
    {
      if ( sub_424BA0(*v16) )
        goto LABEL_10;
      ++v16;
LABEL_37:
      if ( sub_424BA0(*v16) )
        goto LABEL_10;
      ++v16;
      goto LABEL_39;
    }
    if ( v13 != (_BYTE *)&dword_0 + 1 )
    {
      if ( a3 == (char *)v10 )
        break;
LABEL_32:
      if ( v41 != v11 )
      {
        v11->m128i_i64[1] = (__int64)a3;
        v11 = (__m128i *)((char *)v11 + 24);
        v11[-2].m128i_i64[1] = v10;
        v11[-1].m128i_i64[1] = (__int64)&a3[-v10];
        if ( v12 != v11 )
          goto LABEL_16;
LABEL_34:
        v25 = nullptr;
        v27 = nullptr;
        v28 = nullptr;
        v26 = (char *)v41 - (char *)v12;
        goto LABEL_21;
      }
      v16 = a3;
      goto LABEL_43;
    }
LABEL_39:
    if ( !sub_424BA0(*v16) )
    {
      if ( a3 == (char *)v10 )
        break;
      goto LABEL_32;
    }
LABEL_10:
    if ( v16 == (char *)v10 )
      goto LABEL_13;
    if ( v41 != v11 )
    {
      v11->m128i_i64[0] = v10;
      v11 = (__m128i *)((char *)v11 + 24);
      v11[-1].m128i_i64[0] = (__int64)v16;
      v17 = &v16[-v10];
      v10 = (__int64)v16;
      v11[-1].m128i_i64[1] = (__int64)v17;
      goto LABEL_13;
    }
LABEL_43:
    v30 = 0xAAAAAAAAAAAAAAABLL * (((char *)v11 - (char *)v12) >> 3);
    if ( v30 == 0x555555555555555LL )
      std::__throw_length_error("vector::_M_realloc_append");
    v31 = 1;
    if ( v30 )
      v31 = 0xAAAAAAAAAAAAAAABLL * (((char *)v11 - (char *)v12) >> 3);
    v32 = __CFADD__(v31, v30);
    v33 = v31 - 0x5555555555555555LL * (((char *)v11 - (char *)v12) >> 3);
    if ( v32 )
    {
      v34 = 0x7FFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( v33 > 0x555555555555555LL )
        v33 = 0x555555555555555LL;
      v34 = 24 * v33;
    }
    a5 = operator new(v34);
    v35 = (__int64 *)(a5 + (char *)v11 - (char *)v12);
    *v35 = v10;
    v35[1] = (__int64)v16;
    v35[2] = (__int64)&v16[-v10];
    if ( v12 == v11 )
    {
      v38 = a5;
    }
    else
    {
      v36 = a5;
      v37 = v12;
      do
      {
        a7 = (__m128)_mm_loadu_si128(v37);
        a4 = v37[1].m128i_i64[0];
        v37 = (const __m128i *)((char *)v37 + 24);
        v36 += 24;
        *(__m128 *)(v36 - 24) = a7;
        *(_QWORD *)(v36 - 8) = a4;
      }
      while ( v37 != v11 );
      v38 = a5 + 8 * ((unsigned __int64)((char *)&v37[-2].m128i_u64[1] - (char *)v12) >> 3) + 24;
    }
    v11 = (__m128i *)(v38 + 24);
    if ( v12 )
    {
      v43 = a5;
      operator delete(v12, (char *)v41 - (char *)v12);
      a5 = v43;
    }
    v10 = (__int64)v16;
    v12 = (__m128i *)a5;
    v41 = (__m128i *)(a5 + v34);
LABEL_13:
    if ( a3 == (char *)v10 )
      break;
    ++v10;
  }
  while ( (char *)v10 != a3 );
  if ( v12 == v11 )
    goto LABEL_34;
LABEL_16:
  v18 = (char *)v11 - (char *)v12;
  v19 = 0xAAAAAAAAAAAAAAABLL * (((char *)v11 - (char *)v12) >> 3);
  v20 = -2;
  if ( v19 )
  {
    _BitScanReverse64(&v19, v19);
    v20 = 2LL * (int)v19;
  }
  sub_427810((__int64)v12, v11, v20, a4, a5, a6, *(double *)a7.m128_u64, a8, a9);
  if ( v18 > 384 )
  {
    v39 = v12 + 24;
    sub_4263D0(v12, v12 + 24, *(double *)a7.m128_u64, (__m128i)a8, a9);
    if ( v11 != &v12[24] )
    {
      do
      {
        v40 = (__int64)v39;
        v39 = (__m128i *)((char *)v39 + 24);
        sub_425BC0(v40, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9);
      }
      while ( v11 != v39 );
    }
  }
  else
  {
    sub_4263D0(v12, v11, *(double *)a7.m128_u64, (__m128i)a8, a9);
    if ( (unsigned __int64)v18 > 0x7FFFFFFFFFFFFFF8LL )
      sub_2E883E(v12, v11, v21, v22, v23);
  }
  v24 = (char *)operator new((char *)v11 - (char *)v12);
  v25 = &v24[v18];
  v26 = (char *)v41 - (char *)v12;
  v27 = (char *)memcpy(v24, v12, 8 * ((unsigned __int64)((char *)&v11[-2].m128i_u64[1] - (char *)v12) >> 3) + 24);
  v28 = &v27[8 * ((unsigned __int64)((char *)&v11[-2].m128i_u64[1] - (char *)v12) >> 3) + 24];
LABEL_21:
  *a1 = v27;
  a1[1] = v28;
  a1[2] = v25;
  if ( v12 )
    operator delete(v12, v26);
  return a1;
}

