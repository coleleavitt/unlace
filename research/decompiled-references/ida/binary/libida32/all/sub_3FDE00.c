unsigned __int64 __fastcall sub_3FDE00(__int64 a1, unsigned int a2, unsigned int a3, char a4, char a5)
{
  __int64 *v7; // rdi
  unsigned int v8; // ecx
  char v10[4]; // [rsp+Ch] [rbp-3Ch] BYREF
  __m128i v11[3]; // [rsp+10h] [rbp-38h] BYREF

  v10[0] = a5;
  v11[0].m128i_i64[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 2233) )
  {
    v11[0].m128i_i64[0] = __PAIR64__(a3, a2);
    if ( a4 )
    {
      sub_3FA270((__int64 *)(a1 + 1704), v11, v10, 0x19u);
      v7 = (__int64 *)(a1 + 1808);
      v8 = 27;
    }
    else
    {
      sub_3FA270((__int64 *)(a1 + 1912), v11, v10, 0x1Du);
      v7 = (__int64 *)(a1 + 2016);
      v8 = 31;
    }
    v11[0].m128i_i64[0] = __PAIR64__(a2, a3);
    sub_3FA270(v7, v11, v10, v8);
    sub_3FDD90(a1);
  }
  return v11[0].m128i_i64[1] - __readfsqword(0x28u);
}

