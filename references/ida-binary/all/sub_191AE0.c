__int64 address_bookmarks_desktop_widget_factory_t__::vfunc_3()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r8
  _QWORD v6[4]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  _QWORD *v11; // [rsp+48h] [rbp-20h]
  unsigned __int64 v12; // [rsp+58h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v11 = v6;
  v8 = 0;
  v9 = -1;
  v10 = 0;
  v7 = 0;
  v6[0] = &idaplace_t___vtable;
  v11 = (_QWORD *)idaplace_t__clone(v6);
  v0 = sub_1985C0(0, &v7, 0, "Address bookmarks", 0, 0);
  v3 = sub_2DBE50(v0);
  if ( v11 )
    qfree(v11, &v7, v1, v2, v4);
  return v3;
}
