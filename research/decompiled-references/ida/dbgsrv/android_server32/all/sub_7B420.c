/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B420
// Address: 0x0007B420

//----- (0007B420) --------------------------------------------------------
_DWORD *__fastcall sub_7B420(int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r1

  result = operator new(0x8048u);
  v5 = *(_DWORD *)(a1 + 4);
  result[8209] = a2;
  *result = &off_DB14C;
  result[1] = v5;
  result[2] = a1;
  return result;
}
// DB14C: using guessed type _UNKNOWN *off_DB14C;
