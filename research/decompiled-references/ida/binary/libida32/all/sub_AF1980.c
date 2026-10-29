__int64 __fastcall sub_AF1980(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  v3 = 0;
  if ( !a2 )
    goto LABEL_2;
  if ( a2 != 8 )
  {
    if ( a2 == 11 && *(_QWORD *)a1 == 0x6172626E69746F6ELL && *(_WORD *)(a1 + 8) == 25454 && *(_BYTE *)(a1 + 10) == 104 )
    {
      v3 = 2;
LABEL_2:
      *a3 = v3;
      return 1;
    }
    return 0;
  }
  if ( *(_QWORD *)a1 != 0x68636E6172626E69LL )
    return 0;
  *a3 = 1;
  return 1;
}

