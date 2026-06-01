__int64 __fastcall get_idcv_class_name(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  const void *v6; // r13
  void *v7; // rdi
  __int64 v8; // rax

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return set_qerrno(1532);
  if ( a1 )
  {
    v4 = sub_78D940(*(int *)(*(_QWORD *)(a2 + 8) + 52LL));
    if ( a1 != (__int64 *)(v4 + 56) )
    {
      v5 = *(_QWORD *)(v4 + 64);
      if ( v5 > 1 )
      {
        v6 = *(const void **)(v4 + 56);
        v7 = (void *)*a1;
        if ( a1[2] < v5 )
        {
          v8 = qvector_reserve(a1, *a1, *(_QWORD *)(v4 + 64), 1);
          *a1 = v8;
          v7 = (void *)v8;
        }
        a1[1] = v5;
        memmove(v7, v6, v5 - 1);
        *(_BYTE *)(*a1 + v5 - 1) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
  }
  return 0;
}
