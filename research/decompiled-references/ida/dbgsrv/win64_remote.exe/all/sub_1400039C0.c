/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400039C0
// Address: 0x00000001400039C0

//----- (00000001400039C0) ----------------------------------------------------
_QWORD *__fastcall sub_1400039C0(_QWORD *a1, char a2)
{
  *a1 = &off_140091F70;
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}
// 140091F70: using guessed type void (__fastcall __noreturn *off_140091F70)();
