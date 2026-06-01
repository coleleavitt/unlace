void __fastcall sub_2258610(__int64 a1)
{
  void *v2; // rdi

  v2 = *(void **)(a1 + 152);
  if ( v2 != (void *)(a1 + 176) )
    free(v2);
  if ( *(_QWORD *)a1 != a1 + 24 )
    free(*(void **)a1);
}
