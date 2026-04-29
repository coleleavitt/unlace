void *__fastcall sub_1EFD40(__int64 a1, int a2)
{
  __int64 v2; // r13
  __int64 *v4; // r14
  _QWORD *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *result; // rax
  __int64 v10; // r15
  const char *v11; // rdx
  char *s2; // [rsp+0h] [rbp-48h]
  char *s1; // [rsp+8h] [rbp-40h]

  v2 = 104LL * a2;
  v4 = *(__int64 **)(a1 + 872);
  v5 = (_QWORD *)(v2 + *(_QWORD *)(a1 + 432));
  if ( v4 )
  {
    v6 = (__int64 *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v6 )
      goto LABEL_11;
    if ( (*(_BYTE *)v6 & 2) == 0 )
    {
      v10 = v5[5];
      do
      {
        if ( v6[4] )
        {
          v11 = (const char *)v6[3];
          if ( !v10 )
          {
            if ( !*v11 )
              goto LABEL_10;
LABEL_16:
            v6 = (__int64 *)v6[1];
            continue;
          }
        }
        else
        {
          if ( !v10 )
            goto LABEL_10;
          v11 = ::s1;
        }
        s1 = (char *)v11;
        s2 = (char *)v5[4];
        if ( strcmp(s2, v11) < 0 )
          goto LABEL_16;
        if ( strcmp(s1, s2) >= 0 )
        {
LABEL_10:
          if ( v6 != v4 )
          {
LABEL_11:
            sub_1EF9A0((unsigned __int64 **)(a1 + 872), v6);
            v5 = (_QWORD *)(v2 + *(_QWORD *)(a1 + 432));
          }
          break;
        }
        v6 = (__int64 *)v6[2];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
    }
  }
  clear_tinfo_t(v5 + 10);
  v7 = v5[7];
  if ( v7 )
  {
    v5[8] = 0;
    qfree(v7);
  }
  v8 = v5[4];
  if ( v8 )
  {
    v5[5] = 0;
    qfree(v8);
  }
  cleanup_argloc(v5);
  result = memmove(v5, v5 + 13, *(_QWORD *)(a1 + 432) + 104LL * *(_QWORD *)(a1 + 440) - (_QWORD)v5 - 104);
  --*(_QWORD *)(a1 + 440);
  return result;
}
