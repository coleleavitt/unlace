char *__fastcall sub_21E1E00(__int64 a1, _BYTE *a2)
{
  char *v2; // rax
  char v3; // dl
  const char *v4; // rbp
  void *v5; // rax
  char *v6; // r15
  size_t v8; // rax
  _BYTE *v9; // r12
  _BYTE *v10; // rbp
  size_t v11; // r13
  char v12; // r12
  char v13; // r13
  char *v14; // r14
  __int64 v15; // rax
  __int64 *v16; // rax
  char *v17; // rax
  void *v18; // rax
  void *v19; // r12
  __int64 v20; // r13
  __int64 *v21; // rax
  char *v22; // rax
  unsigned __int64 v23; // rax
  char v24; // dl
  void *v25; // rax
  unsigned __int64 v26; // rax
  char v27; // dl
  char *v28; // rdx
  char v29; // dl
  char v30; // [rsp+8h] [rbp-F0h]
  char v31; // [rsp+8h] [rbp-F0h]
  char v32; // [rsp+17h] [rbp-E1h]
  __int64 v33; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C0h]
  _BYTE v36[184]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = sub_21CFC70(a1);
  if ( !v2 )
  {
    v8 = j__strlen("li");
    v9 = *(_BYTE **)(a1 + 8);
    v10 = *(_BYTE **)a1;
    v11 = v8;
    if ( sub_20D1BF0((size_t)&v9[-*(_QWORD *)a1], *(const void **)a1, v8, "li") )
    {
      *(_QWORD *)a1 = &v10[v11];
      v18 = sub_21D7980(a1);
      v19 = v18;
      if ( !v18 )
        return nullptr;
      v20 = a1 + 904;
      v30 = *(_BYTE *)(a1 + 937);
      v35 = 0x2000000000LL;
      ptr = v36;
      sub_21D0240((__int64)&ptr, 0x14u, (unsigned __int64)v18);
      v6 = (char *)sub_2223360(a1 + 904, &ptr, &v33, off_2BE9FD0);
      if ( !v6 )
      {
        if ( !v30 )
          goto LABEL_54;
        v26 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
        *(_WORD *)(v26 + 16) = 16404;
        v27 = *(_BYTE *)(v26 + 18);
        v6 = (char *)(v26 + 8);
        *(_QWORD *)v26 = 0;
        *(_BYTE *)(v26 + 18) = v27 & 0xF0 | 5;
        v28 = (char *)&unk_2BE6E90;
        goto LABEL_59;
      }
    }
    else
    {
      if ( v9 == v10 )
        return nullptr;
      if ( *v10 != 118 )
        return nullptr;
      *(_QWORD *)a1 = v10 + 1;
      if ( v9 == v10 + 1 )
        return nullptr;
      if ( (unsigned __int8)(v10[1] - 48) > 9u )
        return nullptr;
      *(_QWORD *)a1 = v10 + 2;
      v25 = sub_21D7980(a1);
      v19 = v25;
      if ( !v25 )
        return nullptr;
      v20 = a1 + 904;
      v31 = *(_BYTE *)(a1 + 937);
      v35 = 0x2000000000LL;
      ptr = v36;
      sub_21D0240((__int64)&ptr, 4u, (unsigned __int64)v25);
      v6 = (char *)sub_2223360(a1 + 904, &ptr, &v33, off_2BE9FD0);
      if ( !v6 )
      {
        if ( !v31 )
        {
LABEL_54:
          if ( ptr != v36 )
            free(ptr);
          *(_QWORD *)(a1 + 920) = v6;
          return v6;
        }
        v26 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
        v29 = *(_BYTE *)(v26 + 18);
        v6 = (char *)(v26 + 8);
        *(_QWORD *)v26 = 0;
        *(_WORD *)(v26 + 16) = 16388;
        *(_BYTE *)(v26 + 18) = v29 & 0xF0 | 5;
        v28 = (char *)&unk_2BE67D0;
LABEL_59:
        *(_QWORD *)(v26 + 24) = v19;
        *(_QWORD *)(v26 + 8) = v28 + 16;
        sub_2223210(v20, v26, v33, off_2BE9FD0);
        goto LABEL_54;
      }
    }
    v6 += 8;
    if ( ptr != v36 )
      free(ptr);
    if ( v6 )
    {
      ptr = v6;
      v21 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
      if ( v21 )
      {
        v22 = (char *)v21[1];
        if ( v22 )
          v6 = v22;
      }
      if ( *(char **)(a1 + 928) == v6 )
        *(_BYTE *)(a1 + 936) = 1;
    }
    return v6;
  }
  v3 = v2[2];
  if ( v3 == 8 )
  {
    v12 = *(_BYTE *)(a1 + 777);
    v13 = *(_BYTE *)(a1 + 776);
    *(_BYTE *)(a1 + 776) = 0;
    if ( v12 )
    {
      *(_BYTE *)(a1 + 777) = 1;
      v14 = sub_21DFD40(a1);
      if ( v14 )
      {
        if ( !a2 )
          goto LABEL_17;
        goto LABEL_16;
      }
    }
    else if ( a2 )
    {
      *(_BYTE *)(a1 + 777) = 1;
      v14 = sub_21DFD40(a1);
      if ( v14 )
      {
LABEL_16:
        *a2 = 1;
LABEL_17:
        v32 = *(_BYTE *)(a1 + 937);
        ptr = v36;
        v35 = 0x2000000000LL;
        sub_21D0240((__int64)&ptr, 4u, (unsigned __int64)v14);
        v15 = sub_2223360(a1 + 904, &ptr, &v33, off_2BE9FD0);
        v6 = (char *)v15;
        if ( !v15 )
        {
          if ( v32 )
          {
            v23 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
            v24 = *(_BYTE *)(v23 + 18);
            *(_WORD *)(v23 + 16) = 16388;
            v6 = (char *)(v23 + 8);
            *(_QWORD *)v23 = 0;
            *(_QWORD *)(v23 + 24) = v14;
            *(_BYTE *)(v23 + 18) = v24 & 0xF0 | 5;
            *(_QWORD *)(v23 + 8) = off_2BE67E0;
            sub_2223210(a1 + 904, v23, v33, off_2BE9FD0);
          }
          if ( ptr != v36 )
            free(ptr);
          *(_QWORD *)(a1 + 920) = v6;
          *(_BYTE *)(a1 + 777) = v12;
          *(_BYTE *)(a1 + 776) = v13;
          return v6;
        }
        v6 = (char *)(v15 + 8);
        if ( ptr != v36 )
          free(ptr);
        if ( v6 )
        {
          ptr = v6;
          v16 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
          if ( v16 )
          {
            v17 = (char *)v16[1];
            if ( v17 )
              v6 = v17;
          }
          if ( *(char **)(a1 + 928) == v6 )
            *(_BYTE *)(a1 + 936) = 1;
        }
LABEL_26:
        *(_BYTE *)(a1 + 777) = v12;
        *(_BYTE *)(a1 + 776) = v13;
        return v6;
      }
    }
    else
    {
      v14 = sub_21DFD40(a1);
      if ( v14 )
        goto LABEL_17;
    }
    v6 = nullptr;
    goto LABEL_26;
  }
  if ( (unsigned __int8)v3 > 0xAu || v3 == 4 && (v2[3] & 1) == 0 )
    return nullptr;
  v4 = *((const char **)v2 + 1);
  v5 = nullptr;
  if ( v4 )
    v5 = (void *)j__strlen(v4);
  ptr = v5;
  v35 = (__int64)v4;
  return sub_21D5030(a1 + 808, (__int64 *)&ptr);
}
