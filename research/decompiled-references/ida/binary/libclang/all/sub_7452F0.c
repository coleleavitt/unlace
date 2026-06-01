__int64 __fastcall sub_7452F0(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi
  __int64 result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  switch ( v3 )
  {
    case 0:
      sub_5FF0F0(a2, "__noinline__");
      return sub_5FF0F0(a2, &byte_3B9466E);
    case 1:
      sub_5FF0F0(a2, "__attribute__((noinline");
      return sub_5FF0F0(a2, "))");
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
      sub_5FF0F0(a2, v4);
      result = sub_5FF0F0(a2, "]]");
      break;
    case 8:
      sub_5FF0F0(a2, "__declspec(noinline");
      result = sub_5FF0F0(a2, ")");
      break;
  }
  return result;
}

