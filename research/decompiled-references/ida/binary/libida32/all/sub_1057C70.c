bool __fastcall sub_1057C70(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax

  if ( a3 == 3 )
  {
    if ( *(_WORD *)a2 == 28770 && *(_BYTE *)(a2 + 2) == 102 )
    {
      v3 = 0;
      return v3 == 0;
    }
    goto LABEL_3;
  }
  if ( a3 == 5 )
  {
    if ( *(_DWORD *)a2 == 863333473 && *(_BYTE *)(a2 + 4) == 50 )
    {
      v3 = 0;
      return v3 == 0;
    }
LABEL_3:
    v3 = 1;
    return v3 == 0;
  }
  return a3 == 8 && *(_QWORD *)a2 == 0x7369726672617764LL;
}

