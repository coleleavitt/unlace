/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006E138
// Address: 0x000000010006E138

//----- (000000010006E138) ----------------------------------------------------
__int64 __fastcall sub_10006E138(unsigned __int64 *a1, __int64 a2, signed int a3, int a4, int8x16x2_t a5)
{
  int v7; // w21
  __int16 v8; // w8
  __int16 v9; // w9
  unsigned int v10; // w8
  __int32 v11; // w9
  __int16 v12; // w8
  unsigned __int64 v13; // t2
  unsigned int v14; // w1
  signed int v15; // w21
  unsigned __int64 v16; // x8
  __int16 v18; // [xsp+Ah] [xbp-56h] BYREF
  __int16 v19; // [xsp+Ch] [xbp-54h]
  _BYTE v20[18]; // [xsp+Eh] [xbp-52h]
  int8x16_t v21; // [xsp+20h] [xbp-40h] BYREF

  if ( a4 )
  {
    v21 = *(int8x16_t *)a2;
    a5.val[0] = v21;
    v7 = v21.i16[7];
    eadd(
      (unsigned __int16 *)&qword_10008C400,
      (unsigned __int16 *)&v21,
      (int16x4_t *)&v21,
      ((unsigned int)v21.i16[7] >> 15) & 1,
      a5);
    v8 = v21.i16[7];
    v9 = v21.i16[7] ^ 0x8000;
    if ( !v21.i16[7] )
      v9 = 0;
    if ( v7 < 0 )
      v8 = v9;
    v18 = (unsigned int)v8 >> 15;
    v10 = v8 & 0x7FFF;
    v19 = v10;
    *(_WORD *)v20 = 0;
    *(int16x4_t *)&v20[2] = vrev64_s16(*(int16x4_t *)&v21.u16[3]);
    *(_WORD *)&v20[10] = v21.i16[2];
    v11 = v21.i32[0];
  }
  else
  {
    v12 = *(_WORD *)(a2 + 14);
    v18 = (unsigned int)v12 >> 15;
    v10 = v12 & 0x7FFF;
    v19 = v10;
    *(_WORD *)v20 = 0;
    *(int16x4_t *)&v20[2] = vrev64_s16(*(int16x4_t *)(a2 + 6));
    *(_WORD *)&v20[10] = *(_WORD *)(a2 + 4);
    v11 = *(_DWORD *)a2;
  }
  HIDWORD(v13) = v11;
  LODWORD(v13) = v11;
  *(_DWORD *)&v20[12] = v13 >> 16;
  *(_WORD *)&v20[16] = 0;
  *a1 = 0;
  if ( v10 < 0x3FFF )
    return 1;
  v14 = v10 - 16382;
  if ( (int)(v10 - 16382) > a3 )
    return 5;
  if ( v10 < 0x400F )
  {
    eshift((__int64)&v18, v14);
    v16 = *(unsigned __int16 *)v20;
    if ( !v18 )
      goto LABEL_19;
  }
  else
  {
    v15 = v14 & 0xFFFFFFF0;
    eshift((__int64)&v18, ((_BYTE)v10 + 2) & 0xF);
    v16 = *(unsigned __int16 *)v20;
    do
    {
      *(_OWORD *)v20 = *(_OWORD *)&v20[2];
      *(_WORD *)&v20[16] = 0;
      v16 = *(unsigned __int16 *)v20 | (v16 << 16);
      v15 -= 16;
    }
    while ( v15 > 0 );
    if ( !v18 )
      goto LABEL_19;
  }
  if ( a3 == 64 )
    return 5;
  v16 = -(__int64)v16;
LABEL_19:
  *a1 = v16;
  return 1;
}
// 10008C400: using guessed type __int64 qword_10008C400;
