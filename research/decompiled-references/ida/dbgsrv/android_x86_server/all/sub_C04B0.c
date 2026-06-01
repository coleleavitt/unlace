/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C04B0
// Address: 0x000C04B0

//----- (000C04B0) --------------------------------------------------------
int __cdecl sub_C04B0(int a1, _DWORD *a2, int a3, int a4, char a5)
{
  _DWORD *v5; // edx
  int result; // eax
  int v7; // ecx
  const char *v8; // edi

  v5 = a2;
  result = a1;
  v7 = a2[2];
  if ( a5 )
  {
    v8 = *(const char **)(a1 + 4);
    result = strcmp(v8, *(const char **)(v7 + 4));
    v5 = a2;
    if ( result )
    {
      result = strcmp(v8, *(const char **)(*a2 + 4));
      v5 = a2;
      if ( result )
        return result;
LABEL_4:
      if ( v5[4] == a3 || v5[5] == a3 )
      {
        if ( a4 == 1 )
          v5[8] = 1;
      }
      else
      {
        result = a4;
        v5[8] = a4;
        v5[5] = a3;
        ++v5[10];
        if ( v5[9] == 1 && v5[6] == 2 )
          *((_BYTE *)v5 + 54) = 1;
        v5[11] = 4;
      }
      return result;
    }
  }
  else if ( a1 != v7 )
  {
    if ( a1 != *a2 )
      return result;
    goto LABEL_4;
  }
  if ( v5[1] == a3 && v5[7] != 1 )
  {
    v5[7] = a4;
    return a4;
  }
  return result;
}
