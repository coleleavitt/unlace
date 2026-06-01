/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140065C30
// Address: 0x0000000140065C30

//----- (0000000140065C30) ----------------------------------------------------
__int16 __fastcall sub_140065C30(_WORD *a1)
{
  unsigned __int16 v1; // dx
  unsigned __int16 v3; // r8
  __int16 v4; // ax
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // cx
  __int16 v8; // ax
  unsigned __int16 v9; // dx
  __int16 v10; // ax
  unsigned __int16 v11; // cx
  __int16 v12; // ax
  unsigned __int16 v13; // dx
  __int16 result; // ax

  v1 = a1[10];
  v3 = a1[9];
  a1[10] = v1 << 8;
  v4 = HIBYTE(v1) | (v3 << 8);
  v5 = a1[7];
  a1[9] = v4;
  v6 = a1[8];
  a1[8] = HIBYTE(v3) | (v6 << 8);
  v7 = a1[6];
  a1[7] = HIBYTE(v6) | (v5 << 8);
  v8 = HIBYTE(v5) | (v7 << 8);
  v9 = a1[5];
  a1[6] = v8;
  v10 = HIBYTE(v7) | (v9 << 8);
  v11 = a1[4];
  a1[5] = v10;
  v12 = HIBYTE(v9) | (v11 << 8);
  v13 = a1[3];
  a1[4] = v12;
  a1[3] = HIBYTE(v11) | (v13 << 8);
  result = a1[2] << 8;
  a1[2] = result | HIBYTE(v13);
  return result;
}
