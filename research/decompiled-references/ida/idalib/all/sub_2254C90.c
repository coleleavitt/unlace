bool __fastcall sub_2254C90(char *a1, size_t a2, char *a3, size_t a4, char a5, size_t *a6, char *a7, char a8)
{
  bool result; // al
  char *v12; // rbp
  char v13; // r13
  char v14; // r12
  char *v15; // rsi
  char *v16; // rcx
  char *v17; // r11
  char v18; // r8
  char v19; // bp
  char *v20; // r8
  char v21; // al
  char *v22; // rdx
  char v23; // r10

  *a6 = 0;
  if ( a5 )
  {
    if ( a4 > a2 || a4 && memcmp(a1, a3, a4) )
      return 0;
    *a6 = a4;
    return a5;
  }
  result = 1;
  if ( !a4 )
    return result;
  v12 = a3;
  v13 = *a7;
  v14 = *a3;
  v15 = &a1[a2];
  v16 = &a3[a4];
  v17 = a1;
  while ( 2 )
  {
    if ( v15 != v17 )
    {
      while ( 1 )
      {
        v20 = v17 + 1;
        v21 = *v17;
        if ( *v17 == 32 || v21 == 95 )
        {
          *a7 = v21;
          if ( v15 == v20 )
          {
            v17 = v15;
            break;
          }
        }
        else
        {
          if ( v21 != 45 )
          {
            *a7 = v21;
            break;
          }
          if ( (unsigned __int8)((*a7 & 0xDF) - 65) > 0x19u && (unsigned __int8)(*a7 - 48) > 9u
            || v15 == v20
            || (unsigned __int8)((*v20 & 0xDF) - 65) > 0x19u && (unsigned __int8)(*v20 - 48) > 9u )
          {
            *a7 = 45;
            break;
          }
          *a7 = 45;
        }
        ++v17;
      }
    }
    if ( v12 == v16 )
      goto LABEL_43;
    while ( 1 )
    {
      v22 = v12 + 1;
      v23 = *v12;
      result = v23 == 32 || v23 == 95;
      if ( result )
      {
        if ( v22 == v16 )
          goto LABEL_43;
        goto LABEL_30;
      }
      if ( v23 != 45 || (unsigned __int8)((v14 & 0xDF) - 65) > 0x19u && (unsigned __int8)(v14 - 48) > 9u )
        goto LABEL_13;
      if ( v22 == v16 )
        break;
      if ( (unsigned __int8)((*v22 & 0xDF) - 65) > 0x19u && (unsigned __int8)(*v22 - 48) > 9u )
        goto LABEL_13;
LABEL_30:
      v14 = *v12++;
    }
    if ( a8 )
    {
LABEL_43:
      *a6 = v17 - a1;
      return 1;
    }
LABEL_13:
    if ( v12 == v16 )
      goto LABEL_43;
    if ( v15 != v17 )
    {
      v18 = v23 - 32;
      v19 = *v17;
      if ( (unsigned __int8)(v23 - 97) >= 0x1Au )
        v18 = v23;
      if ( (unsigned __int8)(v19 - 97) <= 0x19u )
      {
        if ( v19 - 32 == v18 )
          goto LABEL_19;
      }
      else if ( v19 == v18 )
      {
LABEL_19:
        ++v17;
        v12 = v22;
        v14 = v23;
        continue;
      }
    }
    break;
  }
  *a6 = v17 - a1;
  *a7 = v13;
  return result;
}
