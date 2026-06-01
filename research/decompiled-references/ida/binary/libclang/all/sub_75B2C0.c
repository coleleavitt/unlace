__int64 __fastcall sub_75B2C0(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 == 8 )
  {
    if ( *(_QWORD *)a1 == 0x64656D75736E6F63LL )
    {
      v3 = 0;
LABEL_4:
      *a3 = v3;
      return 1;
    }
  }
  else if ( a2 == 10 && *(_QWORD *)a1 == 0x6D75736E6F636E75LL && *(_WORD *)(a1 + 8) == 25701 )
  {
    v3 = 1;
    goto LABEL_4;
  }
  return 0;
}

