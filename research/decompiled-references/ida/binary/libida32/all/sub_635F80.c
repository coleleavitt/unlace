__int64 __fastcall sub_635F80(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  const void *v4; // r14
  void *v5; // rdi
  __int64 v7; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1512LL);
  if ( a2 && a2 != (__int64 *)(v2 + 48) )
  {
    v3 = *(_QWORD *)(v2 + 56);
    if ( v3 < 2 )
    {
      a2[1] = 0;
    }
    else
    {
      v4 = *(const void **)(v2 + 48);
      v5 = (void *)*a2;
      if ( a2[2] < v3 )
      {
        v7 = qvector_reserve(a2, *a2, *(_QWORD *)(v2 + 56), 1);
        *a2 = v7;
        v5 = (void *)v7;
      }
      a2[1] = v3;
      memmove(v5, v4, v3 - 1);
      *(_BYTE *)(*a2 + v3 - 1) = 0;
    }
  }
  return (*(_QWORD *)(v2 + 56) == 0) + *(_QWORD *)(v2 + 56) - 1LL;
}

