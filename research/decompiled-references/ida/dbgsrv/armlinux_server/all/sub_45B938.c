/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B938
// Address: 0x000000000045B938

//----- (000000000045B938) ----------------------------------------------------
__int64 __fastcall sub_45B938(__int64 a1, char **a2)
{
  char *v2; // x0
  char *v4; // x22
  char *i; // x20
  char *v6; // x19
  void *v7; // x0
  void *v8; // x0

  v2 = *a2;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v4 = a2[1];
  if ( v4 )
  {
    for ( i = nullptr; i != v4; ++i )
    {
      v6 = &v2[64 * (_QWORD)i];
      v7 = *((void **)v6 + 5);
      if ( v7 )
      {
        *((_QWORD *)v6 + 6) = 0;
        j__free(v7);
      }
      v8 = *((void **)v6 + 1);
      if ( v8 )
      {
        *((_QWORD *)v6 + 2) = 0;
        j__free(v8);
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
