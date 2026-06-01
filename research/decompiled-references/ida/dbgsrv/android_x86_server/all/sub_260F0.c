/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_260F0
// Address: 0x000260F0

//----- (000260F0) --------------------------------------------------------
void __cdecl sub_260F0(int a1)
{
  void *v1; // eax
  void *v2; // eax
  void *v3; // eax

  *(_DWORD *)a1 = &off_1346A0;
  v1 = *(void **)(a1 + 1064);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 1068) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 1064) = 0;
    *(_DWORD *)(a1 + 1072) = 0;
  }
  v2 = *(void **)(a1 + 1052);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 1056) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 1052) = 0;
    *(_DWORD *)(a1 + 1060) = 0;
  }
  v3 = *(void **)(a1 + 1040);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 1044) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 1040) = 0;
    *(_DWORD *)(a1 + 1048) = 0;
  }
  sub_1BC40((char **)(a1 + 1028));
}
// 1346A0: using guessed type int (__cdecl *off_1346A0)(int, int);
