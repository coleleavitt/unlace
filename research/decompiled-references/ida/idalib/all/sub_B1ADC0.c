__int64 __fastcall sub_B1ADC0(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  switch ( a2 )
  {
    case 28LL:
      if ( !(*(_QWORD *)a1 ^ 0x5F746C7561666564LL | *(_QWORD *)(a1 + 8) ^ 0x69645F6172747865LL)
        && *(_QWORD *)(a1 + 16) == 0x616E696D69726373LL )
      {
        v4 = 0;
        if ( *(_DWORD *)(a1 + 24) == 1852795252 )
          goto LABEL_22;
      }
      return 0;
    case 23LL:
      if ( !(*(_QWORD *)a1 ^ 0x61727478655F6F6ELL | *(_QWORD *)(a1 + 8) ^ 0x6D6972637369645FLL)
        && *(_DWORD *)(a1 + 16) == 1952542313
        && *(_WORD *)(a1 + 20) == 28521 )
      {
        v4 = 1;
        if ( *(_BYTE *)(a1 + 22) == 110 )
          goto LABEL_22;
      }
      return 0;
    case 19LL:
      if ( !(*(_QWORD *)a1 ^ 0x7369645F65707974LL | *(_QWORD *)(a1 + 8) ^ 0x74616E696D697263LL)
        && *(_WORD *)(a1 + 16) == 28521 )
      {
        v4 = 2;
        if ( *(_BYTE *)(a1 + 18) == 110 )
          goto LABEL_22;
      }
      return 0;
  }
  if ( a2 != 21
    || *(_QWORD *)a1 ^ 0x645F6D6F74737563LL | *(_QWORD *)(a1 + 8) ^ 0x6E696D6972637369LL
    || *(_DWORD *)(a1 + 16) != 1869182049
    || *(_BYTE *)(a1 + 20) != 110 )
  {
    return 0;
  }
  v4 = 3;
LABEL_22:
  *a3 = v4;
  return 1;
}
