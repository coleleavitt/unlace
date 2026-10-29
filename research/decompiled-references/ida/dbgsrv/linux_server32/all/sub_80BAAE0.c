/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BAAE0
// Address: 0x080BAAE0

//----- (080BAAE0) --------------------------------------------------------
void __cdecl sub_80BAAE0(_DWORD *a1)
{
  int v1; // esi
  void *v2; // eax

  v1 = a1[3];
  *a1 = &off_811C608;
  while ( v1 )
  {
    sub_80BA8D0(*(_DWORD **)(v1 + 12));
    v2 = (void *)v1;
    v1 = *(_DWORD *)(v1 + 8);
    operator delete(v2, 0x18u);
  }
  operator delete(a1, 0x1Cu);
}
// 811C608: using guessed type int (__cdecl *off_811C608)(int);
