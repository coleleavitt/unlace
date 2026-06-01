void __fastcall rename_regvar(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // rbp
  const char *v4; // r13
  void *v5; // r14
  __int64 v6; // rax
  __int64 *v10; // rdi

  v10 = *(__int64 **)(qword_2CCB598 + 1672);
  if ( !a1 )
  {
    nullsub_1537();
    return;
  }
  if ( *(char *)(a1 + 17) >= 0 )
  {
    v3 = a2;
    if ( a2 )
    {
      v4 = a3;
      if ( a3 )
      {
        v5 = *(void **)(a2 + 24);
        if ( strcmp(a3, (const char *)v5) )
        {
          if ( !strcmp(v4, *(const char **)(v3 + 16)) )
          {
LABEL_12:
            qfree(v5);
            *(_QWORD *)(v3 + 24) = qstrdup(v4);
            sub_674600(v10, a1, 1);
            return;
          }
          v6 = sub_674F40((char **)v10, a1, *(_QWORD *)v3, *(_QWORD *)(v3 + 8), nullptr, v4);
          if ( (!v6 || strcmp(*(const char **)(v6 + 24), v4))
            && (unsigned __int8)is_uname(v4)
            && !sub_4D42D0((__int64)v10, a1, (__int64)v4, 1, *(_QWORD *)v3, *(_QWORD *)(v3 + 8)) )
          {
            v5 = *(void **)(v3 + 24);
            goto LABEL_12;
          }
        }
      }
    }
  }
}
