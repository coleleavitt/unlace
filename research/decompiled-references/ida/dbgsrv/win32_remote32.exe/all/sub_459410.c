/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459410
// Address: 0x00459410

//----- (00459410) --------------------------------------------------------
int __cdecl sub_459410(int a1, _BYTE *a2, int a3, int a4, int a5)
{
  int v5; // eax
  __int16 v7; // ax
  int v8; // eax
  int v9; // ecx
  char v10; // al

  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( (v5 & 1) == 0 )
    {
      *(_DWORD *)(a1 + 24) = v5 | 1;
      if ( a5 < 2 )
      {
LABEL_4:
        *sub_46B984() = 7;
        return -1;
      }
      if ( *(_DWORD *)a1 == 1200 )
      {
        v7 = -257;
      }
      else
      {
        if ( *(_DWORD *)a1 != 1201 )
        {
LABEL_10:
          v8 = sub_459410(a1, a2, a3, a4 + 2, a5 - 2);
          v9 = v8 + 2;
          if ( v8 == -1 )
            return -1;
          return v9;
        }
        v7 = -2;
      }
      *(_WORD *)a4 = v7;
      goto LABEL_10;
    }
  }
  if ( a5 < 2 )
    goto LABEL_4;
  if ( *(_DWORD *)a1 == 1200 )
  {
    *(_BYTE *)a4 = *a2;
    v10 = a2[1];
  }
  else
  {
    if ( *(_DWORD *)a1 != 1201 )
      goto LABEL_19;
    *(_BYTE *)a4 = a2[1];
    v10 = *a2;
  }
  *(_BYTE *)(a4 + 1) = v10;
LABEL_19:
  if ( (unsigned __int16)(*(_WORD *)a2 + 10240) > 0x3FFu )
    return 2;
  if ( a5 < 4 )
    goto LABEL_4;
  if ( *(_DWORD *)a1 == 1200 )
  {
    *(_BYTE *)(a4 + 2) = a2[2];
    *(_BYTE *)(a4 + 3) = a2[3];
    return 4;
  }
  else
  {
    if ( *(_DWORD *)a1 == 1201 )
    {
      *(_BYTE *)(a4 + 2) = a2[3];
      *(_BYTE *)(a4 + 3) = a2[2];
    }
    return 4;
  }
}
