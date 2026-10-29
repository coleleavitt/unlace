void __fastcall sub_1EB0870(__int64 a1)
{
  void *v2; // rbp
  void *v3; // rdi

  v2 = *(void **)(a1 + 88);
  if ( v2 )
  {
    sub_1EB0870(*(_QWORD *)(a1 + 88));
    operator delete(v2, 0x60u);
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 != (void *)(a1 + 64) )
    free(v3);
  if ( *(_QWORD *)a1 != a1 + 16 )
    free(*(void **)a1);
}
