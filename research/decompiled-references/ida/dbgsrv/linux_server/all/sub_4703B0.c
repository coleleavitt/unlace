/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4703B0
// Address: 0x00000000004703B0

//----- (00000000004703B0) ----------------------------------------------------
void __fastcall sub_4703B0(__int64 a1)
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
  sub_4826F0(*(char **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
  sub_482C00(*(pthread_mutex_t **)(a1 + 24));
  v3 = *(void **)(a1 + 64);
  *(_QWORD *)(a1 + 24) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    j__free(v3);
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    j__free(v4);
  }
}
