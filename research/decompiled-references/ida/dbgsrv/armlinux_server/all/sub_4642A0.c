/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4642A0
// Address: 0x00000000004642A0

//----- (00000000004642A0) ----------------------------------------------------
__int64 *__fastcall sub_4642A0(__int64 a1, __int64 **a2)
{
  __int64 *v2; // x2
  __int64 *result; // x0

  a2[3] = *(__int64 **)a1;
  a2[5] = (__int64 *)*(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(__int64 **)(a1 + 16);
  else
    v2 = &qword_4B2D48;
  *a2 = v2;
  a2[6] = (__int64 *)*(unsigned int *)(a1 + 40);
  a2[9] = (__int64 *)*(unsigned int *)(a1 + 44);
  a2[1] = *(__int64 **)(a1 + 56);
  result = *(__int64 **)(a1 + 64);
  a2[7] = result;
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
