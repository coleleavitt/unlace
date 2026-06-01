__int64 __fastcall sub_756760(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // al
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  const char *v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[41]; // [rsp+Fh] [rbp-29h] BYREF

  v5 = *(_BYTE *)(a1 + 30);
  v13[0] = 1;
  if ( (~v5 & 0xF0) != 0 )
    v6 = v5 >> 4;
  else
    v6 = sub_C4A760(a1);
  if ( v6 == 1 || v6 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::sized_by_or_null");
    v13[0] = 0;
    sub_5FF0F0(a2, "(");
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_722380(a2, v13);
    v7 = sub_5FF0F0(a2, &byte_3B9466E);
    v8 = sub_26238C0(v7, *(int *)(a1 + 48));
    sub_5FF0F0(v8, &byte_3B9466E);
    if ( !v13[0] )
      sub_5FF0F0(a2, ")");
    v9 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((sized_by_or_null");
    v13[0] = 0;
    sub_5FF0F0(a2, "(");
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_722380(a2, v13);
    v11 = sub_5FF0F0(a2, &byte_3B9466E);
    v12 = sub_26238C0(v11, *(int *)(a1 + 48));
    sub_5FF0F0(v12, &byte_3B9466E);
    if ( !v13[0] )
      sub_5FF0F0(a2, ")");
    v9 = "))";
  }
  return sub_5FF0F0(a2, v9);
}

