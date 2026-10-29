/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100048A88
// Address: 0x0000000100048A88

//----- (0000000100048A88) ----------------------------------------------------
__int64 **__fastcall sub_100048A88(_QWORD *a1, __int64 a2)
{
  unsigned __int8 *v2; // x21
  unsigned __int64 v4; // x11
  unsigned __int64 v5; // x2
  unsigned __int64 v6; // x0
  int8x8_t v7; // x23
  unsigned __int64 v8; // x19
  uint8x8_t v9; // d0
  unsigned __int64 v10; // x24
  unsigned __int64 v11; // x25
  __int64 ***v12; // x8
  __int64 **v13; // x20
  signed __int8 v14; // w8
  size_t v15; // x22
  unsigned __int64 v16; // x8
  __int64 *v17; // x9
  int v18; // w8
  __int64 *v19; // x0
  char v21; // [xsp+7h] [xbp-49h] BYREF

  v2 = (unsigned __int8 *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(char *)(a2 + 23) >= 0 )
  {
    v5 = *(unsigned __int8 *)(a2 + 23);
  }
  else
  {
    a2 = *(_QWORD *)a2;
    v5 = v4;
  }
  v6 = sub_1000474E8((__int64)&v21, (__int64 *)a2, v5);
  v7 = (int8x8_t)a1[1];
  if ( !*(_QWORD *)&v7 )
    return nullptr;
  v8 = v6;
  v9 = (uint8x8_t)vcnt_s8(v7);
  v9.i16[0] = vaddlv_u8(v9);
  v10 = v9.u32[0];
  if ( v9.u32[0] > 1uLL )
  {
    v11 = v6;
    if ( v6 >= *(_QWORD *)&v7 )
      v11 = v6 % *(_QWORD *)&v7;
  }
  else
  {
    v11 = (*(_QWORD *)&v7 - 1LL) & v6;
  }
  v12 = *(__int64 ****)(*a1 + 8 * v11);
  if ( !v12 )
    return nullptr;
  v13 = *v12;
  if ( *v12 )
  {
    v14 = v2[23];
    if ( v14 >= 0 )
      v15 = v2[23];
    else
      v15 = *((_QWORD *)v2 + 1);
    if ( v14 < 0 )
      v2 = *(unsigned __int8 **)v2;
    do
    {
      v16 = (unsigned __int64)v13[1];
      if ( v16 == v8 )
      {
        v17 = (__int64 *)*((unsigned __int8 *)v13 + 39);
        v18 = (char)v17;
        if ( (char)v17 < 0 )
          v17 = v13[3];
        if ( v17 == (__int64 *)v15 )
        {
          v19 = v18 >= 0 ? (__int64 *)(v13 + 2) : v13[2];
          if ( !memcmp(v19, v2, v15) )
            return v13;
        }
      }
      else
      {
        if ( v10 <= 1 )
        {
          v16 &= *(_QWORD *)&v7 - 1LL;
        }
        else if ( v16 >= *(_QWORD *)&v7 )
        {
          v16 %= *(_QWORD *)&v7;
        }
        if ( v16 != v11 )
          return nullptr;
      }
      v13 = (__int64 **)*v13;
    }
    while ( v13 );
  }
  return v13;
}
