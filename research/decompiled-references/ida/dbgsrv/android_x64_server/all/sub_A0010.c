/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0010
// Address: 0x00000000000A0010

//----- (00000000000A0010) ----------------------------------------------------
void __fastcall sub_A0010(_QWORD *a1)
{
  char *v2; // r15
  __int64 v3; // r12
  __int64 i; // rbx
  void *v5; // rdi

  if ( a1[10] )
  {
    v2 = (char *)a1[12];
    v3 = 8LL * a1[13];
    if ( v3 )
    {
      for ( i = 0; i != v3; i += 8 )
        qfree(*(void **)&v2[i]);
      v2 = (char *)a1[12];
    }
    if ( v2 )
    {
      a1[13] = 0;
      qfree(v2);
      a1[12] = 0;
      a1[14] = 0;
    }
    v5 = (void *)a1[9];
    if ( v5 )
    {
      a1[10] = 0;
      qfree(v5);
      a1[9] = 0;
      a1[11] = 0;
    }
  }
}
