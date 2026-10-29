/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005AC10
// Address: 0x000000010005AC10

//----- (000000010005AC10) ----------------------------------------------------
void __fastcall sub_10005AC10(char **a1)
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
      v4 = 16;
      do
      {
        v5 = *a1;
        v6 = *(void **)&(*a1)[v4];
        if ( v6 )
        {
          *(_QWORD *)&v5[v4 + 8] = 0;
          qfree(v6);
          *(_QWORD *)&v5[v4] = 0;
          *(_QWORD *)&v5[v4 + 16] = 0;
        }
        v4 += 40;
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
