__int64 __fastcall til_dirtree_widget_t__::vfunc_5(QT::QTreeView *a1, __int64 a2)
{
  bool v2; // zf
  __int64 (*v4)(void); // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  __int128 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v2 = *(_WORD *)(a2 + 8) == 3006;
  v10 = __readfsqword(0x28u);
  if ( !v2 )
    return bookmarks_dirtree_widget_t__::vfunc_5(a1, a2);
  *(_BYTE *)(a2 + 12) = 1;
  v8 = 0;
  v7 = 0;
  v9 = -1;
  sub_48FF00(a1);
  sub_3C60D0(a1, (const char **)(a2 + 32), (__int64)&v7, *(const char **)(a2 + 16));
  v4 = *(__int64 (**)(void))(**((_QWORD **)a1 + 311) + 64LL);
  v5 = 0;
  if ( v4 != sub_3AAC50 )
    v5 = v4();
  v6 = v7;
  *(_QWORD *)(a2 + 56) = v5;
  if ( v6 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v6, (const char *)(a2 + 32));
  }
  return 1;
}
