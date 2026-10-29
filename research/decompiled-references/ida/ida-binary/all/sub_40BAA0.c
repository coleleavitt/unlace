__int64 __fastcall sub_40BAA0(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 v3; // si
  __int64 v4; // rax
  __m128i v5; // rax
  __m128i v7; // rax
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  __m128i v9; // [rsp+10h] [rbp-38h]
  __m128i v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = a2 - 6;
    v4 = 2165563904LL;
    if ( v3 <= 0x1Cu )
      v4 = dword_5EADE0[v3];
    v5.m128i_i64[0] = sub_524FA0(a3 + 40, v4, 0);
    v10 = v5;
  }
  else
  {
    v7.m128i_i64[0] = sub_40B380(a2);
    v10 = v7;
  }
  v9 = _mm_load_si128(&v10);
  v8 = v9;
  sub_40B9D0(a1, (QT::QColor *)&v8);
  return a1;
}
