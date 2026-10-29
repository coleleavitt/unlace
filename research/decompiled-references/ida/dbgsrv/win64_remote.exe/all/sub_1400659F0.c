/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400659F0
// Address: 0x00000001400659F0

//----- (00000001400659F0) ----------------------------------------------------
__int16 __fastcall sub_1400659F0(__int64 a1)
{
  unsigned __int16 v1; // dx
  unsigned __int16 v3; // r8
  __int16 v4; // ax
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // ax
  __int16 v7; // cx
  __int16 v8; // ax
  unsigned __int16 v9; // r8
  __int16 v10; // ax
  unsigned __int16 v11; // cx
  __int16 v12; // ax
  unsigned __int16 v13; // dx
  __int16 v14; // ax
  unsigned __int16 v15; // cx
  __int16 result; // ax

  v1 = *(_WORD *)(a1 + 4);
  v3 = *(_WORD *)(a1 + 6);
  *(_WORD *)(a1 + 4) = HIBYTE(v1);
  v4 = (v1 << 8) | HIBYTE(v3);
  v5 = *(_WORD *)(a1 + 10);
  *(_WORD *)(a1 + 6) = v4;
  v6 = *(_WORD *)(a1 + 8);
  v7 = v6 << 8;
  v8 = (v3 << 8) | HIBYTE(v6);
  v9 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 8) = v8;
  v10 = v7 | HIBYTE(v5);
  v11 = *(_WORD *)(a1 + 12);
  *(_WORD *)(a1 + 10) = v10;
  v12 = (v5 << 8) | HIBYTE(v11);
  v13 = *(_WORD *)(a1 + 14);
  *(_WORD *)(a1 + 12) = v12;
  v14 = (v11 << 8) | HIBYTE(v13);
  v15 = *(_WORD *)(a1 + 18);
  *(_WORD *)(a1 + 14) = v14;
  *(_WORD *)(a1 + 16) = (v13 << 8) | HIBYTE(v9);
  *(_WORD *)(a1 + 18) = (v9 << 8) | HIBYTE(v15);
  result = (v15 << 8) | *(unsigned __int8 *)(a1 + 21);
  *(_WORD *)(a1 + 20) = result;
  return result;
}
