/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003A20
// Address: 0x0000000140003A20

//----- (0000000140003A20) ----------------------------------------------------
_QWORD *__fastcall sub_140003A20(_QWORD *a1, char a2)
{
  *a1 = &off_140092138;
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}
// 140092138: using guessed type __int64 (__fastcall *off_140092138)();
