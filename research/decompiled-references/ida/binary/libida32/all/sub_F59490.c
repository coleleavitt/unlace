void __fastcall sub_F59490(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(void **)(a1 + 72);
  if ( v2 != (void *)(a1 + 88) )
    free(v2);
  operator delete();
  v3 = *(void **)(a1 + 32);
  if ( v3 )
    operator delete[](v3);
  v4 = *(void **)(a1 + 16);
  if ( v4 )
    operator delete[](v4);
  if ( *(_QWORD *)a1 )
    operator delete[](*(void **)a1);
}

