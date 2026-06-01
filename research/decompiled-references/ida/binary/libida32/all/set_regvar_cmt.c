void __fastcall set_regvar_cmt(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // rbp
  void *v4; // r14
  const char *v5; // r12
  __int64 v6; // rax
  __int64 *v10; // rdi

  v10 = *(__int64 **)(qword_2CA1698 + 1480);
  if ( !a1 )
  {
    nullsub_1533();
    return;
  }
  if ( *(char *)(a1 + 9) >= 0 )
  {
    v3 = a2;
    if ( a2 )
    {
      v4 = *(void **)(a2 + 24);
      v5 = a3;
      if ( v4 )
      {
        if ( !a3 )
        {
          qfree(*(void **)(a2 + 24));
          goto LABEL_9;
        }
        if ( !strcmp(*(const char **)(a2 + 24), a3) )
          return;
        qfree(v4);
LABEL_8:
        if ( *v5 )
        {
          v6 = qstrdup(v5);
          goto LABEL_10;
        }
LABEL_9:
        v6 = 0;
LABEL_10:
        *(_QWORD *)(v3 + 24) = v6;
        sub_656810(v10, a1, 1);
        return;
      }
      if ( a3 )
      {
        qfree(nullptr);
        goto LABEL_8;
      }
    }
  }
}

