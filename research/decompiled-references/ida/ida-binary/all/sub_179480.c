__int64 __fastcall sub_179480(__int64 a1, const QT::QObject **a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // ebp
  __int64 result; // rax
  int v6; // ebp

  v2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *a2);
  if ( !v2 )
    return 7;
  v3 = v2;
  v4 = navstack_t_stack_size(*(_QWORD *)(v2 + 512));
  if ( !v4 )
    return 7;
  v6 = v4 - navstack_t_stack_index(*(_QWORD *)(v3 + 512));
  result = 3;
  if ( v6 == 1 )
    return 7;
  return result;
}
