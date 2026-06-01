void __fastcall sub_577570(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  void (__fastcall *v6)(__int64, __int64, __int64); // rax
  void *v7; // rdi
  void *v8; // rdi

  sub_70A9D0();
  v2 = *(void **)(a1 + 664);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 672) = 0;
    qfree(v2);
  }
  v3 = *(void **)(a1 + 592);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 600) = 0;
    qfree(v3);
  }
  v4 = a1 + 432;
  do
  {
    v5 = *(void **)(v4 - 24);
    v4 -= 56;
    close_linput(v5);
  }
  while ( v4 != a1 + 96 );
  v6 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 80);
  if ( v6 )
    v6(a1 + 64, a1 + 64, 3);
  v7 = *(void **)(a1 + 24);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v7);
  }
  v8 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v8);
  }
}

