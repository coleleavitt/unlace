/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479978
// Address: 0x0000000000479978

//----- (0000000000479978) ----------------------------------------------------
void __fastcall sub_479978(__int64 a1)
{
  __int64 v1; // x19
  void *v2; // x0
  void *v3; // x0

  v1 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)v1 )
  {
    freeaddrinfo(*(struct addrinfo **)v1);
    *(_QWORD *)v1 = 0;
  }
  sub_493E90(*(_QWORD *)(v1 + 16));
  *(_QWORD *)(v1 + 16) = 0;
  sub_4943D8(*(pthread_mutex_t **)(v1 + 8));
  *(_QWORD *)(v1 + 8) = 0;
  v2 = *(void **)(v1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(v1 + 56) = 0;
    j__free(v2);
  }
  v3 = *(void **)(v1 + 24);
  if ( v3 )
  {
    *(_QWORD *)(v1 + 32) = 0;
    j__free(v3);
  }
  if ( v1 )
    j__free_0((void *)v1);
}
