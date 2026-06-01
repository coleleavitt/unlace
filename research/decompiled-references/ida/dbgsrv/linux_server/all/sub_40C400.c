/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C400
// Address: 0x000000000040C400

//----- (000000000040C400) ----------------------------------------------------
__int64 __fastcall sub_40C400(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi

  v2 = (char *)a1[57];
  if ( v2 )
  {
    v3 = a1[58];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[80 * i];
        v6 = *((void **)v5 + 5);
        if ( v6 )
        {
          *((_QWORD *)v5 + 6) = 0;
          j__free(v6);
        }
        v7 = *((void **)v5 + 2);
        if ( v7 )
        {
          *((_QWORD *)v5 + 3) = 0;
          j__free(v7);
        }
        v2 = (char *)a1[57];
      }
    }
    a1[58] = 0;
    j__free(v2);
    a1[57] = 0;
    a1[59] = 0;
  }
  return 1;
}
