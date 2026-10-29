__int64 __fastcall sub_482F00(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rbp
  unsigned __int64 v8; // r12
  __int64 result; // rax
  const void *v10; // r14
  void *v11; // rdi
  __int64 v12; // rax

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || (v4 = 32 * a3, *(_BYTE *)(*(_QWORD *)(a1 + 40) + 32 * a3 + 24))
    || !*(_BYTE *)(*(_QWORD *)(a2 + 40) + v4 + 24) )
  {
    if ( !under_debugger )
      interr(1937);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v5 = (__int64 *)(v4 + *(_QWORD *)(a1 + 40));
  v6 = *(_QWORD *)(a2 + 40) + v4;
  v7 = v5;
  if ( v5 == (__int64 *)v6 )
    goto LABEL_8;
  v8 = *(_QWORD *)(v6 + 8);
  if ( v8 <= 1 )
  {
    v5[1] = 0;
LABEL_8:
    result = *(unsigned __int8 *)(v6 + 24);
    *((_BYTE *)v7 + 24) = result;
    return result;
  }
  v10 = *(const void **)v6;
  v11 = (void *)*v5;
  if ( v5[2] < v8 )
  {
    v12 = qvector_reserve(v5, *v5, *(_QWORD *)(v6 + 8), 1);
    *v7 = v12;
    v11 = (void *)v12;
  }
  v7[1] = v8;
  memmove(v11, v10, v8 - 1);
  *(_BYTE *)(*v7 + v8 - 1) = 0;
  result = *(unsigned __int8 *)(v6 + 24);
  *((_BYTE *)v7 + 24) = result;
  return result;
}
