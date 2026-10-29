__int64 __fastcall sub_1AF4310(__int64 a1)
{
  void *v2; // rdi

  v2 = *(void **)(a1 + 24);
  if ( v2 != (void *)(a1 + 40) )
    free(v2);
  return operator delete(*(_QWORD *)a1, 16LL * *(unsigned int *)(a1 + 16), 8);
}
