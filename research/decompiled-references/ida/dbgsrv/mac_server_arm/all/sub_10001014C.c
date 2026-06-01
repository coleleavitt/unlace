/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001014C
// Address: 0x000000010001014C

//----- (000000010001014C) ----------------------------------------------------
__int64 __fastcall sub_10001014C(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int128 v7; // q1
  __int64 v8; // x2
  unsigned int v9; // w24
  __int64 v10; // x22
  __int64 v11; // x23
  off_t v12; // x0
  __int64 v13; // x0
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x10
  int v16; // w0
  __int64 result; // x0
  unsigned int v18; // w22
  unsigned __int64 v19; // x2
  __int128 v20; // q0
  int8x16_t v21; // q1
  int8x16_t v22; // q2
  unsigned __int64 v23; // x23
  __int128 v24; // [xsp+20h] [xbp-C0h] BYREF
  __int128 v25; // [xsp+30h] [xbp-B0h]
  int8x16_t v26; // [xsp+40h] [xbp-A0h]
  int8x16_t v27; // [xsp+50h] [xbp-90h]
  unsigned int v28; // [xsp+60h] [xbp-80h]
  _BYTE v29[56]; // [xsp+70h] [xbp-70h] BYREF

  if ( a2 <= a1 || a2 - a1 <= 0x37 )
  {
    memset(v29, 0, sizeof(v29));
    v8 = a2;
    if ( (a4 & 1) == 0 )
      goto LABEL_4;
  }
  else
  {
    v7 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)v29 = *(_OWORD *)a1;
    *(_OWORD *)&v29[16] = v7;
    *(_OWORD *)&v29[32] = *(_OWORD *)(a1 + 32);
    *(_QWORD *)&v29[48] = *(_QWORD *)(a1 + 48);
    v8 = a1 + 56;
    if ( (a4 & 1) == 0 )
    {
LABEL_4:
      v9 = *(_DWORD *)&v29[48];
      goto LABEL_7;
    }
  }
  *(int8x8_t *)v29 = vrev32_s8(*(int8x8_t *)v29);
  *(int8x16_t *)&v29[24] = vrev32q_s8(*(int8x16_t *)&v29[24]);
  *(int8x16_t *)&v29[40] = vrev32q_s8(*(int8x16_t *)&v29[40]);
  v9 = *(_DWORD *)&v29[48];
LABEL_7:
  v10 = v8;
  v11 = v8;
  if ( v8 == -1 )
  {
    v12 = qlseek(0, 0, 1);
    v8 = -1;
    v10 = v12;
  }
  v13 = a2;
  if ( a2 == -1 )
  {
    v13 = qlsize(0);
    v8 = v11;
  }
  LODWORD(v14) = 0;
  if ( (v10 & 0x8000000000000000LL) == 0 )
  {
    v15 = v13 - v10;
    if ( ((v13 - v10) & 0x8000000000000000LL) == 0 )
    {
      if ( v15 >= 68 * (unsigned __int64)v9 )
        goto LABEL_16;
      v14 = v15 / 0x44;
    }
  }
  *(_DWORD *)&v29[48] = v14;
  v16 = sub_10001A44C();
  v8 = v11;
  if ( v16 != 1 )
    sub_10001A4B8(0);
LABEL_16:
  result = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, unsigned __int64))(*(_QWORD *)a3 + 256LL))(
             a3,
             v29,
             v8,
             a2);
  if ( !(_DWORD)result && *(_DWORD *)&v29[48] )
  {
    v18 = 0;
    v19 = v11;
    while ( 1 )
    {
      if ( v19 >= a2 )
      {
        if ( under_debugger == 1 )
          __break(1u);
        interr(20140);
      }
      if ( a2 - v19 <= 0x43 )
        break;
      v24 = *(_OWORD *)v19;
      v20 = *(_OWORD *)(v19 + 16);
      v21 = *(int8x16_t *)(v19 + 32);
      v22 = *(int8x16_t *)(v19 + 48);
      v28 = *(_DWORD *)(v19 + 64);
      v26 = v21;
      v27 = v22;
      v25 = v20;
      v23 = v19 + 68;
      if ( a4 )
        goto LABEL_24;
LABEL_25:
      result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 272LL))(a3, &v24);
      if ( !(_DWORD)result )
      {
        ++v18;
        v19 = v23;
        if ( v18 < *(_DWORD *)&v29[48] )
          continue;
      }
      return result;
    }
    v28 = 0;
    v26 = 0u;
    v27 = 0u;
    v23 = a2;
    v24 = 0u;
    v25 = 0u;
    if ( !a4 )
      goto LABEL_25;
LABEL_24:
    v26 = vrev32q_s8(v26);
    v27 = vrev32q_s8(v27);
    v28 = bswap32(v28);
    goto LABEL_25;
  }
  return result;
}
// 10009D90D: using guessed type char under_debugger;
