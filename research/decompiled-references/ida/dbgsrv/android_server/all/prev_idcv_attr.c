/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_idcv_attr
// Address: 0x00000000000714D0

//----- (00000000000714D0) ----------------------------------------------------
char *__fastcall prev_idcv_attr(char *result, char *a2)
{
  _QWORD *v2; // x24
  _QWORD *v4; // x23
  __int64 v5; // x25
  void *v6; // x20
  const char *v7; // x21
  const char *v8; // x0
  int v9; // w0
  _QWORD *v10; // x8
  _QWORD *v11; // x8
  __int64 v12; // x20
  const char *v13; // x0
  int v14; // w8
  void *v15; // [xsp+0h] [xbp-70h] BYREF
  __int64 v16; // [xsp+8h] [xbp-68h]
  __int64 v17; // [xsp+10h] [xbp-60h]
  __int64 v18; // [xsp+18h] [xbp-58h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !result )
    return result;
  if ( *result != 5 )
    return nullptr;
  v2 = *((_QWORD **)result + 1);
  sub_39140(&v15, a2);
  v4 = v2 + 1;
  v5 = v2[1];
  if ( !v5 )
  {
    v6 = v15;
    if ( !v15 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v6 = v15;
  if ( v16 )
    v7 = (const char *)v15;
  else
    v7 = &byte_F154B;
  do
  {
    if ( *(_QWORD *)(v5 + 40) )
      v8 = *(const char **)(v5 + 32);
    else
      v8 = &byte_F154B;
    v9 = strcmp(v8, v7);
    if ( v9 >= 0 )
      v4 = (_QWORD *)v5;
    v5 = *(_QWORD *)(v5 + 8LL * (v9 < 0));
  }
  while ( v5 );
  if ( v6 )
  {
LABEL_16:
    v16 = 0;
    qfree(v6);
    v15 = nullptr;
    v17 = 0;
  }
LABEL_17:
  if ( v4 == (_QWORD *)*v2 )
    return nullptr;
  v10 = (_QWORD *)*v4;
  if ( *v4 )
  {
    do
    {
      v4 = v10;
      v10 = (_QWORD *)v10[1];
    }
    while ( v10 );
  }
  else
  {
    do
    {
      v11 = v4;
      v4 = (_QWORD *)v4[2];
    }
    while ( (_QWORD *)*v4 == v11 );
  }
  v12 = v4[5];
  if ( v12 )
    v13 = (const char *)v4[4];
  else
    v13 = &byte_F154B;
  v14 = strcmp(v13, a2);
  if ( v14 < 0 )
    result = &byte_F154B;
  else
    result = nullptr;
  if ( v12 )
  {
    if ( v14 < 0 )
      return (char *)v4[4];
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
