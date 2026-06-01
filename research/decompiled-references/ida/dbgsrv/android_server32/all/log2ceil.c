/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: log2ceil
// Address: 0x00071D40

//----- (00071D40) --------------------------------------------------------
int __fastcall log2ceil(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r4
  bool v3; // zf
  unsigned int v4; // r1
  unsigned int v5; // r6
  unsigned int v6; // r0
  int v7; // r2
  int v8; // r5
  unsigned int v9; // r7
  unsigned int v10; // r4
  unsigned int v11; // r0
  unsigned int v12; // r6
  _BOOL4 v13; // r7
  int v14; // r4
  unsigned int v15; // r0
  bool v16; // cf
  int v17; // r0
  int v18; // r5
  int v19; // r4
  int v20; // r5
  int v21; // r2
  int v22; // r1
  int v23; // r1
  int v24; // r2
  _BOOL4 v26; // [sp+4h] [bp-10h]
  unsigned int v27; // [sp+8h] [bp-Ch]
  _BOOL4 v29; // [sp+10h] [bp-4h]

  v2 = a2;
  v3 = a2 == 0;
  v4 = 0;
  if ( v3 )
    v4 = v2;
  v27 = v2;
  if ( !v2 )
    v2 = a1;
  v5 = HIWORD(v2) + (v4 << 16);
  v6 = HIWORD(v4);
  v7 = v5 | HIWORD(v4);
  if ( !v7 )
  {
    v5 = v2;
    v6 = v4;
  }
  v8 = 1;
  v29 = __PAIR64__(v6, v5) > 0xFF;
  v9 = (v5 >> 8) + (v6 << 24);
  if ( __PAIR64__(v6, v5) <= 0xFF )
    v9 = v5;
  v10 = v6 >> 8;
  if ( __PAIR64__(v6, v5) <= 0xFF )
    v10 = v6;
  v11 = (v9 >> 4) + (v10 << 28);
  if ( __PAIR64__(v10, v9) <= 0xF )
    v11 = v9;
  v12 = v10 >> 4;
  if ( __PAIR64__(v10, v9) <= 0xF )
    v12 = v10;
  v26 = __PAIR64__(v10, v9) > 0xF;
  v13 = __PAIR64__(v12, v11) > 3;
  v14 = (v11 >> 2) + (v12 << 30);
  if ( __PAIR64__(v12, v11) <= 3 )
    v14 = v11;
  v15 = v12 >> 2;
  if ( !v13 )
    v15 = v12;
  v16 = __PAIR64__(v15, v14) <= 1;
  v17 = 1;
  if ( v16 )
    v17 = 0;
  if ( !v27 )
    v8 = 0;
  v18 = 32 * v8;
  v19 = v18 + 16;
  if ( !v7 )
    v19 = v18;
  v20 = v19 + 8;
  if ( !v29 )
    v20 = v19;
  v21 = v20 + 4;
  if ( !v26 )
    v21 = v20;
  v22 = v21 | 2;
  if ( !v13 )
    v22 = v21;
  v23 = v22 | v17;
  v24 = v23 + 1;
  if ( !((a1 - 1) & a1 | ((__PAIR64__(v27, a1) - 1) >> 32) & v27) )
    return v23;
  return v24;
}
