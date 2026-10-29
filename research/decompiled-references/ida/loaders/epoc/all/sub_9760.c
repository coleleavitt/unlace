__int64 *__fastcall sub_9760(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  const void *v9; // r15
  void *v10; // rdi
  __int64 v11; // rax

  v5 = *a2;
  v6 = **(_QWORD **)(a1 + 184) + 56 * a5;
  if ( (__int64 *)v6 != *a2 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 > 1 )
    {
      v9 = *(const void **)v6;
      v10 = (void *)*v5;
      if ( v5[2] < v7 )
      {
        v11 = qvector_reserve(v5, *v5, *(_QWORD *)(v6 + 8), 1);
        *v5 = v11;
        v10 = (void *)v11;
      }
      v5[1] = v7;
      memmove(v10, v9, v7 - 1);
      *(_BYTE *)(*v5 + v7 - 1) = 0;
      v5 = *a2;
    }
    else
    {
      v5[1] = 0;
      v5 = *a2;
    }
  }
  return sub_8B00(v5 + 3, (__int64)"%zu", *(_QWORD *)(v6 + 32));
}

