void __fastcall sub_20954A0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(void **)(a1 + 144);
  if ( v2 != (void *)(a1 + 160) )
    free(v2);
  v3 = *(void **)(a1 + 112);
  if ( v3 != (void *)(a1 + 128) )
    free(v3);
  v4 = *(void **)(a1 + 80);
  if ( v4 != (void *)(a1 + 96) )
    free(v4);
  if ( *(_QWORD *)a1 != a1 + 16 )
    free(*(void **)a1);
}
