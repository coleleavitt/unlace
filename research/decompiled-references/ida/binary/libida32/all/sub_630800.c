__int64 __fastcall sub_630800(__int64 a1, __int64 a2)
{
  unsigned int alias_target; // eax
  __int64 v3; // rdx
  __int64 v4; // rax

  alias_target = get_alias_target(a1, a2);
  if ( !alias_target )
    return 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(unsigned int *)(*(_QWORD *)(v3 + 40) + 4LL * alias_target);
  if ( (_DWORD)v4 == -1 )
    return 0;
  if ( (unsigned int)v4 >= *(_DWORD *)(v3 + 20) )
  {
    if ( !under_debugger )
      interr(134);
    BUG();
  }
  return *(_QWORD *)(v3 + 32) + v4;
}

