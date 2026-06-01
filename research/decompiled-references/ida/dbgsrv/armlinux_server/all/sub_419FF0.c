/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419FF0
// Address: 0x0000000000419FF0

//----- (0000000000419FF0) ----------------------------------------------------
void __fastcall sub_419FF0(_QWORD *a1)
{
  void *v1; // x2

  v1 = (void *)a1[5];
  *a1 = off_519C08;
  if ( v1 )
  {
    a1[6] = 0;
    j__free(v1);
  }
}
// 519C08: using guessed type __int64 (__fastcall *off_519C08[3])();
