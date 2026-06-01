/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27058
// Address: 0x00027058

//----- (00027058) --------------------------------------------------------
int __fastcall sub_27058(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, int a5, _DWORD *a6, int a7)
{
  int v7; // r4
  int v8; // r6
  _DWORD *v9; // r5
  _DWORD *v10; // r3
  int v11; // r2
  int v12; // r0
  int v13; // r5
  int v14; // r1
  int v15; // r0
  int v16; // r0
  unsigned int v17; // r4
  unsigned int v18; // r0
  signed int v19; // r4
  int v22; // [sp+14h] [bp-28h]
  _DWORD *v23; // [sp+2Ch] [bp-10h]
  _DWORD *v24; // [sp+30h] [bp-Ch] BYREF
  int v25; // [sp+34h] [bp-8h]
  int v26; // [sp+38h] [bp-4h]

  v7 = a5;
  if ( a5 == a3 || (v8 = -1171354717 * ((a5 - *a4) >> 2) + 93 * (a4 - a2) + (a3 - *a2) / -44, v8 < 1) )
  {
    v10 = a6;
    v11 = a7;
  }
  else
  {
    v9 = a4;
    v10 = a6;
    v11 = a7;
    do
    {
      while ( 1 )
      {
        v12 = *v9;
        if ( *v9 == v7 )
        {
          v12 = *(v9 - 1);
          v7 = v12 + 4092;
          v23 = v9 - 1;
        }
        else
        {
          v23 = v9;
        }
        v13 = -1171354717 * ((v7 - v12) >> 2);
        v14 = v7 - 44 * v8;
        if ( v13 <= v8 )
          v14 = v12;
        sub_27340(&v24, v14, v7, v10, v11);
        v7 -= 44;
        v15 = v8;
        if ( v13 <= v8 )
          v15 = v13;
        v8 -= v15;
        v16 = v15 - 1;
        v11 = v25;
        v10 = v24;
        if ( v16 )
          break;
        v9 = v23;
        if ( v8 <= 0 )
          goto LABEL_20;
      }
      v17 = -1171354717 * ((v7 - *v23) >> 2) - v16;
      if ( (int)v17 < 1 )
      {
        v19 = 92 - v17;
        v22 = v19 / -93;
        v7 = v23[v19 / -93] + 44 * (92 - v19 % 93);
        v9 = &v23[v22];
      }
      else
      {
        v18 = v17 / 0x5D;
        v7 = v23[v17 / 0x5D] + 44 * (v17 % 0x5D);
        v9 = &v23[v18];
      }
      v10 = v24;
      v11 = v25;
    }
    while ( v8 > 0 );
  }
LABEL_20:
  *a1 = v10;
  a1[1] = v11;
  return _stack_chk_guard - v26;
}
