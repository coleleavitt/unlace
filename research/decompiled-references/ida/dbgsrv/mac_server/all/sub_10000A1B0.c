/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A1B0
// Address: 0x000000010000A1B0

//----- (000000010000A1B0) ----------------------------------------------------
void __fastcall sub_10000A1B0(char **a1)
{
  char *v2; // rdi
  char *v3; // r14
  __int64 v4; // r15
  char *v5; // r12
  void *v6; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = *a1;
        if ( *(int *)&(*a1)[v4] >= -1 )
        {
          v6 = *(void **)&v5[v4 + 8];
          if ( v6 )
          {
            *(_QWORD *)&v5[v4 + 16] = 0;
            qfree(v6);
            *(_QWORD *)&v5[v4 + 8] = 0;
            *(_QWORD *)&v5[v4 + 24] = 0;
          }
          *(_DWORD *)&v5[v4] = -2;
        }
        v4 += 32;
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
