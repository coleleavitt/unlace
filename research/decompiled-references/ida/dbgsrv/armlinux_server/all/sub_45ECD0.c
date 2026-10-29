/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45ECD0
// Address: 0x000000000045ECD0

//----- (000000000045ECD0) ----------------------------------------------------
void __fastcall sub_45ECD0(char **a1)
{
  char *v1; // x1
  char *v3; // x21
  char *i; // x19
  char *v5; // x3
  void *v6; // x0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v1[32 * (_QWORD)i];
        if ( *(int *)v5 >= -1 )
        {
          v6 = *((void **)v5 + 1);
          if ( v6 )
          {
            *((_QWORD *)v5 + 2) = 0;
            j__free(v6);
          }
        }
        v1 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v1);
  }
}
