/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100034EF0
// Address: 0x0000000100034EF0

//----- (0000000100034EF0) ----------------------------------------------------
void __fastcall sub_100034EF0(__int64 a1)
{
  char *v1; // r14
  __int64 v2; // r12
  __int64 i; // r13
  void *v4; // r15

  v1 = *(char **)a1;
  v2 = 8LL * *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    for ( i = 0; i != v2; i += 8 )
    {
      v4 = *(void **)&v1[i];
      if ( v4 )
      {
        sub_100035ED0(*(_QWORD *)&v1[i]);
        operator delete(v4);
      }
    }
    v1 = *(char **)a1;
  }
  if ( v1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v1);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  sub_100034930(a1);
  sub_100037950(a1 + 64);
  sub_100046230(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  destroy_lexer(*(_QWORD **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
}
