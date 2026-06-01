/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58F10
// Address: 0x00058F10

//----- (00058F10) --------------------------------------------------------
int __fastcall sub_58F10(_DWORD *a1, int a2)
{
  int v2; // r4
  void *v4; // r0
  void *v5; // r0
  int v6; // r1
  int v7; // r0
  signed int v8; // r0
  _DWORD *v9; // r1
  _DWORD *v10; // r3
  int v11; // r4
  int v12; // r2
  int v14; // [sp+8h] [bp-10h]
  int v15; // [sp+Ch] [bp-Ch]
  int v16; // [sp+10h] [bp-8h]

  v2 = a2;
  v4 = *(void **)(a2 + 12);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 16) = 0;
    qfree(v4);
    *(_DWORD *)(v2 + 20) = 0;
    *(_DWORD *)(v2 + 12) = 0;
  }
  v5 = *(void **)v2;
  if ( *(_DWORD *)v2 )
  {
    *(_DWORD *)(v2 + 4) = 0;
    qfree(v5);
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)v2 = 0;
  }
  v6 = a1[1];
  v7 = *a1 + 40 * v6 - v2;
  if ( v7 >= 41 )
  {
    v8 = v7 / 0x28u - 2;
    v14 = v2;
    v9 = (_DWORD *)(v2 + 64);
    do
    {
      v10 = v9 - 6;
      *(v9 - 16) = *(v9 - 6);
      *v10 = 0;
      v16 = *(v9 - 4);
      v15 = *(v9 - 3);
      v11 = *(v9 - 2);
      v12 = *(v9 - 1);
      *(v9 - 15) = *(v9 - 5);
      *(v9 - 11) = v12;
      *(v9 - 12) = v11;
      *(v9 - 13) = v15;
      *(v9 - 14) = v16;
      v10[1] = 0;
      v10[2] = 0;
      v10[3] = 0;
      v10[4] = 0;
      v10[5] = 0;
      *(v9 - 7) = v9[3];
      *(v9 - 8) = v9[2];
      *(v9 - 9) = v9[1];
      *(v9 - 10) = *v9;
      v9 += 10;
      --v8;
    }
    while ( v8 >= 0 );
    v6 = a1[1];
    v2 = v14;
  }
  a1[1] = v6 - 1;
  return v2;
}
