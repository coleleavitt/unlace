unsigned __int64 __fastcall sub_3D2580(__m128i *a1, void *a2)
{
  __int128 v3; // [rsp+0h] [rbp-48h]
  __int64 v4; // [rsp+18h] [rbp-30h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_3D0E60((__int64)a1, a2, 0, 0x10000000u);
  if ( (~((unsigned __int16)sub_3BE900(a1, (unsigned __int64)a2, 4) >> 8) & 6) == 0 )
  {
    v4 = 0;
    v3 = 0;
    sub_3D1350(a1, (unsigned __int64)a2, 0);
  }
  return v5 - __readfsqword(0x28u);
}
