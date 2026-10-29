/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80927B0
// Address: 0x080927B0

//----- (080927B0) --------------------------------------------------------
int __cdecl sub_80927B0(int a1, int a2)
{
  int v2; // ecx
  int v3; // edi
  int i; // esi
  size_t v5; // eax
  int *v6; // edx
  int *v7; // eax
  bool v8; // al
  unsigned __int8 v10; // [esp+1h] [ebp-29h]
  const char *v11; // [esp+2h] [ebp-28h]
  int v12; // [esp+2Eh] [ebp+4h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 32) - 1;
  if ( v3 < 0 )
    return 0;
  for ( i = *(_DWORD *)(a1 + 28) + 28 * *(_DWORD *)(a1 + 32); ; i -= 28 )
  {
    if ( *(_DWORD *)(i - 8) != a2 )
      goto LABEL_3;
    v10 = *(_BYTE *)(a2 + 13);
    if ( !v10 )
      break;
    if ( *(_DWORD *)(a2 + 4) )
    {
      v12 = v2;
      v11 = *(const char **)a2;
      v5 = strlen(*(const char **)a2);
      v6 = (int *)v11;
      v2 = v12;
      v7 = (int *)&v11[v5];
    }
    else
    {
      v6 = &dword_80DDFD8;
      v7 = &dword_80DDFD8;
    }
    v8 = *(_DWORD *)(v2 + 4) >= (unsigned int)v6 && (unsigned int)v7 >= *(_DWORD *)(v2 + 4);
    if ( v8 )
      return v8;
    if ( *(_DWORD *)(v2 + 40) > *(_DWORD *)(i - 4) )
      return v10;
LABEL_3:
    if ( --v3 == -1 )
      return 0;
  }
  return 1;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
