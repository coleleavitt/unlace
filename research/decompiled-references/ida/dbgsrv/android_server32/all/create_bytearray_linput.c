/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_bytearray_linput
// Address: 0x0007BB28

//----- (0007BB28) --------------------------------------------------------
_DWORD *__fastcall create_bytearray_linput(int a1, int a2)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r5

  v4 = operator new(0x18u);
  *v4 = &off_DB1EC;
  v4[2] = a2;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = a1;
  v5 = operator new(0x30u);
  *v5 = 4;
  v5[2] = v4;
  sub_7B454((int)v5);
  return v5;
}
// DB1EC: using guessed type _UNKNOWN *off_DB1EC;
