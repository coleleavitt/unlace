__int64 __fastcall sub_58A910(__int64 a1)
{
  void *v2; // rdi

  clear_tinfo_t(a1 + 48);
  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v2);
  }
  return cleanup_argloc(a1);
}
