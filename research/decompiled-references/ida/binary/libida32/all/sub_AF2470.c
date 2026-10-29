__int64 __fastcall sub_AF2470(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 != 4 )
  {
    if ( a2 == 5 )
    {
      if ( *(_DWORD *)a1 == 1869376609 )
      {
        v3 = 1;
        if ( *(_BYTE *)(a1 + 4) == 99 )
          goto LABEL_6;
      }
    }
    else if ( a2 == 11 )
    {
      if ( *(_QWORD *)a1 == 0x43656C626174756DLL && *(_WORD *)(a1 + 8) == 28783 )
      {
        v3 = 4;
        if ( *(_BYTE *)(a1 + 10) == 121 )
          goto LABEL_6;
      }
    }
    else if ( a2 == 3 && *(_WORD *)a1 == 25966 && *(_BYTE *)(a1 + 2) == 119 )
    {
      v3 = 5;
      goto LABEL_6;
    }
    return 0;
  }
  v3 = 0;
  if ( *(_DWORD *)a1 == 1701736302 )
  {
LABEL_6:
    *a3 = v3;
    return 1;
  }
  if ( *(_DWORD *)a1 != 2037411683 )
  {
    if ( *(_DWORD *)a1 == 1953066601 )
    {
      v3 = 3;
      goto LABEL_6;
    }
    return 0;
  }
  *a3 = 2;
  return 1;
}

