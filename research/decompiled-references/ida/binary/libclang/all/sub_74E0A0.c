__int64 __fastcall sub_74E0A0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  bool v4; // cc
  const char *v6; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
  {
    v3 = *(_BYTE *)(a1 + 30) >> 4;
    v4 = v3 <= 2;
    if ( v3 != 2 )
      goto LABEL_3;
LABEL_9:
    sub_5FF0F0(a2, "__attribute__((opencl_private");
    return sub_5FF0F0(a2, "))");
  }
  v3 = sub_C4A760(a1);
  v4 = v3 <= 2;
  if ( v3 == 2 )
    goto LABEL_9;
LABEL_3:
  if ( v4 )
  {
    v6 = "__private";
    if ( v3 )
      v6 = "private";
    sub_5FF0F0(a2, v6);
    return sub_5FF0F0(a2, &byte_3B9466E);
  }
  else
  {
    sub_5FF0F0(a2, "[[clang::opencl_private");
    return sub_5FF0F0(a2, "]]");
  }
}

