/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D3C
// Address: 0x00046D3C

//----- (00046D3C) --------------------------------------------------------
unsigned __int8 *__fastcall sub_46D3C(_DWORD *a1, _DWORD *a2)
{
  unsigned __int8 *v2; // r3
  int v4; // r7
  int *v6; // r4
  int *v7; // r8
  const char *v8; // r10
  const char *v9; // r11
  int v10; // r7
  _DWORD *v11; // r6
  int *v12; // r11
  int *v13; // r0
  int *v14; // r3
  int *v15; // r6
  int *v16; // r4
  bool v17; // zf
  int v18; // r0
  int *v19; // r1
  int *v21; // [sp+0h] [bp-Ch]
  unsigned __int8 *v22; // [sp+4h] [bp-8h]

  v2 = (unsigned __int8 *)a1[2];
  v22 = v2;
  v21 = a1 + 1;
  if ( !v2 )
  {
    v7 = a1 + 1;
    LOBYTE(v2) = 1;
LABEL_13:
    v10 = a1[5];
    if ( (int *)a1[3] != v7 )
      v2 = nullptr;
    if ( v2 )
    {
      sub_3FCE4((int)a1, v22);
      goto LABEL_17;
    }
    return v2;
  }
  v4 = a2[1];
  v6 = (int *)a1[2];
  v7 = a1 + 1;
  while ( 1 )
  {
    v8 = v6[5] ? (const char *)v6[4] : (const char *)&dword_8DB98;
    v9 = v4 ? (const char *)*a2 : (const char *)&dword_8DB98;
    if ( strcmp(v8, v9) >= 0 )
      break;
    v6 = (int *)v6[3];
LABEL_11:
    if ( !v6 )
    {
      v2 = (unsigned __int8 *)(v21 == v7);
      goto LABEL_13;
    }
  }
  if ( strcmp(v9, v8) < 0 )
  {
    v7 = v6;
    v6 = (int *)v6[2];
    goto LABEL_11;
  }
  v11 = (_DWORD *)v6[3];
  v12 = sub_4253C((_DWORD *)v6[2], v6, (int)a2);
  v13 = sub_4258C(v11, v7, (int)a2);
  v14 = (int *)a1[3];
  v15 = v13;
  v16 = v12;
  v10 = a1[5];
  v17 = v14 == v12;
  if ( v14 == v12 )
    v17 = v21 == v13;
  if ( v17 )
    v2 = (unsigned __int8 *)a1[2];
  else
    v2 = nullptr;
  if ( !v17 )
  {
    if ( v13 != v12 )
    {
      do
      {
        v18 = sub_81478(v16);
        v19 = v16;
        v16 = (int *)v18;
        sub_46D0C((int)a1, v19);
      }
      while ( v16 != v15 );
      v10 -= a1[5];
      return (unsigned __int8 *)v10;
    }
    return v2;
  }
  sub_3FCE4((int)a1, v2);
LABEL_17:
  a1[2] = 0;
  a1[5] = 0;
  a1[3] = v21;
  a1[4] = v21;
  return (unsigned __int8 *)v10;
}
// 46DA8: masking with 0x1 was optimized away because r3.4 <= 0x1
// 81478: using guessed type int __fastcall sub_81478(_DWORD);
// 8DB98: using guessed type int dword_8DB98;
