__int64 __fastcall sub_510630(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  const void *v8; // r12
  void *v9; // rdi
  __int64 v10; // rax

  if ( !a2 || !a3 )
    return -1;
  v3 = *(_QWORD *)(a3 + 24);
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 1760LL);
  result = 0;
  if ( v3 < *(_QWORD *)(v4 + 152) )
  {
    v6 = *(_QWORD *)(v4 + 144) + 56LL * (int)v3;
    if ( *(_BYTE *)(v6 + 52) || (v7 = *(_QWORD *)(v6 + 8), v7 <= 1) )
      sub_50D000();
    if ( a2 != (__int64 *)v6 )
    {
      v8 = *(const void **)v6;
      v9 = (void *)*a2;
      if ( a2[2] < v7 )
      {
        v10 = qvector_reserve(a2, *a2, *(_QWORD *)(v6 + 8), 1);
        *a2 = v10;
        v9 = (void *)v10;
      }
      a2[1] = v7;
      memmove(v9, v8, v7 - 1);
      *(_BYTE *)(*a2 + v7 - 1) = 0;
    }
    return (a2[1] == 0) + a2[1] - 1;
  }
  return result;
}
