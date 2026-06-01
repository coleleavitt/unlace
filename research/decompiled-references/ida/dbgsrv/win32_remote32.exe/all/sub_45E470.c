/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E470
// Address: 0x0045E470

//----- (0045E470) --------------------------------------------------------
__int16 __cdecl sub_45E470(_WORD *a1)
{
  unsigned __int16 v1; // cx
  unsigned __int16 v2; // dx
  __int16 v3; // ax
  unsigned __int16 v4; // si
  unsigned __int16 v5; // cx
  __int16 v6; // ax
  unsigned __int16 v7; // dx
  __int16 v8; // ax
  unsigned __int16 v9; // cx
  __int16 v10; // ax
  unsigned __int16 v11; // dx
  __int16 v12; // ax
  unsigned __int16 v13; // cx
  __int16 result; // ax

  v1 = a1[10];
  v2 = a1[9];
  a1[10] = v1 << 8;
  v3 = HIBYTE(v1) | (v2 << 8);
  v4 = a1[4];
  v5 = a1[8];
  a1[9] = v3;
  v6 = HIBYTE(v2) | (v5 << 8);
  v7 = a1[7];
  a1[8] = v6;
  v8 = HIBYTE(v5) | (v7 << 8);
  v9 = a1[6];
  a1[7] = v8;
  v10 = HIBYTE(v7) | (v9 << 8);
  v11 = a1[5];
  a1[6] = v10;
  v12 = HIBYTE(v9) | (v11 << 8);
  v13 = a1[3];
  a1[5] = v12;
  a1[4] = HIBYTE(v11) | (v4 << 8);
  a1[3] = HIBYTE(v4) | (v13 << 8);
  result = HIBYTE(v13) | (a1[2] << 8);
  a1[2] = result;
  return result;
}
