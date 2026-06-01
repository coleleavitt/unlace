__int64 __fastcall sub_134D40(__int64 a1, __int64 *a2)
{
  const char *problem_name; // rax
  _QWORD *v3; // r14
  const char *v4; // r12
  size_t v5; // rax
  size_t v6; // r13
  __int64 result; // rax
  void *v8; // rdi
  size_t v9; // r15
  __int64 v10; // rax

  sub_134C70(*a2);
  problem_name = (const char *)get_problem_name();
  v3 = (_QWORD *)*a2;
  if ( problem_name && (v4 = problem_name, v5 = strlen(problem_name), (v6 = v5) != 0) )
  {
    v8 = (void *)v3[3];
    v9 = v5 + 1;
    if ( v3[5] < v5 + 1 )
    {
      v10 = qvector_reserve();
      v3[3] = v10;
      v8 = (void *)v10;
    }
    v3[4] = v9;
    memmove(v8, v4, v6);
    *(_BYTE *)(v3[3] + v6) = 0;
  }
  else
  {
    v3[4] = 0;
  }
  result = get_problem_desc();
  if ( result < 0 )
    return generate_disasm_line();
  return result;
}

