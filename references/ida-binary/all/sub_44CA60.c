__int64 __fastcall worklists_commit_action_t__::vfunc_3(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  QT::QAbstractItemView *v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 200);
  v3 = *(QT::QAbstractItemView **)a2;
  v4 = *(_QWORD **)v2;
  v5 = *(_QWORD *)v2 + 16LL * *(_QWORD *)(v2 + 8);
  if ( v5 == *(_QWORD *)v2 )
    return 0;
  while ( 1 )
  {
    result = sub_44C720(v3, v4, 1);
    if ( (_BYTE)result )
      break;
    v4 += 2;
    if ( (_QWORD *)v5 == v4 )
      return 0;
  }
  return result;
}
