__int64 __fastcall sub_759890(__int64 a1, __int64 a2)
{
  int v4; // eax
  const char *v5; // rsi
  const char *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v4 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v4 = sub_C4A760(a1);
  v5 = "__attribute__((swift_newtype";
  if ( v4 )
    v5 = "__attribute__((swift_wrapper";
  sub_5FF0F0(a2, v5);
  sub_5FF0F0(a2, "(");
  v6 = "struct";
  v7 = sub_5FF0F0(a2, "\"");
  if ( *(_DWORD *)(a1 + 36) )
    v6 = "enum";
  v8 = sub_5FF0F0(v7, v6);
  sub_5FF0F0(v8, "\"");
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "))");
}

