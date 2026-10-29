unsigned __int64 __fastcall sub_263CC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r13
  const char *v9; // rcx
  __int64 v10; // r13
  int v11; // edx
  _QWORD *v12; // rdi
  int v13; // r14d
  const char *v14; // r12
  unsigned __int64 v15; // rax
  size_t v16; // rax
  size_t v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rsi
  size_t v24; // rax
  unsigned __int64 v25; // r8
  size_t v26; // r9
  size_t v27; // r10
  __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  size_t v33; // r15
  char *v34; // r8
  size_t v35; // r9
  __int64 v36; // rsi
  __int64 v37; // rdx
  const char *v38; // rcx
  int v39; // eax
  size_t v40; // r15
  unsigned __int64 v41; // r9
  __int64 v42; // r8
  unsigned __int64 v43; // r14
  __int64 v44; // rsi
  unsigned __int64 v45; // r14
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rsi
  int v49; // eax
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // rax
  size_t v53; // rax
  unsigned __int64 v54; // r14
  size_t v55; // r15
  size_t v56; // r8
  __int64 v57; // rsi
  __int64 v58; // rdx
  int v59; // r15d
  const char *v60; // rcx
  char v62; // r14
  void *v63; // rdi
  size_t v64; // r13
  __int64 v65; // r8
  __int64 v66; // rsi
  __int64 v67; // r8
  __int64 v68; // rsi
  unsigned int v69; // ecx
  __int64 v70; // rsi
  unsigned __int64 v71; // r15
  __int64 v72; // rdi
  char *v73; // rax
  char *v74; // rdx
  char v75; // cl
  size_t v76; // [rsp+8h] [rbp-178h]
  size_t v77; // [rsp+10h] [rbp-170h]
  size_t v78; // [rsp+18h] [rbp-168h]
  unsigned __int64 v79; // [rsp+18h] [rbp-168h]
  __int64 v80; // [rsp+18h] [rbp-168h]
  char *v81; // [rsp+20h] [rbp-160h]
  __int64 v82; // [rsp+20h] [rbp-160h]
  size_t v83; // [rsp+20h] [rbp-160h]
  unsigned __int64 v84; // [rsp+20h] [rbp-160h]
  __int64 v85; // [rsp+20h] [rbp-160h]
  unsigned int v86; // [rsp+30h] [rbp-150h]
  __int64 v87; // [rsp+30h] [rbp-150h]
  __int64 v88; // [rsp+30h] [rbp-150h]
  __int64 v89; // [rsp+30h] [rbp-150h]
  __int64 v90; // [rsp+30h] [rbp-150h]
  unsigned __int64 v91; // [rsp+30h] [rbp-150h]
  unsigned __int64 v92; // [rsp+38h] [rbp-148h]
  unsigned int v93; // [rsp+44h] [rbp-13Ch]
  __int64 v94; // [rsp+48h] [rbp-138h]
  char *v95; // [rsp+50h] [rbp-130h]
  char *v96; // [rsp+50h] [rbp-130h]
  char *v97; // [rsp+50h] [rbp-130h]
  signed int v98; // [rsp+50h] [rbp-130h]
  char *v99; // [rsp+50h] [rbp-130h]
  __int64 v100; // [rsp+58h] [rbp-128h]
  unsigned int v101; // [rsp+58h] [rbp-128h]
  char v102[8]; // [rsp+68h] [rbp-118h] BYREF
  const char *v103; // [rsp+70h] [rbp-110h] BYREF
  __int128 v104; // [rsp+78h] [rbp-108h]
  const char *v105; // [rsp+90h] [rbp-F0h] BYREF
  __int128 v106; // [rsp+98h] [rbp-E8h]
  char *v107; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v108; // [rsp+B8h] [rbp-C8h]
  unsigned int *v109; // [rsp+D0h] [rbp-B0h] BYREF
  __int128 v110; // [rsp+D8h] [rbp-A8h]
  __int64 v111; // [rsp+F0h] [rbp-90h] BYREF
  unsigned __int64 v112; // [rsp+F8h] [rbp-88h]
  unsigned __int64 v113; // [rsp+100h] [rbp-80h]
  char *v114; // [rsp+110h] [rbp-70h]
  __int128 v115; // [rsp+118h] [rbp-68h]
  char s[19]; // [rsp+130h] [rbp-50h] BYREF
  char v117; // [rsp+143h] [rbp-3Dh] BYREF
  unsigned __int64 v118; // [rsp+148h] [rbp-38h]

  v118 = __readfsqword(0x28u);
  v104 = 0;
  v103 = nullptr;
  *(_DWORD *)(a2 + 32) = 0;
  if ( sub_260EF0(a1, (__int64)&v103, nullptr) > 0 )
    *(_DWORD *)(a2 + 32) = sub_25F570((void (***)(_QWORD, _QWORD, const char *, ...))a2, 0, nullptr, v103);
  sub_260F60(a1, a2);
  if ( !*(_BYTE *)(a1 + 208) )
  {
    *(_BYTE *)(a1 + 208) = 1;
    sub_33E140(*(_QWORD *)(a1 + 216), 22, a1 + 184, a1, v5, v6);
  }
  v7 = *(_QWORD *)(a1 + 184);
  v100 = v7;
  v8 = v7 + 24LL * *(_QWORD *)(a1 + 192);
  if ( v7 != v8 )
  {
    do
    {
      v9 = s1;
      if ( *(_QWORD *)(v100 + 8) )
        v9 = *(const char **)v100;
      (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "// %s\n", v9);
      v100 += 24;
    }
    while ( v8 != v100 );
  }
  if ( **(char **)(a1 + 8) < 0 )
  {
    (**(void (__fastcall ***)(__int64, _QWORD, void *))a2)(a2, 0, &unk_4190F2);
    ++*(_DWORD *)(a2 + 32);
  }
  v105 = nullptr;
  v106 = 0;
  sub_263810(a1, (__int64 *)&v105, v4, v7);
  v10 = get_merge_state() & 3;
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 604LL) & 0x800000;
  if ( v11 )
  {
    if ( (_DWORD)v10 )
      goto LABEL_15;
    goto LABEL_69;
  }
  v12 = *(_QWORD **)(a1 + 8);
  v13 = v12[58];
  if ( v13 <= 0 )
  {
LABEL_13:
    if ( (_DWORD)v10 || tag_strlen() >= (unsigned __int64)*(int *)(*(_QWORD *)(a1 + 216) + 600LL) )
      goto LABEL_15;
LABEL_69:
    v60 = s1;
    if ( (_QWORD)v106 )
      v60 = v105;
    (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "%s\n", v60);
    ++*(_DWORD *)(a2 + 32);
    goto LABEL_72;
  }
  while ( 1 )
  {
    v59 = v11;
    if ( *(_QWORD *)(sub_13D280(v12, v11) + 64) > 1u )
      break;
    v11 = v59 + 1;
    if ( v59 + 1 == v13 )
      goto LABEL_13;
    v12 = *(_QWORD **)(a1 + 8);
  }
LABEL_15:
  v94 = *(_QWORD *)(a1 + 8);
  v14 = (const char *)tag_skipcode();
  v15 = (unsigned __int64)&v14[strlen(v14)];
  if ( (unsigned __int64)(v14 + 2) < v15 && *(_BYTE *)(v15 - 2) == 1 )
    v15 -= 2LL;
  v16 = v15 - (_QWORD)v14;
  v107 = nullptr;
  v108 = 0;
  v17 = v16;
  if ( v16 )
  {
    v63 = nullptr;
    v64 = v16 + 1;
    if ( v16 != -1 )
    {
      v107 = (char *)qvector_reserve((__int64)&v107, 0, v16 + 1, 1);
      v63 = v107;
    }
    *(_QWORD *)&v108 = v64;
    memmove(v63, v14, v17);
    v107[v17] = 0;
  }
  v109 = nullptr;
  v110 = 0;
  sub_36D720(v102, v94, 0);
  sub_38A240(&v109, v107, v102);
  if ( !(_QWORD)v110 )
  {
    v62 = 0;
    goto LABEL_78;
  }
  v101 = 23;
  if ( *(_BYTE *)(v94 + 320) )
    v101 = 33;
  (**(void (__fastcall ***)(__int64, _QWORD, void *, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a2)(
    a2,
    0,
    &unk_41910C,
    v101,
    *v109,
    *v109,
    (__int64)v107,
    v101);
  v19 = v94;
  v20 = 1;
  ++*(_DWORD *)(a2 + 32);
  v21 = *(_QWORD *)(v94 + 1496);
  v111 = 0;
  v113 = 0;
  v93 = *(_DWORD *)(v21 + 596);
  v92 = *(int *)(v94 + 464);
  if ( (_QWORD)v110 )
  {
    while ( 1 )
    {
      v112 = 0;
      sub_32AA00(&v111, v101, v18, v19);
      v98 = v109[v20 - 1];
      if ( v20 - 1 >= v92 )
      {
        v50 = v112;
        if ( v112 )
        {
          v51 = v112 + 8;
          v52 = v112 - 1;
          if ( v112 >= v112 + 8 )
            goto LABEL_56;
          v65 = v112 + 7;
          v50 = v112 - 1;
        }
        else
        {
          v51 = 9;
          v65 = 8;
        }
        v66 = v111;
        if ( v113 < v51 )
        {
          v90 = v65;
          v111 = qvector_reserve((__int64)&v111, v111, v51, 1);
          v65 = v90;
          v66 = v111;
        }
        v112 = v51;
        v52 = v50;
        *(_BYTE *)(v66 + v65) = 0;
LABEL_56:
        *(_QWORD *)(v111 + v52) = 0x2020202020202020LL;
        v99 = &v107[v98];
        if ( v99 )
        {
          v53 = strlen(v99);
          v54 = v112;
          v55 = v53;
          v56 = v53;
          if ( v112 )
          {
            v54 = v112 - 1;
            v56 = v53 + v112 - 1;
          }
          v57 = v111;
          v58 = v56 + 1;
          if ( v113 < v56 + 1 )
          {
            v83 = v56;
            v89 = v56 + 1;
            v111 = qvector_reserve((__int64)&v111, v111, v58, 1);
            v56 = v83;
            v57 = v111;
            v58 = v89;
          }
          v112 = v58;
          *(_BYTE *)(v57 + v56) = 0;
          memmove((void *)(v54 + v111), v99, v55);
          sub_32AAE0(&v111, v101);
        }
        else
        {
LABEL_87:
          sub_32AAE0(&v111, v101);
        }
        v38 = (const char *)v111;
        goto LABEL_63;
      }
      if ( v20 >= (unsigned __int64)v110 )
      {
        v69 = v108 - 1;
        if ( !(_QWORD)v108 )
          v69 = 0;
        v86 = v69;
      }
      else
      {
        v86 = v109[v20];
      }
      v22 = sub_13D280((_QWORD *)v94, (int)v20 - 1);
      v23 = 0x4EC4EC4EC4EC4EC5LL * ((v22 - *(_QWORD *)(v94 + 432)) >> 3);
      if ( (int)v23 >= 0 && (unsigned __int64)(int)v23 < *(_QWORD *)(v94 + 440) )
      {
        v114 = nullptr;
        v115 = 0;
        tag_addr();
        v72 = (__int64)v114;
        v73 = s;
        v74 = v114;
        while ( 1 )
        {
          v75 = *v74++;
          *v73 = v75;
          if ( !v75 )
            break;
          if ( ++v73 == &v117 )
          {
            v117 = 0;
            break;
          }
        }
        if ( v72 )
        {
          *(_QWORD *)&v115 = 0;
          qfree(v72);
        }
      }
      v24 = strlen(s);
      v25 = v112;
      v26 = v24;
      v27 = v24;
      if ( v112 )
      {
        v25 = v112 - 1;
        v27 = v24 + v112 - 1;
      }
      v28 = v111;
      v29 = v27 + 1;
      if ( v113 < v27 + 1 )
      {
        v76 = v24;
        v77 = v27;
        v79 = v25;
        v82 = v27 + 1;
        v111 = qvector_reserve((__int64)&v111, v111, v29, 1);
        v26 = v76;
        v28 = v111;
        v27 = v77;
        v25 = v79;
        v29 = v82;
      }
      v112 = v29;
      *(_BYTE *)(v28 + v27) = 0;
      memmove((void *)(v25 + v111), s, v26);
      v30 = v112;
      if ( v112 )
      {
        v31 = v112 + 8;
        v32 = v112 - 1;
        if ( v112 >= v112 + 8 )
          goto LABEL_34;
        v67 = v112 + 7;
        v30 = v112 - 1;
      }
      else
      {
        v31 = 9;
        v67 = 8;
      }
      v68 = v111;
      if ( v113 < v31 )
      {
        v80 = v67;
        v84 = v31;
        v111 = qvector_reserve((__int64)&v111, v111, v31, 1);
        v67 = v80;
        v68 = v111;
        v31 = v84;
      }
      v112 = v31;
      v32 = v30;
      *(_BYTE *)(v68 + v67) = 0;
LABEL_34:
      *(_QWORD *)(v111 + v32) = 0x2020202020202020LL;
      v33 = (int)(v86 - v98);
      v34 = &v107[v98];
      v95 = (char *)v112;
      v35 = v33;
      if ( v112 )
      {
        v95 = (char *)(v112 - 1);
        v35 = v33 + v112 - 1;
      }
      v36 = v111;
      v37 = v35 + 1;
      if ( v113 < v35 + 1 )
      {
        v78 = v35;
        v81 = v34;
        v88 = v35 + 1;
        v111 = qvector_reserve((__int64)&v111, v111, v37, 1);
        v35 = v78;
        v36 = v111;
        v34 = v81;
        v37 = v88;
      }
      v112 = v37;
      *(_BYTE *)(v36 + v35) = 0;
      memmove(&v95[v111], v34, v33);
      v96 = (char *)v112;
      if ( v112 > 1 )
      {
        v70 = v111;
        if ( *(_BYTE *)(v111 + v112 - 2) == 32 )
        {
          v71 = v112 - 1;
          if ( (__int64)(v112 - 1) <= 1 )
          {
            if ( v111 )
            {
              v112 = 0;
              qfree(v111);
              v111 = 0;
              v113 = 0;
            }
          }
          else
          {
            if ( v113 < v71 )
            {
              v111 = qvector_reserve((__int64)&v111, v111, v112 - 1, 1);
              v70 = v111;
            }
            v112 = v71;
            v96[v70 - 2] = 0;
          }
        }
      }
      if ( *(_QWORD *)(v22 + 64) <= 1u )
        goto LABEL_87;
      v97 = *(char **)(v22 + 56);
      sub_32AAE0(&v111, v101);
      v38 = (const char *)v111;
      if ( v97 )
      {
        v39 = v93 - tag_strlen();
        if ( v39 > 0 )
        {
          v40 = v39;
          if ( !v112 )
          {
            v41 = v39 + 1LL;
            v42 = v39;
            v43 = 0;
            goto LABEL_44;
          }
          v43 = v112 - 1;
          v42 = v39 + v112 - 1;
          v41 = v39 + v112;
          if ( v112 < v41 )
          {
LABEL_44:
            v44 = v111;
            if ( v113 < v41 )
            {
              v85 = v42;
              v91 = v41;
              v111 = qvector_reserve((__int64)&v111, v111, v41, 1);
              v42 = v85;
              v44 = v111;
              v41 = v91;
            }
            v112 = v41;
            *(_BYTE *)(v44 + v42) = 0;
          }
          memset((void *)(v43 + v111), 32, v40);
        }
        v45 = v112;
        if ( v112 )
        {
          v46 = v112 + 3;
          v47 = v112 + 4;
          v48 = v111;
          v45 = v112 - 1;
          if ( v113 >= v112 + 4 )
          {
LABEL_50:
            v112 = v47;
            *(_BYTE *)(v48 + v46) = 0;
            *(_DWORD *)(v111 + v45) = 791612417;
            v49 = *(_DWORD *)(a2 + 32)
                + sub_25F9E0(
                    0,
                    0,
                    0,
                    (void (__fastcall ***)(_QWORD, _QWORD, void *, __int64))a2,
                    &v111,
                    v93,
                    v93 + 3,
                    v97);
            goto LABEL_51;
          }
        }
        else
        {
          v48 = v111;
          v47 = 5;
          v46 = 4;
          if ( v113 >= 5 )
            goto LABEL_50;
        }
        v87 = v47;
        v111 = qvector_reserve((__int64)&v111, v48, v47, 1);
        v47 = v87;
        v48 = v111;
        goto LABEL_50;
      }
LABEL_63:
      (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "%s\n", v38);
      v49 = *(_DWORD *)(a2 + 32) + 1;
LABEL_51:
      *(_DWORD *)(a2 + 32) = v49;
      if ( v20 >= (unsigned __int64)v110 )
      {
        if ( v111 )
        {
          v112 = 0;
          qfree(v111);
        }
        break;
      }
      ++v20;
    }
  }
  v62 = 1;
LABEL_78:
  clear_tinfo_t();
  if ( v109 )
  {
    *(_QWORD *)&v110 = 0;
    qfree((__int64)v109);
  }
  if ( v107 )
  {
    *(_QWORD *)&v108 = 0;
    qfree((__int64)v107);
  }
  if ( !v62 )
    goto LABEL_69;
LABEL_72:
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree((__int64)v105);
  }
  if ( v103 )
  {
    *(_QWORD *)&v104 = 0;
    qfree((__int64)v103);
  }
  return v118 - __readfsqword(0x28u);
}
