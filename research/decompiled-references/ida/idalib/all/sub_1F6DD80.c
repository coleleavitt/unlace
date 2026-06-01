char __fastcall sub_1F6DD80(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rsi
  unsigned int *v3; // rdi
  size_t v4; // rbx
  size_t v5; // rbp
  size_t v6; // rdx
  unsigned int v7; // eax
  int v8; // eax

  v2 = *(unsigned int **)(a2 + 16);
  v3 = *(unsigned int **)(a1 + 16);
  v4 = *v2;
  v5 = *v3;
  v6 = v4;
  if ( v5 <= v4 )
    v6 = *v3;
  if ( v6 && (v7 = memcmp(v3 + 4, v2 + 4, v6)) != 0 )
  {
    return v7 >> 31;
  }
  else
  {
    LOBYTE(v8) = v5 < v4;
    if ( v5 == v4 )
      LOBYTE(v8) = 0;
  }
  return v8;
}
