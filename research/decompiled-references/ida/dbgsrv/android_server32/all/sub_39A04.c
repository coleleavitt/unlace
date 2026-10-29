/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39A04
// Address: 0x00039A04

//----- (00039A04) --------------------------------------------------------
int __fastcall sub_39A04(int a1)
{
  _DWORD *v2; // r7
  int v3; // r1
  _DWORD *v4; // r0
  unsigned int v5; // r2
  int v6; // r5
  _BYTE *v7; // r0
  int v8; // r1
  _DWORD *v9; // r5
  _DWORD *v10; // r0
  int *v11; // r7
  int v12; // r1
  int v13; // r2
  int *v14; // r4
  int v15; // r1
  int v16; // r0
  unsigned __int8 v18[8]; // [sp+14h] [bp-1Ch] BYREF
  int v19; // [sp+1Ch] [bp-14h]
  int v20; // [sp+20h] [bp-10h]
  int v21; // [sp+24h] [bp-Ch]
  int v22; // [sp+28h] [bp-8h]

  v2 = *(_DWORD **)(a1 + 108);
  v3 = v2[9];
  v4 = v2 + 8;
  if ( v3 )
  {
    v5 = v3 + 1;
    if ( v3 + 1 + *(_DWORD *)(a1 + 244) != *(_DWORD *)(a1 + 84) )
      return set_qerrno(1268);
  }
  else
  {
    *(_DWORD *)(a1 + 244) = *(_DWORD *)(a1 + 84) - 1;
    v3 = v2[9];
    v5 = v3 + 1;
  }
  if ( v2[10] >= v5 )
  {
    v7 = (_BYTE *)*v4;
  }
  else
  {
    v7 = qvector_reserve((int)v4, (void *)v2[8], v5, 0x18u);
    v2[8] = v7;
    v3 = v2[9];
  }
  v8 = 24 * v3;
  v7[v8] = 2;
  v9 = &v7[v8];
  memset(&v7[v8 + 8], 0, 0x10u);
  v10 = v9;
  v6 = 0;
  v10[2] = 0;
  ++v2[9];
  v11 = (int *)(a1 + 236);
  if ( *(_DWORD *)(a1 + 236) != 1 )
  {
    if ( !under_debugger )
      interr(1437);
    __debugbreak();
  }
  swap_idcvs(v10, *(void **)(a1 + 232));
  v12 = *(_DWORD *)(a1 + 232);
  v13 = *v11;
  v18[0] = 2;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  copy_idcv(v18, (unsigned __int8 *)(v12 + 24 * v13 - 24));
  v14 = (int *)(a1 + 232);
  if ( *v11 )
  {
    v15 = *v14;
    v16 = *v11 - 1;
    *v11 = v16;
    free_idcv((unsigned __int8 *)(v15 + 24 * v16));
  }
  free_idcv(v18);
  return v6;
}
// E0550: using guessed type char under_debugger;
