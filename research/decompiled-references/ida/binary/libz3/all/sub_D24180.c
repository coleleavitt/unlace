void *__fastcall sub_D24180(__int64 a1, unsigned int *a2)
{
  void *result; // rax
  const void *v4; // rsi
  __int64 v6; // rdx
  void *v7; // rdi
  __int64 v8; // rax

  result = (void *)*a2;
  v4 = *((const void **)a2 + 1);
  *(_DWORD *)a1 = (_DWORD)result;
  if ( v4 )
  {
    v6 = a2[1];
    v7 = *(void **)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) < (unsigned int)v6 )
    {
      if ( v7 )
      {
        sub_186B220(v7);
        v6 = a2[1];
      }
      v8 = sub_186B270(4 * v6);
      v6 = a2[1];
      *(_QWORD *)(a1 + 8) = v8;
      v4 = *((const void **)a2 + 1);
      v7 = (void *)v8;
      *(_DWORD *)(a1 + 4) = v6;
    }
    return memcpy(v7, v4, 4 * v6);
  }
  return result;
}

