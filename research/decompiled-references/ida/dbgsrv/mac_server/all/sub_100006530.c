/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006530
// Address: 0x0000000100006530

//----- (0000000100006530) ----------------------------------------------------
void __fastcall sub_100006530(_QWORD *a1)
{
  void *v2; // rdi

  v2 = (void *)a1[261];
  if ( v2 )
  {
    a1[262] = 0;
    qfree(v2);
    a1[261] = 0;
    a1[263] = 0;
  }
}
