unsigned __int64 sub_10AA40()
{
  __int64 plugins; // r12
  int v1; // r15d
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(__int64); // rax
  _QWORD *(***v6)(); // rdi
  _QWORD *(*v7)(); // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 *(*v11)(); // rax
  __int64 *v12; // rdi
  unsigned __int16 v13; // r13
  unsigned __int64 v14; // rsi
  const char **v15; // r12
  const char **i; // rbx
  __int64 module_data; // rax
  __int64 v19; // [rsp-8h] [rbp-498h]
  TMenuItem *v20; // [rsp+0h] [rbp-490h]
  TSubMenu *v21; // [rsp+8h] [rbp-488h]
  _OWORD v22[4]; // [rsp+10h] [rbp-480h] BYREF
  char v23[1032]; // [rsp+50h] [rbp-440h] BYREF
  unsigned __int64 v24; // [rsp+458h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( TProgram::menuBar && TProgram::application )
  {
    sub_109F40();
    plugins = get_plugins();
    if ( plugins )
    {
      v21 = nullptr;
      v1 = 1;
      v2 = 0;
      do
      {
        if ( (*(_BYTE *)(plugins + 144) & 0x10) == 0 )
        {
          sub_19C680(*(unsigned __int16 *)(plugins + 34), v23, 1024);
          v13 = sub_19A9B0();
          v20 = (TMenuItem *)operator new(0x28u);
          TMenuItem::TMenuItem(v20, *(const char **)(plugins + 24), v13, *(_WORD *)(plugins + 34), 0, v23, nullptr);
          ++v1;
          v3 = v19;
          v14 = 16LL * v1;
          if ( v14 < v1 || (v2 = qrealloc()) == 0 )
            sub_98FF0((__int64)"plugins menu", v14, v3);
          v4 = TProgram::application + 136LL;
          v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL);
          if ( v5 == sub_1056E0 )
            v6 = (_QWORD *(***)())(TProgram::application + 304LL);
          else
            v6 = (_QWORD *(***)())v5(TProgram::application + 136LL);
          v7 = **v6;
          memset(v22, 0, sizeof(v22));
          if ( v7 == sub_1051A0 )
          {
            v8 = operator new(0xD0u);
            sub_19AEF0(v8);
            *(_QWORD *)v8 = &off_231758;
          }
          else
          {
            v8 = ((__int64 (__fastcall *)(_QWORD *(***)(), _OWORD *, __int64))v7)(v6, v22, v4);
          }
          sub_19B3C0(v8, *(_QWORD *)(plugins + 24));
          *(_DWORD *)(v8 + 164) = 969;
          v9 = qalloc_or_throw();
          *(_DWORD *)(v9 + 8) = 1;
          *(_QWORD *)v9 = off_2315B0;
          *(_QWORD *)(v9 + 16) = plugins;
          sub_19B370(v8);
          *(_BYTE *)(v8 + 156) = 1;
          *(_DWORD *)(v8 + 8) = 0;
          *(_WORD *)(v8 + 168) = v13;
          v10 = *(_WORD *)(plugins + 34);
          *(_DWORD *)(v8 + 112) = (unsigned __int16)*(_DWORD *)(v8 + 112);
          *(_WORD *)(v8 + 170) = v10;
          *(_DWORD *)(v8 + 124) = 2;
          LOBYTE(v10) = *(_BYTE *)(plugins + 144);
          *(_QWORD *)(v8 + 64) = 0x8000000;
          *(_QWORD *)(v8 + 72) = 0;
          *(_QWORD *)(v8 + 80) = 0;
          *(_QWORD *)(v8 + 88) = 32LL * ((v10 & 4) != 0);
          v11 = *(__int64 *(**)())(*(_QWORD *)(TProgram::application + 136LL) + 32LL);
          if ( v11 == sub_1057F0 )
          {
            if ( !dword_254298 || (module_data = get_module_data(), v12 = (__int64 *)(module_data + 16), !module_data) )
              v12 = &qword_252C20;
          }
          else
          {
            v12 = (__int64 *)((__int64 (__fastcall *)(__int64))v11)(TProgram::application + 136LL);
          }
          sub_19EAE0(v12, v8);
          if ( !v21 )
          {
            v21 = (TSubMenu *)operator new(0x28u);
            TSubMenu::TSubMenu(v21, "Plu~g~ins", 0, 0);
          }
          v21 = (TSubMenu *)operator+(v21, v20);
        }
        plugins = *(_QWORD *)plugins;
      }
      while ( plugins );
    }
    else
    {
      v21 = nullptr;
      v2 = 0;
      v1 = 1;
    }
    v15 = nullptr;
    for ( i = **(const char ****)(TMenuView::findItem(TProgram::menuBar, 69, 0) + 32); *i; i = (const char **)*i )
      v15 = i;
    if ( !strcmp(i[1], "Plu~g~ins") )
    {
      if ( i )
      {
        TMenuItem::~TMenuItem((TMenuItem *)i);
        operator delete(i, 0x28u);
      }
      *v15 = nullptr;
      i = v15;
      qfree();
    }
    if ( v21 )
    {
      *i = (const char *)v21;
      *(_OWORD *)(v2 + 16LL * v1 - 16) = 0;
    }
    qword_246160 = v2;
    qword_252BD0 = v2;
  }
  return v24 - __readfsqword(0x28u);
}

