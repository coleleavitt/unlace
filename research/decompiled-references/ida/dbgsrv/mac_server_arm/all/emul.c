/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emul
// Address: 0x00000001000688C0

//----- (00000001000688C0) ----------------------------------------------------
__int64 __fastcall emul(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // w8
  unsigned __int64 v4; // t2
  unsigned int v5; // w9
  int v6; // w19
  __int64 result; // x0
  int v8; // w21
  int v10; // w0
  __int16 v11; // w8
  unsigned __int64 v12; // t2
  unsigned __int16 v13; // [xsp+Ch] [xbp-54h] BYREF
  __int16 v14; // [xsp+Eh] [xbp-52h]
  __int16 v15; // [xsp+10h] [xbp-50h]
  _BYTE v16[14]; // [xsp+12h] [xbp-4Eh]
  __int16 v17; // [xsp+20h] [xbp-40h]
  _WORD v18[3]; // [xsp+22h] [xbp-3Eh] BYREF
  int16x4_t v19; // [xsp+28h] [xbp-38h]
  __int16 v20; // [xsp+30h] [xbp-30h]
  int v21; // [xsp+32h] [xbp-2Eh]
  __int16 v22; // [xsp+36h] [xbp-2Ah]
  int8x16x2_t v23; // 0:q0.32

  v3 = *(_WORD *)(a1 + 14);
  v18[0] = (unsigned int)v3 >> 15;
  v18[2] = 0;
  v19 = vrev64_s16(*(int16x4_t *)(a1 + 6));
  HIDWORD(v4) = *(_DWORD *)a1;
  LODWORD(v4) = *(_DWORD *)a1;
  v20 = *(_WORD *)(a1 + 4);
  v21 = v4 >> 16;
  v22 = 0;
  v5 = *(__int16 *)(a2 + 14);
  v13 = v5 >> 15;
  v6 = v5 & 0x7FFF;
  v14 = v5 & 0x7FFF;
  v15 = 0;
  *(int16x4_t *)v16 = vrev64_s16(*(int16x4_t *)(a2 + 6));
  *(_WORD *)&v16[8] = *(_WORD *)(a2 + 4);
  *(_WORD *)&v16[10] = *(_WORD *)(a2 + 2);
  *(_WORD *)&v16[12] = *(_WORD *)a2;
  v17 = 0;
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  result = 1;
  v8 = v3 & 0x7FFF;
  v18[1] = v3 & 0x7FFF;
  if ( (v3 & 0x7FFF) != 0 && (v5 & 0x7FFF) != 0 )
  {
    v10 = sub_100068A24((__int64)v18, (__int16 *)&v13);
    if ( (unsigned int)emdnorm((__int64)&v13, v10 != 0, 0, v6 + v8 - 16382, 112, v23) )
    {
      if ( v18[0] == v13 )
        v11 = v14;
      else
        v11 = v14 | 0x8000;
      *(_WORD *)(a3 + 14) = v11;
      HIDWORD(v12) = *(_DWORD *)&v16[2];
      LODWORD(v12) = *(_DWORD *)&v16[2];
      *(_WORD *)(a3 + 12) = *(_WORD *)v16;
      *(_DWORD *)(a3 + 8) = v12 >> 16;
      *(int16x4_t *)a3 = vrev64_s16(*(int16x4_t *)&v16[6]);
      return 1;
    }
    else
    {
      return 2;
    }
  }
  return result;
}
// 1000689A4: variable 'v23' is possibly undefined
