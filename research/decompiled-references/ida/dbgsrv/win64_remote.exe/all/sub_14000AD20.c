/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000AD20
// Address: 0x000000014000AD20

//----- (000000014000AD20) ----------------------------------------------------
void __fastcall sub_14000AD20(void **a1)
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
        v5 = *(void **)((char *)*a1 + v3 + 40);
        if ( v5 )
        {
          *(_QWORD *)&v4[v3 + 48] = 0;
          j_free(v5);
          *(_QWORD *)&v4[v3 + 40] = 0;
          *(_QWORD *)&v4[v3 + 56] = 0;
        }
        v6 = *(void **)&v4[v3 + 8];
        if ( v6 )
        {
          *(_QWORD *)&v4[v3 + 16] = 0;
          j_free(v6);
          *(_QWORD *)&v4[v3 + 8] = 0;
          *(_QWORD *)&v4[v3 + 24] = 0;
        }
        v3 += 64;
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
