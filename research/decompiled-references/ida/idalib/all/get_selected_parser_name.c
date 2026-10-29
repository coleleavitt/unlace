__int64 __fastcall get_selected_parser_name(__int64 *a1)
{
  _QWORD *v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v4; // rax
  const void *v5; // r12
  size_t v6; // rax
  size_t v7; // rbp
  void *v9; // rdi
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  if ( !a1 )
    return 1;
  v1 = *(_QWORD **)(qword_2CCB598 + 1888);
  v2 = v1[2];
  if ( v2 >= v1[4] )
  {
    if ( !under_debugger )
      interr(3414);
LABEL_19:
    BUG();
  }
  if ( !v2 )
  {
    v9 = (void *)*a1;
    if ( !v9 )
      return 1;
    a1[1] = 0;
    qfree(v9);
    *a1 = 0;
    a1[2] = 0;
    return 1;
  }
  v4 = *(_QWORD *)(v1[3] + 8 * v2);
  if ( !v4 )
  {
    if ( !under_debugger )
      interr(3415);
    goto LABEL_19;
  }
  v5 = *(const void **)(v4 + 16);
  if ( !v5 || (v6 = strlen(*(const char **)(v4 + 16)), (v7 = v6) == 0) )
  {
    a1[1] = 0;
    return 1;
  }
  v10 = (void *)*a1;
  v11 = v6 + 1;
  if ( a1[2] < v6 + 1 )
  {
    v12 = qvector_reserve(a1, *a1, v6 + 1, 1);
    *a1 = v12;
    v10 = (void *)v12;
  }
  a1[1] = v11;
  memmove(v10, v5, v7);
  *(_BYTE *)(*a1 + v7) = 0;
  return 1;
}
