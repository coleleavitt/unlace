/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_783F8
// Address: 0x000783F8

//----- (000783F8) --------------------------------------------------------
int __fastcall sub_783F8(int result, int a2, int a3, int a4, int a5)
{
  int v6; // r5
  int v7; // r8
  int v8; // r7
  int v9; // r6
  int v10; // r4
  int v11; // r11
  int v12; // r0
  int *v13; // r4
  bool v14; // zf
  _BOOL4 v15; // r0
  int *v16; // r11
  int v17; // r1
  int v18; // r7
  int v19; // r1
  bool v20; // cc
  int v21; // r2
  int *v22; // r8
  _BOOL4 v23; // r1
  int v24; // r6
  int v25; // r2
  int *v26; // r2
  int v27; // r1

  v6 = result;
  v7 = (a3 - 1) / 2;
  if ( a2 >= v7 )
  {
    v13 = (int *)(result + 8 * a2);
    v9 = a2;
    if ( (a3 & 1) != 0 )
      goto LABEL_19;
    goto LABEL_10;
  }
  v8 = a2;
  do
  {
    v9 = 2 * (v8 + 1);
    v10 = 16 * (v8 + 1);
    v11 = *(_DWORD *)(v6 + v10);
    v12 = *(_DWORD *)(v6 + 8 * (v9 + 0x1FFFFFFF));
    v13 = (int *)(v10 + v6);
    v14 = v11 == v12;
    v15 = v11 < v12;
    if ( v14 )
      v15 = v13[1] < *(_DWORD *)(v6 + 8 * (v9 + 0x1FFFFFFF) + 4);
    v16 = (int *)(v6 + 8 * v8);
    if ( v15 )
    {
      --v9;
      v13 = (int *)(v6 + 8 * v9);
    }
    result = *v13;
    v17 = v13[1];
    v8 = v9;
    *v16 = *v13;
    v16[1] = v17;
  }
  while ( v9 < v7 );
  if ( (a3 & 1) == 0 )
  {
LABEL_10:
    if ( v9 == (a3 - 2) / 2 )
    {
      v24 = 2 * (v9 + 1);
      v25 = v24 + 0x20000000;
      v9 = v24 - 1;
      v26 = (int *)(v6 + 8 * (v25 - 1));
      result = *v26;
      v27 = v26[1];
      *v13 = *v26;
      v13[1] = v27;
      v13 = (int *)(v6 + 8 * v9);
    }
  }
  v18 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v21 = *(_DWORD *)(v6 + 8 * v18);
      v22 = (int *)(v6 + 8 * v18);
      v23 = v21 < a4;
      if ( v21 == a4 )
        v23 = v22[1] < a5;
      v13 = (int *)(v6 + 8 * v9);
      v9 = v18;
      if ( !v23 )
        break;
      result = *v22;
      v19 = v22[1];
      v20 = a2 < v18;
      v18 = (v18 - 1) / 2;
      *v13 = *v22;
      v13[1] = v19;
      if ( !v20 )
      {
        *v22 = a4;
        v22[1] = a5;
        return result;
      }
    }
  }
LABEL_19:
  *v13 = a4;
  v13[1] = a5;
  return result;
}
