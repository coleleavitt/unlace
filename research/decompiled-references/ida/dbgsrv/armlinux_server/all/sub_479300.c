/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479300
// Address: 0x0000000000479300

//----- (0000000000479300) ----------------------------------------------------
void __fastcall sub_479300(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[8];
  *a1 = off_51BA78;
  if ( v2 )
  {
    a1[9] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    j__free(v3);
  }
}
// 51BA78: using guessed type __int64 (__fastcall *off_51BA78[7])();
