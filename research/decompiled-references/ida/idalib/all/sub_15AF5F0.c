__int64 __fastcall sub_15AF5F0(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  if ( *(char *)(a1 + 3) < 0 )
  {
    *a4 = 137;
    *a3 = "inline";
    return 1;
  }
  else
  {
    *(_BYTE *)(a1 + 3) |= 0x80u;
    *(_DWORD *)(a1 + 240) = a2;
    return 0;
  }
}
