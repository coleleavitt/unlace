/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140047660
// Address: 0x0000000140047660

//----- (0000000140047660) ----------------------------------------------------
void __fastcall sub_140047660(void **a1)
{
  char *v2; // rsi
  __int64 v3; // rdi
  char *v4; // rbx
  void *v5; // rcx
  void *v6; // rcx

  if ( *a1 )
  {
    v2 = (char *)a1[1];
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = (char *)*a1;
        v5 = *(void **)((char *)*a1 + v3 + 24);
        if ( v5 )
        {
          *(_QWORD *)&v4[v3 + 32] = 0;
          j_free(v5);
          *(_QWORD *)&v4[v3 + 24] = 0;
          *(_QWORD *)&v4[v3 + 40] = 0;
        }
        v6 = *(void **)&v4[v3];
        if ( v6 )
        {
          *(_QWORD *)&v4[v3 + 8] = 0;
          j_free(v6);
          *(_QWORD *)&v4[v3] = 0;
          *(_QWORD *)&v4[v3 + 16] = 0;
        }
        v3 += 72;
        --v2;
      }
      while ( v2 );
    }
    a1[1] = nullptr;
    j_free(*a1);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
