void __fastcall sub_592020(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v2);
  }
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
  }
}
