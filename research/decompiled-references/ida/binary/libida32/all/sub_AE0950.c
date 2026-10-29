__int64 __fastcall sub_AE0950(__int64 a1, __int64 a2)
{
  int v3; // eax
  int *v4; // rbp
  int *v5; // r12
  int v6; // esi
  const char *v7; // rsi
  int *v8; // rbp
  int *v9; // r12
  int v10; // esi
  int *v12; // rbp
  int *v13; // r12
  int v14; // esi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v3 == 1 )
  {
    sub_971800(a2, "[[gnu::nonnull");
    sub_971800(a2, &byte_22CD811);
    v12 = *(int **)(a1 + 48);
    v13 = &v12[*(unsigned int *)(a1 + 40)];
    if ( v12 != v13 )
    {
      sub_971800(a2, "(");
      while ( 1 )
      {
        v14 = *v12++;
        sub_2257BD0(a2, v14 & 0x3FFFFFFF);
        if ( v13 == v12 )
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
    sub_971800(a2, "[[gnu::nonnull");
    sub_971800(a2, &byte_22CD811);
    v8 = *(int **)(a1 + 48);
    v9 = &v8[*(unsigned int *)(a1 + 40)];
    if ( v8 != v9 )
    {
      sub_971800(a2, "(");
      while ( 1 )
      {
        v10 = *v8++;
        sub_2257BD0(a2, v10 & 0x3FFFFFFF);
        if ( v9 == v8 )
          break;
        sub_971800(a2, ", ");
      }
LABEL_15:
      sub_971800(a2, &byte_22CD811);
      sub_971800(a2, ")");
LABEL_16:
      v7 = "]]";
      return sub_971800(a2, v7);
    }
    goto LABEL_24;
  }
  sub_971800(a2, "__attribute__((nonnull");
  sub_971800(a2, &byte_22CD811);
  v4 = *(int **)(a1 + 48);
  v5 = &v4[*(unsigned int *)(a1 + 40)];
  if ( v4 == v5 )
  {
    sub_971800(a2, &byte_22CD811);
  }
  else
  {
    sub_971800(a2, "(");
    while ( 1 )
    {
      v6 = *v4++;
      sub_2257BD0(a2, v6 & 0x3FFFFFFF);
      if ( v5 == v4 )
        break;
      sub_971800(a2, ", ");
    }
    sub_971800(a2, &byte_22CD811);
    sub_971800(a2, ")");
  }
  v7 = "))";
  return sub_971800(a2, v7);
}

