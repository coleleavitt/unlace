unsigned __int64 __fastcall sub_9AB0(__int64 a1, char a2)
{
  unsigned __int8 v2; // r15
  int v3; // r14d
  char **v4; // rbx
  char *v5; // r12
  char **v6; // rbx
  char *v7; // r12
  unsigned int v8; // r12d
  char **v9; // rbx
  char *v10; // rdx
  char *v11; // rsi
  char haystack; // [rsp+18h] [rbp-68h]
  char *haystacka; // [rsp+18h] [rbp-68h]
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  __int16 v17; // [rsp+40h] [rbp-40h]
  unsigned __int64 v18; // [rsp+48h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( !a2 && (unsigned __int8)sub_85E0(a1) )
    goto LABEL_24;
  v2 = 1;
  v3 = 0;
  haystack = 0;
  v4 = off_2E048;
  do
  {
    v5 = *v4;
    if ( get_name_ea(-1, *v4) != -1 )
      goto LABEL_3;
    if ( get_name_ea(-1, v5 + 1) != -1 )
    {
      v2 = 0;
LABEL_3:
      haystack = 1;
      v3 |= *((_DWORD *)v4 + 4);
    }
    v4 += 4;
  }
  while ( v4 != off_2E468 );
  v6 = &off_2E048[-1];
  if ( haystack )
  {
    if ( (v3 & 0x11) != 0 )
    {
      sub_95E0(*(_DWORD *)(a1 + 132));
      if ( (v3 & 0x10) != 0 )
        h2ti(0, 0, "typedef _Unwind_Sword __guard;", 1024, 0, 0, sub_9510, 0, 0);
    }
    if ( (v3 & 2) != 0 )
    {
      h2ti(0, 0, "struct type_info;", 1024, 0, 0, sub_9510, 0, 0);
      if ( (v3 & 0x20) != 0 )
        goto LABEL_33;
LABEL_12:
      if ( (v3 & 8) == 0 )
        goto LABEL_13;
LABEL_34:
      h2ti(0, 0, "typedef void __cxa_vec_ctor_return_type;", 1024, 0, 0, sub_9510, 0, 0);
      if ( (v3 & 4) != 0 )
LABEL_14:
        h2ti(
          0,
          0,
          "typedef void __cxa_cdtor_return_type;typedef __cxa_cdtor_return_type (*__cxa_cdtor_type)(void *);",
          1024,
          0,
          0,
          sub_9510,
          0,
          0);
    }
    else
    {
      if ( (v3 & 0x20) == 0 )
        goto LABEL_12;
LABEL_33:
      h2ti(0, 0, "struct __class_type_info;", 1024, 0, 0, sub_9510, 0, 0);
      if ( (v3 & 8) != 0 )
        goto LABEL_34;
LABEL_13:
      if ( (v3 & 4) != 0 )
        goto LABEL_14;
    }
    do
    {
      v7 = v6[1];
      if ( get_name_ea(-1, &v7[v2 == 0]) != -1 )
      {
        haystacka = v6[2];
        if ( strstr(haystacka, "size_t") )
        {
          v16[0] = 0;
          get_stock_tinfo(v16, 20);
          clear_tinfo_t(v16);
        }
        v15 = 0;
        if ( strstr(haystacka, "ptrdiff_t") )
        {
          v17 = 256;
          v16[1] = "ptrdiff_t";
          v16[0] = get_idati();
          if ( !(unsigned __int8)create_tinfo(&v15, 61, 61, v16) )
          {
            v16[0] = 0;
            get_stock_tinfo(v16, 21);
            clear_tinfo_t(v16);
            h2ti(0, 0, "typedef ssize_t ptrdiff_t;", 1024, 0, 0, sub_9510, 0, 0);
          }
        }
        sub_EE90(v7, *v6, haystacka, v2);
        clear_tinfo_t(&v15);
      }
      v6 += 4;
    }
    while ( v6 != off_2E460 );
  }
LABEL_24:
  v8 = 1;
  if ( get_name_ea(-1, "__Unwind_SjLj_Register") == -1 )
  {
    if ( get_name_ea(-1, "_Unwind_SjLj_Register") != -1 )
    {
      v8 = 0;
      goto LABEL_25;
    }
  }
  else
  {
LABEL_25:
    v9 = off_2E460;
    sub_95E0(*(_DWORD *)(a1 + 132));
    h2ti(
      0,
      0,
      "struct SjLj_Function_Context {  struct SjLj_Function_Context *prev;  int call_site;  _Unwind_Word data[4];  _Unwin"
      "d_Personality_Fn personality;  void *lsda;  void *jbuf[1];};",
      1024,
      0,
      0,
      sub_9510,
      0,
      0);
    do
    {
      v10 = v9[2];
      v11 = *v9;
      v9 += 4;
      sub_EE90(*(v9 - 3), v11, v10, v8);
    }
    while ( off_2E620 != v9 );
  }
  return v18 - __readfsqword(0x28u);
}
