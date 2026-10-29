unsigned __int64 __fastcall navstack_t_set_current(int *a1, __int64 a2, char a3)
{
  const char *v4; // rdx
  unsigned __int64 result; // rax
  unsigned int v6; // eax

  v4 = haystack;
  if ( *(_QWORD *)(a2 + 56) )
    v4 = *(const char **)(a2 + 48);
  result = sub_4A1A40(**(_QWORD **)(qword_2CA1698 + 1480), *a1, (__int64)v4, a2, 0);
  if ( a3 )
  {
    v6 = navstack_t_stack_index(a1);
    return navstack_t_set_stack_entry(a1, v6, a2);
  }
  return result;
}

