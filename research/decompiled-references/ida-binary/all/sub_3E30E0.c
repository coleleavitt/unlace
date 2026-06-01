__int64 __fastcall del_watch_ah_t__::vfunc_4(double a1, __int64 a2, QT::QAbstractItemView *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rdi

  v3 = sub_3E0310(a3);
  if ( !v3 )
    return 0;
  v4 = *(__int64 **)(v3 + 40);
  if ( *(__int64 **)(*(_QWORD *)(v3 + 8) + 32LL) != v4 )
    return 0;
  sub_3E2F40(v4, v3, a1);
  return 0;
}
