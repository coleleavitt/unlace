__int64 __fastcall sub_19D6E0(char *a1, char a2)
{
  TMenuItem *v2; // rax
  _QWORD *v3; // rbp
  TMenuItem *v4; // rbx
  __int64 v5; // rcx
  TMenuItem *v6; // rax
  TMenuItem *v7; // rdx
  unsigned __int16 v9; // r12
  __int64 v10; // rdi
  void ****v11; // rax
  __int64 v12; // rax
  _WORD *v13; // rsi
  _QWORD v14[5]; // [rsp+0h] [rbp-28h] BYREF

  v14[1] = __readfsqword(0x28u);
  v2 = (TMenuItem *)sub_19D310(a1, v14, 0);
  if ( v2 )
  {
    v3 = (_QWORD *)v14[0];
    v4 = v2;
    v5 = *(_QWORD *)v2;
    v6 = *(TMenuItem **)v14[0];
    if ( *(TMenuItem **)v14[0] == v4 )
    {
      *(_QWORD *)v14[0] = v5;
    }
    else
    {
      do
      {
        v7 = v6;
        v6 = *(TMenuItem **)v6;
      }
      while ( v6 != v4 );
      *(_QWORD *)v7 = v5;
    }
    if ( a2 )
    {
      v9 = *((_WORD *)v4 + 8);
      if ( TProgram::application )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 32LL))(TProgram::application + 136LL);
        if ( v10 )
        {
          v11 = (void ****)sub_19B4C0(v10, v9);
          if ( v11 )
            sub_19B9C0(v11[17], v11);
        }
        v9 = *((_WORD *)v4 + 8);
      }
      v12 = xmmword_256FB8;
      v13 = qword_256FB0;
      if ( *((_QWORD *)&xmmword_256FB8 + 1) < (unsigned __int64)(xmmword_256FB8 + 1) )
      {
        qword_256FB0 = (void *)qvector_reserve();
        v13 = qword_256FB0;
        v12 = xmmword_256FB8;
      }
      v13[v12] = v9;
      *(_QWORD *)&xmmword_256FB8 = xmmword_256FB8 + 1;
    }
    TMenuItem::~TMenuItem(v4);
    operator delete(v4, 0x28u);
    v3[1] = *v3;
    return 1;
  }
  else
  {
    sub_8F740((__int64)"FAILED TO DETACH MENU ITEM %s\n", a1);
    return 0;
  }
}

