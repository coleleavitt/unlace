/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000103D0
// Address: 0x00000001000103D0

//----- (00000001000103D0) ----------------------------------------------------
__int64 __fastcall sub_1000103D0(unsigned __int64 a1, int8x16_t *a2, __int64 a3, int a4)
{
  __int128 v7; // q1
  __int128 v8; // q0
  int8x16_t *v9; // x22
  unsigned __int64 v10; // x23
  bool v11; // zf
  off_t v12; // x23
  __int64 v13; // x0
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  __int64 result; // x0
  unsigned int v17; // w23
  int8x16_t v18; // q0
  int8x16_t v19; // q1
  int8x16_t v20; // q2
  int8x16_t v21; // q3
  int8x16_t *v22; // x24
  unsigned __int64 v23; // x0
  int8x16_t v24; // [xsp+20h] [xbp-E0h] BYREF
  int8x16_t v25; // [xsp+30h] [xbp-D0h]
  int8x16_t v26; // [xsp+40h] [xbp-C0h]
  int8x16_t v27; // [xsp+50h] [xbp-B0h]
  int8x16_t v28; // [xsp+60h] [xbp-A0h]
  __int128 v29; // [xsp+70h] [xbp-90h] BYREF
  __int128 v30; // [xsp+80h] [xbp-80h]
  __int128 v31; // [xsp+90h] [xbp-70h]
  _BYTE v32[24]; // [xsp+A0h] [xbp-60h] BYREF

  if ( (unsigned __int64)a2 <= a1 || (unsigned __int64)a2 - a1 <= 0x47 )
  {
    v31 = 0u;
    memset(v32, 0, sizeof(v32));
    v29 = 0u;
    v30 = 0u;
    v9 = a2;
    if ( (a4 & 1) == 0 )
      goto LABEL_4;
  }
  else
  {
    v7 = *(_OWORD *)(a1 + 48);
    v31 = *(_OWORD *)(a1 + 32);
    *(_OWORD *)v32 = v7;
    *(_QWORD *)&v32[16] = *(_QWORD *)(a1 + 64);
    v8 = *(_OWORD *)(a1 + 16);
    v29 = *(_OWORD *)a1;
    v30 = v8;
    v9 = (int8x16_t *)(a1 + 72);
    if ( (a4 & 1) == 0 )
    {
LABEL_4:
      v10 = *((_QWORD *)&v30 + 1);
      goto LABEL_7;
    }
  }
  *(int8x8_t *)&v29 = vrev32_s8(*(int8x8_t *)&v29);
  v10 = swap64(*((__int64 *)&v30 + 1));
  *((_QWORD *)&v30 + 1) = v10;
  *(_QWORD *)&v31 = swap64(v31);
  *((_QWORD *)&v31 + 1) = swap64(*((__int64 *)&v31 + 1));
  *(_QWORD *)v32 = swap64(*(__int64 *)v32);
  *(int8x16_t *)&v32[8] = vrev32q_s8(*(int8x16_t *)&v32[8]);
LABEL_7:
  if ( HIWORD(v10) )
    v11 = (v10 & 0x4000000000000000LL) == 0;
  else
    v11 = 0;
  if ( v11 )
    *((_QWORD *)&v30 + 1) = (v10 << 13) & 0xFF00000000000000LL | ((__int64)(v10 << 21) >> 21) & 0xFFFFFFFFFFFFFFLL;
  if ( v9 == (int8x16_t *)-1LL )
    v12 = qlseek(0, 0, 1);
  else
    v12 = (off_t)v9;
  v13 = (__int64)a2;
  if ( a2 == (int8x16_t *)-1LL )
  {
    v13 = qlsize(0);
    LODWORD(v14) = 0;
    if ( v12 < 0 )
      goto LABEL_23;
  }
  else
  {
    LODWORD(v14) = 0;
    if ( v12 < 0 )
      goto LABEL_23;
  }
  v15 = v13 - v12;
  if ( ((v13 - v12) & 0x8000000000000000LL) == 0 )
  {
    if ( v15 >= 80 * (unsigned __int64)*(unsigned int *)&v32[16] )
      goto LABEL_24;
    v14 = v15 / 0x50;
  }
LABEL_23:
  *(_DWORD *)&v32[16] = v14;
  if ( (unsigned int)sub_10001A44C() != 1 )
    sub_10001A4B8(0);
LABEL_24:
  result = (*(__int64 (__fastcall **)(__int64, __int128 *, int8x16_t *, int8x16_t *))(*(_QWORD *)a3 + 264LL))(
             a3,
             &v29,
             v9,
             a2);
  if ( !(_DWORD)result && *(_DWORD *)&v32[16] )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v9 >= a2 )
      {
        if ( under_debugger == 1 )
          __break(1u);
        interr(20140);
      }
      if ( (unsigned __int64)((char *)a2 - (char *)v9) <= 0x4F )
        break;
      v18 = v9[3];
      v19 = v9[4];
      v20 = v9[1];
      v26 = v9[2];
      v21 = *v9;
      v27 = v18;
      v28 = v19;
      v24 = v21;
      v25 = v20;
      v22 = v9 + 5;
      v23 = v26.i64[0];
      if ( a4 )
        goto LABEL_32;
LABEL_33:
      if ( HIWORD(v23) && (v23 & 0x4000000000000000LL) == 0 )
        v26.i64[0] = (v23 << 13) & 0xFF00000000000000LL | ((__int64)(v23 << 21) >> 21) & 0xFFFFFFFFFFFFFFLL;
      result = (*(__int64 (__fastcall **)(__int64, int8x16_t *, int8x16_t *, int8x16_t *))(*(_QWORD *)a3 + 280LL))(
                 a3,
                 &v24,
                 v9,
                 a2);
      if ( !(_DWORD)result )
      {
        ++v17;
        v9 = v22;
        if ( v17 < *(_DWORD *)&v32[16] )
          continue;
      }
      return result;
    }
    v23 = 0;
    v27 = 0u;
    v28 = 0u;
    v25 = 0u;
    v26 = 0u;
    v22 = a2;
    v24 = 0u;
    if ( !a4 )
      goto LABEL_33;
LABEL_32:
    v26.i64[0] = swap64(v23);
    v26.i64[1] = swap64(v26.i64[1]);
    v27 = vrev32q_s8(v27);
    *(int8x8_t *)v28.i8 = vrev32_s8(*(int8x8_t *)v28.i8);
    v28.i32[2] = bswap32(v28.u32[2]);
    v23 = v26.i64[0];
    goto LABEL_33;
  }
  return result;
}
// 10009D90D: using guessed type char under_debugger;
