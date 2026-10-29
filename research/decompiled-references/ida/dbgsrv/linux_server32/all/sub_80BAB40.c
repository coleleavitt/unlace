/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BAB40
// Address: 0x080BAB40

//----- (080BAB40) --------------------------------------------------------
void __cdecl sub_80BAB40(int a1)
{
  int v1; // esi
  void *v2; // eax

  *(_DWORD *)a1 = &off_811C624;
  sub_80D12E0(*(pthread_mutex_t **)(a1 + 28));
  *(_DWORD *)a1 = &off_811C608;
  v1 = *(_DWORD *)(a1 + 12);
  while ( v1 )
  {
    sub_80BA8D0(*(_DWORD **)(v1 + 12));
    v2 = (void *)v1;
    v1 = *(_DWORD *)(v1 + 8);
    operator delete(v2, 0x18u);
  }
}
// 811C608: using guessed type int (__cdecl *off_811C608)(int);
// 811C624: using guessed type int (__cdecl *off_811C624)(int);
