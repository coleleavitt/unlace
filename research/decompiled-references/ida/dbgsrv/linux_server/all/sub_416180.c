/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416180
// Address: 0x0000000000416180

//----- (0000000000416180) ----------------------------------------------------
void __fastcall sub_416180(char **a1)
{
  char *v1; // rdx
  char *v3; // r12
  char *i; // rbx
  char *v5; // rax
  void *v6; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v1[24 * (_QWORD)i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          j__free(v6);
          v1 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    j__free(v1);
  }
}
