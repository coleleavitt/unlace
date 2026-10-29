/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4584B0
// Address: 0x00000000004584B0

//----- (00000000004584B0) ----------------------------------------------------
void __fastcall sub_4584B0(char **a1)
{
  char *v2; // rdi
  char *v3; // r12
  char *i; // rbx
  char *v5; // rax
  void *v6; // rdx

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[32 * (_QWORD)i];
        if ( *(int *)v5 >= -1 )
        {
          v6 = *((void **)v5 + 1);
          if ( v6 )
          {
            *((_QWORD *)v5 + 2) = 0;
            j__free(v6);
            v2 = *a1;
          }
        }
      }
    }
    a1[1] = nullptr;
    j__free(v2);
  }
}
