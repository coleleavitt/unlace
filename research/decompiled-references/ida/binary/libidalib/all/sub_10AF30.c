TMenuItem **__fastcall sub_10AF30(char a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  TMenuItem **result; // rax
  __int64 v8; // rbp
  TMenuItem **v9; // rbx
  const char *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  TMenuItem *v14; // r14
  unsigned __int16 **v15; // rdx
  TSubMenu *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp-28h] [rbp-28h]
  __int64 v21; // [rsp-20h] [rbp-20h]
  __int64 v22; // [rsp-18h] [rbp-18h]
  __int64 v23; // [rsp-10h] [rbp-10h]

  result = (TMenuItem **)&TProgram::application;
  if ( TProgram::application )
  {
    v23 = v5;
    v22 = v4;
    v21 = v3;
    v20 = v2;
    v8 = TProgram::menuBar;
    result = (TMenuItem **)TMenuView::findItem(TProgram::menuBar, 86, 0);
    v9 = result;
    if ( result )
    {
      v10 = (const char *)itext();
      if ( !strcmp(*((const char **)*v9 + 1), v10) )
      {
        callui(55, 0, &callui, v11, v12, v13, v20, v21, v22, v5);
        v14 = *v9;
        *v9 = *(TMenuItem **)*v9;
        if ( v14 )
        {
          TMenuItem::~TMenuItem(v14);
          operator delete(v14, 0x28u);
        }
      }
      if ( a1 )
      {
        v15 = (unsigned __int16 **)&off_246180;
        if ( a2 )
          v15 = (unsigned __int16 **)&unk_2462C0;
        v16 = sub_108790(746, 0, v15);
        *(_QWORD *)v16 = *v9;
        *v9 = v16;
        *((_DWORD *)v16 + 5) = 0;
        callui(55, 1, &callui, v17, v18, v19, v20, v21, v22, v23);
      }
      return (TMenuItem **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
    }
  }
  return result;
}

