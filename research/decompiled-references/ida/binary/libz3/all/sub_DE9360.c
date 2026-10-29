__int64 __fastcall sub_DE9360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 *v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // rax
  char *v11; // rcx
  int v12; // edi
  unsigned int v13; // edx
  char *v14; // rsi
  __int64 v15; // rdx
  char *v16; // r9
  char *i; // rax
  __int64 v18; // rdx
  const char *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v23; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 && *(_DWORD *)(v4 - 4) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_39A600(a2, *(const char **)(*(_QWORD *)(a1 + 8) + 24LL));
    v6 = *(__int64 **)(a1 + 16);
    if ( !v6 )
      return std::__ostream_insert<char,std::char_traits<char>>();
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 == v7 )
      return std::__ostream_insert<char,std::char_traits<char>>();
    while ( 1 )
    {
      v8 = *v6;
      std::__ostream_insert<char,std::char_traits<char>>();
      v10 = *(unsigned int *)(a3 + 120);
      v11 = *(char **)(a3 + 112);
      v12 = *(_DWORD *)(v8 + 12);
      v13 = v10 - 1;
      v10 *= 16;
      v14 = &v11[v10];
      v15 = 16LL * (v12 & v13);
      v16 = &v11[v15];
      if ( v15 != v10 )
      {
        for ( i = &v11[v15]; v14 != i; i += 16 )
        {
          v18 = *(_QWORD *)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(v18 + 12) == v12 && v8 == v18 )
            {
LABEL_24:
              (*(void (__fastcall **)(_QWORD, __int64, __int64, char *, __int64, char *))(**((_QWORD **)i + 1) + 32LL))(
                *((_QWORD *)i + 1),
                a2,
                a3,
                v11,
                v9,
                v16);
              goto LABEL_16;
            }
          }
          else if ( !v18 )
          {
            goto LABEL_12;
          }
        }
      }
      if ( v11 == v16 )
      {
LABEL_12:
        v19 = *(const char **)(v8 + 16);
        if ( ((unsigned __int8)v19 & 7) != 0 )
          goto LABEL_33;
        goto LABEL_13;
      }
      while ( 1 )
      {
        v23 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 <= 1u )
          break;
        if ( *(_DWORD *)(v23 + 12) == v12 && v8 == v23 )
        {
          i = v11;
          goto LABEL_24;
        }
LABEL_29:
        v11 += 16;
        if ( v16 == v11 )
          goto LABEL_12;
      }
      if ( v23 )
        goto LABEL_29;
      v19 = *(const char **)(v8 + 16);
      if ( ((unsigned __int8)v19 & 7) != 0 )
      {
LABEL_33:
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        goto LABEL_16;
      }
LABEL_13:
      if ( v19 )
        strlen(v19);
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_16:
      if ( v7 == ++v6 )
        return std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *(_QWORD *)(v20 + 24);
  if ( (v21 & 7) == 0 )
  {
    if ( v21 )
      strlen(*(const char **)(v20 + 24));
    return std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return std::ostream::operator<<();
}

