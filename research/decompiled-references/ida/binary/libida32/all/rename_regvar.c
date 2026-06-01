void __fastcall rename_regvar(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // rbp
  const char *v4; // r13
  void *v5; // r14
  __int64 v6; // rax
  __int64 *v10; // rdi

  v10 = *(__int64 **)(qword_2CA1698 + 1480);
  if ( !a1 )
  {
    nullsub_1516();
    return;
  }
  if ( *(char *)(a1 + 9) >= 0 )
  {
    v3 = a2;
    if ( a2 )
    {
      v4 = a3;
      if ( a3 )
      {
        v5 = *(void **)(a2 + 16);
        if ( strcmp(a3, (const char *)v5) )
        {
          if ( !strcmp(v4, *(const char **)(v3 + 8)) )
          {
LABEL_12:
            qfree(v5);
            *(_QWORD *)(v3 + 16) = qstrdup(v4);
            sub_656810(v10, a1, 1);
            return;
          }
          v6 = sub_6570B0(v10, a1, *(_DWORD *)v3, *(_DWORD *)(v3 + 4), nullptr, v4);
          if ( (!v6 || strcmp(*(const char **)(v6 + 16), v4))
            && (unsigned __int8)is_uname(v4)
            && !sub_4BD270((__int64)v10, a1, (__int64)v4, 1, *(_DWORD *)v3, *(_DWORD *)(v3 + 4)) )
          {
            v5 = *(void **)(v3 + 16);
            goto LABEL_12;
          }
        }
      }
    }
  }
}

