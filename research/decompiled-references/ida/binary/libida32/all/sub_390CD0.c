void __fastcall sub_390CD0(__int64 a1)
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
  v3 = *(void **)(a1 + 40);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v3);
  }
  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v4);
  }
}

