__int64 __fastcall sub_ADEC00(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v3 )
  {
    case 0:
      sub_971800(a2, "__noinline__");
      return sub_971800(a2, &byte_22CD811);
    case 1:
      sub_971800(a2, "__attribute__((noinline");
      return sub_971800(a2, "))");
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
      sub_971800(a2, v4);
      result = sub_971800(a2, "]]");
      break;
    case 8:
      sub_971800(a2, "__declspec(noinline");
      result = sub_971800(a2, ")");
      break;
  }
  return result;
}

