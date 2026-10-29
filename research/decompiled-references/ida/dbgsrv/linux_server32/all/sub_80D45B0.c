/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D45B0
// Address: 0x080D45B0

//----- (080D45B0) --------------------------------------------------------
int __cdecl sub_80D45B0(_DWORD *a1, int a2, _BYTE *a3, int a4)
{
  void *(__cdecl *v4)(int, int, int); // eax
  int v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int result; // eax
  int v9; // [esp+0h] [ebp-10h]

  if ( !a3 || *a3 != 49 || a4 != 56 )
    return -6;
  if ( !a1 )
    return -2;
  v4 = (void *(__cdecl *)(int, int, int))a1[8];
  a1[6] = 0;
  if ( v4 )
  {
    v5 = a1[10];
  }
  else
  {
    v4 = sub_80D6FE0;
    a1[10] = 0;
    v5 = 0;
    a1[8] = sub_80D6FE0;
  }
  if ( !a1[9] )
    a1[9] = sub_80D7010;
  v6 = (_DWORD *)v4(v5, 1, 7120);
  v7 = v6;
  if ( !v6 )
    return -4;
  a1[7] = v6;
  *v6 = a1;
  v6[14] = 0;
  v6[1] = 16180;
  result = sub_80D44E0(a1, a2);
  if ( result )
  {
    v9 = result;
    ((void (__cdecl *)(_DWORD, _DWORD *))a1[9])(a1[10], v7);
    result = v9;
    a1[7] = 0;
  }
  return result;
}
