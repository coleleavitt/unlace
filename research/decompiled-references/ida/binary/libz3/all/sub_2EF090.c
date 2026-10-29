__int64 __fastcall sub_2EF090(_QWORD *a1)
{
  __int64 v2; // r9
  unsigned int v3; // ebx
  __int64 v4; // r12
  unsigned int i; // r13d
  unsigned __int64 *v6; // r14
  int v7; // eax
  char v8; // cl
  bool v9; // dl
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // rdi
  _DWORD *v13; // rax
  _DWORD *v14; // rdx
  char v15; // [rsp+7h] [rbp-A1h]
  _QWORD v16[19]; // [rsp+10h] [rbp-98h] BYREF

  sub_180C5A0(v16, "maxres");
  v15 = 1;
  if ( a1[94] == v16[0] )
  {
    v13 = (_DWORD *)a1[76];
    if ( v13 && (v14 = &v13[26 * *(v13 - 1)], v13 != v14) )
    {
      while ( *v13 == 2 )
      {
        v13 += 26;
        if ( v14 == v13 )
          goto LABEL_33;
      }
      v15 = 1;
    }
    else
    {
LABEL_33:
      v15 = 0;
    }
  }
  if ( (unsigned int)sub_180B130() )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v12 = sub_180B150();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v12, "(opt :lex)\n");
    }
    else
    {
      sub_180B150();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v2 = a1[76];
  if ( !v2 )
    return 1;
  v3 = *(_DWORD *)(v2 - 4);
  if ( !v3 )
    return 1;
  v4 = 0;
  for ( i = 0; ; ++i )
  {
    v6 = (unsigned __int64 *)(v2 + v4);
    v7 = *(_DWORD *)(v2 + v4);
    v8 = v15 & (i + 1 != v3);
    v9 = i + 1 < v3;
    if ( v7 == 1 )
    {
      result = sub_2EE910(a1, *((unsigned int *)v6 + 24), v9, v8, 0);
    }
    else if ( v7 == 2 )
    {
      result = sub_2EBAF0((__int64)a1, v6 + 11, v9, v8);
    }
    else
    {
      if ( v7 )
      {
        sub_1872CE0("");
        sub_1873130(114, 489);
      }
      result = sub_2EE910(a1, *((unsigned int *)v6 + 24), v9, v8, 1u);
    }
    if ( (_DWORD)result != 1 )
      break;
    v11 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 == 1 )
    {
      sub_2EEB30((__int64)v16, (__int64)a1, i);
      if ( LODWORD(v16[0]) )
      {
LABEL_20:
        sub_2A6060((__int64)v16);
        return 1;
      }
      sub_2A6060((__int64)v16);
      v11 = *(_DWORD *)v6;
    }
    if ( !v11 )
    {
      sub_2EEDE0((__int64)v16, (__int64)a1, i);
      if ( LODWORD(v16[0]) )
        goto LABEL_20;
      sub_2A6060((__int64)v16);
    }
    if ( i + 1 == v3 )
      return 1;
    v4 += 104;
    sub_2ED000((__int64)a1, 1);
    v2 = a1[76];
  }
  return result;
}

