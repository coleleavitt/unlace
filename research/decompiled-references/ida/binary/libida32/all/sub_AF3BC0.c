__int64 __fastcall sub_AF3BC0(__int64 a1, __int64 a2, int *a3)
{
  bool v4; // al
  int v5; // ecx

  if ( a2 == 10 )
  {
    if ( *(_QWORD *)a1 != 0x7369767265707573LL || (v4 = 1, *(_WORD *)(a1 + 8) != 29295) )
    {
      if ( *(_QWORD *)a1 != 0x656E6F6E2D696371LL )
        return 0;
      v5 = 3;
      if ( *(_WORD *)(a1 + 8) != 29811 )
        return 0;
      goto LABEL_9;
    }
    goto LABEL_11;
  }
  if ( a2 == 7 )
  {
    if ( *(_DWORD *)a1 != 1751343469 || *(_WORD *)(a1 + 4) != 28265 || (v5 = 1, v4 = 1, *(_BYTE *)(a1 + 6) != 101) )
    {
      v4 = 0;
      v5 = 1;
LABEL_13:
      if ( a2 == 22 )
      {
        if ( v4 )
          goto LABEL_9;
        if ( !(*(_QWORD *)a1 ^ 0x432D657669466953LL | *(_QWORD *)(a1 + 8) ^ 0x636174732D43494CLL)
          && *(_DWORD *)(a1 + 16) == 2004036971 )
        {
          v5 = 5;
          if ( *(_WORD *)(a1 + 20) == 28769 )
            goto LABEL_9;
        }
        return 0;
      }
      goto LABEL_8;
    }
LABEL_12:
    if ( !v4 && a2 == 23 )
    {
      if ( !(*(_QWORD *)a1 ^ 0x432D657669466953LL | *(_QWORD *)(a1 + 8) ^ 0x656572702D43494CLL)
        && *(_DWORD *)(a1 + 16) == 1769238637
        && *(_WORD *)(a1 + 20) == 27746
        && *(_BYTE *)(a1 + 22) == 101 )
      {
        v5 = 4;
        goto LABEL_9;
      }
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( a2 != 8 )
  {
    v4 = 0;
LABEL_11:
    v5 = 0;
    goto LABEL_12;
  }
  v4 = *(_QWORD *)a1 == 0x7473656E2D696371LL;
  v5 = 2 * v4;
LABEL_8:
  if ( !v4 )
    return 0;
LABEL_9:
  *a3 = v5;
  return 1;
}

