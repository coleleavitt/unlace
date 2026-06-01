/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D088
// Address: 0x000000010002D088

//----- (000000010002D088) ----------------------------------------------------
__int64 __fastcall sub_10002D088(_QWORD *a1, unsigned __int64 a2, _DWORD *a3)
{
  __int64 v3; // x21
  unsigned __int64 v4; // x21
  int v5; // t1
  int v8; // w0
  int v11; // w22
  unsigned __int64 v12; // x25
  unsigned __int64 v13; // x24
  int v14; // w26
  int v15; // w23
  int v16; // w0
  int v18; // w8
  unsigned __int64 v19; // [xsp+0h] [xbp-50h] BYREF

  v3 = *a1 + a1[1];
  v5 = *(__int16 *)(v3 - 2);
  v4 = v3 - 2;
  if ( v5 < 1 )
    return 0;
  v19 = *a1 + a1[3];
  v8 = unpack_dd(&v19, v4);
  if ( v8 < 1 || v19 >= v4 )
    return 0;
  v11 = v8;
  LODWORD(v12) = 0;
  LODWORD(v13) = 0;
  v14 = 1;
  while ( 1 )
  {
    v12 = (unsigned int)unpack_dd(&v19, v4) + (unsigned int)v12;
    v13 = (unsigned int)unpack_dd(&v19, v4) + (unsigned int)v13;
    v15 = unpack_dd(&v19, v4);
    v16 = unpack_dd(&v19, v4);
    if ( v12 <= a2 && v13 > a2 )
      break;
    if ( v14 < v11 )
    {
      ++v14;
      if ( v19 < v4 )
        continue;
    }
    return 0;
  }
  *a3 = v12;
  a3[1] = v13;
  v18 = v16;
  a3[2] = v15;
  a3[3] = v18;
  return 1;
}
