/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002BED0
// Address: 0x000000014002BED0

//----- (000000014002BED0) ----------------------------------------------------
_QWORD *__fastcall sub_14002BED0(_QWORD *a1, char a2)
{
  *a1 = &off_140094B78;
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}
// 140094B78: using guessed type __int64 (__fastcall *off_140094B78)();
