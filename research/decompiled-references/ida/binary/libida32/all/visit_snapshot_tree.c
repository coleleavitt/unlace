__int64 __fastcall visit_snapshot_tree(__int64 a1, __int64 (__fastcall *a2)(_QWORD, __int64), __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // r13
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 4240);
  if ( !(8LL * *(_QWORD *)(a1 + 4248)) )
    return 0;
  while ( 1 )
  {
    v5 = *v3;
    result = a2(*v3, a3);
    if ( (_DWORD)result )
      break;
    result = visit_snapshot_tree(v5, a2, a3);
    if ( (_DWORD)result )
      break;
    if ( ++v3 == (_QWORD *)(*(_QWORD *)(a1 + 4240) + 8LL * *(_QWORD *)(a1 + 4248)) )
      return 0;
  }
  return result;
}

