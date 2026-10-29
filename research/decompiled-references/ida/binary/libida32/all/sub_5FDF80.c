unsigned __int64 __fastcall sub_5FDF80(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rbx
  char *v5; // rax
  unsigned int v6; // edi
  char *v7; // r14
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v11; // [rsp+18h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v2 = fopenRT(a1);
  if ( v2 )
  {
    v3 = v2;
    s1 = nullptr;
    v4 = strlen(a2);
    v11 = 0;
    while ( qgetline() >= 0 )
    {
      if ( qcleanline(&s1, 59, 7) >= v4 )
      {
        v5 = &byte_2CA12E1;
        if ( (unsigned __int64)v11 | v4 )
          v5 = &s1[v4];
        v6 = *v5;
        if ( v6 <= 0x7F )
        {
          if ( isspace(v6) )
          {
            v7 = s1;
            if ( !strncasecmp(s1, a2, v4) )
            {
              if ( *(_BYTE *)skip_spaces(&v7[v4]) )
              {
                qbasename(a1);
                sub_365330();
              }
            }
          }
        }
      }
    }
    qfclose(v3);
    if ( s1 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(s1);
    }
  }
  return v12 - __readfsqword(0x28u);
}

