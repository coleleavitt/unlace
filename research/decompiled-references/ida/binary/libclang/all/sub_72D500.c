__int64 __fastcall sub_72D500(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // al
  int v6; // eax
  const char *v7; // rsi
  _BYTE v9[41]; // [rsp+Fh] [rbp-29h] BYREF

  v5 = *(_BYTE *)(a1 + 30);
  v9[0] = 1;
  if ( (~v5 & 0xF0) != 0 )
    v6 = v5 >> 4;
  else
    v6 = sub_C4A760(a1);
  if ( v6 == 1 || v6 == 2 )
  {
    sub_5FF0F0(a2, "[[gnu::assume_aligned");
    v9[0] = 0;
    sub_5FF0F0(a2, "(");
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
    sub_5FF0F0(a2, &byte_3B9466E);
    if ( !*(_QWORD *)(a1 + 48)
      || (sub_722380(a2, v9),
          sub_5FF0F0(a2, &byte_3B9466E),
          sub_AE6C50(*(_QWORD *)(a1 + 48), a2, 0, a3, 0, 0, "\n", 1u),
          sub_5FF0F0(a2, &byte_3B9466E),
          !v9[0]) )
    {
      sub_5FF0F0(a2, ")");
    }
    v7 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((assume_aligned");
    v9[0] = 0;
    sub_5FF0F0(a2, "(");
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
    sub_5FF0F0(a2, &byte_3B9466E);
    if ( !*(_QWORD *)(a1 + 48)
      || (sub_722380(a2, v9),
          sub_5FF0F0(a2, &byte_3B9466E),
          sub_AE6C50(*(_QWORD *)(a1 + 48), a2, 0, a3, 0, 0, "\n", 1u),
          sub_5FF0F0(a2, &byte_3B9466E),
          !v9[0]) )
    {
      sub_5FF0F0(a2, ")");
    }
    v7 = "))";
  }
  return sub_5FF0F0(a2, v7);
}

