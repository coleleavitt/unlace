__int64 sub_DC150()
{
  TGroup *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( qword_252120 )
  {
    TView::makeFirst(qword_252120);
  }
  else
  {
    v6 = 0;
    v7 = 0;
    sub_CC2C0(&v6, *(_DWORD *)(dbg + 48LL));
    v1 = (TGroup *)operator new(0xB8u);
    sub_D09A0(v1, &v6);
    if ( TFileList::getKey(TProgram::application, (const char *)v1) )
    {
      TGroup::insert(TProgram::deskTop, v1);
      qword_252120 = v1;
    }
    v2 = v6;
    if ( v6 )
    {
      v3 = v7;
      if ( (_QWORD)v7 )
      {
        v4 = 0;
        do
        {
          v5 = 5 * v4++;
          (**(void (__fastcall ***)(__int64))(16 * v5 + v2))(16 * v5 + v2);
          v2 = v6;
        }
        while ( v3 != v4 );
      }
      *(_QWORD *)&v7 = 0;
      qfree();
    }
  }
  return 0;
}

