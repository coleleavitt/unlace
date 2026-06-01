void *__fastcall sub_21D8D10(__int64 a1)
{
  size_t v1; // rax
  char *v2; // r12
  char *v3; // rbx
  size_t v4; // rbp
  size_t v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // rbp
  void *v11; // r14
  char *v13; // rax
  char v14; // dl
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // rbp
  char *v18; // r13
  __int64 *v19; // rax
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 *v28; // rax
  void *v29; // rax
  __int64 v30; // r12
  char *v31; // rax
  char *v32; // rcx
  char v33; // dl
  int v34; // ebp
  int v35; // r13d
  int v36; // esi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  char v39; // dl
  char *v40; // rdx
  char *v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rbx
  unsigned __int64 *v44; // rax
  __int64 v45; // rdx
  char v46; // dl
  unsigned __int64 v47; // rax
  char v48; // dl
  unsigned __int64 v49; // rax
  char v50; // dl
  __int64 *v51; // [rsp+8h] [rbp-110h]
  unsigned __int64 *v52; // [rsp+10h] [rbp-108h]
  __int64 v53; // [rsp+18h] [rbp-100h]
  __int64 v54; // [rsp+20h] [rbp-F8h]
  unsigned __int64 *v55; // [rsp+20h] [rbp-F8h]
  char v56; // [rsp+28h] [rbp-F0h]
  char v57; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v58; // [rsp+28h] [rbp-F0h]
  char v59; // [rsp+28h] [rbp-F0h]
  char v60; // [rsp+36h] [rbp-E2h]
  char v61; // [rsp+37h] [rbp-E1h]
  unsigned __int64 v62; // [rsp+38h] [rbp-E0h]
  char *v63; // [rsp+40h] [rbp-D8h] BYREF
  void **p_ptr; // [rsp+48h] [rbp-D0h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-C0h]
  _BYTE v67[184]; // [rsp+60h] [rbp-B8h] BYREF

  v1 = j__strlen("rQ");
  v2 = *(char **)(a1 + 8);
  v3 = *(char **)a1;
  v4 = v1;
  v5 = (size_t)&v2[-*(_QWORD *)a1];
  if ( sub_20D1BF0(v5, *(const void **)a1, v1, "rQ") )
  {
    v41 = &v3[v4];
    v42 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v41;
    v43 = v42 >> 3;
    while ( v41 == v2 || *v41 != 95 )
    {
      ptr = (void *)sub_21DFD40(a1);
      if ( !ptr )
        return nullptr;
      sub_20D8690((char **)(a1 + 16), (__int64 *)&ptr);
      v41 = *(char **)a1;
      v2 = *(char **)(a1 + 8);
    }
    *(_QWORD *)a1 = v41 + 1;
    v44 = (unsigned __int64 *)sub_21D4550((_QWORD *)a1, v43, v6, v7, v8, v9);
    v2 = *(char **)(a1 + 8);
    v52 = v44;
    v13 = *(char **)a1;
    v53 = v45;
    goto LABEL_6;
  }
  v10 = j__strlen("rq");
  if ( sub_20D1BF0(v5, v3, v10, "rq") )
  {
    v53 = 0;
    v13 = &v3[v10];
    *(_QWORD *)a1 = &v3[v10];
    v52 = nullptr;
LABEL_6:
    v54 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
    while ( 1 )
    {
      v63 = nullptr;
      if ( v13 == v2 )
        return nullptr;
      v14 = *v13;
      if ( *v13 != 88 )
      {
        if ( v14 == 84 )
        {
          *(_QWORD *)a1 = v13 + 1;
          v37 = sub_21DFD40(a1);
          v16 = v37;
          if ( !v37 )
            return nullptr;
          ptr = v67;
          v17 = a1 + 904;
          v51 = (__int64 *)(a1 + 808);
          v59 = *(_BYTE *)(a1 + 937);
          v66 = 0x2000000000LL;
          sub_21D0240((__int64)&ptr, 0x55u, v37);
          v18 = (char *)sub_2223360(a1 + 904, &ptr, &p_ptr, off_2BE9FD0);
          if ( v18 )
            goto LABEL_13;
          if ( v59 )
          {
            v38 = sub_21D40A0(v51, 32, 3u);
            v39 = *(_BYTE *)(v38 + 18);
            *(_QWORD *)v38 = 0;
            v18 = (char *)(v38 + 8);
            *(_WORD *)(v38 + 16) = 16469;
            *(_BYTE *)(v38 + 18) = v39 & 0xF0 | 5;
            v40 = (char *)&unk_2BE8570;
            goto LABEL_47;
          }
        }
        else
        {
          if ( v14 != 81 )
            return nullptr;
          *(_QWORD *)a1 = v13 + 1;
          v15 = sub_21D94E0(a1);
          v16 = v15;
          if ( !v15 )
            return nullptr;
          ptr = v67;
          v17 = a1 + 904;
          v51 = (__int64 *)(a1 + 808);
          v56 = *(_BYTE *)(a1 + 937);
          v66 = 0x2000000000LL;
          sub_21D0240((__int64)&ptr, 0x56u, v15);
          v18 = (char *)sub_2223360(a1 + 904, &ptr, &p_ptr, off_2BE9FD0);
          if ( v18 )
          {
LABEL_13:
            v18 += 8;
            if ( ptr != v67 )
              free(ptr);
            if ( !v18 )
              return nullptr;
            ptr = v18;
            v19 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
            if ( v19 )
            {
              v20 = (char *)v19[1];
              if ( v20 )
                v18 = v20;
            }
            if ( *(char **)(a1 + 928) == v18 )
              *(_BYTE *)(a1 + 936) = 1;
            goto LABEL_21;
          }
          if ( v56 )
          {
            v38 = sub_21D40A0(v51, 32, 3u);
            v46 = *(_BYTE *)(v38 + 18);
            *(_QWORD *)v38 = 0;
            v18 = (char *)(v38 + 8);
            *(_WORD *)(v38 + 16) = 16470;
            *(_BYTE *)(v38 + 18) = v46 & 0xF0 | 5;
            v40 = (char *)&unk_2BE85D0;
LABEL_47:
            *(_QWORD *)(v38 + 24) = v16;
            *(_QWORD *)(v38 + 8) = v40 + 16;
LABEL_48:
            sub_2223210(v17, v38, p_ptr, off_2BE9FD0);
            goto LABEL_40;
          }
        }
        goto LABEL_40;
      }
      *(_QWORD *)a1 = v13 + 1;
      v30 = sub_21D94E0(a1);
      if ( !v30 )
        return nullptr;
      v31 = *(char **)a1;
      v32 = *(char **)(a1 + 8);
      if ( *(char **)a1 == v32 )
      {
        LODWORD(v58) = 0;
        v35 = 0;
        v34 = 0;
        v61 = 0;
        v62 = 0;
        goto LABEL_38;
      }
      v33 = *v31;
      v34 = 0;
      v61 = 0;
      if ( *v31 == 78 )
      {
        *(_QWORD *)a1 = v31 + 1;
        if ( v32 == v31 + 1 )
        {
          LODWORD(v58) = 0;
          v35 = 0;
          v34 = 1;
          v61 = 1;
          v62 = 0;
          goto LABEL_38;
        }
        v33 = v31[1];
        v34 = 1;
        ++v31;
        v61 = 1;
      }
      if ( v33 == 82 )
      {
        *(_QWORD *)a1 = v31 + 1;
        v47 = (unsigned __int64)sub_21D8010(a1, 0);
        v62 = v47;
        if ( !v47 )
          return nullptr;
        v35 = v47;
        v58 = HIDWORD(v47);
      }
      else
      {
        LODWORD(v58) = 0;
        v35 = 0;
        v62 = 0;
      }
LABEL_38:
      ptr = v67;
      v51 = (__int64 *)(a1 + 808);
      v60 = *(_BYTE *)(a1 + 937);
      v66 = 0x2000000000LL;
      sub_9B7040((__int64)&ptr, 84);
      sub_21CFFC0((__int64)&ptr);
      sub_9B7040((__int64)&ptr, v30);
      sub_9B7040((__int64)&ptr, SHIDWORD(v30));
      v36 = v34;
      v17 = a1 + 904;
      sub_9B7040((__int64)&ptr, v36);
      sub_21CFFC0((__int64)&ptr);
      sub_9B7040((__int64)&ptr, v35);
      sub_9B7040((__int64)&ptr, v58);
      v18 = (char *)sub_2223360(a1 + 904, &ptr, &p_ptr, off_2BE9FD0);
      if ( v18 )
        goto LABEL_13;
      if ( v60 )
      {
        v38 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
        v48 = *(_BYTE *)(v38 + 18);
        *(_QWORD *)v38 = 0;
        v18 = (char *)(v38 + 8);
        *(_BYTE *)(v38 + 32) = v61;
        *(_WORD *)(v38 + 16) = 16468;
        *(_QWORD *)(v38 + 24) = v30;
        *(_BYTE *)(v38 + 18) = v48 & 0xF0 | 5;
        *(_QWORD *)(v38 + 40) = v62;
        *(_QWORD *)(v38 + 8) = off_2BE8520;
        goto LABEL_48;
      }
LABEL_40:
      if ( ptr != v67 )
        free(ptr);
      *(_QWORD *)(a1 + 920) = v18;
LABEL_21:
      v63 = v18;
      if ( !v18 )
        return nullptr;
      sub_20D8690((char **)(a1 + 16), (__int64 *)&v63);
      v13 = *(char **)a1;
      v2 = *(char **)(a1 + 8);
      if ( *(char **)a1 != v2 && *v13 == 69 )
      {
        *(_QWORD *)a1 = v13 + 1;
        v55 = (unsigned __int64 *)sub_21D4550((_QWORD *)a1, v54, v21, v22, v23, v24);
        v26 = v25;
        v57 = *(_BYTE *)(a1 + 937);
        v66 = 0x2000000000LL;
        ptr = v67;
        p_ptr = &ptr;
        sub_9B7040((__int64)&ptr, 83);
        sub_21CFFC0((__int64)&ptr);
        sub_21D0B50(&p_ptr, v52, v53);
        sub_21D0B50(&p_ptr, v55, v26);
        v27 = sub_2223360(v17, &ptr, &p_ptr, off_2BE9FD0);
        v11 = (void *)v27;
        if ( v27 )
        {
          v11 = (void *)(v27 + 8);
          if ( ptr != v67 )
            free(ptr);
          if ( v11 )
          {
            ptr = v11;
            v28 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
            if ( v28 )
            {
              v29 = (void *)v28[1];
              if ( v29 )
                v11 = v29;
            }
            if ( *(void **)(a1 + 928) == v11 )
              *(_BYTE *)(a1 + 936) = 1;
          }
        }
        else
        {
          if ( v57 )
          {
            v49 = sub_21D40A0(v51, 56, 3u);
            *(_WORD *)(v49 + 16) = 16467;
            v50 = *(_BYTE *)(v49 + 18);
            v11 = (void *)(v49 + 8);
            *(_QWORD *)(v49 + 24) = v52;
            *(_QWORD *)v49 = 0;
            *(_QWORD *)(v49 + 32) = v53;
            *(_BYTE *)(v49 + 18) = v50 & 0xF0 | 5;
            *(_QWORD *)(v49 + 40) = v55;
            *(_QWORD *)(v49 + 48) = v26;
            *(_QWORD *)(v49 + 8) = off_2BE84C0;
            sub_2223210(v17, v49, p_ptr, off_2BE9FD0);
          }
          if ( ptr != v67 )
            free(ptr);
          *(_QWORD *)(a1 + 920) = v11;
        }
        return v11;
      }
    }
  }
  return nullptr;
}
