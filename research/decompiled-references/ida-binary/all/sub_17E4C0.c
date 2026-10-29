unsigned __int64 sub_17E4C0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  __int128 v8; // [rsp+10h] [rbp-48h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  v7 = 0;
  v6 = delete_plugin_actions;
  v7 = qvector_reserve(&v7, 0, 100, 8);
  sub_5313B0(&v6);
  v3 = (_QWORD *)v7;
  v4 = (_QWORD *)(v7 + 8 * v8);
  if ( v4 != (_QWORD *)v7 )
  {
    do
      sub_533E20(*v3++);
    while ( v4 != v3 );
    v3 = (_QWORD *)v7;
  }
  v6 = delete_plugin_actions;
  if ( v3 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v3, 0, v0, v1, v2);
  }
  return v9 - __readfsqword(0x28u);
}
