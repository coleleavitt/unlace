unsigned __int64 __fastcall sub_5BC0(__int64 a1, unsigned int a2, __int64 a3, const char *a4, int a5, int a6, int a7)
{
  const char **v10; // r15
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned __int8 v14; // bp
  char v15; // dl
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdi
  int v20; // eax
  int v21; // edx
  __int64 v22; // rdx
  const char *v23; // rsi
  const char **v24; // rbp
  size_t i; // rdx
  const char *v26; // rcx
  __int64 v29; // [rsp+18h] [rbp-450h] BYREF
  _BYTE v30[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v31; // [rsp+428h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v10 = (const char **)&off_12CA0;
  do
  {
    if ( !strcmp(*v10, a4) )
      goto LABEL_20;
    ++v10;
  }
  while ( &`typeinfo for'bad_cv_t != (_UNKNOWN **)v10 );
  if ( !strncmp(a4, "__fu", 4u) && (unsigned __int8)(a4[4] - 48) <= 9u )
  {
    v12 = a4[5];
    v11 = v12;
    if ( v12 <= 0x7F )
    {
      v13 = 5;
      while ( v12 - 48 <= 9 )
      {
        v12 = a4[++v13];
        v11 = v12;
        if ( v12 > 0x7F )
          goto LABEL_11;
      }
      if ( (_BYTE)v11 == 95 && a4[v13 + 1] == 95 )
      {
LABEL_20:
        v17 = a3 + 1;
        goto LABEL_21;
      }
    }
  }
LABEL_11:
  if ( (unsigned __int8)segtype(a3, "__fu", v11) == 2 && (unsigned int)get_mangled_name_type(a4) != 1 )
  {
    v24 = (const char **)off_12C40;
    for ( i = 6; strncmp(a4, *v24, i); i = strlen(*v24) )
    {
      if ( ++v24 == (const char **)algn_12C90 )
      {
        v14 = 1;
        goto LABEL_13;
      }
    }
  }
  v14 = 0;
LABEL_13:
  v15 = *(_BYTE *)(a1 + 56);
  if ( (unsigned int)(a5 + 1) > 1 && a5 != 6 )
  {
    if ( v15 && a7 && a5 != 3 )
    {
      v16 = 0;
LABEL_19:
      add_entry(a3, a3, a4, v16, a6 == 0 ? 9 : 13);
      goto LABEL_20;
    }
    v14 = 0;
    if ( a5 == 3 )
    {
      v26 = a4;
      a4 = v30;
      qsnprintf(v30, 1024, "%s_TC", v26);
    }
    goto LABEL_23;
  }
  if ( !v15 )
  {
LABEL_23:
    v20 = a6 == 0 ? 16 : 8;
    v21 = a7 == 0 ? 4 : 2;
    goto LABEL_24;
  }
  v16 = v14;
  if ( a7 )
    goto LABEL_19;
  v21 = 4;
  v20 = a6 == 0 ? 16 : 8;
LABEL_24:
  v22 = v20 | (unsigned int)v21;
  v23 = a4;
  v17 = a3 + 1;
  BYTE1(v22) |= 0x5Cu;
  set_name(a3, v23, v22);
  if ( v14 )
  {
    auto_mark_range(a3, a3 + 1, 20);
    auto_mark_range(a3, a3 + 1, 30);
  }
LABEL_21:
  v18 = *(_QWORD *)(a1 + 32);
  v29 = v17;
  netnode_supset(v18, a2, &v29, 8, 65);
  return v31 - __readfsqword(0x28u);
}
