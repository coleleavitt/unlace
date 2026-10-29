__int64 __fastcall sub_B95EB0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 *v7; // r14
  char v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 i; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx

  v1 = sub_B8C330(a1);
  v6 = sub_B94670(a1 + 64, (v1 + 18264) | 6, v2, v3, v4, v5);
  v7 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v8 = v6;
    v9 = *(_QWORD *)(a1 + 8) & 7LL;
    if ( *(char *)(a1 + 29) < 0 )
    {
      v10 = 0;
      if ( v9 )
        v10 = sub_B8C660(a1);
    }
    else if ( v9 )
    {
      v10 = *(_QWORD *)(a1 - 8);
    }
    else
    {
      v10 = 0;
    }
    v11 = (__int64)v7;
    if ( (v8 & 4) != 0 )
      v11 = *v7;
    for ( i = v11; ; i = v11 )
    {
      v14 = *(_QWORD *)(v11 + 8) & 7LL;
      if ( *(char *)(v11 + 29) >= 0 )
        break;
      v13 = 0;
      if ( !v14 )
        goto LABEL_10;
      if ( v10 == sub_B8C660(i) )
        return v11;
LABEL_11:
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
    }
    if ( v14 )
      v13 = *(_QWORD *)(v11 - 8);
    else
      v13 = 0;
LABEL_10:
    if ( v10 == v13 )
      return v11;
    goto LABEL_11;
  }
  return 0;
}
