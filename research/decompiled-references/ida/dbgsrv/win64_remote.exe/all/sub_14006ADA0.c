/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006ADA0
// Address: 0x000000014006ADA0

//----- (000000014006ADA0) ----------------------------------------------------
_QWORD *__fastcall sub_14006ADA0(_QWORD *a1, char a2)
{
  *a1 = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}
// 1400AE6B8: using guessed type void *type_info::`vftable';
