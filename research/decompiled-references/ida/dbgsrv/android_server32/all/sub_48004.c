/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48004
// Address: 0x00048004

//----- (00048004) --------------------------------------------------------
int __fastcall sub_48004(_DWORD *a1, _DWORD *a2, int a3, unsigned __int8 **a4)
{
  unsigned __int8 **v4; // r4
  int v5; // r7
  _DWORD *v6; // r5
  char *v7; // r6
  const char *v8; // r0
  int v9; // r0
  int *v10; // r1
  const char *v11; // r1
  unsigned __int8 *v13; // r5
  _DWORD *v14; // [sp+4h] [bp-14h]

  v4 = a4;
  v5 = a2[1];
  v6 = a2 + 1;
  if ( !v5 )
    return sub_46444(a1, a2, (const char **)a3, v4);
  v7 = &byte_B3CBE;
  if ( *(_DWORD *)(a3 + 4) )
    v7 = *(char **)a3;
  v14 = a2 + 1;
  do
  {
    v8 = &byte_B3CBE;
    if ( *(_DWORD *)(v5 + 20) )
      v8 = *(const char **)(v5 + 16);
    v9 = strcmp(v8, v7);
    if ( v9 >= 0 )
      v6 = (_DWORD *)v5;
    v10 = (int *)(v5 + 4);
    if ( v9 >= 0 )
      v10 = (int *)v5;
    v5 = *v10;
  }
  while ( *v10 );
  v4 = a4;
  if ( v6 == v14 )
    return sub_46444(a1, a2, (const char **)a3, v4);
  v11 = v6[5] ? (const char *)v6[4] : &byte_B3CBE;
  if ( strcmp(v7, v11) < 0 )
    return sub_46444(a1, a2, (const char **)a3, v4);
  v13 = (unsigned __int8 *)(v6 + 8);
  copy_idcv(*a4, v13);
  *a4 = v13;
  return 1;
}
// B3CBE: using guessed type char byte_B3CBE;
