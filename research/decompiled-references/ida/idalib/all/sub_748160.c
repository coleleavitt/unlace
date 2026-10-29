__int64 __fastcall sub_748160(__int64 *a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  const char *v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  const void *v9; // rbx
  void *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-30h]

  v4 = *(_WORD *)(a3 + 24);
  if ( v4 != 4 )
  {
    if ( v4 != 2 || (v12 = a3, v6 = sub_7A0520(a2), a3 = v12, *(_QWORD *)(v6 + 8) <= 1u) )
    {
      v5 = (const char *)qstrerror(1348);
      sub_747B60(a2, (__int64)"%s", v5);
    }
  }
  if ( (__int64 *)a3 != a1 )
  {
    v7 = *(_QWORD *)(a3 + 8);
    if ( v7 > 1 )
    {
      v9 = *(const void **)a3;
      v10 = (void *)*a1;
      if ( a1[2] < v7 )
      {
        v11 = qvector_reserve(a1, *a1, *(_QWORD *)(a3 + 8), 1);
        *a1 = v11;
        v10 = (void *)v11;
      }
      a1[1] = v7;
      memmove(v10, v9, v7 - 1);
      *(_BYTE *)(*a1 + v7 - 1) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  return 1;
}
