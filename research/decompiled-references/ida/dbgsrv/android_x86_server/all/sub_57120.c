/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57120
// Address: 0x00057120

//----- (00057120) --------------------------------------------------------
unsigned int __cdecl sub_57120(_DWORD *a1, int a2, int a3, const char **a4)
{
  int v4; // esi
  char *v5; // eax
  int v6; // ecx
  int v7; // edx
  unsigned int *v8; // esi
  int v9; // edi
  int v10; // eax
  const char *v12; // [esp+8h] [ebp-14h]

  v4 = a1[11];
  a1[24] = a1[16];
  v12 = *a4;
  v5 = strstr(*a4, *(const char **)(v4 + 24 * a3 + 12));
  if ( v5 )
  {
    v6 = *(_DWORD *)(v4 + 24 * a3 + 16);
    v7 = v6 - 1;
    if ( !v6 )
      v7 = 0;
    v8 = (unsigned int *)a4;
    *a4 = &v5[v7];
    v9 = a2;
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)a2 + 20))(a2, 0);
    a1[24] = a1[15];
    v10 = (int)a1;
  }
  else
  {
    v8 = (unsigned int *)a4;
    *a4 = &v12[strlen(v12)];
    v9 = a2;
    (*(void (__cdecl **)(int, int))(*(_DWORD *)a2 + 20))(a2, a3 + 1);
    v10 = (int)a1;
  }
  return sub_56E70(v10, v9, *v8, *(_DWORD *)(v10 + 64));
}
