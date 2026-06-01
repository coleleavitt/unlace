bool __fastcall sub_10B5380(__int64 a1, unsigned __int8 (__fastcall *a2)(_QWORD))
{
  char ****v2; // rbx
  char ****v3; // r12
  char ****v5; // rax
  char ****v6; // rax
  char ***v7; // rbp
  unsigned int v8; // eax
  char ****v10; // rbx
  const char **v11; // rax
  const char *v12; // rbp
  size_t v13; // rax
  size_t v14; // rdx
  size_t v15; // rcx
  size_t v16; // rsi
  unsigned int v17; // eax

  v2 = *(char *****)(a1 + 8);
  v3 = &v2[*(unsigned int *)(a1 + 16)];
  if ( v2 == v3 )
    return v3 != v2;
  v5 = v2 + 1;
  if ( *v2 )
  {
    while ( 1 )
    {
LABEL_8:
      v7 = *v2;
      if ( (unsigned __int8)sub_2195AD0(*v2, 3510) )
      {
        v8 = sub_12A96D0(*v7[6]);
        if ( a2(v8) )
          return v3 != v2;
      }
      if ( *((_BYTE *)*v7 + 44) == 1 )
      {
        v11 = (const char **)v7[6];
        v12 = *v11;
        if ( *v11 )
        {
          v13 = strlen(*v11);
          v14 = v13;
          if ( v13 )
            break;
        }
      }
LABEL_5:
      v6 = v2 + 1;
      if ( v3 == v2 + 1 )
        goto LABEL_32;
      if ( !v2[1] )
      {
        v10 = v2 + 2;
        while ( 1 )
        {
          v6 = v10;
          if ( v3 == v10 )
            break;
          if ( *v10++ )
            goto LABEL_7;
        }
LABEL_32:
        v2 = v6;
        return v3 != v2;
      }
LABEL_7:
      v2 = v6;
    }
    if ( v12[v13 - 1] == 46 )
    {
LABEL_30:
      v16 = 0;
      v12 += v14;
      if ( !v12 )
      {
LABEL_28:
        v17 = sub_12A8FD0(v12, v16);
        if ( a2(v17) )
          return v3 != v2;
        goto LABEL_5;
      }
    }
    else
    {
      if ( v13 == 1 )
        goto LABEL_5;
      v14 = v13 - 2;
      v15 = v13 - 2;
      if ( v12[v13 - 2] != 46 )
      {
        while ( v15 )
        {
          if ( v12[--v15] == 46 )
            goto LABEL_22;
        }
        goto LABEL_5;
      }
LABEL_22:
      if ( v12[v13 - 2] == 46 )
      {
        v12 += v13 - 1;
      }
      else
      {
        while ( v14 )
        {
          if ( v12[v14 - 1] == 46 )
            goto LABEL_30;
          --v14;
        }
      }
    }
    v16 = strlen(v12);
    goto LABEL_28;
  }
  while ( 1 )
  {
    v2 = v5;
    if ( v3 == v5 )
      return v3 != v2;
    if ( *v5++ )
      goto LABEL_8;
  }
}

