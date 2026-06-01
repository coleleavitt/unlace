__int64 sub_38A1C0()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int64 v2; // r12
  const char *v3; // rdi
  char *v4; // rax
  const char *v5; // r8
  char *v6; // rbp
  size_t v7; // r15
  const char *v8; // rdx
  void *v9; // rdi
  void *v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r15
  _BYTE *v16; // rsi
  char v17; // al
  __int64 v18; // r15
  int v19; // r9d
  char *v20; // rax
  const char *v21; // rdx
  __int64 v22; // rsi
  char *v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rbp
  char *v26; // rdx
  void *v27; // rdi
  size_t v29; // rax
  const char *src; // [rsp+0h] [rbp-14A8h]
  void *v31; // [rsp+8h] [rbp-14A0h]
  void **v32; // [rsp+10h] [rbp-1498h]
  const char *v33; // [rsp+18h] [rbp-1490h]
  void *dest; // [rsp+20h] [rbp-1488h] BYREF
  int v35[4]; // [rsp+28h] [rbp-1480h]
  int v36; // [rsp+38h] [rbp-1470h]
  void *v37; // [rsp+40h] [rbp-1468h] BYREF
  __int128 v38; // [rsp+48h] [rbp-1460h]
  char s2[1024]; // [rsp+60h] [rbp-1448h] BYREF
  _BYTE v40[4104]; // [rsp+460h] [rbp-1048h] BYREF
  unsigned __int64 v41; // [rsp+1468h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( get_loader_name(s2) <= 0 )
    qstrncpy(s2, "bin", 1024);
  v31 = (void *)qword_2CCB598;
  v0 = *(_QWORD *)(qword_2CCB598 + 1672);
  v1 = *(_QWORD *)(v0 + 424);
  v32 = &v37;
  v2 = v1 + 48LL * *(_QWORD *)(v0 + 432);
  if ( v1 == v2 )
    return 1;
  while ( 1 )
  {
    v3 = haystack;
    if ( *(_QWORD *)(v1 + 8) )
      v3 = *(const char **)v1;
    if ( strcmp(v3, s2) )
      goto LABEL_37;
    if ( !*(_QWORD *)(v1 + 32) )
      return 0;
    src = *(const char **)(v1 + 24);
    v4 = strchr(src, 58);
    v5 = src;
    v6 = v4;
    if ( !v4 )
      break;
    v7 = v4 - src;
    if ( v4 == src )
      return 0;
    dest = nullptr;
    *(_OWORD *)v35 = 0;
    v8 = (const char *)(v7 + 1);
    if ( v7 != -1 )
      goto LABEL_49;
    v9 = nullptr;
    v7 = -1;
LABEL_12:
    *(_QWORD *)v35 = v8;
    memmove(v9, v5, v7);
    *((_BYTE *)dest + v7) = 0;
    v10 = dest;
    v11 = qbasename(dest);
    if ( v10 != (void *)v11 )
    {
      if ( *(_QWORD *)v35 )
      {
        v12 = *(_QWORD *)v35 - 1LL;
        if ( *(_QWORD *)v35 != 1 )
        {
          v13 = v11 - (_QWORD)v10;
          v14 = 1;
          v15 = 0;
          if ( v13 < v12 )
          {
            v15 = v12 - v13;
            memmove(dest, (char *)dest + v13, v12 - v13);
            v14 = v15 + 1;
          }
          v16 = dest;
          if ( *(_QWORD *)&v35[2] < v14 )
          {
            src = (const char *)v14;
            dest = (void *)qvector_reserve(&dest, dest, v14, 1);
            v14 = (unsigned __int64)src;
            v16 = dest;
          }
          *(_QWORD *)v35 = v14;
          v16[v15] = 0;
        }
      }
    }
    if ( v6 )
    {
      v17 = v6[1];
      if ( v17 == 45 )
      {
        if ( (unsigned __int8)(v6[2] - 48) <= 9u )
        {
LABEL_23:
          v18 = (int)strtol(v6 + 1, nullptr, 10);
          goto LABEL_24;
        }
      }
      else if ( (unsigned __int8)(v17 - 48) <= 9u )
      {
        goto LABEL_23;
      }
      sub_38E5F0(dest, (int)src, v31, (__int64)v32, (int)v33, (int)dest, v35[0], v35[2], v36, (__int64)v37);
    }
    v18 = 0;
LABEL_24:
    v37 = nullptr;
    v38 = 0;
    get_ida_subdirs(v32, "plugins", 0);
    v20 = (char *)v37 + 24 * v38 - 24;
    v21 = haystack;
    if ( *((_QWORD *)v20 + 1) )
      v21 = *(const char **)v20;
    qmakepath((unsigned int)v40, 4096, (_DWORD)v21, (_DWORD)dest, 0, v19, (char)src);
    if ( get_file_ext(v40) )
      qstrncpy(v40, v40, 4096);
    else
      set_file_ext(v40, 4096, v40, "so");
    v22 = sub_4EE630(v31, v40, 1);
    if ( !v22 )
      sub_378D50();
    sub_4EAA50(v31, v22, v18);
    v23 = (char *)v37;
    if ( v37 )
    {
      v24 = v38;
      if ( (_QWORD)v38 )
      {
        v25 = 0;
        do
        {
          v26 = &v23[24 * v25];
          v27 = *(void **)v26;
          if ( *(_QWORD *)v26 )
          {
            *((_QWORD *)v26 + 1) = 0;
            qfree(v27);
            v23 = (char *)v37;
          }
          ++v25;
        }
        while ( v24 != v25 );
      }
      *(_QWORD *)&v38 = 0;
      qfree(v23);
      if ( !dest )
        goto LABEL_37;
    }
    else if ( !dest )
    {
      goto LABEL_37;
    }
    *(_QWORD *)v35 = 0;
    qfree(dest);
LABEL_37:
    v1 += 48;
    if ( v2 == v1 )
      return 1;
  }
  v29 = strlen(src);
  v7 = v29;
  if ( v29 )
  {
    v5 = src;
    v8 = (const char *)(v29 + 1);
    dest = nullptr;
    *(_OWORD *)v35 = 0;
LABEL_49:
    src = v8;
    v33 = v5;
    dest = (void *)qvector_reserve(&dest, 0, v8, 1);
    v8 = src;
    v9 = dest;
    v5 = v33;
    goto LABEL_12;
  }
  return 0;
}
