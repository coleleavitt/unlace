__int64 __fastcall sub_B9CF10(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  __int64 v3; // rbx
  void *v4; // rsi

  v2 = *(void **)(a2 + 24);
  v3 = a2 + 8;
  v4 = (void *)(a2 + 40);
  if ( v2 != v4 )
    free(v2);
  return sub_21FF240(v3, v4);
}

