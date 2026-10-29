unsigned __int64 __fastcall revert_ida_decisions(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 problem; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax

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
    if ( result >= a2 )
      break;
    forget_problem(14, result);
  }
  return result;
}
