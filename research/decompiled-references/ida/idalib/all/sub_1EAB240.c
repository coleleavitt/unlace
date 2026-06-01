void __fastcall sub_1EAB240(__int64 a1)
{
  void *v2; // rdi

  v2 = *(void **)(a1 + 40);
  if ( v2 != (void *)(a1 + 56) )
    operator delete(v2);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}
