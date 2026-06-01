/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_964D8
// Address: 0x000964D8

//----- (000964D8) --------------------------------------------------------
_DWORD *__fastcall sub_964D8(int a1, int *a2)
{
  _DWORD *result; // r0
  int v4; // r3

  result = sub_93AC6(a1 + 368, 12);
  v4 = *a2;
  *result = &off_DBD34;
  result[1] = 16843050;
  *((_BYTE *)result + 8) = v4 != 0;
  return result;
}
// DBD34: using guessed type _UNKNOWN *off_DBD34;
