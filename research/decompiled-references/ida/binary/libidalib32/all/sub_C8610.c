const char *__fastcall sub_C8610(int a1)
{
  const char *v1; // rdx
  __int64 v2; // rdi
  __int64 v4; // rax

  v1 = (const char *)dbg;
  if ( !dbg )
    return v1;
  if ( a1 < 0 )
  {
    if ( a1 == -1 )
    {
      if ( dword_251408 )
      {
        v4 = qword_251410;
        if ( 232LL * (_QWORD)xmmword_251418 )
        {
          while ( dword_251408 != *(_DWORD *)v4 )
          {
            v4 += 232;
            if ( v4 == qword_251410 + 232LL * (_QWORD)xmmword_251418 )
              return nullptr;
          }
          v1 = s1;
          if ( *(_QWORD *)(v4 + 16) )
            return *(const char **)(v4 + 8);
          return v1;
        }
      }
    }
    return nullptr;
  }
  else
  {
    v1 = nullptr;
    if ( !dword_2515A4 )
      return v1;
    if ( a1 >= (int)xmmword_251418 )
      return v1;
    v1 = s1;
    v2 = qword_251410 + 232LL * a1;
    if ( !*(_QWORD *)(v2 + 16) )
      return v1;
    return *(const char **)(v2 + 8);
  }
}

