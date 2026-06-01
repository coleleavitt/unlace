__int64 __fastcall sub_746A90(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  const char *v4; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
  {
    v3 = sub_C4A760(a1);
    if ( v3 <= 4 )
      goto LABEL_3;
LABEL_8:
    sub_5FF0F0(a2, "__declspec(safebuffers");
    return sub_5FF0F0(a2, ")");
  }
  v3 = *(_BYTE *)(a1 + 30) >> 4;
  if ( v3 > 4 )
    goto LABEL_8;
LABEL_3:
  if ( v3 > 2 )
  {
    v4 = "[[gnu::no_stack_protector";
    goto LABEL_5;
  }
  v4 = "[[clang::no_stack_protector";
  if ( v3 )
  {
LABEL_5:
    sub_5FF0F0(a2, v4);
    return sub_5FF0F0(a2, "]]");
  }
  sub_5FF0F0(a2, "__attribute__((no_stack_protector");
  return sub_5FF0F0(a2, "))");
}

