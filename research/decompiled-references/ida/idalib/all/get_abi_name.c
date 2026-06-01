__int64 __fastcall get_abi_name(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // r12
  const void *v4; // r14
  void *v5; // rdi
  __int64 v7; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1704);
  if ( a1 && a1 != v1 + 48 )
  {
    v3 = *(_QWORD *)(v1 + 56);
    if ( v3 < 2 )
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
    else
    {
      v4 = *(const void **)(v1 + 48);
      v5 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < v3 )
      {
        v7 = qvector_reserve(a1, v5, *(_QWORD *)(v1 + 56), 1);
        *(_QWORD *)a1 = v7;
        v5 = (void *)v7;
      }
      *(_QWORD *)(a1 + 8) = v3;
      memmove(v5, v4, v3 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v3 - 1) = 0;
    }
  }
  return (*(_QWORD *)(v1 + 56) == 0) + *(_QWORD *)(v1 + 56) - 1LL;
}
