void __fastcall sub_8E3880(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = *(void **)(a1 + 96);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v2);
  }
  v3 = *(void **)(a1 + 72);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v3);
  }
  v4 = *(void **)(a1 + 48);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v4);
  }
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v5);
  }
  v6 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v6);
  }
}
