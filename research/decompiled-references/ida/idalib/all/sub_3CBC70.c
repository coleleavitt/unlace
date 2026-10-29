unsigned __int64 __fastcall sub_3CBC70(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __m128i *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __m128i *v10; // rdx
  __m128i *v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  const __m128i *v15; // [rsp+8h] [rbp-50h] BYREF
  __m128i v16; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 4);
  v18 = __readfsqword(0x28u);
  v7 = (__m128i *)(a4 + *(_QWORD *)(a1 + 1672));
  v16 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + v5));
  v17[0] = unpack_dq(&v16);
  v8 = unpack_dq(&v16);
  v17[1] = v8;
  if ( a3 )
  {
    sub_3CBA60(v7, v17);
  }
  else
  {
    v9 = v16.m128i_i64[0];
    if ( v16.m128i_i64[0] < (unsigned __int64)v16.m128i_i64[1] )
    {
      LOBYTE(a3) = *(_BYTE *)v16.m128i_i64[0];
      v9 = v16.m128i_i64[0] + 1;
    }
    v16.m128i_i64[0] = v9;
    v10 = (__m128i *)v7[4].m128i_i64[1];
    v11 = v7 + 4;
    if ( !v10 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v12 = v10[2].m128i_u64[0];
        if ( v12 < v17[0] || v17[0] >= v12 && v10[2].m128i_i64[1] < v8 )
          break;
        v11 = v10;
        v10 = (__m128i *)v10[1].m128i_i64[0];
        if ( !v10 )
          goto LABEL_11;
      }
      v10 = (__m128i *)v10[1].m128i_i64[1];
    }
    while ( v10 );
LABEL_11:
    if ( &v7[4] == v11 || (v13 = v11[2].m128i_u64[0], v17[0] < v13) || v13 >= v17[0] && v8 < v11[2].m128i_i64[1] )
    {
LABEL_15:
      v15 = (const __m128i *)v17;
      v11 = sub_3B9690(v7->m128i_i64, v11->m128i_i64, &v15);
    }
    v11[3].m128i_i8[0] = a3;
  }
  return v18 - __readfsqword(0x28u);
}
