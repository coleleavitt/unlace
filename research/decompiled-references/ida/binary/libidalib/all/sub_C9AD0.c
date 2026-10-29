const char *__fastcall sub_C9AD0(int a1)
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
      if ( dword_252588 )
      {
        v4 = qword_252590;
        if ( (_QWORD)xmmword_252598 << 8 )
        {
          while ( dword_252588 != *(_DWORD *)v4 )
          {
            v4 += 256;
            if ( v4 == qword_252590 + ((_QWORD)xmmword_252598 << 8) )
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
    if ( !dword_25274C )
      return v1;
    if ( a1 >= (int)xmmword_252598 )
      return v1;
    v1 = s1;
    v2 = qword_252590 + ((__int64)a1 << 8);
    if ( !*(_QWORD *)(v2 + 16) )
      return v1;
    return *(const char **)(v2 + 8);
  }
}

