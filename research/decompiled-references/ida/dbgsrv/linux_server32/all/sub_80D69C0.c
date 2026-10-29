/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D69C0
// Address: 0x080D69C0

//----- (080D69C0) --------------------------------------------------------
int __cdecl sub_80D69C0(_DWORD *a1)
{
  void (__cdecl *v1)(int, int); // esi
  int v2; // eax
  int v3; // edx

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  v1 = (void (__cdecl *)(int, int))a1[9];
  if ( !v1 || sub_80D4390((int)a1) )
    return -2;
  v2 = a1[7];
  v3 = a1[10];
  if ( *(_DWORD *)(v2 + 56) )
  {
    v1(v3, *(_DWORD *)(v2 + 56));
    v1 = (void (__cdecl *)(int, int))a1[9];
    v2 = a1[7];
    v3 = a1[10];
  }
  v1(v3, v2);
  a1[7] = 0;
  return 0;
}
