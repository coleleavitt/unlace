/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4542C0
// Address: 0x00000000004542C0

//----- (00000000004542C0) ----------------------------------------------------
__int64 __fastcall sub_4542C0(__int64 a1, char **a2)
{
  char *v2; // rdi
  char *v3; // r13
  char *i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi

  v2 = *a2;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v3 = a2[1];
  if ( v3 )
  {
    for ( i = nullptr; i != v3; ++i )
    {
      v5 = &v2[64 * (_QWORD)i];
      v6 = *((void **)v5 + 5);
      if ( v6 )
      {
        *((_QWORD *)v5 + 6) = 0;
        j__free(v6);
      }
      v7 = *((void **)v5 + 1);
      if ( v7 )
      {
        *((_QWORD *)v5 + 2) = 0;
        j__free(v7);
      }
      v2 = *a2;
    }
  }
  a2[1] = nullptr;
  j__free(v2);
  *a2 = nullptr;
  a2[2] = nullptr;
  return 0xFFFFFFFFLL;
}
