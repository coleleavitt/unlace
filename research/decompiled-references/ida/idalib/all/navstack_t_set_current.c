unsigned __int64 __fastcall navstack_t_set_current(__int64 *a1, __int64 a2, char a3)
{
  const char *v4; // rdx
  unsigned __int64 result; // rax
  unsigned int v6; // eax

  v4 = haystack;
  if ( *(_QWORD *)(a2 + 56) )
    v4 = *(const char **)(a2 + 48);
  result = sub_4B70F0(**(_QWORD **)(qword_2CCB598 + 1672), *a1, (__int64)v4, a2, 0);
  if ( a3 )
  {
    v6 = navstack_t_stack_index((__int64)a1);
    return navstack_t_set_stack_entry((__int64)a1, v6, a2);
  }
  return result;
}
