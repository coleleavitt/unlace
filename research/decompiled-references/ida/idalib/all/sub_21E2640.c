char *__fastcall sub_21E2640(__int64 a1, _BYTE *a2, unsigned __int64 a3, __int64 a4)
{
  char v5; // r12
  char *v6; // rbp
  char *v7; // r13
  size_t v8; // r14
  bool v9; // r9
  char *v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 *v13; // rax
  char *v14; // rax
  unsigned __int64 v15; // rax
  char v16; // r14
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 *v19; // rax
  char *v20; // rax
  char v21; // bp
  __int64 v22; // rax
  __int64 *v23; // rax
  char *v25; // r13
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // rax
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // r15
  __int64 v35; // rdx
  void *v36; // rdi
  __int64 *v37; // rax
  char *v38; // rax
  int v39; // r14d
  int v40; // r14d
  __int64 v41; // rax
  char v42; // r14
  unsigned __int64 v43; // rax
  char v44; // dl
  char *v45; // r14
  char *v46; // rdx
  char v47; // dl
  _BYTE *v48; // rax
  unsigned __int64 v49; // rax
  char v50; // dl
  unsigned __int64 v51; // rax
  char v52; // dl
  char v53; // dl
  unsigned __int64 v54; // rax
  char v55; // dl
  int v56; // ecx
  unsigned __int64 v57; // rax
  char v58; // dl
  size_t v60; // [rsp+10h] [rbp-F8h]
  char v61; // [rsp+10h] [rbp-F8h]
  char v62; // [rsp+10h] [rbp-F8h]
  char v63; // [rsp+10h] [rbp-F8h]
  __int64 v64; // [rsp+10h] [rbp-F8h]
  int v65; // [rsp+10h] [rbp-F8h]
  __int64 v66; // [rsp+10h] [rbp-F8h]
  __int64 v67; // [rsp+10h] [rbp-F8h]
  __int64 v68; // [rsp+10h] [rbp-F8h]
  char v69; // [rsp+18h] [rbp-F0h]
  __int64 v70; // [rsp+18h] [rbp-F0h]
  char v71; // [rsp+18h] [rbp-F0h]
  __int64 v72; // [rsp+20h] [rbp-E8h]
  __int64 v73; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v74; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v76; // [rsp+48h] [rbp-C0h]
  _BYTE v77[184]; // [rsp+50h] [rbp-B8h] BYREF

  v73 = a4;
  if ( (unsigned __int8)sub_21D7C10(a1, &v73) )
    return nullptr;
  v5 = 0;
  v6 = *(char **)(a1 + 8);
  v7 = *(char **)a1;
  if ( !a3 )
  {
LABEL_62:
    if ( v6 != v7 )
    {
      if ( *v7 != 76 )
        goto LABEL_6;
      goto LABEL_64;
    }
LABEL_46:
    v60 = v6 - v7;
    goto LABEL_47;
  }
  if ( v6 == v7 )
    goto LABEL_46;
  if ( *v7 == 70 )
  {
    ++v7;
    v5 = 1;
    *(_QWORD *)a1 = v7;
    goto LABEL_62;
  }
  if ( *v7 != 76 )
  {
LABEL_6:
    v60 = v6 - v7;
    goto LABEL_7;
  }
LABEL_64:
  *(_QWORD *)a1 = ++v7;
  v60 = v6 - v7;
  if ( v7 == v6 )
  {
LABEL_47:
    v8 = j__strlen("DC");
    if ( !sub_20D1BF0(v60, v7, v8, "DC") )
      goto LABEL_11;
LABEL_48:
    v25 = &v7[v8];
    v26 = *(_QWORD *)(a1 + 16);
    v27 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)a1 = v25;
    while ( 1 )
    {
      v10 = (char *)sub_21D7980(a1);
      ptr = v10;
      if ( !v10 )
        return v10;
      sub_20D8690((char **)(a1 + 16), (__int64 *)&ptr);
      v32 = *(char **)a1;
      if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v32 == 69 )
      {
        *(_QWORD *)a1 = v32 + 1;
        v33 = (unsigned __int64 *)sub_21D4550((_QWORD *)a1, (v27 - v26) >> 3, v28, v29, v30, v31);
        ptr = v77;
        v34 = v33;
        v72 = v35;
        v62 = *(_BYTE *)(a1 + 937);
        v76 = 0x2000000000LL;
        sub_21D0C90((__int64)&ptr, 0x35u, v33, v35);
        v70 = a1 + 904;
        v10 = (char *)sub_2223360(a1 + 904, &ptr, &v74, off_2BE9FD0);
        if ( v10 )
          goto LABEL_53;
        if ( v62 )
        {
          v49 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
          v50 = *(_BYTE *)(v49 + 18);
          *(_QWORD *)v49 = 0;
          v10 = (char *)(v49 + 8);
          *(_WORD *)(v49 + 16) = 16437;
          *(_QWORD *)(v49 + 24) = v34;
          *(_QWORD *)(v49 + 32) = v72;
          *(_BYTE *)(v49 + 18) = v50 & 0xF0 | 5;
          *(_QWORD *)(v49 + 8) = off_2BE7AA0;
          goto LABEL_113;
        }
        goto LABEL_108;
      }
    }
  }
LABEL_7:
  if ( (unsigned __int8)(*v7 - 49) <= 8u )
  {
    v10 = (char *)sub_21D7980(a1);
    goto LABEL_12;
  }
  if ( *v7 == 85 )
  {
    v10 = (char *)sub_21DCFB0((char **)a1, (__int64)a2);
    goto LABEL_12;
  }
  v69 = *v7;
  v8 = j__strlen("DC");
  v9 = sub_20D1BF0(v60, v7, v8, "DC");
  if ( v9 )
    goto LABEL_48;
  if ( (unsigned __int8)(v69 - 67) <= 1u )
  {
    if ( !a3 || v73 )
      return nullptr;
    if ( *(_BYTE *)(a3 + 8) == 48 )
    {
      v76 = 0x2000000000LL;
      v21 = *(_BYTE *)(a1 + 937);
      ptr = v77;
      sub_9B7040((__int64)&ptr, 47);
      sub_21CFFC0((__int64)&ptr);
      sub_9B7040((__int64)&ptr, a3);
      sub_9B7040((__int64)&ptr, SHIDWORD(a3));
      v22 = sub_2223360(a1 + 904, &ptr, &v74, off_2BE9FD0);
      v9 = 0;
      if ( v22 )
      {
        v10 = (char *)(v22 + 8);
        if ( ptr != v77 )
          free(ptr);
        if ( !v10 )
          return v10;
        ptr = v10;
        v23 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
        v9 = 0;
        if ( v23 )
        {
          v22 = v23[1];
          if ( !v22 )
            v22 = (__int64)v10;
        }
        else
        {
          v22 = (__int64)v10;
        }
        if ( *(_QWORD *)(a1 + 928) == v22 )
          *(_BYTE *)(a1 + 936) = 1;
      }
      else
      {
        if ( v21 )
        {
          v54 = sub_21D40A0((__int64 *)(a1 + 808), 24, 3u);
          *(_QWORD *)v54 = 0;
          v55 = *(_BYTE *)(v54 + 18);
          v68 = v54 + 8;
          v56 = *(_DWORD *)(a3 + 12);
          *(_WORD *)(v54 + 16) = 16431;
          *(_BYTE *)(v54 + 18) = v55 & 0xF0 | 5;
          *(_DWORD *)(v54 + 20) = v56;
          *(_QWORD *)(v54 + 8) = off_2BE7860;
          sub_2223210(a1 + 904, v54, v74, off_2BE9FD0);
          v22 = v68;
          v9 = 0;
        }
        if ( ptr != v77 )
        {
          v67 = v22;
          free(ptr);
          v22 = v67;
          v9 = 0;
        }
        *(_QWORD *)(a1 + 920) = v22;
        if ( !v22 )
          return nullptr;
      }
      v7 = *(char **)a1;
      v6 = *(char **)(a1 + 8);
      if ( *(char **)a1 == v6 )
        return nullptr;
      a3 = v22;
    }
    if ( *v7 == 67 )
    {
      v48 = v7 + 1;
      *(_QWORD *)a1 = v7 + 1;
      if ( v6 == v7 + 1 )
        return nullptr;
      if ( v7[1] == 73 )
      {
        v48 = v7 + 2;
        *(_QWORD *)a1 = v7 + 2;
        if ( v6 == v7 + 2 )
          return nullptr;
        v9 = 1;
      }
      if ( (unsigned __int8)(*v48 - 49) > 4u )
        return nullptr;
      v65 = (char)*v48 - 48;
      *(_QWORD *)a1 = v48 + 1;
      if ( a2 )
        *a2 = 1;
      if ( v9 && !sub_21D8010(a1, (__int64)a2) )
        return nullptr;
      v71 = *(_BYTE *)(a1 + 937);
      v76 = 0x2000000000LL;
      ptr = v77;
      sub_9B7040((__int64)&ptr, 49);
      sub_21CFFC0((__int64)&ptr);
      sub_9B7040((__int64)&ptr, a3);
      sub_9B7040((__int64)&ptr, SHIDWORD(a3));
      sub_9B7040((__int64)&ptr, 0);
      sub_21CFFC0((__int64)&ptr);
      sub_9B7040((__int64)&ptr, v65);
      sub_9B7040((__int64)&ptr, 0);
      v10 = (char *)sub_2223360(a1 + 904, &ptr, &v74, off_2BE9FD0);
      if ( v10 )
      {
LABEL_53:
        v36 = ptr;
        v10 += 8;
        if ( ptr == v77 )
        {
LABEL_55:
          if ( !v10 )
            return v10;
          ptr = v10;
          v37 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
          if ( v37 )
          {
            v38 = (char *)v37[1];
            if ( v38 )
              v10 = v38;
          }
          if ( *(char **)(a1 + 928) == v10 )
            *(_BYTE *)(a1 + 936) = 1;
          goto LABEL_12;
        }
LABEL_54:
        free(v36);
        goto LABEL_55;
      }
      if ( v71 )
      {
        v57 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
        v58 = *(_BYTE *)(v57 + 18);
        *(_BYTE *)(v57 + 32) = 0;
        v10 = (char *)(v57 + 8);
        *(_QWORD *)(v57 + 24) = a3;
        *(_QWORD *)v57 = 0;
        *(_WORD *)(v57 + 16) = 16433;
        *(_BYTE *)(v57 + 18) = v58 & 0xF0 | 5;
        *(_DWORD *)(v57 + 36) = v65;
        *(_QWORD *)(v57 + 8) = off_2BE7920;
        sub_2223210(a1 + 904, v57, v74, off_2BE9FD0);
      }
    }
    else
    {
      if ( (unsigned __int64)(v6 - v7) <= 1 )
        return nullptr;
      if ( *v7 != 68 )
        return nullptr;
      v39 = v7[1];
      if ( (unsigned __int8)(v7[1] - 48) > 2u && (unsigned __int8)(v39 - 52) > 1u )
        return nullptr;
      v40 = v39 - 48;
      *(_QWORD *)a1 = v7 + 2;
      if ( a2 )
        *a2 = 1;
      v63 = *(_BYTE *)(a1 + 937);
      v76 = 0x2000000000LL;
      ptr = v77;
      sub_9B7040((__int64)&ptr, 49);
      sub_21CFFC0((__int64)&ptr);
      sub_9B7040((__int64)&ptr, a3);
      sub_9B7040((__int64)&ptr, SHIDWORD(a3));
      sub_9B7040((__int64)&ptr, 1);
      sub_21CFFC0((__int64)&ptr);
      sub_9B7040((__int64)&ptr, v40);
      sub_9B7040((__int64)&ptr, v40 >> 31);
      v70 = a1 + 904;
      v41 = sub_2223360(a1 + 904, &ptr, &v74, off_2BE9FD0);
      v10 = (char *)v41;
      if ( v41 )
      {
        v36 = ptr;
        v10 = (char *)(v41 + 8);
        if ( ptr == v77 )
          goto LABEL_55;
        goto LABEL_54;
      }
      if ( v63 )
      {
        v49 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
        v53 = *(_BYTE *)(v49 + 18);
        *(_QWORD *)v49 = 0;
        v10 = (char *)(v49 + 8);
        *(_WORD *)(v49 + 16) = 16433;
        *(_QWORD *)(v49 + 24) = a3;
        *(_BYTE *)(v49 + 32) = 1;
        *(_BYTE *)(v49 + 18) = v53 & 0xF0 | 5;
        *(_DWORD *)(v49 + 36) = v40;
        *(_QWORD *)(v49 + 8) = off_2BE7920;
LABEL_113:
        sub_2223210(v70, v49, v74, off_2BE9FD0);
      }
    }
LABEL_108:
    if ( ptr != v77 )
      free(ptr);
    *(_QWORD *)(a1 + 920) = v10;
    goto LABEL_12;
  }
LABEL_11:
  v10 = sub_21E1E00(a1, a2);
LABEL_12:
  if ( !v10 )
    return nullptr;
  v11 = v73;
  if ( !v73 )
  {
LABEL_22:
    v15 = sub_21D7230(a1, (unsigned __int64)v10);
    v10 = (char *)v15;
    if ( v15 )
    {
      if ( v5 )
      {
        v42 = *(_BYTE *)(a1 + 937);
        v17 = a1 + 904;
        ptr = v77;
        v76 = 0x2000000000LL;
        sub_21D05E0((__int64)&ptr, 0x19u, a3, v15);
        v18 = sub_2223360(a1 + 904, &ptr, &v74, off_2BE9FD0);
        if ( v18 )
        {
LABEL_26:
          v10 = (char *)(v18 + 8);
          if ( ptr != v77 )
            free(ptr);
          if ( v10 )
          {
            ptr = v10;
            v19 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
            if ( v19 )
            {
              v20 = (char *)v19[1];
              if ( v20 )
                v10 = v20;
            }
            if ( *(char **)(a1 + 928) == v10 )
              *(_BYTE *)(a1 + 936) = 1;
          }
          return v10;
        }
        if ( !v42 )
          goto LABEL_92;
        v43 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
        v44 = *(_BYTE *)(v43 + 18);
        *(_QWORD *)v43 = 0;
        v45 = (char *)(v43 + 8);
        *(_WORD *)(v43 + 16) = 16409;
        *(_BYTE *)(v43 + 18) = v44 & 0xF0 | 5;
        v46 = (char *)&unk_2BE7010;
      }
      else
      {
        if ( !a3 )
          return v10;
        v16 = *(_BYTE *)(a1 + 937);
        v17 = a1 + 904;
        ptr = v77;
        v76 = 0x2000000000LL;
        sub_21D05E0((__int64)&ptr, 0x18u, a3, v15);
        v18 = sub_2223360(a1 + 904, &ptr, &v74, off_2BE9FD0);
        if ( v18 )
          goto LABEL_26;
        if ( !v16 )
        {
LABEL_92:
          v10 = nullptr;
          goto LABEL_93;
        }
        v43 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
        *(_WORD *)(v43 + 16) = 16408;
        v47 = *(_BYTE *)(v43 + 18);
        v45 = (char *)(v43 + 8);
        *(_QWORD *)v43 = 0;
        *(_BYTE *)(v43 + 18) = v47 & 0xF0 | 5;
        v46 = (char *)&unk_2BE6FB0;
      }
      *(_QWORD *)(v43 + 32) = v10;
      *(_QWORD *)(v43 + 8) = v46 + 16;
      v10 = v45;
      *(_QWORD *)(v43 + 24) = a3;
      sub_2223210(v17, v43, v74, off_2BE9FD0);
LABEL_93:
      if ( ptr != v77 )
        free(ptr);
      *(_QWORD *)(a1 + 920) = v10;
      return v10;
    }
    return nullptr;
  }
  v61 = *(_BYTE *)(a1 + 937);
  v76 = 0x2000000000LL;
  ptr = v77;
  sub_9B7040((__int64)&ptr, 28);
  sub_21CFFC0((__int64)&ptr);
  sub_9B7040((__int64)&ptr, v11);
  sub_9B7040((__int64)&ptr, SHIDWORD(v11));
  sub_9B7040((__int64)&ptr, (int)v10);
  sub_9B7040((__int64)&ptr, SHIDWORD(v10));
  v12 = sub_2223360(a1 + 904, &ptr, &v74, off_2BE9FD0);
  if ( !v12 )
  {
    if ( v61 )
    {
      v51 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
      *(_QWORD *)v51 = 0;
      v52 = *(_BYTE *)(v51 + 18);
      *(_WORD *)(v51 + 16) = 16412;
      *(_QWORD *)(v51 + 32) = v10;
      v66 = v51 + 8;
      *(_BYTE *)(v51 + 18) = v52 & 0xF0 | 5;
      *(_QWORD *)(v51 + 8) = off_2BE70E0;
      *(_QWORD *)(v51 + 24) = v73;
      sub_2223210(a1 + 904, v51, v74, off_2BE9FD0);
      v12 = v66;
    }
    if ( ptr != v77 )
    {
      v64 = v12;
      free(ptr);
      v12 = v64;
    }
    *(_QWORD *)(a1 + 920) = v12;
    if ( !v12 )
      return nullptr;
    goto LABEL_84;
  }
  v10 = (char *)(v12 + 8);
  if ( ptr != v77 )
    free(ptr);
  if ( v10 )
  {
    ptr = v10;
    v13 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
    if ( v13 )
    {
      v14 = (char *)v13[1];
      if ( v14 )
        v10 = v14;
    }
    if ( *(char **)(a1 + 928) != v10 )
      goto LABEL_22;
    *(_BYTE *)(a1 + 936) = 1;
    v12 = (__int64)v10;
LABEL_84:
    v10 = (char *)v12;
    goto LABEL_22;
  }
  return v10;
}
