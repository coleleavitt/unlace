__int64 __fastcall sub_752890(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  bool v4; // cc
  const char *v5; // rsi
  unsigned int v7; // eax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
  {
    v7 = sub_C4A760(a1);
    v4 = v7 <= 2;
    if ( v7 != 2 )
      goto LABEL_3;
LABEL_7:
    sub_5FF0F0(a2, "__attribute__((riscv_vector_cc");
    return sub_5FF0F0(a2, "))");
  }
  v3 = *(_BYTE *)(a1 + 30) >> 4;
  v4 = v3 <= 2;
  if ( v3 == 2 )
    goto LABEL_7;
LABEL_3:
  v5 = "[[clang::riscv_vector_cc";
  if ( v4 )
    v5 = "[[riscv::vector_cc";
  sub_5FF0F0(a2, v5);
  return sub_5FF0F0(a2, "]]");
}

