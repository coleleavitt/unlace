/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461900
// Address: 0x0000000000461900

//----- (0000000000461900) ----------------------------------------------------
void __fastcall sub_461900(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[14];
  *a1 = off_51AC10;
  if ( v2 )
  {
    a1[15] = 0;
    j__free(v2);
  }
  sub_475E80(a1);
}
// 51AC10: using guessed type __int64 (__fastcall *off_51AC10[4])();
