__int64 __fastcall get_undo_param(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1848);
  if ( a1 == 2 )
    return *(_QWORD *)(v1 + 88);
  if ( a1 > 2 )
  {
    if ( a1 != 3 )
    {
      if ( !under_debugger )
        interr(1754);
      BUG();
    }
    return *(unsigned __int8 *)(v1 + 112);
  }
  else if ( a1 )
  {
    return *(_QWORD *)(v1 + 96);
  }
  else
  {
    result = *(_QWORD *)(v1 + 88);
    if ( result )
      return *(_QWORD *)(v1 + 96) != 0;
  }
  return result;
}
