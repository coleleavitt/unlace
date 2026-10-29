/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BFDF0
// Address: 0x000BFDF0

//----- (000BFDF0) --------------------------------------------------------
int __cdecl sub_BFDF0(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // esi
  int v7; // edx

  result = a2;
  *(_BYTE *)(a2 + 53) = 1;
  if ( *(_DWORD *)(a2 + 4) == a4 )
  {
    *(_BYTE *)(a2 + 52) = 1;
    v6 = *(_DWORD *)(a2 + 16);
    if ( v6 )
    {
      if ( v6 != a3 )
      {
        ++*(_DWORD *)(a2 + 36);
LABEL_12:
        *(_BYTE *)(a2 + 54) = 1;
        return result;
      }
      v7 = *(_DWORD *)(a2 + 24);
      if ( v7 == 2 )
      {
        *(_DWORD *)(a2 + 24) = a5;
        v7 = a5;
      }
      if ( *(_DWORD *)(a2 + 48) == 1 && v7 == 1 )
        goto LABEL_12;
    }
    else
    {
      *(_DWORD *)(a2 + 16) = a3;
      *(_DWORD *)(a2 + 24) = a5;
      *(_DWORD *)(a2 + 36) = 1;
      if ( a5 == 1 && *(_DWORD *)(a2 + 48) == 1 )
        goto LABEL_12;
    }
  }
  return result;
}
