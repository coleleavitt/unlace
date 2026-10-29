__int64 __fastcall register_timer(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = sub_30ED60(qword_8CD748);
  QT::QBasicTimer::start(v1, *(int *)(*(_QWORD *)(a1 + 24) + 4LL), v2);
  return 0;
}
