void __fastcall sub_1213F50(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(void **)(a1 + 112);
  if ( v2 != (void *)(a1 + 128) )
    operator delete(v2);
  v3 = *(void **)(a1 + 80);
  if ( v3 != (void *)(a1 + 96) )
    operator delete(v3);
  v4 = *(void **)(a1 + 48);
  if ( v4 != (void *)(a1 + 64) )
    operator delete(v4);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}
