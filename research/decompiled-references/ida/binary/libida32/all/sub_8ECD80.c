__int64 __fastcall sub_8ECD80(__int64 a1, int a2)
{
  unsigned int v2; // eax

  v2 = a2 - 2;
  if ( (a2 & 0xFFFFFFFD) == 1 )
  {
    *(_DWORD *)(a1 + 3608) = 0;
    *(_QWORD *)(a1 + 760) = 0;
    if ( v2 > 1 )
      return 0;
  }
  else
  {
    if ( v2 > 1 )
      return 0;
    if ( *(_DWORD *)(a1 + 3608) )
      return -60;
  }
  sub_8ECBC0(a1);
  return sub_8E7980(a1 + 16);
}

