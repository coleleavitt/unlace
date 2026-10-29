/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64C5E
// Address: 0x00064C5E

//----- (00064C5E) --------------------------------------------------------
void __fastcall sub_64C5E(_DWORD *a1)
{
  void **v2; // r5
  int v3; // r0
  int v4; // r6
  void *v5; // r0
  void *v6; // r0

  if ( a1[9] )
  {
    v2 = (void **)a1[11];
    v3 = a1[12];
    if ( 4 * v3 )
    {
      v4 = 4 * v3;
      do
      {
        v5 = *v2++;
        qfree(v5);
        v4 -= 4;
      }
      while ( v4 );
      v2 = (void **)a1[11];
    }
    if ( v2 )
    {
      a1[12] = 0;
      qfree(v2);
      a1[13] = 0;
      a1[11] = 0;
    }
    v6 = (void *)a1[8];
    if ( v6 )
    {
      a1[9] = 0;
      qfree(v6);
      a1[10] = 0;
      a1[8] = 0;
    }
  }
}
