/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468440
// Address: 0x0000000000468440

//----- (0000000000468440) ----------------------------------------------------
void __fastcall sub_468440(char **a1)
{
  char *v1; // x1
  char *v3; // x21
  char *i; // x19
  char *v5; // x1
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
        v6 = *((void **)v5 + 1);
        if ( v6 )
        {
          *((_QWORD *)v5 + 2) = 0;
          j__free(v6);
        }
        v1 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v1);
  }
}
