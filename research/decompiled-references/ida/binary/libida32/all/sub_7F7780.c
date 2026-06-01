void *__fastcall sub_7F7780(__int64 a1)
{
  __int64 v1; // rdx
  void *result; // rax

  if ( !*(_QWORD *)a1 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    if ( !v1 )
      return result;
    return memset(*(void **)(a1 + 32), 0, v1 << 11);
  }
  result = memset(*(void **)(a1 + 24), 0, 8LL * *(_QWORD *)a1);
  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = 0;
  if ( v1 )
    return memset(*(void **)(a1 + 32), 0, v1 << 11);
  return result;
}

