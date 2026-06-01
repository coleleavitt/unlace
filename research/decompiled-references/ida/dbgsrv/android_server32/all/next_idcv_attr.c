/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: next_idcv_attr
// Address: 0x0004616C

//----- (0004616C) --------------------------------------------------------
char *__fastcall next_idcv_attr(int a1, char *a2)
{
  int v2; // r4
  int v3; // r4
  _DWORD *v4; // r7
  _DWORD *v5; // r5
  const char *v6; // r6
  _DWORD *v7; // r4
  const char *v8; // r1
  char *v9; // r0
  const char *v11; // [sp+0h] [bp-24h]
  _DWORD *v12; // [sp+8h] [bp-1Ch]
  const char *v13; // [sp+14h] [bp-10h] BYREF
  int v14; // [sp+18h] [bp-Ch]
  int v15; // [sp+1Ch] [bp-8h]

  v2 = 0;
  if ( a1 && *(_BYTE *)a1 == 5 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    sub_1B09C((int)&v13, a2);
    v4 = (_DWORD *)(v3 + 4);
    v5 = *(_DWORD **)(v3 + 4);
    v12 = (_DWORD *)(v3 + 4);
    if ( v5 )
    {
      v6 = &byte_B3CBE;
      if ( v14 )
        v6 = v13;
      v11 = v13;
      v7 = (_DWORD *)(v3 + 4);
      do
      {
        v8 = &byte_B3CBE;
        if ( v5[5] )
          v8 = (const char *)v5[4];
        v4 = v5;
        if ( strcmp(v6, v8) >= 0 )
        {
          v4 = v7;
          ++v5;
        }
        v5 = (_DWORD *)*v5;
        v7 = v4;
      }
      while ( v5 );
      v9 = (char *)v11;
    }
    else
    {
      v9 = (char *)v13;
    }
    v2 = 0;
    if ( v9 )
    {
      v14 = 0;
      qfree(v9);
      v15 = 0;
      v13 = nullptr;
    }
    if ( v4 != v12 )
    {
      if ( v4[5] )
        return (char *)v4[4];
      else
        return &byte_B3CBE;
    }
  }
  return (char *)v2;
}
// B3CBE: using guessed type char byte_B3CBE;
