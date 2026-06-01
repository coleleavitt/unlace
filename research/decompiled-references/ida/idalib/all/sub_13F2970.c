__int64 __fastcall sub_13F2970(__int64 a1, __int64 a2)
{
  size_t v2; // rbx
  size_t v3; // rbp
  const void *v4; // rdi
  const void *v5; // rsi
  size_t v6; // rdx
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v9; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(const void **)a1;
  v5 = *(const void **)a2;
  v6 = v3;
  if ( v2 <= v3 )
    v6 = v2;
  v7 = sub_9B48C0(v4, v5, v6);
  if ( v7 )
    return v7 >> 31;
  v9 = v2 - v3;
  result = 0;
  if ( v9 <= 0x7FFFFFFF )
  {
    if ( v9 < (__int64)0xFFFFFFFF80000000LL )
      return 1;
    else
      return (unsigned int)v9 >> 31;
  }
  return result;
}
