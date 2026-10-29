__int64 __fastcall sub_C7BB0(_QWORD *a1)
{
  __int64 v1; // r13
  unsigned __int8 (__fastcall *v3)(_QWORD *); // rax
  int v4; // r12d
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = a1[40];
  v15[3] = __readfsqword(0x28u);
  v3 = *(unsigned __int8 (__fastcall **)(_QWORD *))(v1 + 1920);
  if ( v3 )
  {
    if ( !v3(a1) )
      return 0;
    v1 = a1[40];
  }
  if ( *(_QWORD *)(v1 + 1904) )
  {
    v4 = 0;
    while ( 1 )
    {
      sub_123A40(v15);
      if ( !(unsigned __int8)sub_BDAD0((__int64)a1, (__int64)v15, 0)
        || !(unsigned __int8)sub_11FD80(v15, &v14, 0)
        || !v14 )
      {
        break;
      }
      ++v4;
      sub_11CDA0(v15);
      if ( (unsigned __int64)v4 >= *(_QWORD *)(v1 + 1904) )
        goto LABEL_12;
    }
    sub_11CDA0(v15);
    return 0;
  }
LABEL_12:
  v6 = a1[49];
  if ( v6 )
  {
    a1[50] = 0;
    qfree(v6);
    a1[49] = 0;
    a1[51] = 0;
  }
  v7 = a1[40];
  v8 = 0;
  v9 = 0;
  if ( *(_QWORD *)(v7 + 1880) )
  {
    while ( 1 )
    {
      v10 = 5 * v9;
      v11 = *(_QWORD *)(v7 + 1872);
      v12 = (__m128i *)a1[41];
      v15[0] = 0;
      v13 = v11 + 8 * v10;
      if ( !(unsigned __int8)sub_C7820(v12, v13 + 16, v15) )
      {
        if ( !under_debugger )
          sub_383060(50957);
        BUG();
      }
      if ( !(unsigned __int8)sub_BDCB0(a1, v13) )
        break;
      clear_tinfo_t();
      v7 = a1[40];
      v9 = ++v8;
      if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 1880) )
        return 1;
    }
    clear_tinfo_t();
    return 0;
  }
  return 1;
}
