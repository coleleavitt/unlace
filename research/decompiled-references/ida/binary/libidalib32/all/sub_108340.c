TMenuItem *__fastcall sub_108340(unsigned __int16 **a1)
{
  __int64 v2; // rdi
  TMenuItem *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int16 v8; // r13
  unsigned __int16 v9; // r12
  const char *v10; // rax
  unsigned __int16 *v11; // rax
  struct _Unwind_Exception *v12; // r15
  char v13[1032]; // [rsp+0h] [rbp-440h] BYREF
  unsigned __int64 v14; // [rsp+408h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v2 = *((unsigned __int16 *)a1 + 5);
  if ( (_WORD)v2 == 969 )
  {
    v4 = (TMenuItem *)operator new(0x28u);
    TMenuItem::TMenuItem(v4, nullptr, 0, 0, 0, nullptr, nullptr);
    return v4;
  }
  if ( *a1 && ((unsigned __int64)a1[1] & 0xFFFFFFFFFFFFLL) == 0 )
  {
    v5 = sub_19B130(**a1);
    if ( v5 )
    {
      v6 = v5;
      sub_19BA80(*(unsigned __int16 *)(v5 + 170), v13, 1024);
      v4 = (TMenuItem *)operator new(0x28u);
      v7 = v6;
      LOWORD(v6) = *(_WORD *)(v6 + 8);
      v8 = *(_WORD *)(v7 + 170);
      v9 = *(_WORD *)(v7 + 168);
      v10 = (const char *)itext();
      TMenuItem::TMenuItem(v4, v10, v9, v8, v6, v13, nullptr);
    }
    else
    {
      v11 = *a1;
      v4 = nullptr;
      sub_92120((__int64)"Unknown action with command 0x%04X\n", *v11);
    }
    return v4;
  }
  if ( !(_WORD)v2 )
  {
    if ( !under_debugger )
    {
      v12 = (struct _Unwind_Exception *)interr();
      operator delete(a1, 0x28u);
      _Unwind_Resume(v12);
    }
    BUG();
  }
  return (TMenuItem *)sub_108500(v2, *((unsigned __int16 *)a1 + 6), off_245040[*((unsigned __int16 *)a1 + 4)]);
}

