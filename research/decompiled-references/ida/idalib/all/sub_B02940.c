__int64 __fastcall sub_B02940(__int64 a1, __int64 a2)
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
      sub_995540(a2, "__noinline__");
      return sub_995540(a2, &byte_22F0C30);
    case 1:
      sub_995540(a2, "__attribute__((noinline");
      return sub_995540(a2, "))");
    case 2:
    case 3:
      v4 = "[[gnu::noinline";
      goto LABEL_5;
    case 4:
    case 5:
      v4 = "[[clang::noinline";
      goto LABEL_5;
    case 6:
    case 7:
      v4 = "[[msvc::noinline";
LABEL_5:
      sub_995540(a2, v4);
      result = sub_995540(a2, "]]");
      break;
    case 8:
      sub_995540(a2, "__declspec(noinline");
      result = sub_995540(a2, ")");
      break;
  }
  return result;
}
