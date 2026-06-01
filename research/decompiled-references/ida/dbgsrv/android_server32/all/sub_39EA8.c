/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39EA8
// Address: 0x00039EA8

//----- (00039EA8) --------------------------------------------------------
int __fastcall sub_39EA8(int a1)
{
  unsigned int v2; // r7
  _DWORD *v3; // r6
  int v4; // r0
  int *v5; // r5
  int v6; // r4
  int v7; // r1
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r0
  int v17; // [sp+0h] [bp-44h]
  int *v18; // [sp+4h] [bp-40h]
  unsigned __int8 v19[8]; // [sp+10h] [bp-34h] BYREF
  int v20; // [sp+18h] [bp-2Ch]
  int v21; // [sp+1Ch] [bp-28h]
  int v22; // [sp+20h] [bp-24h]
  int v23; // [sp+24h] [bp-20h]
  unsigned __int8 v24[8]; // [sp+28h] [bp-1Ch] BYREF
  int v25; // [sp+30h] [bp-14h]
  int v26; // [sp+34h] [bp-10h]
  int v27; // [sp+38h] [bp-Ch]
  int v28; // [sp+3Ch] [bp-8h]

  v2 = *(_DWORD *)(a1 + 236);
  v18 = (int *)(a1 + 236);
  if ( v2 <= 2 )
  {
    if ( !under_debugger )
      interr(1439);
    __debugbreak();
  }
  v17 = *(_DWORD *)(a1 + 232);
  v3 = (_DWORD *)(v17 + 24 * (v2 - 3));
  v4 = sub_4ACC8((int)v3);
  v5 = (int *)(a1 + 232);
  v6 = 0;
  v7 = -1;
  if ( !v4 )
    return -1;
  if ( v3[2] )
    v7 = -2;
  swap_idcvs(v3, (void *)(v17 + 24 * (v7 + v2)));
  v8 = *v5;
  v9 = *v18;
  v24[0] = 2;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  copy_idcv(v24, (unsigned __int8 *)(v8 + 24 * v9 - 24));
  if ( *v18 )
  {
    v10 = *v5;
    v11 = *v18 - 1;
    *v18 = v11;
    free_idcv((unsigned __int8 *)(v10 + 24 * v11));
  }
  free_idcv(v24);
  v12 = *v5;
  v13 = *v18;
  v19[0] = 2;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  copy_idcv(v19, (unsigned __int8 *)(v12 + 24 * v13 - 24));
  if ( *v18 )
  {
    v14 = *v5;
    v15 = *v18 - 1;
    *v18 = v15;
    free_idcv((unsigned __int8 *)(v14 + 24 * v15));
  }
  free_idcv(v19);
  return v6;
}
// E0550: using guessed type char under_debugger;
