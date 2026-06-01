void __fastcall sub_A40220(__int64 a1)
{
  void *v2; // rdi

  v2 = *(void **)(a1 + 64);
  if ( v2 != (void *)(a1 + 80) )
    free(v2);
  if ( *(_QWORD *)a1 != a1 + 24 )
    free(*(void **)a1);
}

