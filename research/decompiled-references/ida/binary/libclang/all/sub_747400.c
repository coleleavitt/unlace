__int64 __fastcall sub_747400(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  const char *v6; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v5 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v5 = sub_C4A760(a1);
  if ( v5 == 1 || v5 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::nonallocating");
    if ( *(_QWORD *)(a1 + 40) )
    {
      sub_5FF0F0(a2, "(");
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_5FF0F0(a2, ")");
    }
    v6 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((nonallocating");
    if ( *(_QWORD *)(a1 + 40) )
    {
      sub_5FF0F0(a2, "(");
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
      sub_5FF0F0(a2, &byte_3B9466E);
      sub_5FF0F0(a2, ")");
    }
    v6 = "))";
  }
  return sub_5FF0F0(a2, v6);
}

