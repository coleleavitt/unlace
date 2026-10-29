/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060E30
// Address: 0x0000000100060E30

//----- (0000000100060E30) ----------------------------------------------------
__int64 __fastcall sub_100060E30(__int64 a1)
{
  addrinfo *v2; // x0
  void *v3; // x0
  void *v4; // x0

  v2 = *(addrinfo **)a1;
  if ( v2 )
  {
    freeaddrinfo(v2);
    *(_QWORD *)a1 = 0;
  }
  qsem_free(*(_QWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0;
  qmutex_free(*(pthread_mutex_t **)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 0;
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  return a1;
}
