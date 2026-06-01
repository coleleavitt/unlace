/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C800
// Address: 0x0009C800

//----- (0009C800) --------------------------------------------------------
char __cdecl sub_9C800(int a1, char *haystack)
{
  char *v2; // eax
  int v3; // ecx
  size_t v4; // esi
  unsigned int v5; // edi
  _BYTE *v6; // eax

  v2 = strstr(haystack, ".clt");
  if ( !v2 )
    return 0;
  v3 = a1;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = v2 - haystack;
  v5 = v2 - haystack + 1;
  if ( *(_DWORD *)(a1 + 8) >= v5 )
  {
    v6 = *(_BYTE **)a1;
  }
  else
  {
    v6 = qvector_reserve(a1, *(void **)a1, v5, 1u);
    v3 = a1;
    *(_DWORD *)a1 = v6;
  }
  *(_DWORD *)(v3 + 4) = v5;
  v6[v4] = 0;
  memmove(*(void **)v3, haystack, v4);
  return 1;
}
