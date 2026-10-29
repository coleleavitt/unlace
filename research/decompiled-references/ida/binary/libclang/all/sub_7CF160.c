__int64 __fastcall sub_7CF160(__int64 a1, __int64 a2)
{
  void *v3; // rdi

  v3 = *(void **)(a1 + 24);
  if ( v3 != (void *)(a1 + 40) )
    free(v3);
  return sub_25ABF80(a1 + 8, a2);
}

