/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B318
// Address: 0x0008B318

//----- (0008B318) --------------------------------------------------------
int __fastcall sub_8B318(int result)
{
  int v1; // r4
  int v2; // r5
  _WORD *v3; // r2
  int *v4; // r1
  int v5; // r4
  int v6; // r5
  int v7; // r4
  unsigned int v8; // r3
  int v9; // r4
  int v10; // r4
  char v11; // r3
  int v12; // r4
  int v13; // r4
  int v14; // r4
  char v15; // r3
  int v16; // r4
  int v17; // r4

  v1 = *(_DWORD *)(result + 5820);
  v2 = (2 << v1) | *(unsigned __int16 *)(result + 5816);
  *(_WORD *)(result + 5816) = v2;
  v3 = (_WORD *)(result + 5816);
  v4 = (int *)(result + 5820);
  if ( v1 < 14 )
  {
    v9 = v1 + 3;
    LOBYTE(v8) = v2;
  }
  else
  {
    v5 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v5 + 1;
    *(_BYTE *)(*(_DWORD *)(result + 8) + v5) = v2;
    LOBYTE(v5) = *(_BYTE *)(result + 5817);
    v6 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v6 + 1;
    *(_BYTE *)(*(_DWORD *)(result + 8) + v6) = v5;
    v7 = *v4;
    v8 = 2u >> (16 - *(_BYTE *)v4);
    *v3 = v8;
    v9 = v7 - 13;
  }
  *v4 = v9;
  if ( v9 < 10 )
  {
    v13 = v9 + 7;
  }
  else
  {
    v10 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v10 + 1;
    *(_BYTE *)(*(_DWORD *)(result + 8) + v10) = v8;
    v11 = *(_BYTE *)(result + 5817);
    v12 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v12 + 1;
    *(_BYTE *)(*(_DWORD *)(result + 8) + v12) = v11;
    LOBYTE(v8) = 0;
    *v3 = 0;
    v13 = *v4 - 9;
  }
  *v4 = v13;
  if ( v13 == 16 )
  {
    v14 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v14 + 1;
    *(_BYTE *)(*(_DWORD *)(result + 8) + v14) = v8;
    v15 = *(_BYTE *)(result + 5817);
    v16 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v16 + 1;
    *(_BYTE *)(*(_DWORD *)(result + 8) + v16) = v15;
    result = 0;
    *v3 = 0;
  }
  else
  {
    if ( v13 < 8 )
      return result;
    v17 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v17 + 1;
    *(_BYTE *)(*(_DWORD *)(result + 8) + v17) = v8;
    *(_WORD *)(result + 5816) = *(unsigned __int8 *)(result + 5817);
    result = *v4 - 8;
  }
  *v4 = result;
  return result;
}
