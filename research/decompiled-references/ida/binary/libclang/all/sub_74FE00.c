__int64 __fastcall sub_74FE00(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  bool v4; // cc
  const char *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
  {
    v3 = sub_C4A760(a1);
    v4 = v3 <= 3;
    if ( v3 != 3 )
      goto LABEL_3;
LABEL_8:
    v9 = "__attribute__((pass_dynamic_object_size";
    goto LABEL_10;
  }
  v3 = *(_BYTE *)(a1 + 30) >> 4;
  v4 = v3 <= 3;
  if ( v3 == 3 )
    goto LABEL_8;
LABEL_3:
  if ( !v4 )
  {
    v5 = "[[clang::pass_dynamic_object_size";
    goto LABEL_5;
  }
  v5 = "[[clang::pass_object_size";
  if ( v3 )
  {
LABEL_5:
    sub_5FF0F0(a2, v5);
    sub_5FF0F0(a2, "(");
    v6 = sub_5FF0F0(a2, &byte_3B9466E);
    v7 = sub_26238C0(v6, *(int *)(a1 + 36));
    sub_5FF0F0(v7, &byte_3B9466E);
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "]]");
  }
  v9 = "__attribute__((pass_object_size";
LABEL_10:
  sub_5FF0F0(a2, v9);
  sub_5FF0F0(a2, "(");
  v10 = sub_5FF0F0(a2, &byte_3B9466E);
  v11 = sub_26238C0(v10, *(int *)(a1 + 36));
  sub_5FF0F0(v11, &byte_3B9466E);
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "))");
}

