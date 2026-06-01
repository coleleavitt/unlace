/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008B20
// Address: 0x0000000100008B20

//----- (0000000100008B20) ----------------------------------------------------
void __fastcall sub_100008B20(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
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
