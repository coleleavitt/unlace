/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416F60
// Address: 0x0000000000416F60

//----- (0000000000416F60) ----------------------------------------------------
void __fastcall sub_416F60(char **a1)
{
  char *v2; // rdi
  char *v3; // r13
  char *i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[80 * (_QWORD)i];
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
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v2);
  }
}
