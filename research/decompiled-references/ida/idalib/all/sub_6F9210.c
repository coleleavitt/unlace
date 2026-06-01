__int64 __fastcall sub_6F9210(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbp
  const void *v5; // r13
  void *v6; // rdi
  __int64 v7; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1896);
  if ( a1 == v1 + 72 )
    return 1;
  v3 = *(_QWORD *)(v1 + 80);
  if ( v3 > 1 )
  {
    v5 = *(const void **)(v1 + 72);
    v6 = *(void **)a1;
    if ( *(_QWORD *)(a1 + 16) < v3 )
    {
      v7 = qvector_reserve(a1, v6, *(_QWORD *)(v1 + 80), 1);
      *(_QWORD *)a1 = v7;
      v6 = (void *)v7;
    }
    *(_QWORD *)(a1 + 8) = v3;
    memmove(v6, v5, v3 - 1);
    *(_BYTE *)(*(_QWORD *)a1 + v3 - 1) = 0;
    return 1;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    return 1;
  }
}
