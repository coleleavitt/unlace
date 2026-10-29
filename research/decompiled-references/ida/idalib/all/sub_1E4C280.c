__int64 __fastcall sub_1E4C280(__int64 a1, _DWORD *a2)
{
  char v3; // bp

  if ( (*a2 & 0x4000) != 0 )
  {
    v3 = *(_BYTE *)(a1 + 24);
    *(_BYTE *)(a1 + 24) = 1;
    sub_BC99C0((__int64 *)a1, (__int64)a2);
    *(_BYTE *)(a1 + 24) = v3;
  }
  return 1;
}
