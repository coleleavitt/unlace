__int64 __fastcall sub_1088C50(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v5; // edx

  v2 = a2[1];
  v3 = *a2;
  if ( v2 != 7 )
  {
    if ( v2 == 6 )
    {
      if ( *(_DWORD *)v3 == 808990285 && *(_WORD *)(v3 + 4) == 12336 )
        goto LABEL_15;
      if ( *(_DWORD *)v3 == 808990285 )
      {
        v5 = 2;
        if ( *(_WORD *)(v3 + 4) == 12337 )
          goto LABEL_12;
      }
      if ( *(_DWORD *)v3 == 808990285 )
      {
        v5 = 3;
        if ( *(_WORD *)(v3 + 4) == 12338 )
          goto LABEL_12;
      }
      if ( *(_DWORD *)v3 == 808990285 )
      {
        v5 = 4;
        if ( *(_WORD *)(v3 + 4) == 12339 )
          goto LABEL_12;
      }
      if ( *(_DWORD *)v3 == 808990285 )
      {
        v5 = 5;
        if ( *(_WORD *)(v3 + 4) == 12340 )
          goto LABEL_12;
      }
      if ( *(_DWORD *)v3 == 808990285 )
      {
        v5 = 6;
        if ( *(_WORD *)(v3 + 4) == 12342 )
          goto LABEL_12;
      }
    }
LABEL_3:
    *(_DWORD *)(a1 + 512) = 0;
    return 0;
  }
  if ( *(_DWORD *)v3 != 1701733735 || *(_WORD *)(v3 + 4) != 26994 || *(_BYTE *)(v3 + 6) != 99 )
    goto LABEL_3;
LABEL_15:
  v5 = 1;
LABEL_12:
  *(_DWORD *)(a1 + 512) = v5;
  return 1;
}
