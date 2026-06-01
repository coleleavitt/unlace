/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98DE0
// Address: 0x00098DE0

//----- (00098DE0) --------------------------------------------------------
void __cdecl sub_98DE0(int a1)
{
  void *v1; // eax
  void *v2; // eax

  if ( *(_DWORD *)a1 )
  {
    freeaddrinfo(*(struct addrinfo **)a1);
    *(_DWORD *)a1 = 0;
  }
  qsem_free(*(char **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
  qmutex_free(*(pthread_mutex_t **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v2 = *(void **)(a1 + 12);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
}
