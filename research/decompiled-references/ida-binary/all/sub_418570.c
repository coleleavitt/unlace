int __fastcall sub_418570(__int64 a1, unsigned int a2, __int64 a3)
{
  const char *v3; // rcx
  __int64 v6; // rdi
  const char *v7; // rsi
  __int64 v8; // r15
  const char **v9; // rbx
  __int64 v10; // rax
  const char **v11; // rbp
  __int64 v12; // r13
  const char *v13; // rdi
  const char *v14; // rdi

  v3 = &s1;
  v6 = *(_QWORD *)(a1 + 32) + 40LL;
  if ( *(_QWORD *)(a3 + 8) )
    v3 = *(const char **)a3;
  sub_416510(v6, 10, a2, v3);
  v7 = (const char *)0x8000000000000000LL;
  (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, __int64))(QT::QCoreApplication::self[2] + 176LL))(
    QT::QCoreApplication::self + 2,
    0x8000000000000000LL,
    38,
    1);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(const char ***)(v8 + 304);
  v10 = 3LL * *(_QWORD *)(v8 + 312);
  v11 = &v9[3 * *(_QWORD *)(v8 + 312)];
  if ( v9 != v11 )
  {
    v12 = *(_QWORD *)(a3 + 8);
    do
    {
      if ( v9[1] )
      {
        v7 = *v9;
        v13 = &s1;
        if ( !v12 )
          goto LABEL_6;
      }
      else
      {
        if ( !v12 )
        {
LABEL_12:
          if ( v9 != v11 )
          {
            v14 = *v9;
            if ( *v9 )
            {
              v9[1] = nullptr;
              qfree(v14, v7);
            }
            LODWORD(v10) = (unsigned int)memmove(
                                           v9,
                                           v9 + 3,
                                           *(_QWORD *)(v8 + 304) + 24LL * *(_QWORD *)(v8 + 312) - (_QWORD)v9 - 24);
            --*(_QWORD *)(v8 + 312);
          }
          return v10;
        }
        v7 = &s1;
      }
      v13 = *(const char **)a3;
LABEL_6:
      LODWORD(v10) = strcmp(v13, v7);
      if ( !(_DWORD)v10 )
        goto LABEL_12;
      v9 += 3;
    }
    while ( v11 != v9 );
  }
  return v10;
}
