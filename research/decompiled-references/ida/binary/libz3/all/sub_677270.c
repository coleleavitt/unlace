__int64 __fastcall sub_677270(__int64 a1)
{
  __int64 v2; // rbp
  void *v3; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = *(void **)(v2 + 16);
    if ( v3 )
      memset(v3, 0, 4LL * *(unsigned int *)(v2 + 12));
    *(_DWORD *)(v2 + 8) = 0;
  }
  return sub_2334C0((__int64 *)(a1 + 8));
}

