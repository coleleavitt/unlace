__int64 __fastcall sub_AF6000(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  if ( a2 == 8 )
  {
    if ( *(_QWORD *)a1 != 0x64656D75736E6F63LL )
      return 0;
    v4 = 0;
  }
  else
  {
    if ( a2 != 10 || *(_QWORD *)a1 != 0x6D75736E6F636E75LL || *(_WORD *)(a1 + 8) != 25701 )
      return 0;
    v4 = 1;
  }
  *a3 = v4;
  return 1;
}

