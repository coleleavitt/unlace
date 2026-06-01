__int64 __fastcall sub_732330(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // eax
  const char *v6; // rsi
  const char *v7; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v5 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v5 = sub_C4A760(a1);
  if ( v5 > 1 )
  {
    v6 = "[[clang::assume";
    goto LABEL_7;
  }
  v6 = "[[assume";
  if ( !v5 )
  {
LABEL_7:
    sub_5FF0F0(a2, v6);
    sub_5FF0F0(a2, "(");
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
    sub_5FF0F0(a2, &byte_3B9466E);
    sub_5FF0F0(a2, ")");
    v7 = "]]";
    return sub_5FF0F0(a2, v7);
  }
  sub_5FF0F0(a2, "__attribute__((assume");
  sub_5FF0F0(a2, "(");
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_5FF0F0(a2, ")");
  v7 = "))";
  return sub_5FF0F0(a2, v7);
}

