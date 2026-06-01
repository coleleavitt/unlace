/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047EA4
// Address: 0x0000000100047EA4

//----- (0000000100047EA4) ----------------------------------------------------
__int64 **__fastcall sub_100047EA4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // x26
  unsigned __int8 *v5; // x23
  unsigned __int64 v7; // x11
  unsigned __int64 v8; // x2
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x20
  unsigned __int64 v11; // x25
  uint8x8_t v12; // d0
  unsigned __int64 v13; // x27
  __int64 ***v14; // x8
  __int64 **v15; // x22
  signed __int8 v16; // w8
  size_t v17; // x24
  unsigned __int64 v18; // x8
  __int64 *v19; // x9
  int v20; // w8
  __int64 *v21; // x0
  float v22; // s0
  float v23; // s1
  _BOOL8 v24; // x9
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x9
  size_t prime; // x21
  int8x8_t v28; // x22
  unsigned __int64 v29; // x0
  uint8x8_t v30; // d0
  __int64 v31; // x8
  _QWORD *v32; // x8
  unsigned __int64 v33; // x8
  _QWORD v35[3]; // [xsp+0h] [xbp-70h] BYREF

  v5 = (unsigned __int8 *)a2;
  v7 = *(_QWORD *)(a2 + 8);
  if ( *(char *)(a2 + 23) >= 0 )
  {
    v8 = *(unsigned __int8 *)(a2 + 23);
  }
  else
  {
    a2 = *(_QWORD *)a2;
    v8 = v7;
  }
  v9 = sub_1000474E8((__int64)v35, (__int64 *)a2, v8);
  v10 = v9;
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 )
  {
    v12 = (uint8x8_t)vcnt_s8((int8x8_t)v11);
    v12.i16[0] = vaddlv_u8(v12);
    v13 = v12.u32[0];
    if ( v12.u32[0] > 1uLL )
    {
      v3 = v9;
      if ( v9 >= v11 )
        v3 = v9 % v11;
    }
    else
    {
      v3 = (v11 - 1) & v9;
    }
    v14 = *(__int64 ****)(*(_QWORD *)a1 + 8 * v3);
    if ( v14 )
    {
      v15 = *v14;
      if ( *v14 )
      {
        v16 = v5[23];
        if ( v16 >= 0 )
          v17 = v5[23];
        else
          v17 = *((_QWORD *)v5 + 1);
        if ( v16 < 0 )
          v5 = *(unsigned __int8 **)v5;
        do
        {
          v18 = (unsigned __int64)v15[1];
          if ( v18 == v10 )
          {
            v19 = (__int64 *)*((unsigned __int8 *)v15 + 39);
            v20 = (char)v19;
            if ( (char)v19 < 0 )
              v19 = v15[3];
            if ( v19 == (__int64 *)v17 )
            {
              v21 = v20 >= 0 ? (__int64 *)(v15 + 2) : v15[2];
              if ( !memcmp(v21, v5, v17) )
                return v15;
            }
          }
          else
          {
            if ( v13 <= 1 )
            {
              v18 &= v11 - 1;
            }
            else if ( v18 >= v11 )
            {
              v18 %= v11;
            }
            if ( v18 != v3 )
              break;
          }
          v15 = (__int64 **)*v15;
        }
        while ( v15 );
      }
    }
  }
  sub_100048260(a1, v10, a3, (__int64)v35);
  v22 = (float)(unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL);
  v23 = *(float *)(a1 + 32);
  if ( (((float)(v23 * (float)v11) >= v22) & ~(v11 == 0)) == 0 )
  {
    v24 = 1;
    if ( v11 >= 3 )
      v24 = (v11 & (v11 - 1)) != 0;
    v25 = v24 | (2 * v11);
    v26 = vcvtps_u32_f32(v22 / v23);
    if ( v25 <= v26 )
      prime = v26;
    else
      prime = v25;
    if ( prime == 1 )
    {
      prime = 2;
    }
    else if ( (prime & (prime - 1)) != 0 )
    {
      prime = std::__next_prime(prime);
    }
    v28 = *(int8x8_t *)(a1 + 8);
    if ( prime > *(_QWORD *)&v28 )
      goto LABEL_44;
    if ( prime < *(_QWORD *)&v28 )
    {
      v29 = vcvtps_u32_f32((float)*(unsigned __int64 *)(a1 + 24) / *(float *)(a1 + 32));
      if ( *(_QWORD *)&v28 < 3u || (v30 = (uint8x8_t)vcnt_s8(v28), v30.i16[0] = vaddlv_u8(v30), v30.u32[0] > 1uLL) )
      {
        v29 = std::__next_prime(v29);
      }
      else
      {
        v31 = 1LL << -(char)__clz(v29 - 1);
        if ( v29 >= 2 )
          v29 = v31;
      }
      if ( prime <= v29 )
        prime = v29;
      if ( prime < *(_QWORD *)&v28 )
LABEL_44:
        sub_100047D48(a1, prime);
    }
    v11 = *(_QWORD *)(a1 + 8);
    if ( (v11 & (v11 - 1)) != 0 )
    {
      if ( v10 >= v11 )
        v3 = v10 % v11;
      else
        v3 = v10;
    }
    else
    {
      v3 = (v11 - 1) & v10;
    }
  }
  v32 = *(_QWORD **)(*(_QWORD *)a1 + 8 * v3);
  if ( v32 )
  {
    *(_QWORD *)v35[0] = *v32;
    v15 = (__int64 **)v35[0];
    *v32 = v35[0];
  }
  else
  {
    *(_QWORD *)v35[0] = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v35[0];
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) = a1 + 16;
    v15 = (__int64 **)v35[0];
    if ( *(_QWORD *)v35[0] )
    {
      v33 = *(_QWORD *)(*(_QWORD *)v35[0] + 8LL);
      if ( (v11 & (v11 - 1)) != 0 )
      {
        if ( v33 >= v11 )
          v33 %= v11;
      }
      else
      {
        v33 &= v11 - 1;
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v33) = v35[0];
      v15 = (__int64 **)v35[0];
    }
  }
  ++*(_QWORD *)(a1 + 24);
  return v15;
}
// 100048150: variable 'v3' is possibly undefined
