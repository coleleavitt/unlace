__int64 __fastcall sub_61D770(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, int a5, int a6)
{
  __int64 v7; // rbx
  int v11; // r9d
  __int64 v12; // rsi
  const char *v13; // r13
  __int64 v16; // [rsp+8h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 + 24LL * *(_QWORD *)(a1 + 16) != v7 )
  {
    v16 = v7 + 24LL * *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      v13 = haystack;
      if ( *(_QWORD *)(v7 + 8) )
        v13 = *(const char **)v7;
      if ( !a4 )
        break;
      if ( *a4 )
      {
        qmakepath(a2, a3, (_DWORD)v13, (_DWORD)a4, a5, a6);
        if ( (unsigned __int8)qfileexist(a2, a3) )
          return a2;
      }
      else
      {
        qmakepath(a2, a3, (_DWORD)v13, a5, a6, 0);
        if ( (unsigned __int8)qfileexist(a2, a3) )
          return a2;
      }
      if ( !*a4 )
        goto LABEL_5;
      v12 = a3;
      qmakepath(a2, a3, (_DWORD)v13, (_DWORD)a4, a6, 0);
LABEL_6:
      if ( (unsigned __int8)qfileexist(a2, v12) )
        return a2;
      v7 += 24;
      if ( v16 == v7 )
        return 0;
    }
    qmakepath(a2, a3, (_DWORD)v13, a5, a6, 0);
    if ( (unsigned __int8)qfileexist(a2, a3) )
      return a2;
LABEL_5:
    v12 = a3;
    qmakepath(a2, a3, (_DWORD)v13, a6, 0, v11);
    goto LABEL_6;
  }
  return 0;
}
