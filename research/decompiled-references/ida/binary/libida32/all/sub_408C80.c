__int64 __fastcall sub_408C80(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 i; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v3 = a1 + 2368;
  for ( i = *(_QWORD *)(a1 + 2376); i; i = *(_QWORD *)(i + 16) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(i + 24);
      if ( *(_DWORD *)(i + 32) >= a2 )
        break;
      i = *(_QWORD *)(i + 24);
      if ( !v5 )
        goto LABEL_5;
    }
    v3 = i;
  }
LABEL_5:
  if ( *(_QWORD *)(a1 + 2384) == v3 )
    return 0xFFFFFFFFLL;
  result = *(unsigned int *)(std::_Rb_tree_decrement() + 32);
  if ( (unsigned int)result >= a2 )
  {
    if ( !under_debugger )
      interr(1548);
    BUG();
  }
  return result;
}

