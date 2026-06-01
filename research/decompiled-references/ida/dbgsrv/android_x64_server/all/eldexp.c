/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eldexp
// Address: 0x00000000000B89F0

//----- (00000000000B89F0) ----------------------------------------------------
__int64 __fastcall eldexp(__int16 *a1, int a2, _WORD *a3, double a4, __m128 a5)
{
  __int16 v6; // cx
  int v7; // ecx
  __int16 v8; // cx
  __int16 v10; // [rsp+0h] [rbp-28h] BYREF
  __int16 v11; // [rsp+2h] [rbp-26h]
  __int16 v12; // [rsp+4h] [rbp-24h]
  __int16 v13; // [rsp+6h] [rbp-22h]
  __int16 v14; // [rsp+8h] [rbp-20h]
  __int16 v15; // [rsp+Ah] [rbp-1Eh]
  __int16 v16; // [rsp+Ch] [rbp-1Ch]
  __int16 v17; // [rsp+Eh] [rbp-1Ah]
  __int16 v18; // [rsp+10h] [rbp-18h]
  __int16 v19; // [rsp+12h] [rbp-16h]
  __int16 v20; // [rsp+14h] [rbp-14h]
  unsigned __int64 v21; // [rsp+18h] [rbp-10h]

  v21 = __readfsqword(0x28u);
  v6 = a1[7];
  v10 = v6 >> 15;
  v7 = v6 & 0x7FFF;
  v11 = v7;
  v12 = 0;
  v13 = a1[6];
  v14 = a1[5];
  v15 = a1[4];
  v16 = a1[3];
  v17 = a1[2];
  v18 = a1[1];
  v19 = *a1;
  v20 = 0;
  if ( emdnorm((__int64)&v10, 0, 0, a2 + v7, 112, a4, a5) )
  {
    v8 = v11 | 0x8000;
    if ( !v10 )
      v8 = v11;
    a3[7] = v8;
    a3[6] = v13;
    a3[5] = v14;
    a3[4] = v15;
    a3[3] = v16;
    a3[2] = v17;
    a3[1] = v18;
    *a3 = v19;
    return 1;
  }
  else
  {
    *(_OWORD *)a3 = 0;
    return 2;
  }
}
