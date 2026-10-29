/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A8660
// Address: 0x080A8660

//----- (080A8660) --------------------------------------------------------
int __cdecl sub_80A8660(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  int i; // edi
  const char *v5; // ebp
  int v6; // [esp+0h] [ebp-2Ch]
  unsigned __int8 v7; // [esp+Fh] [ebp-1Dh]

  result = (*(int (__cdecl **)(int, int))(a1 + 44))(a1, a2);
  if ( (_BYTE)result )
  {
    v6 = *(_DWORD *)(a1 + 56);
    if ( v6 > 0 )
    {
      v7 = result;
      v3 = 0;
      for ( i = *(_DWORD *)(a1 + 52) + 12; ; i += 100 )
      {
        while ( !*(_DWORD *)(i + 4) )
        {
LABEL_6:
          ++v3;
          i += 100;
          if ( v6 == v3 )
            return v7;
        }
        v5 = *(const char **)i;
        if ( strcmp(*(const char **)i, ".debug_info") )
        {
          if ( !strcmp(v5, ".debug_types") )
            *(_DWORD *)(a1 + 100) = v3;
          goto LABEL_6;
        }
        *(_DWORD *)(a1 + 96) = v3++;
        if ( v6 == v3 )
          return v7;
      }
    }
  }
  return result;
}
