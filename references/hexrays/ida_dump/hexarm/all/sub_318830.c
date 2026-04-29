__int64 __fastcall sub_318830(unsigned __int64 **a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 v4; // rdx
  __m128i *v6; // r13
  unsigned __int64 *v7; // rdi
  unsigned __int64 *v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v12; // xmm0_8

  v2 = a1[1];
  if ( v2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( v4 )
    {
      if ( v2 == (unsigned __int64 *)&byte_1 && !**a1 && !(*a1)[1] )
        return 1;
      v6 = *(__m128i **)a2;
      if ( v4 == 1 )
      {
        if ( !v6->m128i_i64[0] && !v6->m128i_i64[1] )
          return 1;
        v7 = *a1;
        goto LABEL_6;
      }
      v7 = *a1;
      if ( 16 * v4 )
      {
LABEL_6:
        v8 = v7;
        do
        {
          v9 = (__int64)&v8[2 * (_QWORD)v2];
          if ( (unsigned __int64 *)v9 == v7 )
            break;
          v10 = sub_318130((__int64)v7, v9, v6, (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_316C90);
          v8 = *a1;
          v7 = (unsigned __int64 *)v10;
          v2 = a1[1];
          if ( v7 != &(*a1)[2 * (_QWORD)v2] )
          {
            v11 = _mm_loadu_si128(v6);
            v12 = _mm_add_epi64(v11, _mm_srli_si128(v11, 8)).m128i_u64[0];
            if ( !v12 || *v7 < v12 )
              return 1;
          }
          ++v6;
        }
        while ( v6 != (__m128i *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) );
      }
    }
    return 0;
  }
  return 0;
}
