/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22E68
// Address: 0x00022E68

//----- (00022E68) --------------------------------------------------------
unsigned __int64 __fastcall sub_22E68(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // r12
  unsigned __int64 v3; // r2
  unsigned int v4; // r8
  unsigned int v5; // lr
  unsigned int v6; // r10
  unsigned int v7; // r11
  unsigned int v8; // r12
  unsigned __int64 v9; // r4
  unsigned __int64 v10; // r8
  unsigned __int64 v12; // r8

  v2 = (_DWORD *)a1[33];
  v3 = a2[3];
  v4 = v2[94];
  v5 = v2[92];
  v6 = v2[95];
  v7 = v2[93];
  v8 = a1[4];
  v9 = __PAIR64__(v6, v4) - __PAIR64__(v7, v5);
  if ( (unsigned int)(a2 + 8) >= v8 && (unsigned int)(a2 + 8) < v8 + (a1[5] << 6) )
  {
    v12 = a2[11];
    if ( v12 < v9 && v12 >= v3 )
      v9 = a2[11];
  }
  if ( v3 >= v9 )
    return 0;
  v10 = a2[4];
  if ( v9 - v3 < v10 )
    return v9 - v3;
  return v10;
}
