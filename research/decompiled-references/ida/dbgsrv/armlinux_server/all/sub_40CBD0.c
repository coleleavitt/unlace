/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CBD0
// Address: 0x000000000040CBD0

//----- (000000000040CBD0) ----------------------------------------------------
void __fastcall sub_40CBD0(char **a1)
{
  char *v1; // x19
  char *v3; // x23
  char *v4; // x20
  __int64 v5; // x21
  char *v6; // x19
  void *v7; // x0
  void *v8; // x0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = nullptr;
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
        v1 = *a1;
      }
      while ( v3 != v4 );
    }
    a1[1] = nullptr;
    j__free(v1);
  }
}
