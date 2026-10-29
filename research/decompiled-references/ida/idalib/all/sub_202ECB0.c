__int64 __fastcall sub_202ECB0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = *(void **)(a1 + 160);
  if ( v2 )
    operator delete(v2);
  operator delete(*(_QWORD *)(a1 + 136), 16LL * *(unsigned int *)(a1 + 152), 8);
  v3 = *(void **)(a1 + 104);
  if ( v3 )
    operator delete(v3);
  operator delete(*(_QWORD *)(a1 + 80), 8LL * *(unsigned int *)(a1 + 96), 8);
  operator delete(*(_QWORD *)(a1 + 56), 8LL * *(unsigned int *)(a1 + 72), 8);
  operator delete(*(_QWORD *)(a1 + 32), 8LL * *(unsigned int *)(a1 + 48), 8);
  return operator delete(*(_QWORD *)(a1 + 8), 8LL * *(unsigned int *)(a1 + 24), 8);
}
