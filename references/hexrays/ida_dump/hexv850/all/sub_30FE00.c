__int64 __fastcall sub_30FE00(__m128i *a1, __int32 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-48h] BYREF
  __int128 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = 0;
  v4 = 0x800000000LL;
  v6 = 0;
  v2 = sub_30F440(a1, (__m128i *)&v4, a2);
  sub_30D2C0((__int64)&v4);
  return v2;
}
