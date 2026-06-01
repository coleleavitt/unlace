void __fastcall sub_7C3550(__int64 a1)
{
  struct addrinfo *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(struct addrinfo **)(a1 + 16);
  if ( v2 )
  {
    freeaddrinfo(v2);
    *(_QWORD *)(a1 + 16) = 0;
  }
  qsem_free(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
  qmutex_free(*(void **)(a1 + 24));
  v3 = *(void **)(a1 + 64);
  *(_QWORD *)(a1 + 24) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v3);
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v4);
  }
}
