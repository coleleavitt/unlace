__int64 __fastcall sub_2004240(__int64 a1, char *a2, __int64 a3)
{
  __int64 *v3; // rcx
  char *v6; // rbp
  char *v7; // rbx
  char *v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // r14
  _BYTE *v13; // rsi
  _BYTE *v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // rax
  char *v17; // r9
  size_t v18; // r10
  __m128i v19; // xmm0
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r14
  char *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  char *i; // r15
  void *v37; // rdi
  __int64 v38; // rax
  __int64 result; // rax
  __m128 v40; // xmm0
  __int64 v41; // [rsp+8h] [rbp-50h] BYREF
  __m128i v42; // [rsp+10h] [rbp-48h] BYREF

  v3 = (__int64 *)a3;
  v6 = *(char **)(a1 + 8);
  v7 = *(char **)a1;
  v8 = &a2[-*(_QWORD *)a1];
  if ( !(0xAAAAAAAAAAAAAAABLL * ((__int64)&v6[-*(_QWORD *)a1] >> 4)) )
  {
    v9 = 1;
    goto LABEL_30;
  }
  v9 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)&v6[-*(_QWORD *)a1] >> 4) > 0x5555555555555556LL
                                                                  * ((__int64)&v6[-*(_QWORD *)a1] >> 4)
    || v9 > 0x555555555555555LL )
  {
    v9 = -16;
LABEL_4:
    v42.m128i_i64[0] = a3;
    v10 = operator new(v9);
    v3 = (__int64 *)v42.m128i_i64[0];
    v41 = v10;
    goto LABEL_5;
  }
  v41 = 0;
  if ( v9 )
  {
LABEL_30:
    v9 *= 48LL;
    goto LABEL_4;
  }
LABEL_5:
  v11 = *v3;
  v12 = &v8[v41];
  v13 = (_BYTE *)v3[1];
  *((_QWORD *)v12 + 1) = 0;
  *(_QWORD *)v12 = v11;
  v14 = (_BYTE *)v3[2];
  *((_QWORD *)v12 + 2) = 0;
  *((_QWORD *)v12 + 3) = 0;
  v15 = v14 - v13;
  if ( (v14 - v13) >> 3 )
  {
    if ( (unsigned __int64)((v14 - v13) >> 3) > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v42.m128i_i64[1] = (__int64)v3;
    v42.m128i_i64[0] = v14 - v13;
    v16 = (char *)operator new(v15);
    v3 = (__int64 *)v42.m128i_i64[1];
    v15 = v42.m128i_i64[0];
    v17 = v16;
    v14 = *(_BYTE **)(v42.m128i_i64[1] + 16);
    v13 = *(_BYTE **)(v42.m128i_i64[1] + 8);
    v18 = v14 - v13;
  }
  else
  {
    v18 = v14 - v13;
    v17 = nullptr;
  }
  v42.m128i_i64[0] = (__int64)v17;
  v19 = _mm_loadl_epi64(&v42);
  *((_QWORD *)v12 + 3) = &v17[v15];
  *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v19, v19);
  if ( v14 != v13 )
  {
    v42.m128i_i64[1] = (__int64)v3;
    v42.m128i_i64[0] = v18;
    v20 = (char *)memmove(v17, v13, v18);
    v3 = (__int64 *)v42.m128i_i64[1];
    v18 = v42.m128i_i64[0];
    v17 = v20;
  }
  v21 = v3[4];
  *((_QWORD *)v12 + 2) = &v17[v18];
  *((_QWORD *)v12 + 4) = v21;
  *((_QWORD *)v12 + 5) = v3[5];
  if ( a2 == v7 )
  {
    v29 = v41;
  }
  else
  {
    v22 = v41;
    v23 = v7;
    do
    {
      v24 = *(_QWORD *)v23;
      *(_QWORD *)(v22 + 16) = 0;
      v23 += 48;
      v22 += 48;
      *(_QWORD *)(v22 - 24) = 0;
      *(_QWORD *)(v22 - 40) = 0;
      *(_QWORD *)(v22 - 48) = v24;
      *(_QWORD *)(v22 - 40) = *((_QWORD *)v23 - 5);
      v25 = *((_QWORD *)v23 - 4);
      *((_QWORD *)v23 - 5) = 0;
      v26 = *(_QWORD *)(v22 - 32);
      *(_QWORD *)(v22 - 32) = v25;
      v27 = *((_QWORD *)v23 - 3);
      *((_QWORD *)v23 - 4) = v26;
      v28 = *(_QWORD *)(v22 - 24);
      *(_QWORD *)(v22 - 24) = v27;
      *((_QWORD *)v23 - 3) = v28;
      *(_QWORD *)(v22 - 16) = *((_QWORD *)v23 - 2);
      *(_QWORD *)(v22 - 8) = *((_QWORD *)v23 - 1);
    }
    while ( a2 != v23 );
    v29 = v41 + 16 * (3 * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)(a2 - 48 - v7) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 3);
  }
  v30 = v29 + 48;
  if ( a2 != v6 )
  {
    v31 = a2;
    v32 = v30;
    do
    {
      v33 = *(_QWORD *)v31;
      v31 += 48;
      v32 += 48;
      *(_QWORD *)(v32 - 48) = v33;
      *(_QWORD *)(v32 - 40) = *((_QWORD *)v31 - 5);
      v34 = *((_QWORD *)v31 - 4);
      *(_OWORD *)(v31 - 40) = 0;
      *(_QWORD *)(v32 - 32) = v34;
      v35 = *((_QWORD *)v31 - 3);
      *((_QWORD *)v31 - 3) = 0;
      *(_QWORD *)(v32 - 24) = v35;
      *(_QWORD *)(v32 - 16) = *((_QWORD *)v31 - 2);
      *(_QWORD *)(v32 - 8) = *((_QWORD *)v31 - 1);
    }
    while ( v6 != v31 );
    v30 += 16 * (3 * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)(v6 - a2 - 48) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 3);
  }
  for ( i = v7; i != v6; i += 48 )
  {
    while ( 1 )
    {
      v37 = *((void **)i + 1);
      if ( !v37 )
        break;
      operator delete(v37);
      i += 48;
      if ( i == v6 )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v7 )
    operator delete(v7);
  v38 = v41;
  v41 = v30;
  result = v9 + v38;
  v40 = _mm_loadh_ps((const double *)&v41);
  *(_QWORD *)(a1 + 16) = result;
  *(__m128 *)a1 = v40;
  return result;
}
