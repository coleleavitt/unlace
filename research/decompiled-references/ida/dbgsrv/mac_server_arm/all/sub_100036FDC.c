/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100036FDC
// Address: 0x0000000100036FDC

//----- (0000000100036FDC) ----------------------------------------------------
__int64 __fastcall sub_100036FDC(_QWORD *a1, __int64 a2, _QWORD *a3, unsigned __int8 **a4)
{
  __int64 v8; // x25
  __int64 v9; // x27
  const char *v10; // x23
  __int64 v11; // x24
  const char *v12; // x0
  int v13; // w0
  const char *v14; // x1

  v8 = a2 + 8;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
    return sub_100034930(a1, (_DWORD *)a2, (__int64)a3, a4);
  v10 = a3[1] ? (const char *)*a3 : &byte_100075A30;
  v11 = a2 + 8;
  do
  {
    if ( *(_QWORD *)(v9 + 40) )
      v12 = *(const char **)(v9 + 32);
    else
      v12 = &byte_100075A30;
    v13 = strcmp(v12, v10);
    if ( v13 >= 0 )
      v11 = v9;
    v9 = *(_QWORD *)(v9 + (((unsigned int)v13 >> 28) & 8));
  }
  while ( v9 );
  if ( v11 == v8 )
    return sub_100034930(a1, (_DWORD *)a2, (__int64)a3, a4);
  v14 = *(_QWORD *)(v11 + 40) ? *(const char **)(v11 + 32) : &byte_100075A30;
  if ( strcmp(v10, v14) < 0 )
    return sub_100034930(a1, (_DWORD *)a2, (__int64)a3, a4);
  copy_idcv(*a4, (unsigned __int8 *)(v11 + 56));
  *a4 = (unsigned __int8 *)(v11 + 56);
  return 1;
}
// 100075A30: using guessed type char byte_100075A30;
