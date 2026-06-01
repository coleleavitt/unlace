__int64 sub_123C00()
{
  const char *v0; // rax
  char *v2; // r15
  size_t v3; // r14
  char *v4; // rax
  char *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  char *v8; // rsi
  __int64 v9; // [rsp+18h] [rbp-A0h]
  __int64 v10; // [rsp+20h] [rbp-98h] BYREF
  __int128 v11; // [rsp+28h] [rbp-90h]
  char *s; // [rsp+40h] [rbp-78h] BYREF
  __int128 v13; // [rsp+48h] [rbp-70h]
  char *v14; // [rsp+60h] [rbp-58h]
  __int128 v15; // [rsp+68h] [rbp-50h]
  unsigned __int64 v16; // [rsp+78h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( !sub_122560((__int64)"Choose segment", xmmword_2528A0) )
    return 1;
  v10 = 0;
  v11 = 0;
  get_segment_translations();
  s = nullptr;
  v13 = 0;
  sub_121AA0((__int64 *)&s, (__int64)&v10);
  v0 = (const char *)itext();
  if ( (unsigned __int8)sub_9DB70((__int64)&s, 1u, (__int64)"%s", v0) && (unsigned __int64)v13 > 1 )
  {
    v2 = s;
    *(_QWORD *)&v11 = 0;
    v14 = nullptr;
    v15 = 0;
    if ( !s
      || (v3 = strlen(s),
          v14 = (char *)qvector_reserve(),
          *(_QWORD *)&v15 = v3 + 1,
          memmove(v14, v2, v3),
          v14[v3] = 0,
          v2 = v14,
          *v14) )
    {
      while ( 1 )
      {
        v4 = strchr(v2, 32);
        if ( v4 )
        {
          *v4 = 0;
          v5 = v4 + 1;
        }
        else
        {
          v5 = &v2[strlen(v2)];
        }
        if ( (unsigned __int8)str2ea() )
        {
          v6 = v11;
          v7 = v10;
          if ( *((_QWORD *)&v11 + 1) < (unsigned __int64)(v11 + 1) )
          {
            v10 = qvector_reserve();
            v7 = v10;
            v6 = v11;
          }
          *(_QWORD *)(v7 + 8 * v6) = v9;
          *(_QWORD *)&v11 = v11 + 1;
          if ( (unsigned __int64)v11 > 0x3F )
            break;
        }
        if ( !*v5 )
          break;
        v2 = v5;
      }
      v2 = v14;
    }
    if ( v2 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
    set_segment_translations();
    auto_mark_range();
    sub_121AA0((__int64 *)&s, (__int64)&v10);
    v8 = (char *)s1;
    if ( (_QWORD)v13 )
      v8 = s;
    sub_108D20(1039, v8);
    if ( !s )
      goto LABEL_6;
  }
  else if ( !s )
  {
    goto LABEL_6;
  }
  *(_QWORD *)&v13 = 0;
  qfree();
LABEL_6:
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return 1;
}

