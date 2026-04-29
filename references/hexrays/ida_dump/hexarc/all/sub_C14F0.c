__int64 __fastcall sub_C14F0(_QWORD *a1)
{
  _QWORD *v1; // r13
  unsigned __int8 (__fastcall *v3)(_QWORD *); // rax
  int v4; // r12d
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // [rsp+8h] [rbp-50h] BYREF
  __int64 v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = (_QWORD *)a1[40];
  v16[3] = __readfsqword(0x28u);
  v3 = (unsigned __int8 (__fastcall *)(_QWORD *))v1[240];
  if ( v3 )
  {
    if ( !v3(a1) )
      return 0;
    v1 = (_QWORD *)a1[40];
  }
  if ( v1[238] )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      sub_11D380(v16, v1[237] + 16 * v5);
      if ( !(unsigned __int8)sub_B7410((__int64)a1, (__int64)v16, 0)
        || !(unsigned __int8)sub_1196C0(v16, &v15, 0)
        || !v15 )
      {
        break;
      }
      ++v4;
      sub_1166E0(v16);
      v5 = v4;
      if ( (unsigned __int64)v4 >= v1[238] )
        goto LABEL_12;
    }
    sub_1166E0(v16);
    return 0;
  }
LABEL_12:
  v7 = a1[49];
  if ( v7 )
  {
    a1[50] = 0;
    qfree(v7);
    a1[49] = 0;
    a1[51] = 0;
  }
  v8 = a1[40];
  v9 = 0;
  v10 = 0;
  if ( *(_QWORD *)(v8 + 1880) )
  {
    while ( 1 )
    {
      v11 = 5 * v10;
      v12 = *(_QWORD *)(v8 + 1872);
      v13 = a1[41];
      v16[0] = 0;
      v14 = v12 + 8 * v11;
      if ( !(unsigned __int8)sub_C1160(v13, v14 + 16, v16) )
      {
        if ( !under_debugger )
          sub_37B760(50957);
        BUG();
      }
      if ( !(unsigned __int8)sub_B75F0(a1, v14, (__int64)v16) )
        break;
      clear_tinfo_t(v16);
      v8 = a1[40];
      v10 = ++v9;
      if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 1880) )
        return 1;
    }
    clear_tinfo_t(v16);
    return 0;
  }
  return 1;
}
