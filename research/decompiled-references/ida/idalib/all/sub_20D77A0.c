__int64 __fastcall sub_20D77A0(__int64 a1, __int64 a2)
{
  unsigned int v3; // r14d
  __int64 v4; // r13
  __m128i v5; // xmm0
  __int64 v6; // rax
  int v7; // eax
  _QWORD *v8; // rsi
  _BYTE *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  _BYTE *v16; // rax
  __m128i n; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE ptr[24]; // [rsp+10h] [rbp-98h]
  _OWORD v19[4]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v20; // [rsp+68h] [rbp-40h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  n.m128i_i64[0] = (__int64)v19;
  v5 = _mm_loadl_epi64(&n);
  *(_QWORD *)&ptr[16] = &v20;
  *(__m128i *)ptr = _mm_unpacklo_epi64(v5, v5);
  memset(v19, 0, sizeof(v19));
  while ( 1 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
    if ( *(_BYTE *)(v6 + 8) != 13 )
      break;
    v4 = *(_QWORD *)(v6 + 16);
    v7 = *(_DWORD *)(v6 + 24);
    v8 = *(_QWORD **)&ptr[8];
    v9 = *(_BYTE **)ptr;
    if ( (int)v3 > v7 )
      v3 = v7;
    if ( *(_QWORD *)&ptr[8] == *(_QWORD *)&ptr[16] )
    {
      n.m128i_i64[0] = *(_QWORD *)&ptr[8] - *(_QWORD *)ptr;
      v11 = 16 * ((__int64)(*(_QWORD *)&ptr[8] - *(_QWORD *)ptr) >> 3);
      if ( *(_OWORD **)ptr == v19 )
      {
        n.m128i_i64[1] = *(_QWORD *)&ptr[8];
        v16 = malloc(16 * ((__int64)(*(_QWORD *)&ptr[8] - *(_QWORD *)ptr) >> 3));
        v9 = v16;
        if ( !v16 )
LABEL_20:
          abort();
        if ( (_OWORD *)n.m128i_i64[1] != v19 )
          v9 = memcpy(v16, v19, n.m128i_u64[0]);
        *(_QWORD *)ptr = v9;
      }
      else
      {
        v9 = realloc(*(void **)ptr, 16 * ((__int64)(*(_QWORD *)&ptr[8] - *(_QWORD *)ptr) >> 3));
        *(_QWORD *)ptr = v9;
        if ( !v9 )
          goto LABEL_20;
      }
      v12 = n.m128i_i64[0];
      n.m128i_i64[0] = v11;
      v8 = &v9[v12];
      v13 = (__m128i)_mm_loadh_ps((const double *)n.m128i_i64);
      n.m128i_i64[0] = (__int64)v9;
      v14 = _mm_loadl_epi64(&n);
      *(__m128i *)&ptr[8] = _mm_add_epi64(v13, _mm_unpacklo_epi64(v14, v14));
    }
    *(_QWORD *)&ptr[8] = v8 + 1;
    v10 = ((char *)(v8 + 1) - v9) >> 3;
    *v8 = v4;
    if ( v10 > 1 && v4 == *(_QWORD *)&v9[8 * ((v10 - 1) >> 1)] )
      goto LABEL_13;
  }
  v9 = *(_BYTE **)ptr;
LABEL_13:
  if ( v9 != (_BYTE *)v19 )
    free(v9);
  return v3;
}
