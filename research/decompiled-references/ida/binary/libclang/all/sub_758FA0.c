__int64 __fastcall sub_758FA0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  const char *v5; // rsi
  __int64 v6; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "__attribute__((swift_error");
  sub_5FF0F0(a2, "(");
  v4 = sub_5FF0F0(a2, "\"");
  switch ( *(_DWORD *)(a1 + 36) )
  {
    case 0:
      v5 = "none";
      break;
    case 1:
      v5 = "nonnull_error";
      break;
    case 2:
      v5 = "null_result";
      break;
    case 3:
      v5 = "zero_result";
      break;
    case 4:
      v5 = "nonzero_result";
      break;
  }
  v6 = sub_5FF0F0(v4, v5);
  sub_5FF0F0(v6, "\"");
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "))");
}

