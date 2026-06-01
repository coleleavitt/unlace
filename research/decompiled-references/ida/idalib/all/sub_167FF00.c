bool __fastcall sub_167FF00(int **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  __int64 v9; // rdi
  const __m128i *v10; // rax
  const __m128i *v11; // r12
  unsigned int *v12; // rsi
  __m128i v13[2]; // [rsp+0h] [rbp-28h] BYREF

  v7 = **a1;
  if ( v7 == 1 )
  {
    v10 = (const __m128i *)sub_167F1F0(*((_QWORD *)a1[1] + 31), a2, a3, a4, a5, a6);
    v11 = v10;
    if ( v10 )
    {
      v12 = (unsigned int *)a1[2];
      v13[0] = _mm_loadu_si128(v10 + 3);
      if ( !(unsigned __int8)sub_A09E20((unsigned int *)v13, v12) && *(_QWORD *)a1[3] == v11[8].m128i_i64[1] )
        return 1;
    }
    return (unsigned int)sub_B90D60(a2, nullptr, nullptr, 0, 0, a6) == 3;
  }
  if ( v7 != 2 )
  {
    if ( v7 == 3 )
    {
      v9 = *(_QWORD *)a1[4];
      if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x12
        && (*(_BYTE *)(a2 + 28) & 0x7Fu) - 21 <= 1
        && *(_QWORD *)(a2 + 88) == sub_BA85D0(v9) )
      {
        return 1;
      }
    }
    return (unsigned int)sub_B90D60(a2, nullptr, nullptr, 0, 0, a6) == 3;
  }
  if ( (unsigned int)sub_B90D60(a2, nullptr, nullptr, 0, 0, a6) != 2 )
    return (unsigned int)sub_B90D60(a2, nullptr, nullptr, 0, 0, a6) == 3;
  return 1;
}
