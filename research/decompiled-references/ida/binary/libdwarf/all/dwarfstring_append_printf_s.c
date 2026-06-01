__int64 __fastcall dwarfstring_append_printf_s(__int64 a1, char *a2, const char *a3)
{
  size_t v4; // r13
  char v5; // al
  __int64 v6; // rbx
  char v7; // al
  const char *v8; // r14
  unsigned __int64 v9; // rbx
  char v10; // dl
  char *v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 i; // r14
  __int64 result; // rax
  __int64 v15; // [rsp+0h] [rbp-58h]
  char *v16; // [rsp+8h] [rbp-50h]
  char *endptr[9]; // [rsp+10h] [rbp-48h] BYREF

  endptr[1] = (char *)__readfsqword(0x28u);
  endptr[0] = nullptr;
  if ( !a3 )
    goto LABEL_22;
  v4 = strlen(a3);
  if ( !a2 )
    goto LABEL_22;
  v5 = *a2;
  if ( !*a2 || (v6 = 0, v5 == 37) )
  {
    v6 = 0;
  }
  else
  {
    do
      v7 = a2[++v6];
    while ( v7 && v7 != 37 );
    dwarfstring_append_length();
    v5 = a2[v6];
  }
  if ( v5 != 37 || (v8 = &a2[v6 + 1], (*v8 & 0xDF) == 0) )
  {
LABEL_22:
    dwarfstring_append_length();
    return 0;
  }
  v15 = 0;
  if ( *v8 == 45 )
  {
    v15 = 1;
    v8 = &a2[v6 + 2];
  }
  v9 = strtol(v8, endptr, 10);
  v10 = *endptr[0];
  v11 = (char *)(endptr[0] - a2);
  if ( endptr[0] == v8 )
  {
    if ( v10 == 115 )
    {
      v16 = v11 + 1;
      if ( !v15 )
        goto LABEL_19;
      goto LABEL_29;
    }
LABEL_26:
    dwarfstring_append_length();
    return 0;
  }
  if ( v10 != 115 )
    goto LABEL_26;
  v16 = v11 + 1;
  if ( v9 - 1 >= v4 )
  {
    if ( v15 )
    {
      dwarfstring_append_length();
      if ( v9 )
        sub_57A60(a1, v9 - v4);
      goto LABEL_20;
    }
    if ( !v9 )
    {
LABEL_19:
      if ( (unsigned int)dwarfstring_append_length() )
        goto LABEL_20;
      return 0;
    }
    if ( v9 >= v4 )
    {
LABEL_16:
      v12 = v9 - v4;
      if ( v12 )
      {
        for ( i = 0; i != v12; ++i )
          dwarfstring_append_length();
      }
      goto LABEL_19;
    }
  }
  else if ( v9 >= v4 )
  {
    goto LABEL_16;
  }
LABEL_29:
  dwarfstring_append_length();
LABEL_20:
  result = 1;
  if ( v16[(_QWORD)a2] )
  {
    strlen(&v16[(_QWORD)a2]);
    return dwarfstring_append_length();
  }
  return result;
}

