__int64 __fastcall sub_5ED9A0(__int64 a1, const char *a2)
{
  const char *v3; // rbp
  unsigned int v4; // ebx
  unsigned int (__fastcall *v5)(__int64, const char *); // rax
  unsigned int v6; // edi
  unsigned __int64 v7; // rdx
  char v8; // r13
  const char *v9; // rbx
  char **v10; // rbx
  const char *v11; // rbp
  char *v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  const char *v16; // rbx
  const char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // dl
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rax
  char v25; // al
  char v26; // bp
  unsigned int v27; // r13d
  char *v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rsi
  char v32; // bp
  const char *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  char v36; // bl
  const char *v37; // rax
  const char *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // edi
  const char *v42; // rbx
  char v43; // bp
  const char *v44; // [rsp+8h] [rbp-450h] BYREF
  const char *v45; // [rsp+18h] [rbp-440h] BYREF
  char s1[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v47; // [rsp+428h] [rbp-30h]

  v3 = a2;
  v44 = a2;
  v47 = __readfsqword(0x28u);
  if ( !strncmp(a2, "pack", 4u) )
  {
    v13 = skip_spaces(a2 + 4);
    v44 = (const char *)(v13 + 1);
    if ( *(_BYTE *)v13 != 40 )
      return 29;
    v15 = skip_spaces(v13 + 1);
    v44 = (const char *)v15;
    v16 = (const char *)v15;
    if ( *(_BYTE *)v15 == 112 && *(_BYTE *)(v15 + 1) == 111 && *(_BYTE *)(v15 + 2) == 112 )
    {
      v17 = (const char *)skip_spaces(v15 + 3);
      v44 = v17;
      if ( *v17 == 44 )
      {
        v17 = (const char *)skip_spaces(v17 + 1);
        v44 = v17;
        v41 = *v17;
        v42 = v17 + 1;
        v43 = *v17;
        if ( v41 <= 0x7F )
        {
          while ( isalnum(v41) || v43 == 95 )
          {
            v44 = v42;
            v41 = *v42;
            v17 = v42++;
            v43 = v41;
            if ( v41 > 0x7F )
              goto LABEL_32;
          }
          v17 = v44;
        }
      }
LABEL_32:
      v18 = *(_QWORD *)(a1 + 200);
      if ( v18 )
      {
        v19 = v18 - 1;
        v20 = *(_BYTE *)(*(_QWORD *)(a1 + 192) + v18 - 1);
        *(_QWORD *)(a1 + 200) = v19;
        *(_BYTE *)(a1 + 752) = v20;
      }
      goto LABEL_34;
    }
    if ( !strncmp((const char *)v15, "push", 4u) )
    {
      v34 = *(_QWORD *)(a1 + 200);
      v35 = *(_QWORD *)(a1 + 192);
      v36 = *(_BYTE *)(a1 + 752);
      if ( *(_QWORD *)(a1 + 208) < (unsigned __int64)(v34 + 1) )
      {
        v40 = qvector_reserve(a1 + 192, v35, v34 + 1, 1);
        *(_QWORD *)(a1 + 192) = v40;
        v35 = v40;
        v34 = *(_QWORD *)(a1 + 200);
      }
      *(_BYTE *)(v35 + v34) = v36;
      v37 = v44;
      ++*(_QWORD *)(a1 + 200);
      v38 = (const char *)skip_spaces(v37 + 4);
      v44 = v38;
      if ( *v38 == 41 )
        return 0;
      v44 = v38 + 1;
      if ( *v38 != 44 )
        return 29;
      v44 = (const char *)skip_spaces(v38 + 1);
      v16 = v44;
    }
    v26 = *v16;
    if ( *v16 == 41 )
    {
LABEL_54:
      *(_BYTE *)(a1 + 752) = 0;
      return 0;
    }
    v27 = v26;
    if ( (unsigned int)v26 > 0x7F )
    {
      v28 = strchr(v16, 44);
      if ( !v28 )
        goto LABEL_53;
    }
    else
    {
      if ( (unsigned int)(v26 - 48) <= 9 )
      {
LABEL_63:
        v4 = sub_5ED920(a1, &v44);
        if ( v4 )
          return v4;
        v17 = v44;
LABEL_34:
        v44 = v17 + 1;
        if ( *v17 == 41 )
          return 0;
        return 29;
      }
      v28 = strchr(v16, 44);
      if ( !v28 )
      {
        do
        {
          v29 = isalnum(v27);
          if ( v26 != 95 && !v29 )
            break;
          v44 = ++v16;
          v27 = *v16;
          v26 = *v16;
        }
        while ( v27 <= 0x7F );
LABEL_53:
        if ( *(_BYTE *)skip_spaces(v16) != 41 )
          return 29;
        goto LABEL_54;
      }
    }
    v44 = v28 + 1;
    goto LABEL_63;
  }
  v4 = strncmp(a2, "option", 6u);
  if ( v4 )
  {
    if ( !strncmp(a2, "push_macro", 0xAu) )
    {
      if ( sub_5E1F80((__int64)(a2 + 10), s1) )
        return (unsigned int)sub_7A8290(*(_QWORD *)(a1 + 240), s1);
    }
    else if ( !strncmp(a2, "pop_macro", 9u) )
    {
      if ( sub_5E1F80((__int64)(a2 + 9), s1) )
        return (unsigned int)sub_7A2730(*(_QWORD *)(a1 + 240), s1);
    }
    else
    {
      if ( strncmp(a2, "ms_struct", 9u) )
      {
LABEL_6:
        v5 = *(unsigned int (__fastcall **)(__int64, const char *))(a1 + 232);
        if ( !v5 )
          goto LABEL_9;
        if ( v5(a1, v3) )
        {
          v3 = v44;
LABEL_9:
          v6 = *v3;
          v7 = 1;
          v8 = *v3;
          if ( v6 <= 0x7F )
          {
            v9 = v3;
            do
            {
              if ( !isalnum(v6) && v8 != 95 )
                break;
              v44 = ++v9;
              v6 = *v9;
              v8 = *v9;
            }
            while ( v6 <= 0x7F );
            v7 = v9 - v3 + 1;
            if ( v7 > 0x400 )
              v7 = 1024;
          }
          v10 = &off_2B30000;
          qstrncpy(s1, v3, v7);
          while ( strcmp(s1, *v10) )
          {
            if ( ++v10 == (char **)&off_2B30140 )
            {
              sub_5E62B0(a1);
              return 0;
            }
          }
        }
        return 0;
      }
      v24 = skip_spaces(a2 + 9);
      v44 = (const char *)v24;
      v3 = (const char *)v24;
      if ( *(_BYTE *)v24 == 111 && *(_BYTE *)(v24 + 1) == 110 || !strncmp((const char *)v24, "reset", 5u) )
      {
        v25 = 1;
        goto LABEL_44;
      }
      if ( *v3 == 111 && v3[1] == 102 && v3[2] == 102 )
      {
        v25 = 0;
LABEL_44:
        *(_BYTE *)(a1 + 756) = v25;
        goto LABEL_6;
      }
    }
    return 29;
  }
  v44 = (const char *)skip_spaces(a2 + 6);
  v11 = v44;
  if ( !strcmp(v44, "pop") )
  {
    v21 = *(_QWORD *)(a1 + 200);
    if ( v21 )
    {
      v22 = v21 - 1;
      v23 = *(_BYTE *)(*(_QWORD *)(a1 + 192) + v21 - 1);
      *(_QWORD *)(a1 + 200) = v22;
      *(_BYTE *)(a1 + 752) = v23;
    }
  }
  else
  {
    if ( !strncmp(v44, "push", 4u) )
    {
      v30 = *(_QWORD *)(a1 + 200);
      v31 = *(_QWORD *)(a1 + 192);
      v32 = *(_BYTE *)(a1 + 752);
      if ( *(_QWORD *)(a1 + 208) < (unsigned __int64)(v30 + 1) )
      {
        v39 = qvector_reserve(a1 + 192, v31, v30 + 1, 1);
        *(_QWORD *)(a1 + 192) = v39;
        v31 = v39;
        v30 = *(_QWORD *)(a1 + 200);
      }
      *(_BYTE *)(v31 + v30) = v32;
      v33 = v44;
      ++*(_QWORD *)(a1 + 200);
      v11 = (const char *)skip_spaces(v33 + 4);
    }
    v12 = strstr(v11, "-a");
    if ( v12 )
    {
      v45 = v12 + 2;
      return (unsigned int)sub_5ED920(a1, &v45);
    }
  }
  return v4;
}
