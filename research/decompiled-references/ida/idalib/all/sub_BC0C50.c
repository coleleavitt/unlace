__int64 __fastcall sub_BC0C50(__int64 a1, __int64 a2)
{
  void *v2; // rdi

  v2 = *(void **)(a2 + 24);
  if ( v2 != (void *)(a2 + 40) )
    free(v2);
  return sub_2222F80(a2 + 8);
}
