/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_963E0
// Address: 0x000963E0

//----- (000963E0) --------------------------------------------------------
_DWORD *__fastcall sub_963E0(int a1, int *a2)
{
  _DWORD *result; // r0
  int v4; // r3

  result = sub_93AC6(a1 + 368, 12);
  v4 = *a2;
  *result = &off_DBEA0;
  result[1] = 16843037;
  result[2] = v4;
  return result;
}
// DBEA0: using guessed type _UNKNOWN *off_DBEA0;
