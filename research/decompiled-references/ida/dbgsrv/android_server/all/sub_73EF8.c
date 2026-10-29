/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73EF8
// Address: 0x0000000000073EF8

//----- (0000000000073EF8) ----------------------------------------------------
__int64 __fastcall sub_73EF8(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 **a4)
{
  __int64 v4; // x25
  __int64 v5; // x27
  __int64 v10; // x24
  const char *v11; // x23
  const char *v12; // x0
  int v13; // w0
  const char *v14; // x1

  v4 = a2 + 8;
  v5 = *(_QWORD *)(a2 + 8);
  if ( !v5 )
    return sub_717A8(a1, (_DWORD *)a2, (const char **)a3, a4);
  v10 = a2 + 8;
  v11 = *(_QWORD *)(a3 + 8) ? *(const char **)a3 : &byte_F154B;
  do
  {
    if ( *(_QWORD *)(v5 + 40) )
      v12 = *(const char **)(v5 + 32);
    else
      v12 = &byte_F154B;
    v13 = strcmp(v12, v11);
    if ( v13 >= 0 )
      v10 = v5;
    v5 = *(_QWORD *)(v5 + 8LL * (v13 < 0));
  }
  while ( v5 );
  if ( v10 == v4 )
    return sub_717A8(a1, (_DWORD *)a2, (const char **)a3, a4);
  v14 = *(_QWORD *)(v10 + 40) ? *(const char **)(v10 + 32) : &byte_F154B;
  if ( strcmp(v11, v14) < 0 )
    return sub_717A8(a1, (_DWORD *)a2, (const char **)a3, a4);
  copy_idcv(*a4, (unsigned __int8 *)(v10 + 56));
  *a4 = (unsigned __int8 *)(v10 + 56);
  return 1;
}
// F154B: using guessed type char byte_F154B;
