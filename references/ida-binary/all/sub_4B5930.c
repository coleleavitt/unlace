__int64 __fastcall address_bookmarks_desktop_widget_factory_t__::vfunc_2(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r13
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r13
  const char *v12; // rsi
  const char *v13; // r15
  char *v14; // rax

  v3 = *(unsigned __int8 *)(a1 + 32);
  if ( (_BYTE)v3 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = v4 + 24LL * *(_QWORD *)(a1 + 16);
    if ( v4 != v5 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      do
      {
        if ( *(_QWORD *)(v4 + 8) )
        {
          v7 = *(const char **)v4;
          v8 = &s1;
          if ( !v6 )
            goto LABEL_5;
        }
        else
        {
          if ( !v6 )
          {
LABEL_21:
            LOBYTE(v3) = v4 != v5;
            return v3;
          }
          v7 = &s1;
        }
        v8 = *(const char **)a2;
LABEL_5:
        if ( !strcmp(v8, v7) )
          goto LABEL_21;
        v4 += 24;
      }
      while ( v5 != v4 );
    }
    return 0;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = v9 + 24LL * *(_QWORD *)(a1 + 16);
    if ( v9 != v10 )
    {
      v11 = *(_QWORD *)(a2 + 8);
      do
      {
        v12 = &s1;
        if ( *(_QWORD *)(v9 + 8) )
          v12 = *(const char **)v9;
        v13 = &s1;
        if ( v11 )
          v13 = *(const char **)a2;
        v14 = strstr(v13, v12);
        LOBYTE(v3) = v13 == v14 && v14 != nullptr;
        if ( (_BYTE)v3 )
          break;
        v9 += 24;
      }
      while ( v10 != v9 );
    }
  }
  return v3;
}
