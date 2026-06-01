void __fastcall sub_1FDAF20(__int64 a1)
{
  void *v2; // rdi

  if ( *(_QWORD *)(a1 + 88) )
    sub_1FDAF20();
  v2 = *(void **)(a1 + 48);
  if ( v2 != (void *)(a1 + 64) )
    free(v2);
  if ( *(_QWORD *)a1 != a1 + 16 )
    free(*(void **)a1);
  operator delete((void *)a1, 0x60u);
}
