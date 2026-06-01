/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ediv
// Address: 0x000000010006DA08

//----- (000000010006DA08) ----------------------------------------------------
__int64 __fastcall ediv(__int64 a1, __int16 *a2, __int64 a3)
{
  __int16 v3; // w8
  int v4; // w19
  unsigned __int64 v5; // t2
  __int16 v6; // w8
  int v7; // w21
  _BOOL4 v9; // w0
  __int16 v10; // w8
  unsigned __int64 v11; // t2
  _WORD v13[3]; // [xsp+Ch] [xbp-54h] BYREF
  int16x4_t v14; // [xsp+12h] [xbp-4Eh]
  __int16 v15; // [xsp+1Ah] [xbp-46h]
  __int16 v16; // [xsp+1Ch] [xbp-44h]
  __int16 v17; // [xsp+1Eh] [xbp-42h]
  __int16 v18; // [xsp+20h] [xbp-40h]
  unsigned __int16 v19; // [xsp+22h] [xbp-3Eh] BYREF
  __int16 v20; // [xsp+24h] [xbp-3Ch]
  __int16 v21; // [xsp+26h] [xbp-3Ah]
  _BYTE v22[14]; // [xsp+28h] [xbp-38h]
  __int16 v23; // [xsp+36h] [xbp-2Ah]
  int8x16x2_t v24; // 0:q0.32

  v3 = *(_WORD *)(a1 + 14);
  v19 = (unsigned int)v3 >> 15;
  v4 = v3 & 0x7FFF;
  v20 = v3 & 0x7FFF;
  v21 = 0;
  *(int16x4_t *)v22 = vrev64_s16(*(int16x4_t *)(a1 + 6));
  *(_WORD *)&v22[8] = *(_WORD *)(a1 + 4);
  HIDWORD(v5) = *(_DWORD *)a1;
  LODWORD(v5) = *(_DWORD *)a1;
  *(_DWORD *)&v22[10] = v5 >> 16;
  v23 = 0;
  v6 = a2[7];
  v13[0] = (unsigned int)v6 >> 15;
  v13[2] = 0;
  v14 = vrev64_s16(*(int16x4_t *)(a2 + 3));
  v15 = a2[2];
  v16 = a2[1];
  v17 = *a2;
  v18 = 0;
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  v7 = v6 & 0x7FFF;
  v13[1] = v6 & 0x7FFF;
  if ( (v6 & 0x7FFF) == 0 )
    return 4;
  if ( !v4 )
    return 1;
  v9 = sub_10006DB78((__int64)v13, (__int16 *)&v19);
  if ( (unsigned int)emdnorm((__int64)&v19, v9, 0, v4 - v7 + 0x3FFF, 112, v24) )
  {
    if ( v19 == v13[0] )
      v10 = v20;
    else
      v10 = v20 | 0x8000;
    *(_WORD *)(a3 + 14) = v10;
    HIDWORD(v11) = *(_DWORD *)&v22[2];
    LODWORD(v11) = *(_DWORD *)&v22[2];
    *(_WORD *)(a3 + 12) = *(_WORD *)v22;
    *(_DWORD *)(a3 + 8) = v11 >> 16;
    *(int16x4_t *)a3 = vrev64_s16(*(int16x4_t *)&v22[6]);
    return 1;
  }
  return 2;
}
// 10006DAF0: variable 'v24' is possibly undefined
