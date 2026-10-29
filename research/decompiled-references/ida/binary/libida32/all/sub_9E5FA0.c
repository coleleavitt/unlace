void __fastcall sub_9E5FA0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = *(void **)(a1 + 80);
  if ( v2 != (void *)(a1 + 96) )
    operator delete(v2);
  v3 = *(void **)(a1 + 40);
  if ( v3 != (void *)(a1 + 56) )
    operator delete(v3);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}

