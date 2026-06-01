__int64 __fastcall sub_B09600(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v3 )
  {
    case 0:
      sub_995540(a2, "__attribute__((always_inline");
      result = sub_995540(a2, "))");
      break;
    case 1:
    case 2:
      v4 = "[[gnu::always_inline";
      goto LABEL_5;
    case 3:
    case 4:
      v4 = "[[clang::always_inline";
LABEL_5:
      sub_995540(a2, v4);
      result = sub_995540(a2, "]]");
      break;
    case 5:
      sub_995540(a2, "__forceinline");
      result = sub_995540(a2, &byte_22F0C30);
      break;
  }
  return result;
}
