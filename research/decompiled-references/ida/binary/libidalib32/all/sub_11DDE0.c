unsigned __int64 sub_11DDE0()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+0h] [rbp-30h] BYREF
  __int128 v3; // [rsp+8h] [rbp-28h]
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  sub_11D4A0(v0);
  v2 = 0;
  v3 = 0;
  sub_8F730(
    (__int64)"BUTTON CANCEL NONE\n"
             "BUTTON YES NONE\n"
             "BUTTON NO NONE\n"
             "Database snapshot manager\n"
             "%/%*\n"
             "<Snapshot list:E1::30::>\n"
             "<Take ~s~napshot:B20:20:::><~R~estore:B21:21:::><Re~n~ame:B22:22:::><~D~elete:B23:23:::><~C~lose:B24:24:::>\n\n",
    sub_11E460,
    v0,
    v0,
    &v2,
    sub_116FB0,
    sub_116FB0,
    sub_116FB0,
    sub_116FB0,
    sub_116FB0);
  if ( v0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 8LL))(v0);
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return v4 - __readfsqword(0x28u);
}

