void *__fastcall sub_3B73A0(__int64 a1, __int64 a2)
{
  void *result; // rax
  unsigned __int64 v3; // rbp
  const void *v4; // r13
  void *v5; // rdi
  __int64 v6; // rax

  result = (void *)(a1 + 16);
  if ( a2 != a1 + 16 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 > 1 )
    {
      v4 = *(const void **)(a1 + 16);
      v5 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v3 )
      {
        v6 = qvector_reserve();
        *(_QWORD *)a2 = v6;
        v5 = (void *)v6;
      }
      *(_QWORD *)(a2 + 8) = v3;
      memmove(v5, v4, v3 - 1);
      result = *(void **)a2;
      *(_BYTE *)(*(_QWORD *)a2 + v3 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return result;
}
