__int64 __fastcall sub_983FF0(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // rbp
  __m128i *v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  bool v7; // cf
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rdx
  const __m128i *v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm0
  void (__fastcall *v20)(const __m128i *, const __m128i *, __int64); // rax
  __int64 v22; // [rsp+0h] [rbp-48h]

  v2 = *(const __m128i **)(a1 + 8);
  v3 = *(__m128i **)a1;
  v4 = (__int64)v2->m128i_i64 - *(_QWORD *)a1;
  v5 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 4);
  if ( v5 == 0x2AAAAAAAAAAAAAALL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v7 = __CFADD__(v6, v5);
  v8 = v6 - 0x5555555555555555LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  if ( v7 )
  {
    v22 = 0x7FFFFFFFFFFFFFE0LL;
  }
  else
  {
    if ( v8 > 0x2AAAAAAAAAAAAAALL )
      v8 = 0x2AAAAAAAAAAAAAALL;
    v22 = 48 * v8;
  }
  v9 = operator new(v22);
  v10 = v9 + v4;
  v11 = a2[1].m128i_i64[1];
  *(_QWORD *)(v10 + 16) = 0;
  *(_OWORD *)v10 = 0;
  *(_QWORD *)(v10 + 24) = v11;
  v12 = a2[1].m128i_i64[0];
  if ( v12 )
  {
    v13 = _mm_loadu_si128(a2);
    *(_QWORD *)(v10 + 16) = v12;
    *(__m128i *)v10 = v13;
    a2[1] = 0;
  }
  v14 = a2[2].m128i_i64[1];
  *(_BYTE *)(v10 + 32) = a2[2].m128i_i8[0];
  *(_QWORD *)(v10 + 40) = v14;
  if ( v3 == v2 )
  {
    v16 = v9;
  }
  else
  {
    v15 = v3;
    v16 = v9;
    do
    {
      v17 = v15[1].m128i_i64[1];
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)v16 = 0;
      *(_QWORD *)(v16 + 24) = v17;
      v18 = v15[1].m128i_i64[0];
      if ( v18 )
      {
        v19 = _mm_loadu_si128(v15);
        *(_QWORD *)(v16 + 16) = v18;
        *(__m128i *)v16 = v19;
        v15[1] = 0;
      }
      *(_BYTE *)(v16 + 32) = v15[2].m128i_i8[0];
      *(_QWORD *)(v16 + 40) = v15[2].m128i_i64[1];
      v20 = (void (__fastcall *)(const __m128i *, const __m128i *, __int64))v15[1].m128i_i64[0];
      if ( v20 )
        v20(v15, v15, 3);
      v15 += 3;
      v16 += 48;
    }
    while ( v2 != v15 );
  }
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v16 + 48;
  *(_QWORD *)(a1 + 16) = v22 + v9;
  return v22;
}
