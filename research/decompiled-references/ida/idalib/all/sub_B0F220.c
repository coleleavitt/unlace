__int64 __fastcall sub_B0F220(__int64 a1, __int64 a2)
{
  int v3; // eax
  int *v4; // rbp
  int *v5; // r13
  __int64 v6; // rsi
  const char *v7; // rsi
  int *v8; // rbp
  int *v9; // r12
  __int64 v10; // rsi
  int *v12; // rbp
  int *v13; // r13
  __int64 v14; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v3 == 1 )
  {
    sub_995540(a2, "[[clang::callback");
    sub_995540(a2, &byte_22F0C30);
    v12 = *(int **)(a1 + 48);
    v13 = &v12[*(unsigned int *)(a1 + 40)];
    if ( v12 != v13 )
    {
      sub_995540(a2, "(");
      while ( 1 )
      {
        v14 = *v12++;
        sub_227B930(a2, v14);
        if ( v13 == v12 )
          break;
        sub_995540(a2, ", ");
      }
      goto LABEL_15;
    }
LABEL_24:
    sub_995540(a2, &byte_22F0C30);
    goto LABEL_16;
  }
  if ( v3 )
  {
    sub_995540(a2, "[[clang::callback");
    sub_995540(a2, &byte_22F0C30);
    v8 = *(int **)(a1 + 48);
    v9 = &v8[*(unsigned int *)(a1 + 40)];
    if ( v8 != v9 )
    {
      sub_995540(a2, "(");
      while ( 1 )
      {
        v10 = *v8++;
        sub_227B930(a2, v10);
        if ( v9 == v8 )
          break;
        sub_995540(a2, ", ");
      }
LABEL_15:
      sub_995540(a2, &byte_22F0C30);
      sub_995540(a2, ")");
LABEL_16:
      v7 = "]]";
      return sub_995540(a2, v7);
    }
    goto LABEL_24;
  }
  sub_995540(a2, "__attribute__((callback");
  sub_995540(a2, &byte_22F0C30);
  v4 = *(int **)(a1 + 48);
  v5 = &v4[*(unsigned int *)(a1 + 40)];
  if ( v4 == v5 )
  {
    sub_995540(a2, &byte_22F0C30);
  }
  else
  {
    sub_995540(a2, "(");
    while ( 1 )
    {
      v6 = *v4++;
      sub_227B930(a2, v6);
      if ( v5 == v4 )
        break;
      sub_995540(a2, ", ");
    }
    sub_995540(a2, &byte_22F0C30);
    sub_995540(a2, ")");
  }
  v7 = "))";
  return sub_995540(a2, v7);
}
