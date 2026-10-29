/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046408
// Address: 0x0000000100046408

//----- (0000000100046408) ----------------------------------------------------
_QWORD *__fastcall sub_100046408(__int64 a1, __int64 a2, __int64 a3, __int128 **a4)
{
  unsigned __int64 v4; // x26
  unsigned __int8 *v6; // x23
  unsigned __int64 v8; // x11
  unsigned __int64 v9; // x2
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x21
  unsigned __int64 v12; // x25
  uint8x8_t v13; // d0
  unsigned __int64 v14; // x27
  void **v15; // x8
  _QWORD *v16; // x20
  signed __int8 v17; // w8
  size_t v18; // x24
  unsigned __int64 v19; // x8
  __int64 v20; // x9
  int v21; // w8
  char *v22; // x0
  _QWORD *v23; // x23
  __int128 *v24; // x8
  __int128 v25; // q0
  float v26; // s0
  float v27; // s1
  _BOOL8 v28; // x9
  unsigned __int64 v29; // x8
  unsigned __int64 v30; // x9
  size_t prime; // x22
  int8x8_t v32; // x24
  unsigned __int64 v33; // x0
  uint8x8_t v34; // d0
  __int64 v35; // x8
  __int64 v36; // x9
  _QWORD *v37; // x8
  unsigned __int64 v38; // x8
  _QWORD v40[2]; // [xsp+0h] [xbp-70h] BYREF
  char v41; // [xsp+10h] [xbp-60h]

  v6 = (unsigned __int8 *)a2;
  v8 = *(_QWORD *)(a2 + 8);
  if ( *(char *)(a2 + 23) >= 0 )
  {
    v9 = *(unsigned __int8 *)(a2 + 23);
  }
  else
  {
    a2 = *(_QWORD *)a2;
    v9 = v8;
  }
  v10 = sub_100045454((__int64)v40, (__int64 *)a2, v9);
  v11 = v10;
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 )
  {
    v13 = (uint8x8_t)vcnt_s8((int8x8_t)v12);
    v13.i16[0] = vaddlv_u8(v13);
    v14 = v13.u32[0];
    if ( v13.u32[0] > 1uLL )
    {
      v4 = v10;
      if ( v10 >= v12 )
        v4 = v10 % v12;
    }
    else
    {
      v4 = (v12 - 1) & v10;
    }
    v15 = *(void ***)(*(_QWORD *)a1 + 8 * v4);
    if ( v15 )
    {
      v16 = *v15;
      if ( *v15 )
      {
        v17 = v6[23];
        if ( v17 >= 0 )
          v18 = v6[23];
        else
          v18 = *((_QWORD *)v6 + 1);
        if ( v17 < 0 )
          v6 = *(unsigned __int8 **)v6;
        do
        {
          v19 = v16[1];
          if ( v19 == v11 )
          {
            v20 = *((unsigned __int8 *)v16 + 39);
            v21 = (char)v20;
            if ( (v20 & 0x80u) != 0LL )
              v20 = v16[3];
            if ( v20 == v18 )
            {
              v22 = v21 >= 0 ? (char *)(v16 + 2) : (char *)v16[2];
              if ( !memcmp(v22, v6, v18) )
                return v16;
            }
          }
          else
          {
            if ( v14 <= 1 )
            {
              v19 &= v12 - 1;
            }
            else if ( v19 >= v12 )
            {
              v19 %= v12;
            }
            if ( v19 != v4 )
              break;
          }
          v16 = (_QWORD *)*v16;
        }
        while ( v16 );
      }
    }
  }
  v16 = operator new(0x48u);
  v23 = (_QWORD *)(a1 + 16);
  v40[0] = v16;
  v40[1] = a1 + 16;
  *v16 = 0;
  v16[1] = v11;
  v24 = *a4;
  v25 = **a4;
  v16[4] = *((_QWORD *)*a4 + 2);
  *((_OWORD *)v16 + 1) = v25;
  *((_QWORD *)v24 + 1) = 0;
  *((_QWORD *)v24 + 2) = 0;
  *(_QWORD *)v24 = 0;
  v16[5] = 0;
  v16[6] = 0;
  *((_WORD *)v16 + 32) = 0;
  v16[7] = 0;
  v26 = (float)(unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL);
  v41 = 1;
  v27 = *(float *)(a1 + 32);
  if ( (((float)(v27 * (float)v12) >= v26) & ~(v12 == 0)) == 0 )
  {
    v28 = 1;
    if ( v12 >= 3 )
      v28 = (v12 & (v12 - 1)) != 0;
    v29 = v28 | (2 * v12);
    v30 = vcvtps_u32_f32(v26 / v27);
    if ( v29 <= v30 )
      prime = v30;
    else
      prime = v29;
    if ( prime == 1 )
    {
      prime = 2;
    }
    else if ( (prime & (prime - 1)) != 0 )
    {
      prime = std::__next_prime(prime);
    }
    v32 = *(int8x8_t *)(a1 + 8);
    if ( prime > *(_QWORD *)&v32 )
      goto LABEL_44;
    if ( prime < *(_QWORD *)&v32 )
    {
      v33 = vcvtps_u32_f32((float)*(unsigned __int64 *)(a1 + 24) / *(float *)(a1 + 32));
      if ( *(_QWORD *)&v32 < 3u || (v34 = (uint8x8_t)vcnt_s8(v32), v34.i16[0] = vaddlv_u8(v34), v34.u32[0] > 1uLL) )
      {
        v33 = std::__next_prime(v33);
      }
      else
      {
        v35 = 1LL << -(char)__clz(v33 - 1);
        if ( v33 >= 2 )
          v33 = v35;
      }
      if ( prime <= v33 )
        prime = v33;
      if ( prime < *(_QWORD *)&v32 )
LABEL_44:
        sub_100045CA8(a1, prime);
    }
    v12 = *(_QWORD *)(a1 + 8);
    if ( (v12 & (v12 - 1)) != 0 )
    {
      if ( v11 >= v12 )
        v4 = v11 % v12;
      else
        v4 = v11;
    }
    else
    {
      v4 = (v12 - 1) & v11;
    }
  }
  v36 = *(_QWORD *)a1;
  v37 = *(_QWORD **)(*(_QWORD *)a1 + 8 * v4);
  if ( v37 )
  {
    *v16 = *v37;
LABEL_68:
    *v37 = v16;
    goto LABEL_69;
  }
  *v16 = *v23;
  *v23 = v16;
  *(_QWORD *)(v36 + 8 * v4) = v23;
  if ( *v16 )
  {
    v38 = *(_QWORD *)(*v16 + 8LL);
    if ( (v12 & (v12 - 1)) != 0 )
    {
      if ( v38 >= v12 )
        v38 %= v12;
    }
    else
    {
      v38 &= v12 - 1;
    }
    v37 = (_QWORD *)(*(_QWORD *)a1 + 8 * v38);
    goto LABEL_68;
  }
LABEL_69:
  ++*(_QWORD *)(a1 + 24);
  return v16;
}
// 1000466E4: variable 'v4' is possibly undefined
