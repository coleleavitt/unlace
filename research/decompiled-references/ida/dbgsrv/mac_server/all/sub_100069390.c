/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069390
// Address: 0x0000000100069390

//----- (0000000100069390) ----------------------------------------------------
void __fastcall sub_100069390(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = off_1000AA498;
  sub_10006AB40(a1 + 17);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    qfree(v2);
    a1[18] = 0;
    a1[20] = 0;
  }
}
// 1000AA498: using guessed type void (__fastcall __noreturn *off_1000AA498[2])();
