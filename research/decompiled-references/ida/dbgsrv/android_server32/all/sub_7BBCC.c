/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BBCC
// Address: 0x0007BBCC

//----- (0007BBCC) --------------------------------------------------------
_DWORD *__fastcall sub_7BBCC(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v8; // r4
  _DWORD *v9; // r5

  v8 = operator new(0x28u);
  v8[7] = a4;
  v8[6] = a3;
  v8[8] = a5 + a3;
  v8[3] = 0;
  v8[2] = a5;
  *v8 = &off_DB214;
  v8[5] = a1;
  v8[4] = 0;
  v8[9] = __CFADD__(a5, a3) + a4;
  v9 = operator new(0x30u);
  *v9 = 4;
  v9[2] = v8;
  sub_7B454((int)v9);
  return v9;
}
// DB214: using guessed type _UNKNOWN *off_DB214;
