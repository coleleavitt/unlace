/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140060890
// Address: 0x0000000140060890

//----- (0000000140060890) ----------------------------------------------------
__int64 __fastcall sub_140060890(__int64 a1, _BYTE *a2, int a3, _BYTE *a4, int a5)
{
  int v5; // eax
  int v7; // eax
  unsigned int v8; // ecx
  char v9; // al

  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 || (v5 = *(_DWORD *)(a1 + 40), (v5 & 1) != 0) )
  {
    if ( a5 < 2 )
      goto LABEL_4;
    if ( *(_DWORD *)a1 == 1200 )
    {
      *a4 = *a2;
      v9 = a2[1];
    }
    else
    {
      if ( *(_DWORD *)a1 != 1201 )
        goto LABEL_18;
      *a4 = a2[1];
      v9 = *a2;
    }
    a4[1] = v9;
LABEL_18:
    if ( (unsigned __int16)(*(_WORD *)a2 + 10240) > 0x3FFu )
      return 2;
    if ( a5 < 4 )
      goto LABEL_4;
    if ( *(_DWORD *)a1 == 1200 )
    {
      a4[2] = a2[2];
      a4[3] = a2[3];
      return 4;
    }
    else
    {
      if ( *(_DWORD *)a1 == 1201 )
      {
        a4[2] = a2[3];
        a4[3] = a2[2];
      }
      return 4;
    }
  }
  *(_DWORD *)(a1 + 40) = v5 | 1;
  if ( a5 < 2 )
  {
LABEL_4:
    *errno() = 7;
    return 0xFFFFFFFFLL;
  }
  if ( *(_DWORD *)a1 == 1200 )
  {
    *(_WORD *)a4 = -257;
  }
  else if ( *(_DWORD *)a1 == 1201 )
  {
    *(_WORD *)a4 = -2;
  }
  v7 = sub_140060890(a1, (_DWORD)a2, a3, (int)a4 + 2, a5 - 2);
  v8 = v7 + 2;
  if ( v7 == -1 )
    return (unsigned int)-1;
  return v8;
}
