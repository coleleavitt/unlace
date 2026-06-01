/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37CA8
// Address: 0x00037CA8

//----- (00037CA8) --------------------------------------------------------
int __fastcall sub_37CA8(int a1)
{
  _DWORD *v2; // r4
  int v3; // r2
  int v4; // r3
  char *v5; // r1
  int *v6; // r0
  char *v8; // r0
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r2
  int v13; // r3
  unsigned __int8 v14[8]; // [sp+0h] [bp-24h] BYREF
  int v15; // [sp+8h] [bp-1Ch]
  int v16; // [sp+Ch] [bp-18h]
  int v17; // [sp+10h] [bp-14h]
  int v18; // [sp+14h] [bp-10h]

  v2 = *(_DWORD **)(a1 + 108);
  v3 = *(_DWORD *)(a1 + 84);
  v4 = v2[9];
  if ( v4 )
  {
    if ( *(_DWORD *)(a1 + 244) + v4 + 1 != v3 )
      return sub_70B98(1268);
  }
  else
  {
    *(_DWORD *)(a1 + 244) = v3 - 1;
    v4 = v2[9];
  }
  v5 = (char *)v2[8];
  if ( (unsigned int)(v4 + 1) > v2[10] )
  {
    v8 = (char *)sub_78018((int)(v2 + 8), v5, v4 + 1, 0x18u);
    v4 = v2[9];
    v5 = v8;
    v2[8] = v8;
  }
  v6 = (int *)&v5[24 * v4];
  *(_BYTE *)v6 = 2;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[2] = 0;
  ++v2[9];
  if ( *(_DWORD *)(a1 + 236) != 1 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1437);
  }
  sub_42624(v6, *(int **)(a1 + 232));
  v9 = *(_DWORD *)(a1 + 236);
  v10 = *(_DWORD *)(a1 + 232);
  v14[0] = 2;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  sub_45B30(v14, (unsigned __int8 *)(v10 + 24 * v9 - 24));
  v11 = *(_DWORD *)(a1 + 236);
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 232);
    v13 = v11 - 1;
    *(_DWORD *)(a1 + 236) = v13;
    sub_45758((unsigned __int8 *)(v12 + 24 * v13));
  }
  sub_45758(v14);
  return 0;
}
// D6C20: using guessed type char under_debugger;
