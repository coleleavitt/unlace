/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D760
// Address: 0x000000010006D760

//----- (000000010006D760) ----------------------------------------------------
void __fastcall sub_10006D760(__int64 a1)
{
  addrinfo *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(addrinfo **)a1;
  if ( v2 )
  {
    freeaddrinfo(v2);
    *(_QWORD *)a1 = 0;
  }
  qsem_free(*(_DWORD **)(a1 + 16));
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
}
