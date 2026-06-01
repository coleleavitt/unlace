/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140067280
// Address: 0x0000000140067280

//----- (0000000140067280) ----------------------------------------------------
__int64 __fastcall sub_140067280(__int16 *a1, __int16 *a2, __int64 a3)
{
  unsigned __int16 v4; // r9
  __int16 v5; // ax
  __int16 v6; // cx
  __int16 v7; // ax
  unsigned __int16 v8; // cx
  int v9; // esi
  int v10; // edi
  int v11; // eax
  unsigned __int16 v13; // ax
  __int16 v14; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int16 v15; // [rsp+32h] [rbp-3Eh]
  __int16 v16; // [rsp+34h] [rbp-3Ch]
  __int16 v17; // [rsp+36h] [rbp-3Ah]
  __int16 v18; // [rsp+38h] [rbp-38h]
  __int16 v19; // [rsp+3Ah] [rbp-36h]
  __int16 v20; // [rsp+3Ch] [rbp-34h]
  __int16 v21; // [rsp+3Eh] [rbp-32h]
  __int16 v22; // [rsp+40h] [rbp-30h]
  __int16 v23; // [rsp+42h] [rbp-2Eh]
  __int16 v24; // [rsp+44h] [rbp-2Ch]
  _WORD v25[12]; // [rsp+48h] [rbp-28h] BYREF

  v4 = a1[7] & 0x7FFF;
  v25[0] = a1[7] >> 15;
  v25[3] = a1[6];
  v25[4] = a1[5];
  v25[5] = a1[4];
  v25[6] = a1[3];
  v25[7] = a1[2];
  v25[8] = a1[1];
  v5 = *a1;
  v6 = a2[7];
  v25[9] = v5;
  v7 = v6 >> 15;
  v8 = v6 & 0x7FFF;
  v14 = v7;
  v17 = a2[6];
  v18 = a2[5];
  v19 = a2[4];
  v20 = a2[3];
  v9 = v4;
  v21 = a2[2];
  v22 = a2[1];
  v10 = v8;
  v23 = *a2;
  v25[1] = v4;
  v25[2] = 0;
  v25[10] = 0;
  v15 = v8;
  v16 = 0;
  v24 = 0;
  *(_OWORD *)a3 = 0;
  if ( v4 && v8 )
  {
    v11 = sub_1400654B0(v25, (__int64)&v14);
    if ( !sub_140066F00((__int64)&v14, v11 != 0, 0, v10 + v9 - 16382, 112) )
      return 2;
    v13 = v15;
    if ( v25[0] != v14 )
      v13 = v15 | 0x8000;
    *(_WORD *)(a3 + 14) = v13;
    *(_WORD *)(a3 + 12) = v17;
    *(_WORD *)(a3 + 10) = v18;
    *(_WORD *)(a3 + 8) = v19;
    *(_WORD *)(a3 + 6) = v20;
    *(_WORD *)(a3 + 4) = v21;
    *(_WORD *)(a3 + 2) = v22;
    *(_WORD *)a3 = v23;
  }
  return 1;
}
