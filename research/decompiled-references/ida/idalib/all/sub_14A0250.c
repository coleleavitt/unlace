void __fastcall sub_14A0250(const __m128i *a1, __int64 a2, __int32 a3, __int32 a4)
{
  const __m128i *v6; // r13
  _QWORD *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // r14
  __int32 v12; // [rsp+Ch] [rbp-2Ch]

  v6 = a1 + 1;
  v7 = (_QWORD *)a1->m128i_i64[1];
  if ( v7[369] == v7[370] )
  {
    v12 = a4;
    sub_1479990((__int64)v7, v6, 1u);
    a4 = v12;
  }
  else
  {
    --v7[368];
    if ( ((*(_DWORD *)a2 >> 12) & 0x7F) == 0x45 )
    {
      v11 = *(_QWORD *)(a1->m128i_i64[1] + 2904) + 8 * (3LL * *(_QWORD *)(a1->m128i_i64[1] + 2944) - 3);
      if ( sub_10CCDE0(*(_WORD *)(v11 + 16)) )
      {
        a4 = *(_DWORD *)(v11 + 4);
        if ( !a4 )
          a4 = *(_DWORD *)v11;
      }
      else
      {
        a4 = *(_DWORD *)v11;
      }
    }
  }
  a1[2].m128i_i16[0] = 424;
  v8 = (*(_DWORD *)a2 >> 12) & 0x7F;
  v9 = v8 != 51;
  if ( v8 == 33 )
    v9 = *(_QWORD *)(a2 + 8);
  v10 = (_QWORD *)a1->m128i_i64[1];
  a1[1].m128i_i64[1] = v9;
  a1[1].m128i_i32[1] = a4;
  a1[1].m128i_i32[0] = a3;
  if ( v10[368] )
  {
    if ( v10[370] != v10[369] )
      sub_1417320((__int64)v10, v6);
  }
}
