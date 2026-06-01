void __fastcall sub_19F52B0(__int64 a1)
{
  __int64 v1; // rsi
  void *v2; // rbx
  void *v3; // rdi

  v1 = *(unsigned int *)(a1 + 120);
  *(_QWORD *)a1 = off_2C60DD0;
  v2 = (void *)(a1 + 40);
  operator delete(*(_QWORD *)(a1 + 104), 16 * v1, 8);
  v3 = *(void **)(a1 + 24);
  if ( v3 != v2 )
    free(v3);
}
