__int64 __fastcall map_to_other_filesystem_t__::vfunc_0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v5; // rdi
  QT::QAbstractItemView *Child_helper; // rbp
  __int64 v7; // rdi
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v8[3] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(v2 + 328) )
    return 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 56LL))(QT::QCoreApplication::self + 2);
  if ( v3 == 65 )
  {
    sub_429E70();
    v7 = sub_41A4D0("Vault files");
    if ( !v7 )
      return 0;
    Child_helper = (QT::QAbstractItemView *)QT::qt_qFindChild_helper(v7, 0, 0, &off_878400, 1);
  }
  else
  {
    if ( v3 != 63 )
      return 0;
    sub_44FED0();
    v5 = sub_41A4D0("Local files");
    if ( !v5 )
      return 0;
    Child_helper = (QT::QAbstractItemView *)QT::qt_qFindChild_helper(v5, 0, 0, &off_8795C0, 1);
  }
  if ( !Child_helper )
    return 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    sub_42B1D0((__int64)v8, *(__int64 **)a2);
    sub_429170(Child_helper, (__int64)v8);
    if ( v8[0] )
    {
      v8[1] = 0;
      qfree(v8[0], (const char *)v8);
    }
  }
  return 1;
}
