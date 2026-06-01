/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448718
// Address: 0x0000000000448718

//----- (0000000000448718) ----------------------------------------------------
void __fastcall sub_448718(char **a1)
{
  char *v1; // x1
  char *v3; // x21
  char *i; // x19
  __int64 *v5; // x0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = (__int64 *)&v1[32 * (_QWORD)i];
        sub_448310(v5);
        v1 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v1);
  }
}
