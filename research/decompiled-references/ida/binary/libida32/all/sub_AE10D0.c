__int64 __fastcall sub_AE10D0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  const char *v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v3 == 1 )
  {
    sub_971800(a2, "[[clang::no_builtin");
    sub_971800(a2, &byte_22CD811);
    v14 = *(_QWORD *)(a1 + 48);
    v15 = v14 + 16LL * *(unsigned int *)(a1 + 40);
    if ( v14 != v15 )
    {
      sub_971800(a2, "(");
      while ( 1 )
      {
        v14 += 16;
        v16 = sub_971800(a2, "\"");
        v17 = sub_9717A0(v16, *(const void **)(v14 - 16), *(_QWORD *)(v14 - 8));
        sub_971800(v17, "\"");
        if ( v15 == v14 )
          break;
        sub_971800(a2, ", ");
      }
      goto LABEL_15;
    }
LABEL_24:
    sub_971800(a2, &byte_22CD811);
    goto LABEL_16;
  }
  if ( v3 )
  {
    sub_971800(a2, "[[clang::no_builtin");
    sub_971800(a2, &byte_22CD811);
    v9 = *(_QWORD *)(a1 + 48);
    v10 = v9 + 16LL * *(unsigned int *)(a1 + 40);
    if ( v9 != v10 )
    {
      sub_971800(a2, "(");
      while ( 1 )
      {
        v9 += 16;
        v11 = sub_971800(a2, "\"");
        v12 = sub_9717A0(v11, *(const void **)(v9 - 16), *(_QWORD *)(v9 - 8));
        sub_971800(v12, "\"");
        if ( v10 == v9 )
          break;
        sub_971800(a2, ", ");
      }
LABEL_15:
      sub_971800(a2, &byte_22CD811);
      sub_971800(a2, ")");
LABEL_16:
      v8 = "]]";
      return sub_971800(a2, v8);
    }
    goto LABEL_24;
  }
  sub_971800(a2, "__attribute__((no_builtin");
  sub_971800(a2, &byte_22CD811);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = v4 + 16LL * *(unsigned int *)(a1 + 40);
  if ( v4 == v5 )
  {
    sub_971800(a2, &byte_22CD811);
  }
  else
  {
    sub_971800(a2, "(");
    while ( 1 )
    {
      v4 += 16;
      v6 = sub_971800(a2, "\"");
      v7 = sub_9717A0(v6, *(const void **)(v4 - 16), *(_QWORD *)(v4 - 8));
      sub_971800(v7, "\"");
      if ( v5 == v4 )
        break;
      sub_971800(a2, ", ");
    }
    sub_971800(a2, &byte_22CD811);
    sub_971800(a2, ")");
  }
  v8 = "))";
  return sub_971800(a2, v8);
}

