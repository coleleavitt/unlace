/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69270
// Address: 0x0000000000069270

//----- (0000000000069270) ----------------------------------------------------
__int64 __fastcall sub_69270(_QWORD *a1, unsigned __int64 a2, _DWORD *a3)
{
  __int64 v3; // x20
  unsigned __int64 v4; // x20
  int v5; // t1
  int v8; // w0
  int v9; // w22
  unsigned __int64 v10; // x26
  unsigned __int64 v11; // x25
  int v12; // w27
  int v13; // w23
  int v14; // w0
  unsigned __int64 v16[2]; // [xsp+0h] [xbp-60h] BYREF

  v16[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *a1 + a1[1];
  v5 = *(__int16 *)(v3 - 2);
  v4 = v3 - 2;
  if ( v5 < 1 )
    return 0;
  v16[0] = *a1 + a1[3];
  v8 = unpack_dd(v16, v4);
  if ( v8 < 1 || v16[0] >= v4 )
    return 0;
  v9 = v8;
  LODWORD(v10) = 0;
  LODWORD(v11) = 0;
  v12 = 1;
  while ( 1 )
  {
    v10 = (unsigned int)unpack_dd(v16, v4) + (unsigned int)v10;
    v11 = (unsigned int)unpack_dd(v16, v4) + (unsigned int)v11;
    v13 = unpack_dd(v16, v4);
    v14 = unpack_dd(v16, v4);
    if ( v10 <= a2 && v11 > a2 )
      break;
    if ( v12 < v9 )
    {
      ++v12;
      if ( v16[0] < v4 )
        continue;
    }
    return 0;
  }
  a3[2] = v13;
  a3[3] = v14;
  *a3 = v10;
  a3[1] = v11;
  return 1;
}
