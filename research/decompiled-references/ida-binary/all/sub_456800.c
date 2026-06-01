__int64 sub_456800()
{
  __int64 v0; // rax
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+30h] [rbp-8h]

  v0 = sub_4A0300("Users", v6, v7, SDWORD2(v7), __readfsqword(0x28u), v8, v9, v10);
  if ( v0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(QT::QCoreApplication::self[2] + 120LL))(
      QT::QCoreApplication::self + 2,
      v0,
      0);
  }
  else
  {
    v2 = qalloc_or_throw(360);
    sub_456590(v2, "Users");
    v6 = 0;
    v7 = 0;
    sub_4AED50(v2, &v6, v3, v4);
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree(v6, (const char *)&v6);
    }
    v5 = sub_49EE00(v2);
    if ( v5 )
    {
      *(_QWORD *)(v5 + 2152) = 1;
      *(_QWORD *)(v5 + 2144) = &off_86BD30;
    }
  }
  return 1;
}
