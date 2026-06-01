unsigned __int64 __fastcall sub_508580(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 *v6; // rbx
  int v7; // eax
  __int64 v8; // rdi
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // rdi
  __int64 v15; // rsi
  int v16; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v4 = *(int *)(a1 + 8);
  v17 = __readfsqword(0x28u);
  if ( (_DWORD)v4 == -1 )
    v6 = nullptr;
  else
    v6 = *(__int64 **)(switch_dbctx(v4) + 1592);
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      if ( !under_debugger )
        interr(1960);
      BUG();
    }
    v7 = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 48) = v7;
    v8 = *v6;
    *((_DWORD *)v6 + 20) = v7;
    if ( (unsigned __int8)sub_78EE60(v8) )
    {
      v9 = v6 + 1;
      if ( *((_DWORD *)v6 + 2) == -1 )
      {
        sub_79BC40(v9, *v6, "$ scriptsnippets", 0);
        v9 = v6 + 1;
      }
      v10 = *v6;
      v16 = *((_DWORD *)v6 + 20);
      sub_79B440(v9, v10, 0, &v16, 4, 89);
    }
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 40) = v12;
    v13 = *v6;
    v6[9] = v12;
    if ( (unsigned __int8)sub_78EE60(v13) )
    {
      v14 = v6 + 1;
      if ( *((_DWORD *)v6 + 2) == -1 )
      {
        sub_79BC40(v14, *v6, "$ scriptsnippets", 0);
        v14 = v6 + 1;
      }
      v15 = *v6;
      v16 = v6[9];
      sub_79B440(v14, v15, 1, &v16, 4, 89);
    }
  }
  return v17 - __readfsqword(0x28u);
}

