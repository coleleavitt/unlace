__int64 __fastcall revert_ida_decisions(unsigned int a1, unsigned int a2)
{
  unsigned int problem; // eax
  unsigned int v3; // ebx
  __int64 result; // rax

  while ( 1 )
  {
    problem = get_problem(13, a1);
    v3 = problem;
    if ( problem >= a2 )
      break;
    forget_problem(13, problem);
    if ( (get_flags_ex(v3, 4) & 0x600) == 0x400 )
      del_items(v3, 0, 1, 0);
  }
  while ( 1 )
  {
    result = get_problem(14, a1);
    if ( (unsigned int)result >= a2 )
      break;
    forget_problem(14, (unsigned int)result);
  }
  return result;
}

