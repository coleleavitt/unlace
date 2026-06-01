__int64 __fastcall sub_523640(
        __int64 (__fastcall **a1)(_QWORD, QT::QAbstractItemView *, char *, __int64 *, __int64 *),
        __int64 a2)
{
  unsigned int v2; // edx
  QT::QAbstractItemView *v3; // rax
  __int64 *v4; // rdx
  __int64 (__fastcall **v6[5])(_QWORD, QT::QAbstractItemView *, char *, __int64 *, __int64 *); // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  v6[3] = (__int64 (__fastcall **)(_QWORD, QT::QAbstractItemView *, char *, __int64 *, __int64 *))__readfsqword(0x28u);
  v3 = *(QT::QAbstractItemView **)(a2 + 328);
  if ( v3 )
  {
    v4 = *(__int64 **)(a2 + 200);
    v6[1] = a1;
    v6[0] = (__int64 (__fastcall **)(_QWORD, QT::QAbstractItemView *, char *, __int64 *, __int64 *))&standalone_dirtree_widget_action_helper_t::activate;
    return (unsigned int)sub_5232C0(v3, v6, v4) != 0;
  }
  return v2;
}
