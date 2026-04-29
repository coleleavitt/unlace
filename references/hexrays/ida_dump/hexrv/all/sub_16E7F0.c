unsigned __int64 __fastcall sub_16E7F0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  bool v4; // zf
  int v6; // r13d
  unsigned __int8 *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r15
  char v16; // al
  __int64 v17; // rbp
  unsigned __int8 v18; // al
  signed int v19; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]

  v3 = a1[2];
  v4 = *(_BYTE *)a2 == 4;
  v20 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = (unsigned __int8 *)a1[6];
  v19 = 0;
  v8 = *(_QWORD *)(v3 + 480);
  v9 = *(_QWORD *)(v8 + 112);
  if ( v4 )
  {
    if ( !sub_1216D0(v7, *(_QWORD *)(v8 + 112), *(unsigned int **)(a2 + 8), 0) )
    {
      if ( !under_debugger )
        sub_37DDE0(50533);
      goto LABEL_31;
    }
    v10 = a1[6];
    if ( *(_DWORD *)(v10 + 68) != v6 && *(_DWORD *)v10 == 11 )
    {
      sub_120CC0(a2, (unsigned __int8 *)(v10 + 64));
      sub_1234F0(a2, v9, *(_QWORD *)(a1[4] + 24LL), v6);
      return v20 - __readfsqword(0x28u);
    }
  }
  else
  {
    if ( *(_DWORD *)v7 != 4 )
    {
      if ( *(_DWORD *)v7 == 67 )
      {
        if ( sub_121110((unsigned __int8 *)a2, *(_QWORD *)(v8 + 112), (__int64)(v7 + 32), 0) )
        {
          v10 = a1[6];
          goto LABEL_6;
        }
        if ( !under_debugger )
          sub_37DDE0(50534);
      }
      else if ( !under_debugger )
      {
        sub_37DDE0(50536);
      }
LABEL_31:
      BUG();
    }
    if ( !sub_121110((unsigned __int8 *)a2, *(_QWORD *)(v8 + 112), (__int64)(v7 + 32), 1u)
      && !(unsigned __int8)sub_11D6F0(a1[6] + 32LL, (char *)a2, &v19, v12, v13, v14) )
    {
      if ( !under_debugger )
        sub_37DDE0(50535);
      goto LABEL_31;
    }
    v15 = sub_118790((unsigned __int8 *)(a1[6] + 32LL), v8);
    v16 = sub_118790((unsigned __int8 *)(a1[6] + 64LL), v8);
    v10 = a1[6];
    if ( v15 != v16 )
    {
      v19 = *(_DWORD *)(v10 + 68) - (v6 + v19);
      if ( v19 < 0 )
      {
        if ( !under_debugger )
          sub_37DDE0(51501);
        goto LABEL_31;
      }
    }
  }
LABEL_6:
  sub_120CC0(a2, (unsigned __int8 *)(v10 + 64));
  if ( !(unsigned __int8)sub_122A50(a2, v9, v19) )
  {
    if ( !under_debugger )
      sub_37DDE0(50537);
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a2 + 4) != v6 && !(unsigned __int8)sub_123000((unsigned __int8 *)a2, v9, v6, 0) )
  {
    v17 = *(_QWORD *)(a1[4] + 24LL);
    v18 = sub_118790((unsigned __int8 *)a2, v8);
    sub_11C320((char *)a2, v9, v18 + 10, v17, v6);
  }
  return v20 - __readfsqword(0x28u);
}
