__int64 __fastcall sub_1302B30(__int64 a1, char a2, __int64 a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  const char **v9; // rax
  const char *v10; // rbx
  size_t v11; // rax
  size_t v12; // rdx
  size_t v13; // rax
  size_t v14; // [rsp+8h] [rbp-30h]

  if ( (unsigned __int8)(a2 - 8) > 1u || sub_10DCD30(a1, 0xBFu) )
  {
    v4 = 0;
    v5 = 0;
  }
  else
  {
    v4 = 2;
    v5 = 2;
  }
  v6 = sub_10DCD30(a1, 0xAu);
  v7 = v6;
  if ( !v6 )
    return v5;
  v5 = 0;
  if ( (unsigned __int8)sub_21B9810(v6, 3060) )
    return v5;
  if ( (unsigned __int8)sub_21B9810(v7, 3076) )
    return 3;
  v9 = *(const char ***)(v7 + 48);
  v10 = *v9;
  if ( !*v9 )
  {
    if ( j__strlen("g") )
      return sub_111E640(a1, 0xC2Au, v4, a3, 0);
    return 1;
  }
  v11 = j__strlen(*v9);
  if ( v11 != 1 )
  {
    v14 = v11;
    v13 = j__strlen("g");
    v12 = v14;
    if ( v14 != v13 )
      return sub_111E640(a1, 0xC2Au, v4, a3, 0);
    v5 = 1;
    if ( !v14 )
      return v5;
    goto LABEL_12;
  }
  if ( *v10 == 115 || *v10 == 122 )
    return 2;
  v12 = j__strlen("g");
  if ( v12 == 1 )
  {
LABEL_12:
    if ( memcmp(v10, "g", v12) )
      return sub_111E640(a1, 0xC2Au, v4, a3, 0);
    return 1;
  }
  return sub_111E640(a1, 0xC2Au, v4, a3, 0);
}
