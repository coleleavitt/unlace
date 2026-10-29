/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4696C
// Address: 0x0004696C

//----- (0004696C) --------------------------------------------------------
_DWORD *__fastcall sub_4696C(int a1, unsigned __int8 *a2, int a3, int a4)
{
  _DWORD *v7; // r0
  size_t v8; // r6
  _DWORD *v9; // r7
  int v10; // r1
  int v11; // r2
  unsigned __int8 *v12; // r6
  _DWORD *v13; // r9
  _DWORD *v14; // r0
  _DWORD *v15; // r4
  size_t v16; // r8
  int v17; // r3
  int v18; // r1
  void *v20; // r0
  void *v21; // r0
  const void *v22; // r1

  v7 = sub_805CC(0x38u);
  v8 = *((_DWORD *)a2 + 5);
  v9 = v7;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  if ( v8 )
  {
    v21 = sub_77E84(v8);
    v22 = *((const void **)a2 + 4);
    v9[4] = v21;
    v9[6] = v8;
    memcpy(v21, v22, v8);
    v9[5] = v8;
  }
  *((_BYTE *)v9 + 32) = 2;
  v9[10] = 0;
  v9[11] = 0;
  v9[12] = 0;
  v9[13] = 0;
  sub_459A0((unsigned __int8 *)v9 + 32, a2 + 32);
  v10 = *((_DWORD *)a2 + 3);
  v11 = *(_DWORD *)a2;
  v9[1] = a3;
  v9[2] = 0;
  v9[3] = 0;
  *v9 = v11;
  if ( v10 )
    v9[3] = sub_4696C(a1, v10, v9, a4);
  v12 = *((unsigned __int8 **)a2 + 2);
  if ( v12 )
  {
    v13 = v9;
    do
    {
      v14 = sub_805CC(0x38u);
      v14[4] = 0;
      v14[5] = 0;
      v15 = v14;
      v14[6] = 0;
      v16 = *((_DWORD *)v12 + 5);
      if ( v16 )
      {
        v20 = sub_77E84(*((_DWORD *)v12 + 5));
        v15[4] = v20;
        v15[6] = v16;
        memcpy(v20, *((const void **)v12 + 4), v16);
        v15[5] = v16;
      }
      *((_BYTE *)v15 + 32) = 2;
      v15[10] = 0;
      v15[11] = 0;
      v15[12] = 0;
      v15[13] = 0;
      sub_459A0((unsigned __int8 *)v15 + 32, v12 + 32);
      v17 = *(_DWORD *)v12;
      v15[2] = 0;
      v15[3] = 0;
      *v15 = v17;
      v13[2] = v15;
      v15[1] = v13;
      v18 = *((_DWORD *)v12 + 3);
      if ( v18 )
        v15[3] = sub_4696C(a1, v18, v15, a4);
      v12 = *((unsigned __int8 **)v12 + 2);
      v13 = v15;
    }
    while ( v12 );
  }
  return v9;
}
