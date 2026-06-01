__int64 __fastcall sub_3156C0(__m128i *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v6 = 0x800000000LL;
  v8 = 0;
  v4 = sub_314D00(a1, (__m128i *)&v6, a2, a4);
  sub_312B80((__int64)&v6);
  return v4;
}
