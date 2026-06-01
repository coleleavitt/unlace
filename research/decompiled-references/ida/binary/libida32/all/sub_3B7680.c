void __fastcall sub_3B7680(__int64 a1)
{
  void *v1; // rbp

  v1 = *(void **)(a1 + 2592);
  if ( v1 )
  {
    cleanup_argloc(*(_QWORD *)(a1 + 2592));
    qfree(v1);
  }
  *(_QWORD *)(a1 + 2592) = 0;
}

