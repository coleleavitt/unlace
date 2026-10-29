/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92A50
// Address: 0x0000000000092A50

//----- (0000000000092A50) ----------------------------------------------------
void __fastcall sub_92A50(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_14F690;
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
// 14F690: using guessed type __int64 (__fastcall *off_14F690)();
