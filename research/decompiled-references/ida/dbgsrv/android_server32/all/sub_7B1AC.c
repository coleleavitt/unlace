/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B1AC
// Address: 0x0007B1AC

//----- (0007B1AC) --------------------------------------------------------
void *__fastcall sub_7B1AC(int a1, int a2)
{
  int v2; // r4
  char *v3; // r5
  size_t v4; // r0
  size_t v5; // r6
  unsigned int v6; // r7
  void *v7; // r0
  void *result; // r0

  v2 = *(_DWORD *)(a1 + 4);
  v3 = strarray(&dword_DB160, 14, a2);
  if ( *(_DWORD *)(v2 + 16) >= 2u )
    return (void *)sub_1DA58(v2, "%s: %s", *(const char **)(v2 + 12), v3);
  if ( v3 && (v4 = strlen(v3)) != 0 )
  {
    v5 = v4;
    v6 = v4 + 1;
    if ( *(_DWORD *)(v2 + 8) >= v4 + 1 )
    {
      v7 = *(void **)v2;
    }
    else
    {
      v7 = qvector_reserve(v2, *(void **)v2, v6, 1u);
      *(_DWORD *)v2 = v7;
    }
    *(_DWORD *)(v2 + 4) = v6;
    memmove(v7, v3, v5);
    result = *(void **)v2;
    *(_BYTE *)(*(_DWORD *)v2 + v5) = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 4) = 0;
    return nullptr;
  }
  return result;
}
// DB160: using guessed type int dword_DB160;
