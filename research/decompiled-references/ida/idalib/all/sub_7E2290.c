void __fastcall sub_7E2290(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(void **)(a1 + 64);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v2);
  }
  v3 = *(void **)(a1 + 32);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v3);
  }
  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v4);
  }
}
