/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0750
// Address: 0x000C0750

//----- (000C0750) --------------------------------------------------------
int __cdecl sub_C0750(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  unsigned __int8 v6; // dl
  int v7; // ecx
  int result; // eax

  v6 = a6;
  v7 = a1;
  result = *(_DWORD *)(a2 + 8);
  if ( a6 )
  {
    result = strcmp(*(const char **)(a1 + 4), *(const char **)(result + 4));
    v7 = a1;
    v6 = a6;
    if ( result )
      return (*(int (__cdecl **)(_DWORD, int, int, int, int, _DWORD))(**(_DWORD **)(v7 + 8) + 20))(
               *(_DWORD *)(v7 + 8),
               a2,
               a3,
               a4,
               a5,
               v6);
  }
  else if ( a1 != result )
  {
    return (*(int (__cdecl **)(_DWORD, int, int, int, int, _DWORD))(**(_DWORD **)(v7 + 8) + 20))(
             *(_DWORD *)(v7 + 8),
             a2,
             a3,
             a4,
             a5,
             v6);
  }
  *(_BYTE *)(a2 + 53) = 1;
  if ( *(_DWORD *)(a2 + 4) == a4 )
  {
    *(_BYTE *)(a2 + 52) = 1;
    result = *(_DWORD *)(a2 + 16);
    if ( result )
    {
      if ( result != a3 )
      {
        ++*(_DWORD *)(a2 + 36);
LABEL_15:
        *(_BYTE *)(a2 + 54) = 1;
        return result;
      }
      result = *(_DWORD *)(a2 + 24);
      if ( result == 2 )
      {
        *(_DWORD *)(a2 + 24) = a5;
        result = a5;
      }
      if ( result == 1 )
      {
LABEL_14:
        if ( *(_DWORD *)(a2 + 48) != 1 )
          return result;
        goto LABEL_15;
      }
    }
    else
    {
      result = a3;
      *(_DWORD *)(a2 + 16) = a3;
      *(_DWORD *)(a2 + 24) = a5;
      *(_DWORD *)(a2 + 36) = 1;
      if ( a5 == 1 )
        goto LABEL_14;
    }
  }
  return result;
}
