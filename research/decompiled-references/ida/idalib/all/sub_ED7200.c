void __fastcall sub_ED7200(__int64 a1)
{
  void *v1; // rbx
  void *v2; // rdi

  v1 = (void *)(a1 + 136);
  operator delete(*(_QWORD *)(a1 + 384), 16LL * *(unsigned int *)(a1 + 400), 8);
  operator delete(*(_QWORD *)(a1 + 360), 16LL * *(unsigned int *)(a1 + 376), 8);
  operator delete(*(_QWORD *)(a1 + 336), 16LL * *(unsigned int *)(a1 + 352), 8);
  operator delete(*(_QWORD *)(a1 + 288), 24LL * *(unsigned int *)(a1 + 304), 8);
  operator delete(*(_QWORD *)(a1 + 264), 16LL * *(unsigned int *)(a1 + 280), 8);
  v2 = *(void **)(a1 + 120);
  if ( v2 != v1 )
    free(v2);
}
