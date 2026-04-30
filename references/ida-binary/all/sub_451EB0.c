__int64 __fastcall sub_451EB0(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+30h] [rbp-8h]

  v2 = sub_4A0300("Commits", v8, v9, SDWORD2(v9), __readfsqword(0x28u), v10, v11, v12);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(QT::QCoreApplication::self[2] + 120LL))(
      QT::QCoreApplication::self + 2,
      v2,
      0);
  }
  else
  {
    v4 = qalloc_or_throw(240);
    sub_451D30(v4, a2);
    v8 = 0;
    v9 = 0;
    sub_4AED50(v4, &v8, v5, v6);
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8, (const char *)&v8);
    }
    v7 = sub_49EE00(v4);
    if ( v7 )
    {
      *(_QWORD *)(v7 + 2152) = 2;
      *(_QWORD *)(v7 + 2144) = &off_86BBA0;
    }
  }
  return 1;
}
