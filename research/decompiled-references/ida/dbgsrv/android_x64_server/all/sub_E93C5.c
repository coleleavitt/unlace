/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E93C5
// Address: 0x00000000000E93C5

//----- (00000000000E93C5) ----------------------------------------------------
_BYTE *__fastcall sub_E93C5(_BYTE *a1, _QWORD *a2)
{
  _BYTE *result; // rax
  __int64 v3; // rdx
  int v4; // ecx
  unsigned __int64 v5; // rdi

  result = a1;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = (unsigned __int64)(*result++ & 0x7F) << v4;
    v4 += 7;
    v3 |= v5;
  }
  while ( (char)*(result - 1) < 0 );
  *a2 = v3;
  return result;
}
