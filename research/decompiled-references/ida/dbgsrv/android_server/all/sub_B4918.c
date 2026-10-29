/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4918
// Address: 0x00000000000B4918

//----- (00000000000B4918) ----------------------------------------------------
__int64 __fastcall sub_B4918(unsigned __int64 *a1, int8x16_t *a2, signed int a3, char a4, int8x16x2_t a5)
{
  int v7; // w22
  signed __int16 v8; // w8
  unsigned int v9; // w8
  signed __int16 v10; // w8
  unsigned int v11; // w9
  int v12; // w1
  signed int v13; // w22
  unsigned __int64 v14; // x11
  unsigned __int64 v15; // x8
  __int16 v17; // [xsp+8h] [xbp-68h] BYREF
  __int16 v18; // [xsp+Ah] [xbp-66h]
  _BYTE v19[18]; // [xsp+Ch] [xbp-64h]
  int8x16_t v20; // [xsp+20h] [xbp-50h] BYREF
  __int64 v21; // [xsp+38h] [xbp-38h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a4 & 1) != 0 )
  {
    a5.val[0] = *a2;
    v20 = a5.val[0];
    v7 = a5.val[0].n128_i16[7];
    eadd((__int16 *)&dword_11BBE4, (__int16 *)&v20, (__int64)&v20, a5.val[0].n128_i16[7] < 0, a5);
    v8 = v20.n128_i16[7];
    if ( v7 < 0 && v20.n128_u16[7] )
    {
      v8 = v20.n128_u16[7] ^ 0x8000;
      v20.n128_u16[7] ^= 0x8000u;
    }
    v17 = (unsigned int)v8 >> 15;
    *(_WORD *)&v19[2] = v20.n128_u16[6];
    *(_WORD *)&v19[4] = v20.n128_u16[5];
    *(_WORD *)&v19[6] = v20.n128_u16[4];
    v9 = v8 & 0x7FFF;
    v18 = v9;
    *(_WORD *)v19 = 0;
    *(_WORD *)&v19[8] = v20.n128_u16[3];
    *(_WORD *)&v19[10] = v20.n128_u16[2];
    *(_WORD *)&v19[12] = v20.n128_u16[1];
    *(_WORD *)&v19[14] = v20.n128_u16[0];
  }
  else
  {
    v10 = a2->n128_i16[7];
    *(_WORD *)v19 = 0;
    v11 = v10;
    v9 = v10 & 0x7FFF;
    v17 = v11 >> 15;
    v18 = v9;
    *(_WORD *)&v19[2] = a2->n128_u16[6];
    *(_WORD *)&v19[4] = a2->n128_u16[5];
    *(_WORD *)&v19[6] = a2->n128_u16[4];
    *(_WORD *)&v19[8] = a2->n128_u16[3];
    *(_WORD *)&v19[10] = a2->n128_u16[2];
    *(_WORD *)&v19[12] = a2->n128_u16[1];
    *(_WORD *)&v19[14] = a2->n128_u16[0];
  }
  *(_WORD *)&v19[16] = 0;
  *a1 = 0;
  if ( v9 < 0x3FFF )
    return 1;
  v12 = v9 - 16382;
  if ( (int)(v9 - 16382) > a3 )
    return 5;
  if ( v9 < 0x400F )
  {
    eshift((__int64)&v17, v12, a5);
    v15 = *(unsigned __int16 *)v19;
    if ( v17 )
    {
LABEL_13:
      if ( a3 == 64 )
        return 5;
      v15 = -(__int64)v15;
    }
  }
  else
  {
    v13 = v12 & 0xFFFFFFF0;
    eshift((__int64)&v17, v12 - (v12 & 0xFFFFFFF0), a5);
    v14 = *(unsigned __int16 *)v19;
    do
    {
      v13 -= 16;
      *(_OWORD *)v19 = *(_OWORD *)&v19[2];
      *(_WORD *)&v19[16] = 0;
      v15 = *(unsigned __int16 *)v19 | (v14 << 16);
      v14 = v15;
    }
    while ( v13 > 0 );
    if ( v17 )
      goto LABEL_13;
  }
  *a1 = v15;
  return 1;
}
// B4A64: variable 'a5' is possibly undefined
// 11BBE4: using guessed type int dword_11BBE4;
