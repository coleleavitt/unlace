__int64 __fastcall sub_1504B00(const __m128i *a1, unsigned __int64 *a2, unsigned int a3, __m128i a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax
  __m128i v10; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+10h] [rbp-78h]
  unsigned __int8 *v12[13]; // [rsp+20h] [rbp-68h] BYREF

  v6 = sub_14BDAD0((__int64)a1, 0, a4);
  v7 = sub_19B4A30(a1[6].m128i_i64[0], v6 & 0xFFFFFFFFFFFFFFFELL, a3, 0, 0, 0);
  result = 0;
  if ( v7 > 1 )
  {
    *a2 = v7 & 0xFFFFFFFFFFFFFFFELL;
    v9 = a1[2].m128i_i64[0];
    v10 = _mm_loadu_si128(a1 + 1);
    v11 = v9;
    if ( (_WORD)v9 == 23 || (_WORD)v9 == 66 )
    {
      return 1;
    }
    else
    {
      sub_1564840(v12, a1, &v10, 1636);
      sub_1503D30(v12, (__int64)"step expression");
      sub_AEA040((__int64)v12);
      return 1;
    }
  }
  return result;
}
