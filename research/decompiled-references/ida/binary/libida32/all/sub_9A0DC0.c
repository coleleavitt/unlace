__int64 __fastcall sub_9A0DC0(__int64 a1, const void *a2, size_t a3)
{
  size_t v4; // rbp
  bool v5; // cc
  size_t v6; // rdx
  int v7; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a3 <= v4;
  v6 = v4;
  if ( v5 )
    v6 = a3;
  if ( v6 )
  {
    v7 = memcmp(*(const void **)a1, a2, v6);
    if ( v7 )
      return (v7 >> 31) | 1u;
  }
  result = 0;
  if ( a3 != v4 )
    return v4 < a3 ? -1 : 1;
  return result;
}

