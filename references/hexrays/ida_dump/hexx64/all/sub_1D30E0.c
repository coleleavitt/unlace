__int64 __fastcall sub_1D30E0(__int64 a1, __int64 a2, const char *a3)
{
  const char *i; // rbx
  const char **j; // rbp
  const char *v7; // rsi
  char v8; // al
  char *v9; // r12
  char *k; // rbx
  const char **v11; // rbp
  const char *v12; // rsi
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a3 )
  {
    for ( i = a3; *i == 95; ++i )
      ;
    for ( j = (const char **)off_4DE9C0; ; ++j )
    {
      v7 = *j;
      if ( !*j )
        break;
      if ( !strcmp(i, v7) )
        return 1;
    }
    if ( strstr(a3, "RTC_Check_") )
    {
      s1 = nullptr;
      v15 = 0;
      v8 = sub_1D2AB0((__int64 *)&s1, a2, 1u, 0);
      v9 = s1;
      if ( v8 )
      {
        for ( k = s1; *k == 95; ++k )
          ;
        v11 = (const char **)off_4DEA00;
        while ( 1 )
        {
          v12 = *v11;
          if ( !*v11 )
            break;
          ++v11;
          if ( !strcmp(k, v12) )
          {
            *(_BYTE *)(*(_QWORD *)(a1 + 784) + 104LL) = 1;
            break;
          }
        }
      }
      if ( v9 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(v9);
      }
    }
  }
  return 0;
}
