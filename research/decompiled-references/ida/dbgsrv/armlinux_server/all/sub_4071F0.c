/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4071F0
// Address: 0x00000000004071F0

//----- (00000000004071F0) ----------------------------------------------------
__int64 __fastcall sub_4071F0(_QWORD *a1)
{
  char *v1; // x19
  __int64 v3; // x23
  __int64 v4; // x20
  __int64 v5; // x21
  char *v6; // x19
  void *v7; // x0
  void *v8; // x0

  v1 = (char *)a1[57];
  if ( v1 )
  {
    v3 = a1[58];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = &v1[v5];
        v7 = *((void **)v6 + 5);
        if ( v7 )
        {
          *((_QWORD *)v6 + 6) = 0;
          j__free(v7);
        }
        v8 = *((void **)v6 + 2);
        if ( v8 )
        {
          *((_QWORD *)v6 + 3) = 0;
          j__free(v8);
        }
        ++v4;
        v5 += 80;
        v1 = (char *)a1[57];
      }
      while ( v3 != v4 );
    }
    a1[58] = 0;
    j__free(v1);
    a1[57] = 0;
    a1[59] = 0;
  }
  return 1;
}
