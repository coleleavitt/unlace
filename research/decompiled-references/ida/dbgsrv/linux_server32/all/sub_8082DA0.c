/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8082DA0
// Address: 0x08082DA0

//----- (08082DA0) --------------------------------------------------------
int __cdecl sub_8082DA0(int a1, int a2, const char **a3)
{
  const char *v3; // ebp
  size_t v4; // eax
  int result; // eax
  int (*v6)(); // eax

  v3 = *a3;
  v4 = strlen(*a3);
  *a3 = &v3[v4];
  sub_8082980(a1, a2, &v3[v4], *(_DWORD *)(a1 + 72));
  if ( *(*a3 - 1) == *(_BYTE *)(a1 + 104) )
  {
    v6 = *(int (**)())(*(_DWORD *)a2 + 20);
    if ( v6 != nullsub_8 )
      ((void (__cdecl *)(int, int))v6)(a2, 16);
    result = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 96) = result;
  }
  else
  {
    result = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 96) = result;
  }
  return result;
}
// 80828F0: using guessed type int nullsub_8();
