__int64 __fastcall sub_3CA150(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  bool v13; // zf
  const char *v14; // rdx

  v5 = (int)a4;
  v6 = (int)a3;
  sub_664C0(a2, (__int64)"edge: { sourcename: \"%d\" targetname: \"%d\" ", a3, a4);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = *(_QWORD *)(v7 + 8 * v6);
  if ( *(int *)(v8 + 8) <= 69 )
  {
    v9 = *(_QWORD *)(v7 + 8 * v5);
    v10 = *(_QWORD *)(v8 + 32);
    v11 = *(_QWORD *)(v8 + 40);
    if ( *(_QWORD *)(v8 + 24) == v9 )
    {
      if ( v9 != v10 )
      {
        v13 = v9 == v11;
        v14 = "z";
        if ( !v13 )
          v14 = "x";
        goto LABEL_9;
      }
    }
    else if ( v9 != v10 )
    {
      if ( v9 != v11 )
        goto LABEL_5;
      v14 = "z";
LABEL_9:
      sub_664C0(a2, (__int64)"label: \"%s\" ", v14);
      goto LABEL_5;
    }
    v13 = v9 == v11;
    v14 = "z";
    if ( !v13 )
      v14 = "y";
    goto LABEL_9;
  }
LABEL_5:
  sub_664C0(a2, (__int64)"}\n");
  return 1;
}
