__int64 __fastcall sub_48F100(QT::QAbstractItemView *this, int a2)
{
  unsigned int v2; // edx
  __m128i v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_48EFE0(&v4, this, a2, 0);
  v2 = 0;
  if ( (v4.m128i_i32[1] | v4.m128i_i32[0]) >= 0 && v5 )
  {
    sub_48ED80(this, (__int64)&v4);
    return 1;
  }
  return v2;
}
