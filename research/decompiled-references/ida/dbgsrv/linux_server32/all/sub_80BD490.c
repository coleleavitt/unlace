/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD490
// Address: 0x080BD490

//----- (080BD490) --------------------------------------------------------
void __cdecl sub_80BD490(int a1)
{
  void *v1; // eax
  void *v2; // eax

  if ( *(_DWORD *)(a1 + 12) )
  {
    freeaddrinfo(*(struct addrinfo **)(a1 + 12));
    *(_DWORD *)(a1 + 12) = 0;
  }
  sub_80D0D50(*(char **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  sub_80D12E0(*(pthread_mutex_t **)(a1 + 16));
  v1 = *(void **)(a1 + 36);
  *(_DWORD *)(a1 + 16) = 0;
  if ( v1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    sub_80CF780(v1);
  }
  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_80CF780(v2);
  }
}
