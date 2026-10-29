/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B530
// Address: 0x0001B530

//----- (0001B530) --------------------------------------------------------
int __cdecl sub_1B530(int a1, char *s)
{
  int result; // eax
  size_t v3; // eax
  size_t v4; // edi
  size_t v5; // esi
  void *v6; // eax
  int v7; // ecx
  int *v8; // esi

  result = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( s )
  {
    v3 = strlen(s);
    v4 = v3;
    v5 = v3 + 1;
    if ( v3 == -1 )
    {
      v7 = a1;
      v6 = *(void **)a1;
    }
    else
    {
      v6 = qvector_reserve(a1, *(void **)a1, v3 + 1, 1u);
      v7 = a1;
      *(_DWORD *)a1 = v6;
    }
    *(_DWORD *)(v7 + 4) = v5;
    v8 = (int *)v7;
    memmove(v6, s, v4);
    result = *v8;
    *(_BYTE *)(*v8 + v4) = 0;
  }
  return result;
}
