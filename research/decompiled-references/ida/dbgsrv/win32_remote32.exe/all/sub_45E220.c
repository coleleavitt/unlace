/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E220
// Address: 0x0045E220

//----- (0045E220) --------------------------------------------------------
__int16 __cdecl sub_45E220(int a1)
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

  v1 = *(_WORD *)(a1 + 4);
  v2 = *(_WORD *)(a1 + 6);
  *(_WORD *)(a1 + 4) = HIBYTE(v1);
  v3 = (v1 << 8) | HIBYTE(v2);
  v4 = *(_WORD *)(a1 + 16);
  v5 = *(_WORD *)(a1 + 8);
  *(_WORD *)(a1 + 6) = v3;
  v6 = (v2 << 8) | HIBYTE(v5);
  v7 = *(_WORD *)(a1 + 10);
  *(_WORD *)(a1 + 8) = v6;
  v8 = (v5 << 8) | HIBYTE(v7);
  v9 = *(_WORD *)(a1 + 12);
  *(_WORD *)(a1 + 10) = v8;
  v10 = (v7 << 8) | HIBYTE(v9);
  v11 = *(_WORD *)(a1 + 14);
  *(_WORD *)(a1 + 12) = v10;
  v12 = (v9 << 8) | HIBYTE(v11);
  v13 = *(_WORD *)(a1 + 18);
  *(_WORD *)(a1 + 14) = v12;
  *(_WORD *)(a1 + 16) = (v11 << 8) | HIBYTE(v4);
  *(_WORD *)(a1 + 18) = (v4 << 8) | HIBYTE(v13);
  result = (v13 << 8) | *(unsigned __int8 *)(a1 + 21);
  *(_WORD *)(a1 + 20) = result;
  return result;
}
