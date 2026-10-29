/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2CA74
// Address: 0x0002CA74

//----- (0002CA74) --------------------------------------------------------
unsigned __int64 __fastcall sub_2CA74(int a1, int *a2)
{
  int v2; // r3
  bool v3; // zf
  unsigned int v4; // r3
  char v5; // r2
  int v6; // r3
  unsigned __int64 v7; // r2
  unsigned __int64 v8; // r4
  int v9; // lr
  unsigned int v10; // r9
  unsigned int v11; // r0
  unsigned __int64 v12; // r8

  if ( !*(_BYTE *)(a1 + 36) )
    sub_14980();
  v2 = *a2;
  v3 = *a2 == 1;
  if ( *a2 != 1 )
    v3 = v2 == 6;
  v4 = v2 - 3;
  v5 = !v3;
  if ( v4 > 1 )
    v6 = v5 & 1;
  else
    v6 = 0;
  if ( v6 )
    return 0;
  v7 = *((_QWORD *)a2 + 1);
  v8 = *(_QWORD *)(*(_DWORD *)(a1 + 32) + 376) - *(_QWORD *)(*(_DWORD *)(a1 + 32) + 368);
  if ( v7 >= v8 )
    return 0;
  v9 = *(_DWORD *)(a1 + 16);
  if ( (int)a2 - v9 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 20);
    v11 = -1227133513 * (((int)a2 - v9) >> 3) + 1;
    if ( v11 < v10 && *(_QWORD *)(v9 + 56 * v11 + 8) >= v7 )
      v8 = *(_QWORD *)(v9 + 56 * v11 + 8);
  }
  v12 = *((_QWORD *)a2 + 4);
  if ( v8 - v7 < v12 )
    return v8 - v7;
  return v12;
}
