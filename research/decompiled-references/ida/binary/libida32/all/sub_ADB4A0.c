__int64 __fastcall sub_ADB4A0(__int64 a1, __int64 a2)
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
    case 1:
      v4 = "[[riscv::vector_cc";
      goto LABEL_5;
    case 2:
      sub_971800(a2, "__attribute__((riscv_vector_cc");
      result = sub_971800(a2, "))");
      break;
    case 3:
    case 4:
      v4 = "[[clang::riscv_vector_cc";
LABEL_5:
      sub_971800(a2, v4);
      result = sub_971800(a2, "]]");
      break;
  }
  return result;
}

