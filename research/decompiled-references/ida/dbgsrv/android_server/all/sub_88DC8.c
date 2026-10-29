/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88DC8
// Address: 0x0000000000088DC8

//----- (0000000000088DC8) ----------------------------------------------------
void __fastcall sub_88DC8(_QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[2];
  *a1 = &off_15DC60;
  qsem_free(v2);
  operator delete(a1);
}
// 15DC60: using guessed type void (__fastcall __noreturn *off_15DC60)();
