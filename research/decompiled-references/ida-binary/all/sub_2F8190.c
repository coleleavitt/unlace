void __fastcall sub_2F8190(__int64 a1, const char *a2)
{
  _QWORD *v3; // rbx
  _QWORD *i; // r12
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
  {
    v3 = *(_QWORD **)(a1 + 8);
    for ( i = &v3[12 * *(_QWORD *)(a1 + 16)]; i != v3; v3 += 12 )
    {
      v5 = v3[7];
      if ( v5 )
      {
        v3[8] = 0;
        qfree(v5, a2);
      }
      v6 = v3[4];
      if ( v6 )
      {
        v3[5] = 0;
        qfree(v6, a2);
      }
      v7 = v3[1];
      if ( v7 )
      {
        v3[2] = 0;
        qfree(v7, a2);
      }
    }
    free(*(void **)a1);
  }
}
