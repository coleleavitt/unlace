__int64 __fastcall sub_5D0AF0(_QWORD *a1)
{
  const char *v1; // rsi
  bool v2; // zf
  const char *v3; // rsi
  int v5; // ebp
  __int64 v6; // rbx
  __int16 v7; // ax
  int v8; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+4h] [rbp-24h]
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v1 = haystack;
  v2 = a1[6] == 0;
  v10 = __readfsqword(0x28u);
  if ( !v2 )
    v1 = (const char *)a1[5];
  if ( (unsigned __int8)parse_reg_name(&v8, v1) )
  {
    v5 = v8;
    v6 = **(_QWORD **)(a1[13] + 120LL) + 24LL * *(_QWORD *)(*(_QWORD *)(a1[13] + 120LL) + 8LL) - 24;
    cleanup_argloc(v6);
    *(_DWORD *)v6 = 3;
    v7 = v9;
    *(_DWORD *)(v6 + 8) = v5;
    *(_WORD *)(v6 + 18) = v7;
    return 0;
  }
  else
  {
    v3 = haystack;
    if ( a1[6] )
      v3 = (const char *)a1[5];
    set_error_string();
    return set_qerrno(691, v3);
  }
}

