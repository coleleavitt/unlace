unsigned __int64 __fastcall sub_28FE0(__int64 a1, __int64 a2)
{
  __int64 name_ea; // r12
  __int64 v4; // rbp
  const char *v5; // rdx
  const char *v6; // rdx
  const char *v7; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  const char *v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_283D0(a1, a2);
  if ( netnode_supfirst() == -1 )
  {
    v7 = 0;
    v9 = 0;
    v8 = 0;
    v10 = 0;
    sub_D6A0((__int64 *)&v7);
    sub_D6A0((__int64 *)&v9);
    name_ea = get_name_ea();
    v4 = get_name_ea();
    v5 = src;
    if ( (_QWORD)v8 )
      v5 = v7;
    sub_28480(a1, name_ea, v5);
    v6 = src;
    if ( (_QWORD)v10 )
      v6 = v9;
    sub_28480(a1, v4, v6);
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  return v11 - __readfsqword(0x28u);
}
