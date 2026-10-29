unsigned int *__fastcall sub_5AD4A0(void **a1, int a2, unsigned int a3, char a4)
{
  __int64 *v7; // r12
  unsigned int *v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  __int64 v11; // r12
  unsigned int *v13; // rax

  v7 = *(__int64 **)(switch_dbctx(a2) + 1480);
  if ( !a4 )
  {
    v13 = sub_4EE820((__int64)(v7 + 203), a3);
    v8 = v13;
    if ( v13 )
    {
      if ( *((char *)v13 + 9) >= 0 )
        goto LABEL_16;
      v8 = sub_4EE820((__int64)(v7 + 203), v13[4]);
      if ( v8 )
        goto LABEL_3;
    }
    return nullptr;
  }
  v8 = sub_4EE820((__int64)(v7 + 203), a3);
  if ( !v8 )
    return nullptr;
LABEL_3:
  if ( *((char *)v8 + 9) >= 0 )
  {
LABEL_16:
    sub_59EB00(v7, (__int64)v8);
    sub_656C10(v7, v8);
    sub_622250(v7, v8);
    sub_655F50(v7, v8);
    sub_5ACDD0(v7, (__int64)v8, 1);
    goto LABEL_5;
  }
  sub_5AD260(v7, (__int64)v8);
LABEL_5:
  if ( a1 )
  {
    v9 = *a1;
    if ( *a1 )
    {
      a1[1] = nullptr;
      qfree(v9);
      *a1 = nullptr;
      a1[2] = nullptr;
    }
    v10 = a1[3];
    if ( v10 )
    {
      a1[4] = nullptr;
      qfree(v10);
      a1[3] = nullptr;
      a1[5] = nullptr;
    }
    v11 = qword_2CA1698;
    sub_4ECB80((__int64)a1, (unsigned int *)(*(_QWORD *)(qword_2CA1698 + 1480) + 1624LL), v8, 0);
    sub_4ECB80((__int64)(a1 + 3), (unsigned int *)(*(_QWORD *)(v11 + 1480) + 1624LL), v8, 1);
  }
  return v8;
}

