/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ACB90
// Address: 0x000ACB90

//----- (000ACB90) --------------------------------------------------------
int __cdecl sub_ACB90(int a1, void *ptr, size_t n)
{
  int v3; // edi
  unsigned int v4; // ecx
  int result; // eax
  int v6; // eax
  size_t v7; // edi
  FILE *v8; // eax
  bool v9; // zf

  v3 = n;
  if ( *(_QWORD *)(a1 + 4) && *(_DWORD *)(a1 + 4) - *(_DWORD *)(a1 + 24) <= n )
    v3 = *(_DWORD *)(a1 + 4) - *(_DWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 16);
  result = -1;
  if ( v4 )
  {
    if ( *(int *)v4 < 2 )
      v6 = qfread(*(FILE **)(v4 + 4), ptr, v3);
    else
      v6 = sub_AB320(__SPAIR64__((unsigned int)ptr, v4), v3);
    v7 = v6;
    if ( v6 <= 0 )
      return v7;
    v8 = *(FILE **)(a1 + 20);
    if ( !v8 )
      goto LABEL_13;
    if ( qfseek(v8, *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28), 0) )
      return -1;
    v9 = qfwrite(*(FILE **)(a1 + 20), ptr, v7) == v7;
    result = -1;
    if ( v9 )
    {
LABEL_13:
      *(_QWORD *)(a1 + 24) += v7;
      return v7;
    }
  }
  return result;
}
