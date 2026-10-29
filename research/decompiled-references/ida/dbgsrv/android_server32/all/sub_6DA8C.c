/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DA8C
// Address: 0x0006DA8C

//----- (0006DA8C) --------------------------------------------------------
unsigned int __fastcall sub_6DA8C(int a1)
{
  _BYTE *v1; // r1
  unsigned int v2; // r0
  unsigned int result; // r0

  v1 = *(_BYTE **)a1;
  v2 = *(_DWORD *)(a1 + 4) - 5;
  v1[3] = v2;
  v1[2] = BYTE1(v2);
  v1[1] = BYTE2(v2);
  result = HIBYTE(v2);
  *v1 = result;
  return result;
}
