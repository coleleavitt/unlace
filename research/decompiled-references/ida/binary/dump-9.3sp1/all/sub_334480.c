__int64 __fastcall sub_334480(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbp
  _QWORD *v6; // rbx
  unsigned __int64 v7; // r13
  const void *v9; // r15
  void *v10; // rdi
  __int64 v11; // rax

  v5 = *a2;
  v6 = (_QWORD *)((a5 << 6) + **(_QWORD **)(a1 + 184));
  if ( *a2 == v6 + 1 )
  {
LABEL_4:
    if ( !*v6 )
      return sub_32B7F0(v5 + 3, (__int64)(v6 + 7), nullptr);
LABEL_9:
    sub_FAAD0(v5);
    v5 = *a2;
    return sub_32B7F0(v5 + 3, (__int64)(v6 + 7), nullptr);
  }
  v7 = v6[2];
  if ( v7 <= 1 )
  {
    v5[1] = 0;
    v5 = *a2;
    goto LABEL_4;
  }
  v9 = (const void *)v6[1];
  v10 = (void *)*v5;
  if ( v5[2] < v7 )
  {
    v11 = qvector_reserve((__int64)v5, *v5, v6[2], 1);
    *v5 = v11;
    v10 = (void *)v11;
  }
  v5[1] = v7;
  memmove(v10, v9, v7 - 1);
  *(_BYTE *)(*v5 + v7 - 1) = 0;
  v5 = *a2;
  if ( *v6 )
    goto LABEL_9;
  return sub_32B7F0(v5 + 3, (__int64)(v6 + 7), nullptr);
}
