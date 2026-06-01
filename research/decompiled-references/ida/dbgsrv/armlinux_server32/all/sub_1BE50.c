/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BE50
// Address: 0x0001BE50

//----- (0001BE50) --------------------------------------------------------
void __fastcall sub_1BE50(int a1, int a2, int a3)
{
  _DWORD *v6; // r3
  _DWORD *v7; // r1
  int v8; // r2
  int v9; // r6
  int v10; // r0
  int v11; // r2
  int v12; // [sp+0h] [bp-34h] BYREF
  int v13; // [sp+4h] [bp-30h]
  int v14; // [sp+8h] [bp-2Ch]
  char v15; // [sp+Ch] [bp-28h]
  int v16; // [sp+10h] [bp-24h]
  int v17; // [sp+14h] [bp-20h]
  int v18; // [sp+18h] [bp-1Ch]
  int v19; // [sp+1Ch] [bp-18h]
  int v20; // [sp+20h] [bp-14h]
  int v21; // [sp+24h] [bp-10h]
  int v22; // [sp+28h] [bp-Ch]

  v6 = *(_DWORD **)(a1 + 1008);
  if ( !v6 )
    goto LABEL_11;
  v7 = (_DWORD *)(a1 + 1004);
  do
  {
    v8 = v6[4];
    if ( v8 < a2 )
      v6 = (_DWORD *)v6[3];
    else
      v7 = v6;
    if ( v8 >= a2 )
      v6 = (_DWORD *)v6[2];
  }
  while ( v6 );
  if ( (_DWORD *)(a1 + 1004) != v7 && v7[4] <= a2 )
  {
    v7[10] = a3;
    v13 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v12 = -1;
    v14 = -1;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    sub_6E52C(&v12, 4);
    if ( (((v16 & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(3296);
    }
    v9 = *(_DWORD *)(a1 + 80);
    v10 = *(_DWORD *)(a1 + 1068);
    v11 = *(_DWORD *)(a1 + 88) - 44;
    v17 = 0;
    v13 = a2;
    v12 = v10;
    v14 = -1;
    v15 = 1;
    if ( v9 == v11 )
    {
      sub_1BC14((_DWORD *)(a1 + 56), (int)&v12);
    }
    else
    {
      *(_DWORD *)v9 = -1;
      *(_DWORD *)(v9 + 4) = 0;
      *(_DWORD *)(v9 + 8) = -1;
      *(_BYTE *)(v9 + 12) = 0;
      *(_DWORD *)(v9 + 16) = 0;
      sub_6E614(v9, (int)&v12);
      *(_DWORD *)(a1 + 80) += 44;
    }
    *(_BYTE *)(a1 + 1112) = 0;
    if ( a3 == 3 )
      sub_17AF4(a1, a2);
    sub_6E484(&v12);
  }
  else
  {
LABEL_11:
    sub_171B0((int)"unknown thread %d died\n", a2);
  }
}
// D6C20: using guessed type char under_debugger;
