unsigned __int64 __fastcall sub_133F0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        const char *a4,
        int a5,
        char a6,
        char a7)
{
  const char **v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned __int8 v12; // r8
  char v13; // dl
  __int64 v14; // rcx
  __int64 v15; // rdi
  const char *v17; // rcx
  __int64 v18; // rdx
  const char **v19; // rcx
  size_t i; // rdx
  size_t v21; // rax
  unsigned __int8 v23; // [rsp+10h] [rbp-468h]
  const char **v25; // [rsp+18h] [rbp-460h]
  __int64 v26; // [rsp+28h] [rbp-450h] BYREF
  _BYTE v27[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v28; // [rsp+438h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v9 = (const char **)&off_22B80;
  do
  {
    if ( !strcmp(*v9, a4) )
    {
      v11 = a3 + 1;
      goto LABEL_15;
    }
    ++v9;
  }
  while ( v9 != (const char **)off_22BE8 );
  v11 = a3 + 1;
  if ( (unsigned __int8)segtype(a3, a4, v10) == 2 && (unsigned int)get_mangled_name_type(a4) != 1 )
  {
    v19 = (const char **)off_22B20;
    for ( i = 6; ; i = v21 )
    {
      v25 = v19;
      if ( !strncmp(a4, *v19, i) )
        break;
      if ( v25 + 1 == (const char **)&unk_22B70 )
      {
        v12 = 1;
        goto LABEL_6;
      }
      v21 = strlen(v25[1]);
      v19 = v25 + 1;
    }
  }
  v12 = 0;
LABEL_6:
  v13 = *(_BYTE *)(a1 + 56);
  if ( (unsigned int)(a5 + 1) <= 1 || a5 == 6 )
  {
    if ( a7 )
    {
      v14 = v12;
      if ( v13 )
        goto LABEL_14;
    }
  }
  else
  {
    if ( v13 && a5 != 3 && a7 )
    {
      v14 = 0;
LABEL_14:
      add_entry(a3, a3, a4, v14, a6 == 0 ? 9 : 13);
      goto LABEL_15;
    }
    v12 = 0;
    if ( a5 == 3 )
    {
      v17 = a4;
      a4 = v27;
      qsnprintf(v27, 1024, "%s_TC", v17);
      v12 = 0;
    }
  }
  v23 = v12;
  v18 = (a7 == 0 ? 4 : 2) | (a6 == 0 ? 16 : 8);
  BYTE1(v18) |= 0x5Cu;
  set_name(a3, a4, v18);
  if ( v23 )
  {
    auto_mark_range(a3, a3 + 1, 20);
    auto_mark_range(a3, a3 + 1, 30);
  }
LABEL_15:
  v15 = *(_QWORD *)(a1 + 32);
  v26 = v11;
  netnode_supset(v15, a2, &v26, 8, 65);
  return v28 - __readfsqword(0x28u);
}
