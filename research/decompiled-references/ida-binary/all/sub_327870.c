__int64 __fastcall pl_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  const char *problem_name; // rax
  __int64 *v7; // r14
  const char *v8; // r12
  size_t v9; // rax
  size_t v10; // r13
  __int64 result; // rax
  void *v12; // rdi
  size_t v13; // r15
  __int64 v14; // rax

  v5 = (__int64 *)(*(_QWORD *)(a1 + 184) + 16 * a5);
  sub_3277A0(*a2, *v5);
  problem_name = (const char *)get_problem_name(*((unsigned __int8 *)v5 + 8), 0);
  v7 = *a2;
  if ( problem_name && (v8 = problem_name, v9 = strlen(problem_name), (v10 = v9) != 0) )
  {
    v12 = (void *)v7[3];
    v13 = v9 + 1;
    if ( v7[5] < v9 + 1 )
    {
      v14 = qvector_reserve(v7 + 3, v7[3], v13, 1);
      v7[3] = v14;
      v12 = (void *)v14;
    }
    v7[4] = v13;
    memmove(v12, v8, v10);
    *(_BYTE *)(v7[3] + v10) = 0;
  }
  else
  {
    v7[4] = 0;
  }
  result = get_problem_desc(*a2 + 6, *((unsigned __int8 *)v5 + 8), *v5);
  if ( result < 0 )
    return generate_disasm_line(*a2 + 6, *v5, 4);
  return result;
}
