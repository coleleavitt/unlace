/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD320
// Address: 0x00000000000AD320

//----- (00000000000AD320) ----------------------------------------------------
void __fastcall sub_AD320(__int64 a1)
{
  struct addrinfo *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(struct addrinfo **)a1;
  if ( v2 )
  {
    freeaddrinfo(v2);
    *(_QWORD *)a1 = 0;
  }
  qsem_free(*(sem_t ***)(a1 + 16));
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
