unsigned __int64 __fastcall sub_467300(__int64 a1, __int64 a2)
{
  char *v3; // rax
  const char **v4; // r15
  char *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rbp
  const char *v8; // rsi
  const char *v9; // rdi
  char *v10; // rdi
  const char *v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 16) || (v3 = strrchr(*(const char **)(a2 + 8), 47)) == nullptr )
  {
    if ( !under_debugger )
      interr(2803);
    BUG();
  }
  ptr = nullptr;
  v13 = (__int64)(v3 + 1);
  v16 = 0;
  sub_35A790((char **)&ptr);
  v4 = *(const char ***)a1;
  v5 = (char *)ptr;
  v6 = *(_QWORD *)a1 + 24LL * *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 != v6 )
  {
    v7 = v16;
    do
    {
      if ( v4[1] )
      {
        v8 = *v4;
        v9 = haystack;
        if ( !v7 )
          goto LABEL_8;
      }
      else
      {
        if ( !v7 )
        {
LABEL_14:
          if ( (const char **)v6 != v4 )
          {
            v10 = (char *)*v4;
            if ( *v4 )
            {
              v4[1] = nullptr;
              qfree(v10);
            }
            memmove(v4, v4 + 3, *(_QWORD *)a1 + 24LL * *(_QWORD *)(a1 + 8) - (_QWORD)v4 - 24);
            --*(_QWORD *)(a1 + 8);
            v11 = haystack;
            if ( (_QWORD)v16 )
              v11 = (const char *)ptr;
            sub_466ED0((__int64 *)a2, v13, v11);
            v5 = (char *)ptr;
          }
          break;
        }
        v8 = haystack;
      }
      v9 = v5;
LABEL_8:
      if ( !strcmp(v9, v8) )
        goto LABEL_14;
      v4 += 3;
    }
    while ( (const char **)v6 != v4 );
  }
  if ( v5 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v5);
  }
  return v17 - __readfsqword(0x28u);
}
