void __fastcall sub_14A0380(const __m128i *a1, __int64 a2, __int32 a3, __int32 a4)
{
  const __m128i *v6; // r13
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // r14
  __int32 v10; // [rsp+Ch] [rbp-2Ch]

  v6 = a1 + 1;
  v7 = (_QWORD *)a1->m128i_i64[1];
  if ( v7[369] == v7[370] )
  {
    v10 = a4;
    sub_1479990((__int64)v7, v6, 1u);
    a4 = v10;
  }
  else
  {
    --v7[368];
    if ( !a2 )
    {
      v9 = *(_QWORD *)(a1->m128i_i64[1] + 2904) + 8 * (3LL * *(_QWORD *)(a1->m128i_i64[1] + 2944) - 3);
      if ( sub_10CCDE0(*(_WORD *)(v9 + 16)) )
      {
        a4 = *(_DWORD *)(v9 + 4);
        if ( !a4 )
          a4 = *(_DWORD *)v9;
      }
      else
      {
        a4 = *(_DWORD *)v9;
      }
    }
  }
  v8 = (_QWORD *)a1->m128i_i64[1];
  a1[1].m128i_i64[1] = a2;
  a1[2].m128i_i16[0] = 425;
  a1[1].m128i_i32[1] = a4;
  a1[1].m128i_i32[0] = a3;
  if ( v8[368] )
  {
    if ( v8[370] != v8[369] )
      sub_1417320((__int64)v8, v6);
  }
}
