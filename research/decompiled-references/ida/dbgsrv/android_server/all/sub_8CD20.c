/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CD20
// Address: 0x000000000008CD20

//----- (000000000008CD20) ----------------------------------------------------
void __fastcall sub_8CD20(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[9];
  *a1 = off_15F290;
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
// 15F290: using guessed type __int64 (__fastcall *off_15F290[2])();
