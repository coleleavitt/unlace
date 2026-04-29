unsigned __int64 __fastcall sub_214940(_QWORD *a1, int a2)
{
  __int64 v3; // rbp
  _QWORD *v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // r13
  _QWORD *v10; // rax
  int v11; // eax
  int v12; // r12d
  unsigned int v13; // edi
  char *v14; // r12
  int i; // r13d
  int v16; // r15d
  const char *v17; // rdi
  char *v18; // rdi
  _BYTE *v19; // rax
  const char *v20; // rsi
  size_t v21; // rax
  size_t v22; // r14
  size_t v23; // r13
  char *v24; // r13
  char *v25; // rax
  int v26; // edx
  _DWORD *v27; // rdi
  char *v28; // rax
  char *v29; // rdi
  char v30; // dl
  _BYTE *v31; // rsi
  char v32; // r13
  size_t v33; // rax
  char *v34; // rax
  char *v35; // r13
  size_t v36; // rax
  unsigned __int64 v37; // [rsp+8h] [rbp-500h]
  const char *v38; // [rsp+10h] [rbp-4F8h] BYREF
  __int128 v39; // [rsp+18h] [rbp-4F0h]
  char *v40; // [rsp+30h] [rbp-4D8h] BYREF
  __int128 v41; // [rsp+38h] [rbp-4D0h]
  __int128 v42; // [rsp+48h] [rbp-4C0h]
  __int64 v43; // [rsp+58h] [rbp-4B0h]
  __int128 v44; // [rsp+60h] [rbp-4A8h]
  __int128 v45[3]; // [rsp+70h] [rbp-498h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-468h]
  int v47; // [rsp+A8h] [rbp-460h]
  __int64 v48; // [rsp+B0h] [rbp-458h]
  char v49; // [rsp+B8h] [rbp-450h]
  char s[2]; // [rsp+C0h] [rbp-448h] BYREF
  _BYTE v51[1021]; // [rsp+C2h] [rbp-446h] BYREF
  char v52; // [rsp+4BFh] [rbp-49h] BYREF
  _BYTE v53[8]; // [rsp+4C0h] [rbp-48h] BYREF
  unsigned __int64 v54; // [rsp+4C8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( a2 < 0 || (unsigned __int64)a2 >= a1[55] )
  {
    if ( !under_debugger )
      sub_3835A0(50320);
    goto LABEL_126;
  }
  v3 = a1[54] + 104LL * a2;
  if ( (*(_BYTE *)(v3 + 26) & 1) != 0 )
    return v54 - __readfsqword(0x28u);
  v5 = (_QWORD *)a1[160];
  if ( v5 )
  {
    v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v6 )
      return v54 - __readfsqword(0x28u);
    if ( (*(_BYTE *)v6 & 2) == 0 )
    {
      do
      {
        if ( (int)sub_330B00(v3, v6 + 24) >= 0 )
        {
          if ( (int)sub_330B00(v6 + 24, v3) >= 0 )
            goto LABEL_56;
          v6 = *(_QWORD *)(v6 + 16);
        }
        else
        {
          v6 = *(_QWORD *)(v6 + 8);
        }
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v6 = a1[160];
LABEL_56:
      if ( v5 != (_QWORD *)v6 )
        return v54 - __readfsqword(0x28u);
    }
  }
  v7 = a1[157];
  if ( 96LL * a1[158] )
  {
    while ( (unsigned int)sub_330B00(v7, v3) )
    {
      v7 += 96;
      if ( v7 == a1[157] + 96LL * a1[158] )
        goto LABEL_14;
    }
    if ( v7 && *(_QWORD *)(v7 + 32) > 1u )
      return v54 - __readfsqword(0x28u);
  }
LABEL_14:
  s[0] = 0;
  v8 = *(_DWORD *)v3;
  if ( (unsigned int)(*(_DWORD *)v3 - 3) > 1 )
  {
    if ( v8 != 2 )
    {
      if ( v8 == 1 )
      {
        v9 = sub_1CF790(a1, *(int *)(v3 + 8));
        v10 = sub_1CE420((__int64)a1);
        v38 = nullptr;
        get_func_frame(&v38, v10);
        v41 = 0u;
        v43 = 0;
        v46 = 1;
        v47 = -1;
        v48 = 0;
        v49 = 0;
        v40 = (char *)(8 * v9);
        v42 = 0;
        v44 = 0;
        v45[0] = 0;
        find_tinfo_udt_member(&v40, v38, 0);
        if ( (unsigned __int64)v42 <= 1 )
        {
          qsnprintf(s, 1024, "_%a", 0.0);
          goto LABEL_25;
        }
        qstrncpy(s, *((_QWORD *)&v41 + 1), 1024);
        if ( (v48 & 0x100000000000LL) != 0 )
        {
          qstrncpy(s, "retaddr", 1024);
        }
        else
        {
          if ( (v48 & 0x200000000000LL) == 0 )
          {
            v11 = strncmp(s, "arg_", 4u);
            v37 = (unsigned __int64)v40 >> 3;
            v12 = v9 - ((unsigned __int64)v40 >> 3);
            if ( v11 && strncmp(s, "var_", 4u) && strncmp(s, "anonymous", 9u) )
            {
              if ( (_DWORD)v9 == (_DWORD)v37 )
              {
LABEL_24:
                *(_DWORD *)(v3 + 24) |= 0x24u;
LABEL_25:
                clear_tinfo_t(v45);
                if ( v43 )
                {
                  *(_QWORD *)&v44 = 0;
                  qfree(v43);
                }
                if ( *((_QWORD *)&v41 + 1) )
                {
                  *(_QWORD *)&v42 = 0;
                  qfree(*((_QWORD *)&v41 + 1));
                }
                clear_tinfo_t(&v38);
                goto LABEL_30;
              }
              v32 = 1;
LABEL_99:
              v33 = strlen(s);
              qsnprintf(&s[v33], 1024 - v33, "_%d", v12);
              if ( !v32 )
                goto LABEL_25;
              goto LABEL_24;
            }
            v34 = strchr(s, 95);
            v35 = v34;
            if ( v34 )
            {
              v36 = strlen(v34);
              memmove(v35, v35 + 1, v36 + 1);
            }
            if ( !v12 )
              goto LABEL_25;
LABEL_98:
            v32 = 0;
            goto LABEL_99;
          }
          qstrncpy(s, "savedregs", 1024);
        }
        v12 = v9 - ((unsigned __int64)v40 >> 3);
        if ( (_DWORD)v9 == (unsigned int)((unsigned __int64)v40 >> 3) )
          goto LABEL_25;
        goto LABEL_98;
      }
      if ( !under_debugger )
        sub_3835A0(51154);
LABEL_126:
      BUG();
    }
    v39 = 0;
    v38 = nullptr;
    if ( !(unsigned __int8)sub_32BB20(&v38, v3 + 80, 0, 0) )
    {
      if ( !under_debugger )
        sub_3835A0(51153);
      goto LABEL_126;
    }
    v20 = s1;
    if ( (_QWORD)v39 )
      v20 = v38;
    qstrncpy(s, v20, 1024);
    v40 = nullptr;
    v41 = 0;
    v21 = strlen(s);
    v22 = v21 + 1;
    v23 = v21;
    v40 = (char *)qvector_reserve(&v40, 0, v21 + 1, 1);
    *(_QWORD *)&v41 = v22;
    memmove(v40, s, v23);
    v40[v23] = 0;
    qstrlwr(v40);
    if ( (unsigned __int8)validate_name(&v40, 6, 1) )
    {
      if ( (_QWORD)v41 )
      {
        v24 = v40;
        if ( strcmp(v40, s) )
        {
LABEL_71:
          qstrncpy(s, v24, 1024);
          if ( v40 )
          {
            *(_QWORD *)&v41 = 0;
            qfree(v40);
          }
          if ( v38 )
          {
            *(_QWORD *)&v39 = 0;
            qfree(v38);
          }
          goto LABEL_30;
        }
      }
      else if ( s[0] )
      {
        goto LABEL_107;
      }
    }
    v25 = &s[strlen(s)];
    if ( v51 < v25 && *(v25 - 2) == 95 && *(v25 - 1) == 116 )
      *(v25 - 2) = 0;
    else
      qstrncat(s, "_", 1024);
    if ( (_QWORD)v41 )
    {
      v24 = v40;
      goto LABEL_71;
    }
LABEL_107:
    v24 = (char *)s1;
    goto LABEL_71;
  }
  v26 = *(_DWORD *)(v3 + 8);
  if ( v8 == 4 )
  {
    v26 = (unsigned __int16)v26;
  }
  else if ( v26 == -1 )
  {
    goto LABEL_81;
  }
  v27 = (_DWORD *)a1[188];
  v40 = nullptr;
  v41 = 0;
  sub_133330(v27, (__int64 *)&v40, v26, *(_DWORD *)(v3 + 88));
  v28 = (char *)s1;
  if ( (_QWORD)v41 )
    v28 = v40;
  v29 = s;
  do
  {
    v30 = *v28++;
    *v29 = v30;
    if ( !v30 )
    {
      if ( (unsigned __int8)(*(v29 - 1) - 48) > 9u )
        goto LABEL_95;
      if ( v29 < v53 )
      {
LABEL_90:
        *v29 = 95;
        if ( v29 + 1 >= v53 )
        {
          v52 = 0;
          v31 = &byte_1;
          v29 = &v52;
        }
        else
        {
          v31 = (_BYTE *)(v53 - ++v29);
        }
        goto LABEL_92;
      }
      if ( !under_debugger )
        sub_3835A0(518);
      goto LABEL_126;
    }
    ++v29;
  }
  while ( v29 != &v52 );
  v52 = 0;
  if ( (unsigned __int8)(v51[1020] - 48) <= 9u )
    goto LABEL_90;
LABEL_95:
  v31 = (_BYTE *)(v53 - v29);
LABEL_92:
  qsnprintf(v29, v31, "%d", *(_DWORD *)(v3 + 92));
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
LABEL_30:
  v13 = s[0];
  if ( s[0] )
  {
    v14 = s;
    do
    {
      if ( v13 > 0x7F || !isalnum(v13) )
        *v14 = 95;
      v13 = *++v14;
    }
    while ( (_BYTE)v13 );
    goto LABEL_36;
  }
LABEL_81:
  v14 = s;
LABEL_36:
  for ( i = 0; ; ++i )
  {
    v16 = i;
    v17 = s1;
    if ( *(_QWORD *)(v3 + 40) )
      v17 = *(const char **)(v3 + 32);
    if ( !strcmp(v17, s) || !sub_213500((__int64)a1, s, -9) )
      break;
    v18 = v14;
    if ( i <= 0 )
      goto LABEL_75;
    while ( 1 )
    {
      if ( v18 >= v53 )
        goto LABEL_108;
      *v18++ = v16 % 0x1Au + 97;
      if ( v18 >= v53 )
      {
        v52 = 0;
        v18 = &v52;
      }
      if ( v16 <= 25 )
        break;
      v16 /= 0x1Au;
    }
    if ( v14 == v18 )
    {
LABEL_75:
      if ( v14 >= v53 )
      {
LABEL_108:
        if ( !under_debugger )
          sub_3835A0(518);
        goto LABEL_126;
      }
      v18 = v14 + 1;
      *v14 = 97;
      v19 = &byte_1;
      if ( v14 + 1 >= v53 )
      {
        v52 = 0;
        v18 = &v52;
        v19 = (_BYTE *)(&v52 - v14);
      }
    }
    else
    {
      if ( v18 >= v53 )
      {
        if ( !under_debugger )
          sub_3835A0(519);
        goto LABEL_126;
      }
      v19 = (_BYTE *)(v18 - v14);
    }
    *v18 = 0;
    memrev(v14, v19);
  }
  sub_213F40(a1, (_QWORD *)v3, s);
  return v54 - __readfsqword(0x28u);
}
