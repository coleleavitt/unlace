/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_idcv_attr
// Address: 0x00046230

//----- (00046230) --------------------------------------------------------
char *__fastcall prev_idcv_attr(int a1, char *a2)
{
  char *v2; // r5
  _DWORD *v3; // r6
  _DWORD *v4; // r4
  int v5; // r6
  const char *v6; // r7
  const char *v7; // r0
  int v8; // r0
  int *v9; // r1
  char *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  bool v13; // zf
  int v14; // r4
  const char *v15; // r0
  int v16; // r0
  char *v17; // r1
  const char *v19; // [sp+0h] [bp-24h]
  _DWORD *v21; // [sp+10h] [bp-14h]
  const char *v22; // [sp+14h] [bp-10h] BYREF
  int v23; // [sp+18h] [bp-Ch]
  int v24; // [sp+1Ch] [bp-8h]

  v2 = nullptr;
  if ( !a1 || *(_BYTE *)a1 != 5 )
    return v2;
  v3 = *(_DWORD **)(a1 + 8);
  sub_1B09C((int)&v22, a2);
  v4 = v3 + 1;
  v21 = v3;
  v5 = v3[1];
  if ( v5 )
  {
    v6 = &byte_B3CBE;
    if ( v23 )
      v6 = v22;
    v19 = v22;
    do
    {
      v7 = &byte_B3CBE;
      if ( *(_DWORD *)(v5 + 20) )
        v7 = *(const char **)(v5 + 16);
      v8 = strcmp(v7, v6);
      if ( v8 >= 0 )
        v4 = (_DWORD *)v5;
      v9 = (int *)(v5 + 4);
      if ( v8 >= 0 )
        v9 = (int *)v5;
      v5 = *v9;
    }
    while ( *v9 );
    v10 = (char *)v19;
    v2 = nullptr;
    if ( !v19 )
      goto LABEL_18;
  }
  else
  {
    v10 = (char *)v22;
    if ( !v22 )
      goto LABEL_18;
  }
  v23 = 0;
  qfree(v10);
  v24 = 0;
  v22 = nullptr;
LABEL_18:
  if ( v4 != (_DWORD *)*v21 )
  {
    v11 = (_DWORD *)*v4;
    if ( *v4 )
    {
      do
      {
        v12 = v11;
        v11 = (_DWORD *)v11[1];
      }
      while ( v11 );
    }
    else
    {
      do
      {
        v12 = (_DWORD *)v4[2];
        v13 = *v12 == (_DWORD)v4;
        v4 = v12;
      }
      while ( v13 );
    }
    v14 = v12[5];
    v15 = &byte_B3CBE;
    if ( v14 )
      v15 = (const char *)v12[4];
    v16 = strcmp(v15, a2);
    v17 = nullptr;
    if ( v16 < 0 )
      v17 = &byte_B3CBE;
    if ( v14 )
    {
      v2 = v17;
      if ( v16 < 0 )
        return (char *)v12[4];
    }
    else
    {
      return v17;
    }
  }
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
