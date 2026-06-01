__int64 __fastcall sub_B05350(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 v5; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  sub_995540(a2, "__attribute__((swift_error");
  sub_995540(a2, "(");
  v3 = sub_995540(a2, "\"");
  switch ( *(_DWORD *)(a1 + 40) )
  {
    case 0:
      v4 = "none";
      break;
    case 1:
      v4 = "nonnull_error";
      break;
    case 2:
      v4 = "null_result";
      break;
    case 3:
      v4 = "zero_result";
      break;
    case 4:
      v4 = "nonzero_result";
      break;
  }
  v5 = sub_995540(v3, v4);
  sub_995540(v5, "\"");
  sub_995540(a2, ")");
  return sub_995540(a2, "))");
}
