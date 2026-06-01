__int16 __fastcall sub_F60170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int v11; // [rsp+Ch] [rbp-3Ch]

  v11 = HIDWORD(a3);
  sub_9B7040(a1, a3);
  sub_9B7040(a1, v11);
  sub_9B7040(a1, a4);
  sub_9B7040(a1, SHIDWORD(a4));
  sub_9B7040(a1, a6);
  sub_9B7040(a1, a7);
  if ( !a5 )
    return sub_9B7040(a1, 0);
  sub_9B7040(a1, 1);
  return sub_F1A490(a5, a1, a2, 1, 0);
}
