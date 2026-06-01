__int64 __fastcall sub_5D0BB0(_QWORD *a1)
{
  __int64 v1; // rbp
  const char *v2; // rsi
  int v4; // ebx
  int v5; // r12d
  int v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+4h] [rbp-24h]
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v1 = **(_QWORD **)(a1[13] + 120LL) + 24LL * *(_QWORD *)(*(_QWORD *)(a1[13] + 120LL) + 8LL) - 24;
  if ( *(_DWORD *)v1 != 3 )
  {
    if ( !under_debugger )
      interr(662);
    BUG();
  }
  if ( a1[6] )
  {
    if ( !(unsigned __int8)parse_reg_name(&v6, a1[5]) )
      goto LABEL_4;
  }
  else if ( !(unsigned __int8)parse_reg_name(&v6, haystack) )
  {
    goto LABEL_4;
  }
  if ( v7 == *(unsigned __int16 *)(v1 + 18) )
  {
    v4 = *(_DWORD *)(v1 + 8);
    v5 = v6;
    cleanup_argloc(v1);
    *(_DWORD *)v1 = 4;
    *(_WORD *)(v1 + 18) += v7;
    *(_DWORD *)(v1 + 8) = v5 | (v4 << 16);
    return 0;
  }
LABEL_4:
  v2 = haystack;
  if ( a1[6] )
    v2 = (const char *)a1[5];
  set_error_string();
  return set_qerrno(691, v2);
}

