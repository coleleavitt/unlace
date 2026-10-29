/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27340
// Address: 0x00027340

//----- (00027340) --------------------------------------------------------
_DWORD *__fastcall sub_27340(_DWORD *a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v7; // r7
  int v8; // r1
  int v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r0
  int v12; // r5
  _DWORD *v13; // r1
  int v14; // r4
  int v15; // r3
  int v16; // r4
  int v17; // r6
  int v18; // r7
  unsigned int v19; // r5
  int v22; // [sp+4h] [bp-18h]
  int v23; // [sp+8h] [bp-14h]
  _DWORD *v25; // [sp+10h] [bp-Ch]
  int v26; // [sp+18h] [bp-4h]
  int v27; // [sp+18h] [bp-4h]
  int v28; // [sp+18h] [bp-4h]

  while ( a3 != a2 )
  {
    v7 = a3;
    v22 = a5;
    v8 = a5 - *a4;
    v9 = -1171354717 * (v8 >> 2);
    v10 = v9 - 1;
    v25 = a4;
    if ( v8 < 45 )
    {
      v26 = (93 - v9) / -93;
      v12 = a4[v26] + 44 * (92 - (93 - v9) % 93);
      v13 = &a4[v26];
    }
    else
    {
      v11 = v10 / 0x5D;
      v12 = a4[v10 / 0x5D] + 44 * (v10 % 0x5D);
      v13 = &a4[v11];
    }
    v14 = -1171354717 * ((v12 + 44 - *v13) >> 2);
    v15 = 44;
    a3 -= 4 * ((v12 + 44 - *v13) >> 2);
    if ( -1171354717 * ((v7 - a2) >> 2) <= v14 )
    {
      a3 = a2;
      v14 = -1171354717 * ((v7 - a2) >> 2);
    }
    v23 = v14;
    if ( v7 != a3 )
    {
      do
      {
        v16 = -v15;
        v27 = v7 - v15;
        v17 = a3;
        v18 = v15;
        copy_debug_event(v12, v27);
        v15 = v18;
        v7 = v27;
        a3 = v17;
        v12 += v16;
      }
      while ( v17 != v27 );
    }
    if ( v23 )
    {
      v19 = -1171354717 * ((v22 - *v25) >> 2) - v23;
      if ( (int)v19 < 1 )
      {
        v28 = (int)(92 - v19) / -93;
        a5 = v25[v28] + v15 * (92 - (int)(92 - v19) % 93);
        a4 = &v25[v28];
      }
      else
      {
        a5 = v25[v19 / 0x5D] + v15 * (v19 % 0x5D);
        a4 = &v25[v19 / 0x5D];
      }
    }
    else
    {
      a4 = v25;
      a5 = v22;
    }
  }
  *a1 = a4;
  a1[1] = a5;
  return a1;
}
