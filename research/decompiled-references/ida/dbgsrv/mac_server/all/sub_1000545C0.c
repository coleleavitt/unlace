/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000545C0
// Address: 0x00000001000545C0

//----- (00000001000545C0) ----------------------------------------------------
void __fastcall sub_1000545C0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = off_1000AA6B8;
  v2 = (void *)a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
    a1[9] = 0;
    a1[11] = 0;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 1000AA6B8: using guessed type void (__fastcall __noreturn *off_1000AA6B8[2])();
