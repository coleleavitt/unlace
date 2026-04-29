__int64 __fastcall sub_136A0(__int64 a1, __int64 a2, const char *a3)
{
  const char **v3; // rbx
  const char *v5; // rbp
  char *v6; // rax
  char *v7; // r14
  size_t v8; // rax
  char *v9; // r15
  unsigned int v10; // eax
  const char **v12; // rbx
  const char *v13; // rbp
  char *v14; // rax
  char *v15; // r14
  size_t v16; // rax
  char *v17; // r15
  unsigned int v18; // eax
  const char **v19; // rbx
  const char *v20; // rbp
  char *v21; // rax
  char *v22; // r15
  size_t v23; // rax
  char *v24; // r14
  unsigned int v25; // eax
  const char **v26; // rbx
  const char *v27; // rbp
  char *v28; // rax
  char *v29; // r13
  size_t v30; // rax
  char *v31; // rdx
  unsigned int v32; // eax

  v3 = (const char **)&off_3C7D0;
  do
  {
    v5 = *v3;
    v6 = strstr(a3, *v3);
    v7 = v6;
    if ( v6 )
    {
      v8 = strlen(v6);
      v9 = &v7[v8];
      if ( v7 < &v7[v8] )
      {
        do
        {
          v10 = *(v9 - 1);
          if ( v10 > 0x7F || v10 - 48 > 9 && *(v9 - 1) != 95 )
            break;
          --v9;
        }
        while ( v7 != v9 );
      }
      if ( v9 - v7 == strlen(v5) )
      {
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
        goto LABEL_9;
      }
    }
    ++v3;
  }
  while ( &unk_3C7E0 != (_UNKNOWN *)v3 );
  v12 = (const char **)off_3C7C0;
  do
  {
    v13 = *v12;
    v14 = strstr(a3, *v12);
    v15 = v14;
    if ( v14 )
    {
      v16 = strlen(v14);
      v17 = &v15[v16];
      if ( v15 < &v15[v16] )
      {
        do
        {
          v18 = *(v17 - 1);
          if ( v18 > 0x7F || v18 - 48 > 9 && *(v17 - 1) != 95 )
            break;
          --v17;
        }
        while ( v15 != v17 );
      }
      if ( v17 - v15 == strlen(v13) )
      {
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
        goto LABEL_9;
      }
    }
    ++v12;
  }
  while ( &off_3C7D0 != (_UNKNOWN **)v12 );
  v19 = (const char **)off_3C780;
  do
  {
    v20 = *v19;
    v21 = strstr(a3, *v19);
    v22 = v21;
    if ( v21 )
    {
      v23 = strlen(v21);
      v24 = &v22[v23];
      if ( v22 < &v22[v23] )
      {
        do
        {
          v25 = *(v24 - 1);
          if ( v25 > 0x7F || v25 - 48 > 9 && *(v24 - 1) != 95 )
            break;
          --v24;
        }
        while ( v22 != v24 );
      }
      if ( v24 - v22 == strlen(v20) )
      {
        if ( *(_BYTE *)(a1 + 2216) )
          sub_EC40();
        goto LABEL_9;
      }
    }
    ++v19;
  }
  while ( algn_3C7B8 != (_BYTE *)v19 );
  v26 = (const char **)off_3C760;
  while ( 1 )
  {
    v27 = *v26;
    v28 = strstr(a3, *v26);
    v29 = v28;
    if ( v28 )
    {
      v30 = strlen(v28);
      v31 = &v29[v30];
      if ( v29 < &v29[v30] )
      {
        do
        {
          v32 = *(v31 - 1);
          if ( v32 > 0x7F || v32 - 48 > 9 && *(v31 - 1) != 95 )
            break;
          --v31;
        }
        while ( v29 != v31 );
      }
      if ( v31 - v29 == strlen(v27) )
        break;
    }
    if ( algn_3C778 == (_BYTE *)++v26 )
      return 0;
  }
  if ( *(_BYTE *)(a1 + 2216) )
    sub_EC40();
LABEL_9:
  netnode_supset();
  return 1;
}
