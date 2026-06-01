__int64 __fastcall bookmarks_dirtree_widget_t__::vfunc_5(QT::QTreeView *a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // [rsp+10h] [rbp-48h] BYREF
  __int128 v5; // [rsp+18h] [rbp-40h]
  __int128 v6; // [rsp+28h] [rbp-30h]
  unsigned __int64 v7; // [rsp+38h] [rbp-20h]

  v2 = *(_WORD *)(a2 + 8) == 3005;
  v7 = __readfsqword(0x28u);
  if ( !v2 )
    return standalone_dirtree_widget_t__::vfunc_5(a1);
  *(_BYTE *)(a2 + 12) = 1;
  v5 = 0;
  v6 = -1;
  v4 = 0;
  sub_48FF00(a1);
  sub_2DC1A0(a1, (const char *)(a2 + 32), (__int64)&v4, *(_QWORD *)(a2 + 16));
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4, (const char *)(a2 + 32));
  }
  return 1;
}
