__int64 __fastcall sub_523590(QT::QAbstractItemView *this)
{
  unsigned int v1; // ebx
  __int64 (__fastcall **v3)(); // [rsp+8h] [rbp-50h] BYREF
  __int64 v4; // [rsp+10h] [rbp-48h] BYREF
  __int128 v5; // [rsp+18h] [rbp-40h]
  __int128 v6; // [rsp+28h] [rbp-30h]
  unsigned __int64 v7; // [rsp+38h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = 0;
  v6 = -1;
  v4 = 0;
  sub_48FF00(this, nullptr, &v4, 16, 0);
  v3 = &standalone_dirtree_widget_t::handle_enter;
  v1 = sub_5232C0(
         this,
         (__int64 (__fastcall ***)(_QWORD, QT::QAbstractItemView *, char *, __int64 *, __int64 *))&v3,
         &v4);
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4, (const char *)&v3);
  }
  return v1;
}
