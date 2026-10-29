/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000531D0
// Address: 0x00000001000531D0

//----- (00000001000531D0) ----------------------------------------------------
void __fastcall sub_1000531D0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = off_1000A9718;
  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
    a1[1] = 0;
    a1[3] = 0;
  }
}
// 1000A9718: using guessed type __int64 (__fastcall *off_1000A9718[2])();
