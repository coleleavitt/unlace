/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140041090
// Address: 0x0000000140041090

//----- (0000000140041090) ----------------------------------------------------
void __fastcall sub_140041090(_QWORD *a1)
{
  void **v2; // rbx
  void **i; // rsi
  void *v4; // rcx
  void *v5; // rcx

  if ( a1[10] )
  {
    v2 = (void **)a1[12];
    for ( i = &v2[a1[13]]; v2 != i; ++v2 )
      j_free(*v2);
    v4 = (void *)a1[12];
    if ( v4 )
    {
      a1[13] = 0;
      j_free(v4);
      a1[12] = 0;
      a1[14] = 0;
    }
    v5 = (void *)a1[9];
    if ( v5 )
    {
      a1[10] = 0;
      j_free(v5);
      a1[9] = 0;
      a1[11] = 0;
    }
  }
}
