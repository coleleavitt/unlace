/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003960
// Address: 0x0000000140003960

//----- (0000000140003960) ----------------------------------------------------
_QWORD *__fastcall sub_140003960(_QWORD *a1, char a2)
{
  *a1 = &off_140091F80;
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}
// 140091F80: using guessed type __int64 (__fastcall *off_140091F80)();
