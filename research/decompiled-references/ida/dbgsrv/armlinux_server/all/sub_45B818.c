/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B818
// Address: 0x000000000045B818

//----- (000000000045B818) ----------------------------------------------------
void __fastcall sub_45B818(_QWORD *a1)
{
  void **v2; // x19
  void **v3; // x20
  void *v4; // t1
  void *v5; // x0

  v2 = (void **)a1[12];
  v3 = &v2[a1[13]];
  if ( v2 != v3 )
  {
    do
    {
      v4 = *v2++;
      j__free(v4);
    }
    while ( v3 != v2 );
    v3 = (void **)a1[12];
  }
  if ( v3 )
  {
    a1[13] = 0;
    j__free(v3);
    a1[12] = 0;
    a1[14] = 0;
  }
  v5 = (void *)a1[9];
  if ( v5 )
  {
    a1[10] = 0;
    j__free(v5);
    a1[9] = 0;
    a1[11] = 0;
  }
}
