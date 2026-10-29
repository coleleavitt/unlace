/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487938
// Address: 0x0000000000487938

//----- (0000000000487938) ----------------------------------------------------
__int64 __fastcall sub_487938(__int64 a1, _WORD *a2)
{
  __int64 v2; // x3
  _WORD *v3; // x2
  __int16 v4; // w0
  __int64 result; // x0
  unsigned int v6; // t1

  v2 = a1 + 14;
  v3 = a2 + 3;
  *a2 = *(__int16 *)(a1 + 14) >> 15;
  v4 = *(_WORD *)(a1 + 14);
  a2[2] = 0;
  a2[1] = v4 & 0x7FFF;
  do
  {
    v6 = *(unsigned __int16 *)(v2 - 2);
    v2 -= 2;
    result = v6;
    *v3++ = v6;
  }
  while ( v3 != a2 + 10 );
  *v3 = 0;
  return result;
}
