/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_571F0
// Address: 0x000571F0

//----- (000571F0) --------------------------------------------------------
int __cdecl sub_571F0(int a1, int a2, const char **a3)
{
  const char *v3; // esi
  unsigned int v4; // eax
  int *v5; // edi
  int result; // eax

  v3 = *a3;
  v4 = (unsigned int)&v3[strlen(*a3)];
  *a3 = (const char *)v4;
  sub_56E70(a1, a2, v4, *(_DWORD *)(a1 + 72));
  if ( *(*a3 - 1) == *(_BYTE *)(a1 + 104) )
  {
    v5 = (int *)(a1 + 72);
    (*(void (__cdecl **)(int, int))(*(_DWORD *)a2 + 20))(a2, 16);
  }
  else
  {
    v5 = (int *)(a1 + 60);
  }
  result = *v5;
  *(_DWORD *)(a1 + 96) = *v5;
  return result;
}
