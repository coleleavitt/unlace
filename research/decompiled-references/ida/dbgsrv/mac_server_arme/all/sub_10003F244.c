/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003F244
// Address: 0x000000010003F244

//----- (000000010003F244) ----------------------------------------------------
__int64 __fastcall sub_10003F244(_QWORD *a1, _QWORD *a2)
{
  __int64 *v2; // x20
  _QWORD *v3; // x23
  const char *v5; // x22
  _QWORD *v6; // x19
  __int64 v7; // x25
  const char *v8; // x0
  int v9; // w0
  const char *v10; // x1
  _QWORD *v12; // x9
  _QWORD *v13; // x8
  _QWORD *v14; // x9
  bool v15; // zf
  int v16; // w8
  void *v17; // x0
  void *v18; // x0

  v3 = a1 + 1;
  v2 = (__int64 *)a1[1];
  if ( !v2 )
    return 0;
  v5 = a2[1] ? (const char *)*a2 : &byte_10007AE40;
  v6 = a1 + 1;
  v7 = a1[1];
  do
  {
    if ( *(_QWORD *)(v7 + 40) )
      v8 = *(const char **)(v7 + 32);
    else
      v8 = &byte_10007AE40;
    v9 = strcmp(v8, v5);
    if ( v9 >= 0 )
      v6 = (_QWORD *)v7;
    v7 = *(_QWORD *)(v7 + (((unsigned int)v9 >> 28) & 8));
  }
  while ( v7 );
  if ( v6 == v3 )
    return 0;
  v10 = v6[5] ? (const char *)v6[4] : &byte_10007AE40;
  if ( strcmp(v5, v10) < 0 )
    return 0;
  v12 = (_QWORD *)v6[1];
  if ( v12 )
  {
    do
    {
      v13 = v12;
      v12 = (_QWORD *)*v12;
    }
    while ( v12 );
  }
  else
  {
    v14 = v6;
    do
    {
      v13 = (_QWORD *)v14[2];
      v15 = *v13 == (_QWORD)v14;
      v14 = v13;
    }
    while ( !v15 );
  }
  if ( (_QWORD *)*a1 == v6 )
    *a1 = v13;
  --a1[2];
  sub_10000BEF0(v2, v6);
  v16 = *((unsigned __int8 *)v6 + 56);
  if ( v16 == 5 )
  {
    sub_10003307C(v6[8], (unsigned __int8 *)v6 + 56);
  }
  else if ( v16 == 7 )
  {
    v17 = (void *)v6[8];
    if ( v17 )
    {
      v6[9] = 0;
      qfree(v17);
      v6[8] = 0;
      v6[10] = 0;
    }
  }
  *((_BYTE *)v6 + 56) = 2;
  v6[8] = 0;
  v18 = (void *)v6[4];
  if ( v18 )
  {
    v6[5] = 0;
    qfree(v18);
    v6[4] = 0;
    v6[6] = 0;
  }
  operator delete(v6);
  return 1;
}
// 10007AE40: using guessed type char byte_10007AE40;
