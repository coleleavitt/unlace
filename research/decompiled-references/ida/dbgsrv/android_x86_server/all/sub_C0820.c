/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0820
// Address: 0x000C0820

//----- (000C0820) --------------------------------------------------------
int __cdecl sub_C0820(int a1, int a2, int a3, int a4, int a5, char a6)
{
  int result; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  result = a1;
  v7 = *(_DWORD *)(a2 + 8);
  if ( a6 )
  {
    result = strcmp(*(const char **)(a1 + 4), *(const char **)(v7 + 4));
    if ( result )
      return result;
  }
  else if ( a1 != v7 )
  {
    return result;
  }
  result = a4;
  *(_BYTE *)(a2 + 53) = 1;
  if ( *(_DWORD *)(a2 + 4) == a4 )
  {
    result = a5;
    *(_BYTE *)(a2 + 52) = 1;
    v8 = *(_DWORD *)(a2 + 16);
    if ( v8 )
    {
      if ( v8 != a3 )
      {
        ++*(_DWORD *)(a2 + 36);
LABEL_15:
        *(_BYTE *)(a2 + 54) = 1;
        return result;
      }
      v9 = *(_DWORD *)(a2 + 24);
      if ( v9 == 2 )
      {
        *(_DWORD *)(a2 + 24) = a5;
        v9 = a5;
      }
      if ( v9 == 1 )
      {
LABEL_14:
        if ( *(_DWORD *)(a2 + 48) != 1 )
          return result;
        goto LABEL_15;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 16) = a3;
      *(_DWORD *)(a2 + 24) = a5;
      *(_DWORD *)(a2 + 36) = 1;
      if ( a5 == 1 )
        goto LABEL_14;
    }
  }
  return result;
}
