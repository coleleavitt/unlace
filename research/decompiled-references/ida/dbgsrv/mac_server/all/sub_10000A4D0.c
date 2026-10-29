/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A4D0
// Address: 0x000000010000A4D0

//----- (000000010000A4D0) ----------------------------------------------------
void __fastcall sub_10000A4D0(char **a1)
{
  char *v2; // rdi
  char *v3; // r14
  __int64 v4; // r15
  char *v5; // r12
  void *v6; // rdi
  void *v7; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 8;
      do
      {
        v5 = *a1;
        v6 = *(void **)&(*a1)[v4 + 24];
        if ( v6 )
        {
          *(_QWORD *)&v5[v4 + 32] = 0;
          qfree(v6);
          *(_QWORD *)&v5[v4 + 24] = 0;
          *(_QWORD *)&v5[v4 + 40] = 0;
        }
        v7 = *(void **)&v5[v4];
        if ( v7 )
        {
          *(_QWORD *)&v5[v4 + 8] = 0;
          qfree(v7);
          *(_QWORD *)&v5[v4] = 0;
          *(_QWORD *)&v5[v4 + 16] = 0;
        }
        v4 += 56;
        --v3;
      }
      while ( v3 );
      v2 = *a1;
    }
    a1[1] = nullptr;
    qfree(v2);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
