__int64 __fastcall sub_104A50(__int64 a1, _QWORD *a2)
{
  int v2; // ebp
  __int64 result; // rax
  int v4; // ebp

  if ( !sub_153DC0(*a2) )
    return 7;
  v2 = navstack_t_stack_size();
  if ( !v2 )
    return 7;
  v4 = v2 - navstack_t_stack_index();
  result = 3;
  if ( v4 == 1 )
    return 7;
  return result;
}

