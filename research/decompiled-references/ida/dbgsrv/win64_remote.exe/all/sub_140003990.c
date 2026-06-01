/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003990
// Address: 0x0000000140003990

//----- (0000000140003990) ----------------------------------------------------
_QWORD *__fastcall sub_140003990(_QWORD *a1, char a2)
{
  *a1 = off_140091D20;
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}
// 140091D20: using guessed type void (__fastcall __noreturn *off_140091D20[36])();
