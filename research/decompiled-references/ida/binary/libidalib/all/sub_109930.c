TView *__fastcall sub_109930(const char *a1)
{
  const char *v1; // rbp
  __int64 i; // rax
  const char *v3; // rdi
  TView *v4; // rbx
  TView *v6; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF
  __int128 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( !a1 )
    return nullptr;
  v7 = 0;
  v8 = 0;
  v1 = sub_107740(&v7, a1, 0);
  for ( i = TGroup::first(TProgram::deskTop); ; i = TView::nextView(v4) )
  {
    v4 = (TView *)i;
    if ( !i )
    {
      if ( !v7 )
        return v4;
      goto LABEL_9;
    }
    if ( (unsigned __int8)sub_144A20(i) )
    {
      v3 = (const char *)(*(__int64 (__fastcall **)(TView *, _QWORD))(*(_QWORD *)v4 + 192LL))(v4, 0);
      if ( v3 )
      {
        if ( !strcmp(v3, v1) )
          break;
      }
    }
  }
  v6 = nullptr;
  TGroup::forEach(v4, (void (*)(TView *, void *))sub_104B20, &v6);
  if ( v6 )
    v4 = v6;
  if ( v7 )
  {
LABEL_9:
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v4;
}

