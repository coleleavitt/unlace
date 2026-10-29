/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68150
// Address: 0x00068150

//----- (00068150) --------------------------------------------------------
void __fastcall sub_68150(int a1)
{
  int v1; // r4
  void *v2; // r0
  void *v3; // r0

  v1 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)v1 )
  {
    freeaddrinfo(*(struct addrinfo **)v1);
    *(_DWORD *)v1 = 0;
  }
  sub_79BD4(*(_DWORD *)(v1 + 8));
  *(_DWORD *)(v1 + 8) = 0;
  sub_79EEC(*(pthread_mutex_t **)(v1 + 4));
  v2 = *(void **)(v1 + 24);
  *(_DWORD *)(v1 + 4) = 0;
  if ( v2 )
  {
    *(_DWORD *)(v1 + 28) = 0;
    sub_77E08(v2);
  }
  v3 = *(void **)(v1 + 12);
  if ( v3 )
  {
    *(_DWORD *)(v1 + 16) = 0;
    sub_77E08(v3);
  }
  if ( v1 )
    sub_80648((void *)v1);
}
