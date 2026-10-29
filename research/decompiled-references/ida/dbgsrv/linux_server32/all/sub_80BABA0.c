/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BABA0
// Address: 0x080BABA0

//----- (080BABA0) --------------------------------------------------------
void __cdecl sub_80BABA0(pthread_mutex_t **a1)
{
  pthread_mutex_t *owner; // esi
  pthread_mutex_t *v2; // eax

  *a1 = (pthread_mutex_t *)&off_811C624;
  sub_80D12E0(a1[7]);
  owner = a1[3];
  *a1 = (pthread_mutex_t *)&off_811C608;
  while ( owner )
  {
    sub_80BA8D0((_DWORD *)owner->__kind);
    v2 = owner;
    owner = (pthread_mutex_t *)owner->__owner;
    operator delete(v2, 0x18u);
  }
  operator delete(a1, 0x20u);
}
// 811C608: using guessed type int (__cdecl *off_811C608)(int);
// 811C624: using guessed type int (__cdecl *off_811C624)(int);
