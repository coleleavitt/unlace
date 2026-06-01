/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000BE00
// Address: 0x000000014000BE00

//----- (000000014000BE00) ----------------------------------------------------
_QWORD *__fastcall sub_14000BE00(_QWORD *a1, char a2)
{
  *a1 = off_140092F00;
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}
// 140092F00: using guessed type __int64 (__fastcall *off_140092F00[4])();
