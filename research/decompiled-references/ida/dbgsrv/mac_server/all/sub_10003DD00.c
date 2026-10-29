/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003DD00
// Address: 0x000000010003DD00

//----- (000000010003DD00) ----------------------------------------------------
char __fastcall sub_10003DD00(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 **a4)
{
  __int64 v5; // rbx
  const char *v6; // r12
  __int64 v7; // r13
  int v8; // eax
  const char *v9; // rdi
  const char *v10; // rsi
  int v11; // eax
  unsigned __int8 *v12; // r13
  unsigned __int8 **v15; // [rsp+10h] [rbp-40h]
  __int64 v16; // [rsp+20h] [rbp-30h]

  v5 = *(_QWORD *)(a2 + 8);
  if ( !v5 )
    return sub_10003B500(a1, (_DWORD *)a2, (const char **)a3, a4);
  v15 = a4;
  v16 = a3;
  v6 = _s1;
  if ( *(_QWORD *)(a3 + 8) )
    v6 = *(const char **)a3;
  v7 = a2 + 8;
  do
  {
    v9 = _s1;
    if ( *(_QWORD *)(v5 + 40) )
      v9 = *(const char **)(v5 + 32);
    v8 = strcmp(v9, v6);
    if ( v8 >= 0 )
      v7 = v5;
    v5 = *(_QWORD *)(v5 + 8LL * ((unsigned int)v8 >> 31));
  }
  while ( v5 );
  a4 = v15;
  a3 = v16;
  if ( v7 == a2 + 8 )
    return sub_10003B500(a1, (_DWORD *)a2, (const char **)a3, a4);
  v10 = *(_QWORD *)(v7 + 40) ? *(const char **)(v7 + 32) : _s1;
  v11 = strcmp(v6, v10);
  a4 = v15;
  a3 = v16;
  if ( v11 < 0 )
    return sub_10003B500(a1, (_DWORD *)a2, (const char **)a3, a4);
  v12 = (unsigned __int8 *)(v7 + 56);
  copy_idcv(*v15, v12);
  *v15 = v12;
  return 1;
}
