/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F130
// Address: 0x000000000006F130

//----- (000000000006F130) ----------------------------------------------------
void __fastcall sub_6F130(__int64 a1, double a2, __m128 a3)
{
  char *v3; // r15
  __int64 v4; // r12
  __int64 i; // rbx
  void *v6; // r13

  v3 = *(char **)a1;
  v4 = 8LL * *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    for ( i = 0; i != v4; i += 8 )
    {
      v6 = *(void **)&v3[i];
      if ( v6 )
      {
        sub_6F1E0(*(_QWORD *)&v3[i], a2, a3);
        operator delete(v6);
      }
    }
    v3 = *(char **)a1;
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  sub_6EB40(a1, a2, a3);
  sub_71920(a1 + 64, a2, a3);
  sub_83DD0(*(void ***)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  destroy_lexer(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
}
