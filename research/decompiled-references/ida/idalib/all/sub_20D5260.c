void __fastcall sub_20D5260(__int64 a1, _QWORD *a2)
{
  _BYTE *v2; // r14
  __m128i v3; // xmm0
  __int64 v4; // rax
  _QWORD *v5; // rdx
  _BYTE *v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  size_t v16; // rax
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  _BYTE *v18; // rax
  __m128i n; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE ptr[24]; // [rsp+10h] [rbp-98h]
  _OWORD v21[4]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v22; // [rsp+68h] [rbp-40h] BYREF

  if ( !*(_BYTE *)(a1 + 28) )
  {
    *(_BYTE *)(a1 + 28) = 1;
    v2 = *(_BYTE **)(a1 + 16);
    n.m128i_i64[0] = (__int64)v21;
    v3 = _mm_loadl_epi64(&n);
    *(_QWORD *)&ptr[16] = &v22;
    *(__m128i *)ptr = _mm_unpacklo_epi64(v3, v3);
    memset(v21, 0, sizeof(v21));
    while ( 1 )
    {
      v4 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 24LL))(v2, a2);
      if ( *(_BYTE *)(v4 + 8) != 13 )
        break;
      v2 = *(_BYTE **)(v4 + 16);
      v5 = *(_QWORD **)&ptr[8];
      v6 = *(_BYTE **)ptr;
      if ( *(_QWORD *)&ptr[8] == *(_QWORD *)&ptr[16] )
      {
        n.m128i_i64[0] = *(_QWORD *)&ptr[8] - *(_QWORD *)ptr;
        v8 = 16 * ((__int64)(*(_QWORD *)&ptr[8] - *(_QWORD *)ptr) >> 3);
        if ( *(_OWORD **)ptr == v21 )
        {
          n.m128i_i64[1] = *(_QWORD *)&ptr[8];
          v18 = malloc(16 * ((__int64)(*(_QWORD *)&ptr[8] - *(_QWORD *)ptr) >> 3));
          v6 = v18;
          if ( !v18 )
LABEL_31:
            abort();
          if ( (_OWORD *)n.m128i_i64[1] != v21 )
            v6 = memcpy(v18, v21, n.m128i_u64[0]);
          *(_QWORD *)ptr = v6;
        }
        else
        {
          v6 = realloc(*(void **)ptr, 16 * ((__int64)(*(_QWORD *)&ptr[8] - *(_QWORD *)ptr) >> 3));
          *(_QWORD *)ptr = v6;
          if ( !v6 )
            goto LABEL_31;
        }
        v9 = n.m128i_i64[0];
        n.m128i_i64[0] = v8;
        v5 = &v6[v9];
        v10 = (__m128i)_mm_loadh_ps((const double *)n.m128i_i64);
        n.m128i_i64[0] = (__int64)v6;
        v11 = _mm_loadl_epi64(&n);
        *(__m128i *)&ptr[8] = _mm_add_epi64(v10, _mm_unpacklo_epi64(v11, v11));
      }
      *(_QWORD *)&ptr[8] = v5 + 1;
      v7 = ((char *)(v5 + 1) - v6) >> 3;
      *v5 = v2;
      if ( v7 > 1 && v2 == *(_BYTE **)&v6[8 * ((v7 - 1) >> 1)] )
      {
        if ( v6 != (_BYTE *)v21 )
          free(v6);
        goto LABEL_23;
      }
    }
    if ( *(_OWORD **)ptr != v21 )
      free(*(void **)ptr);
    v12 = v2[10] & 3;
    if ( v12 == 2 )
      v13 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 8LL))(v2, a2);
    else
      v13 = v12 == 0;
    if ( v13
      || ((v14 = v2[10] & 0xC, v14 != 8)
        ? (v15 = v14 == 0)
        : (v15 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 16LL))(v2, a2)),
          v15) )
    {
      v16 = j__strlen(")");
      sub_20D1ED0(a2, v16, ")");
    }
    v17 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v17 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 72LL))(v2, a2);
    else
      v17((__int64)a2, (__int64)v2);
LABEL_23:
    *(_BYTE *)(a1 + 28) = 0;
  }
}
