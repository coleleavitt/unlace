/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F280
// Address: 0x0005F280

//----- (0005F280) --------------------------------------------------------
char __cdecl sub_5F280(int a1, _DWORD *a2, int a3, char **a4)
{
  char **v4; // ecx
  _DWORD *v5; // eax
  int v6; // edi
  _DWORD *v7; // esi
  const char *v8; // eax
  int v9; // eax
  const char *v10; // eax
  bool v11; // sf
  char *v13; // esi
  const char *v14; // [esp+0h] [ebp-1Ch]

  v4 = (char **)a3;
  v5 = a2;
  v6 = a2[1];
  if ( !v6 )
    return sub_5C450(a1, v5, v4, a4);
  v14 = byte_EF875;
  if ( *(_DWORD *)(a3 + 4) )
    v14 = *(const char **)a3;
  v7 = a2 + 1;
  do
  {
    v8 = byte_EF875;
    if ( *(_DWORD *)(v6 + 20) )
      v8 = *(const char **)(v6 + 16);
    v9 = strcmp(v8, v14);
    if ( v9 >= 0 )
      v7 = (_DWORD *)v6;
    v6 = *(_DWORD *)(v6 + 4 * ((unsigned int)v9 >> 31));
  }
  while ( v6 );
  v5 = a2;
  v4 = (char **)a3;
  if ( v7 == a2 + 1 )
    return sub_5C450(a1, v5, v4, a4);
  v10 = v7[5] ? (const char *)v7[4] : byte_EF875;
  v11 = strcmp(v14, v10) < 0;
  v5 = a2;
  v4 = (char **)a3;
  if ( v11 )
    return sub_5C450(a1, v5, v4, a4);
  v13 = (char *)(v7 + 7);
  copy_idcv(*a4, v13);
  *a4 = v13;
  return 1;
}
