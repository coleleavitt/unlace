void *__fastcall sub_22364B0(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rbp
  size_t v3; // rbp
  void *v4; // rax

  free(*(void **)a1);
  v1 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 16);
  if ( v1 <= 0x10 )
  {
    *(_QWORD *)(a1 + 8) = 32;
    *(_DWORD *)(a1 + 16) = 0;
    v4 = malloc(0x100u);
    if ( !v4 )
      goto LABEL_5;
    v3 = 256;
  }
  else
  {
    *(_QWORD *)(a1 + 12) = 0;
    _BitScanReverse(&v1, v1 - 1);
    v2 = (unsigned int)(1 << (33 - (v1 ^ 0x1F)));
    *(_DWORD *)(a1 + 8) = v2;
    v3 = 8 * v2;
    v4 = malloc(v3);
    if ( !v4 && (v3 || (v4 = malloc(1u)) == nullptr) )
LABEL_5:
      sub_2221CE0("Allocation failed", 1u);
  }
  *(_QWORD *)a1 = v4;
  return memset(v4, -1, v3);
}
