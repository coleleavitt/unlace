/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80560D0
// Address: 0x080560D0

//----- (080560D0) --------------------------------------------------------
void __cdecl sub_80560D0(char *a1)
{
  _DWORD *v1; // esi
  void *v2; // eax
  char *v3; // edx
  int v4; // eax
  void *v5; // eax

  v1 = *((_DWORD **)a1 + 7);
  *(_DWORD *)a1 = dword_811C914;
  while ( v1 )
  {
    v2 = v1;
    v1 = (_DWORD *)*v1;
    operator delete(v2, 0xCu);
  }
  memset(*((void **)a1 + 5), 0, 4 * *((_DWORD *)a1 + 6));
  v3 = *((char **)a1 + 5);
  v4 = *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 8) = 0;
  *((_DWORD *)a1 + 7) = 0;
  if ( v3 != a1 + 44 )
    operator delete(v3, 4 * v4);
  v5 = *((void **)a1 + 2);
  if ( v5 )
  {
    *((_DWORD *)a1 + 3) = 0;
    sub_80CF780(v5);
  }
  operator delete(a1, 0xD7Cu);
}
// 811C914: using guessed type int dword_811C914[2];
