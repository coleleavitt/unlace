__int64 __fastcall sub_164DE0(char *s2)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  const char *v5; // rdi

  v2 = qword_2543A0;
  while ( 1 )
  {
    if ( *v2 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 232LL))(*v2);
      v4 = v3;
      if ( v3 )
      {
        v5 = *(const char **)(v3 + 1216);
        if ( v5 )
        {
          if ( !strcmp(v5, s2) )
            break;
        }
      }
    }
    if ( ++v2 == &qword_254470 )
      return 0;
  }
  return v4;
}

