/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C580
// Address: 0x000000010001C580

//----- (000000010001C580) ----------------------------------------------------
void __fastcall sub_10001C580(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v2 = (void *)a1[15];
  if ( v2 )
  {
    a1[16] = 0;
    qfree(v2);
    a1[15] = 0;
    a1[17] = 0;
  }
  v3 = (void *)a1[12];
  if ( v3 )
  {
    a1[13] = 0;
    qfree(v3);
    a1[12] = 0;
    a1[14] = 0;
  }
  v4 = (void *)a1[9];
  if ( v4 )
  {
    a1[10] = 0;
    qfree(v4);
    a1[9] = 0;
    a1[11] = 0;
  }
  v5 = (void *)a1[5];
  if ( v5 )
  {
    a1[6] = 0;
    qfree(v5);
    a1[5] = 0;
    a1[7] = 0;
  }
}
