/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4090
// Address: 0x00000000000A4090

//----- (00000000000A4090) ----------------------------------------------------
void __fastcall sub_A4090(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_14ED58;
  v2 = (void *)a1[14];
  if ( v2 )
  {
    a1[15] = 0;
    qfree(v2);
    a1[14] = 0;
    a1[16] = 0;
  }
  sub_A8490(a1);
}
// 14ED58: using guessed type __int64 (__fastcall *off_14ED58)();
