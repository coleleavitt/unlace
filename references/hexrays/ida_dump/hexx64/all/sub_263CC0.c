unsigned __int64 __fastcall sub_263CC0(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int v5; // r9d
  __int64 i; // r13
  const char *v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdi
  int v14; // r14d
  const char *v15; // rdi
  const char *v16; // r12
  unsigned __int64 v17; // rax
  size_t v18; // rax
  size_t v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rsi
  size_t v26; // rax
  unsigned __int64 v27; // r8
  size_t v28; // r9
  size_t v29; // r10
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  size_t v35; // r15
  const void *v36; // r8
  size_t v37; // r9
  __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  const char *v40; // rcx
  int v41; // eax
  size_t v42; // r15
  unsigned __int64 v43; // r9
  __int64 v44; // r8
  unsigned __int64 v45; // r14
  __int64 v46; // rsi
  unsigned __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rsi
  int v51; // eax
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // r15
  unsigned __int64 v54; // rax
  size_t v55; // rax
  unsigned __int64 v56; // r14
  size_t v57; // r15
  size_t v58; // r8
  __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  unsigned int v61; // r15d
  int v62; // r15d
  const char *v63; // rcx
  char v65; // r14
  void *v66; // rdi
  size_t v67; // r13
  __int64 v68; // r8
  __int64 v69; // rsi
  __int64 v70; // r8
  __int64 v71; // rsi
  unsigned int v72; // ecx
  __int64 v73; // rsi
  unsigned __int64 v74; // r15
  char *v75; // rdi
  char *v76; // rax
  char *v77; // rdx
  char v78; // cl
  size_t v79; // [rsp+8h] [rbp-178h]
  size_t v80; // [rsp+10h] [rbp-170h]
  size_t v81; // [rsp+18h] [rbp-168h]
  unsigned __int64 v82; // [rsp+18h] [rbp-168h]
  __int64 v83; // [rsp+18h] [rbp-168h]
  const void *v84; // [rsp+20h] [rbp-160h]
  unsigned __int64 v85; // [rsp+20h] [rbp-160h]
  size_t v86; // [rsp+20h] [rbp-160h]
  unsigned __int64 v87; // [rsp+20h] [rbp-160h]
  __int64 v88; // [rsp+20h] [rbp-160h]
  unsigned int v89; // [rsp+30h] [rbp-150h]
  __int64 v90; // [rsp+30h] [rbp-150h]
  unsigned __int64 v91; // [rsp+30h] [rbp-150h]
  unsigned __int64 v92; // [rsp+30h] [rbp-150h]
  __int64 v93; // [rsp+30h] [rbp-150h]
  unsigned __int64 v94; // [rsp+30h] [rbp-150h]
  unsigned __int64 v95; // [rsp+38h] [rbp-148h]
  int v96; // [rsp+44h] [rbp-13Ch]
  __int64 v97; // [rsp+48h] [rbp-138h]
  char *v98; // [rsp+50h] [rbp-130h]
  char *v99; // [rsp+50h] [rbp-130h]
  char *v100; // [rsp+50h] [rbp-130h]
  signed int v101; // [rsp+50h] [rbp-130h]
  char *v102; // [rsp+50h] [rbp-130h]
  __int64 v103; // [rsp+58h] [rbp-128h]
  unsigned int v104; // [rsp+58h] [rbp-128h]
  char v105[8]; // [rsp+68h] [rbp-118h] BYREF
  const char *v106; // [rsp+70h] [rbp-110h] BYREF
  __int128 v107; // [rsp+78h] [rbp-108h]
  const char *v108; // [rsp+90h] [rbp-F0h] BYREF
  __int128 v109; // [rsp+98h] [rbp-E8h]
  __int64 v110; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v111; // [rsp+B8h] [rbp-C8h]
  unsigned int *v112; // [rsp+D0h] [rbp-B0h] BYREF
  __int128 v113; // [rsp+D8h] [rbp-A8h]
  __int64 v114; // [rsp+F0h] [rbp-90h] BYREF
  unsigned __int64 v115; // [rsp+F8h] [rbp-88h]
  unsigned __int64 v116; // [rsp+100h] [rbp-80h]
  char *v117; // [rsp+110h] [rbp-70h] BYREF
  __int128 v118; // [rsp+118h] [rbp-68h]
  char s[19]; // [rsp+130h] [rbp-50h] BYREF
  char v120; // [rsp+143h] [rbp-3Dh] BYREF
  unsigned __int64 v121; // [rsp+148h] [rbp-38h]

  v121 = __readfsqword(0x28u);
  v107 = 0;
  v106 = nullptr;
  *(_DWORD *)(a2 + 32) = 0;
  if ( sub_260EF0(a1, (__int64)&v106, nullptr) > 0 )
    *(_DWORD *)(a2 + 32) = sub_25F570((void (***)(_QWORD, _QWORD, const char *, ...))a2, 0, nullptr, v106);
  sub_260F60(a1, a2);
  if ( !*(_BYTE *)(a1 + 208) )
  {
    *(_BYTE *)(a1 + 208) = 1;
    sub_33E140(*(_QWORD *)(a1 + 216), 22, a1 + 184, a1, v4, v5);
  }
  v103 = *(_QWORD *)(a1 + 184);
  for ( i = v103 + 24LL * *(_QWORD *)(a1 + 192); i != v103; v103 += 24 )
  {
    v7 = s1;
    if ( *(_QWORD *)(v103 + 8) )
      v7 = *(const char **)v103;
    (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "// %s\n", v7);
  }
  if ( **(char **)(a1 + 8) < 0 )
  {
    (**(void (__fastcall ***)(__int64, _QWORD, void *))a2)(a2, 0, &unk_4190F2);
    ++*(_DWORD *)(a2 + 32);
  }
  v8 = (unsigned __int64)&v108;
  v108 = nullptr;
  v109 = 0;
  sub_263810(a1, (__int64 *)&v108);
  v11 = get_merge_state(a1, &v108, v9, v10) & 3;
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 604LL) & 0x800000;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 216) + 604LL) & 0x800000) != 0 )
  {
    if ( !(_DWORD)v11 )
    {
LABEL_71:
      v63 = s1;
      if ( (_QWORD)v109 )
        v63 = v108;
      (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "%s\n", v63);
      ++*(_DWORD *)(a2 + 32);
      goto LABEL_74;
    }
  }
  else
  {
    v13 = *(_QWORD **)(a1 + 8);
    v14 = v13[58];
    if ( v14 > 0 )
    {
      while ( 1 )
      {
        v8 = (unsigned int)v12;
        v62 = v12;
        if ( *(_QWORD *)(sub_13D280(v13, v12) + 64) > 1u )
          break;
        v61 = v62 + 1;
        v12 = v61;
        if ( v61 == v14 )
          goto LABEL_13;
        v13 = *(_QWORD **)(a1 + 8);
      }
    }
    else
    {
LABEL_13:
      if ( !(_DWORD)v11 )
      {
        v15 = s1;
        if ( (_QWORD)v109 )
          v15 = v108;
        v12 = tag_strlen(v15);
        if ( v12 < *(int *)(*(_QWORD *)(a1 + 216) + 600LL) )
          goto LABEL_71;
      }
    }
  }
  v97 = *(_QWORD *)(a1 + 8);
  v16 = (const char *)tag_skipcode(v108, v8, v12);
  v17 = (unsigned __int64)&v16[strlen(v16)];
  if ( (unsigned __int64)(v16 + 2) < v17 && *(_BYTE *)(v17 - 2) == 1 )
    v17 -= 2LL;
  v18 = v17 - (_QWORD)v16;
  v110 = 0;
  v111 = 0;
  v19 = v18;
  if ( v18 )
  {
    v66 = nullptr;
    v67 = v18 + 1;
    if ( v18 != -1 )
    {
      v110 = qvector_reserve(&v110, 0, v18 + 1, 1);
      v66 = (void *)v110;
    }
    *(_QWORD *)&v111 = v67;
    memmove(v66, v16, v19);
    *(_BYTE *)(v110 + v19) = 0;
  }
  v112 = nullptr;
  v113 = 0;
  sub_36D720(v105, v97, 0);
  sub_38A240(&v112, v110, v105);
  if ( !(_QWORD)v113 )
  {
    v65 = 0;
    goto LABEL_80;
  }
  v104 = 23;
  if ( *(_BYTE *)(v97 + 320) )
    v104 = 33;
  (**(void (__fastcall ***)(__int64, _QWORD, void *, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a2)(
    a2,
    0,
    &unk_41910C,
    v104,
    *v112,
    *v112,
    v110,
    v104);
  v21 = v97;
  v22 = 1;
  ++*(_DWORD *)(a2 + 32);
  v23 = *(_QWORD *)(v97 + 1496);
  v114 = 0;
  v116 = 0;
  v96 = *(_DWORD *)(v23 + 596);
  v95 = *(int *)(v97 + 464);
  if ( (_QWORD)v113 )
  {
    while ( 1 )
    {
      v115 = 0;
      sub_32AA00(&v114, v104, v20, v21);
      v101 = v112[v22 - 1];
      if ( v22 - 1 >= v95 )
      {
        v52 = v115;
        if ( v115 )
        {
          v53 = v115 + 8;
          v54 = v115 - 1;
          if ( v115 >= v115 + 8 )
            goto LABEL_58;
          v68 = v115 + 7;
          v52 = v115 - 1;
        }
        else
        {
          v53 = 9;
          v68 = 8;
        }
        v69 = v114;
        if ( v116 < v53 )
        {
          v93 = v68;
          v114 = qvector_reserve(&v114, v114, v53, 1);
          v68 = v93;
          v69 = v114;
        }
        v115 = v53;
        v54 = v52;
        *(_BYTE *)(v69 + v68) = 0;
LABEL_58:
        *(_QWORD *)(v114 + v54) = 0x2020202020202020LL;
        v102 = (char *)(v110 + v101);
        if ( v102 )
        {
          v55 = strlen(v102);
          v56 = v115;
          v57 = v55;
          v58 = v55;
          if ( v115 )
          {
            v56 = v115 - 1;
            v58 = v55 + v115 - 1;
          }
          v59 = v114;
          v60 = v58 + 1;
          if ( v116 < v58 + 1 )
          {
            v86 = v58;
            v92 = v58 + 1;
            v114 = qvector_reserve(&v114, v114, v60, 1);
            v58 = v86;
            v59 = v114;
            v60 = v92;
          }
          v115 = v60;
          *(_BYTE *)(v59 + v58) = 0;
          memmove((void *)(v56 + v114), v102, v57);
          sub_32AAE0(&v114, v104);
        }
        else
        {
LABEL_89:
          sub_32AAE0(&v114, v104);
        }
        v40 = (const char *)v114;
        goto LABEL_65;
      }
      if ( v22 >= (unsigned __int64)v113 )
      {
        v72 = v111 - 1;
        if ( !(_QWORD)v111 )
          v72 = 0;
        v89 = v72;
      }
      else
      {
        v89 = v112[v22];
      }
      v24 = sub_13D280((_QWORD *)v97, (int)v22 - 1);
      v25 = 0x4EC4EC4EC4EC4EC5LL * ((v24 - *(_QWORD *)(v97 + 432)) >> 3);
      if ( (int)v25 >= 0 && (unsigned __int64)(int)v25 < *(_QWORD *)(v97 + 440) )
      {
        v117 = nullptr;
        v118 = 0;
        tag_addr(&v117, (int)(v25 | 0x40000000), 0);
        v75 = v117;
        v76 = s;
        v77 = v117;
        while ( 1 )
        {
          v78 = *v77++;
          *v76 = v78;
          if ( !v78 )
            break;
          if ( ++v76 == &v120 )
          {
            v120 = 0;
            break;
          }
        }
        if ( v75 )
        {
          *(_QWORD *)&v118 = 0;
          qfree(v75);
        }
      }
      v26 = strlen(s);
      v27 = v115;
      v28 = v26;
      v29 = v26;
      if ( v115 )
      {
        v27 = v115 - 1;
        v29 = v26 + v115 - 1;
      }
      v30 = v114;
      v31 = v29 + 1;
      if ( v116 < v29 + 1 )
      {
        v79 = v26;
        v80 = v29;
        v82 = v27;
        v85 = v29 + 1;
        v114 = qvector_reserve(&v114, v114, v31, 1);
        v28 = v79;
        v30 = v114;
        v29 = v80;
        v27 = v82;
        v31 = v85;
      }
      v115 = v31;
      *(_BYTE *)(v30 + v29) = 0;
      memmove((void *)(v27 + v114), s, v28);
      v32 = v115;
      if ( v115 )
      {
        v33 = v115 + 8;
        v34 = v115 - 1;
        if ( v115 >= v115 + 8 )
          goto LABEL_36;
        v70 = v115 + 7;
        v32 = v115 - 1;
      }
      else
      {
        v33 = 9;
        v70 = 8;
      }
      v71 = v114;
      if ( v116 < v33 )
      {
        v83 = v70;
        v87 = v33;
        v114 = qvector_reserve(&v114, v114, v33, 1);
        v70 = v83;
        v71 = v114;
        v33 = v87;
      }
      v115 = v33;
      v34 = v32;
      *(_BYTE *)(v71 + v70) = 0;
LABEL_36:
      *(_QWORD *)(v114 + v34) = 0x2020202020202020LL;
      v35 = (int)(v89 - v101);
      v36 = (const void *)(v110 + v101);
      v98 = (char *)v115;
      v37 = v35;
      if ( v115 )
      {
        v98 = (char *)(v115 - 1);
        v37 = v35 + v115 - 1;
      }
      v38 = v114;
      v39 = v37 + 1;
      if ( v116 < v37 + 1 )
      {
        v81 = v37;
        v84 = v36;
        v91 = v37 + 1;
        v114 = qvector_reserve(&v114, v114, v39, 1);
        v37 = v81;
        v38 = v114;
        v36 = v84;
        v39 = v91;
      }
      v115 = v39;
      *(_BYTE *)(v38 + v37) = 0;
      memmove(&v98[v114], v36, v35);
      v99 = (char *)v115;
      if ( v115 > 1 )
      {
        v73 = v114;
        if ( *(_BYTE *)(v114 + v115 - 2) == 32 )
        {
          v74 = v115 - 1;
          if ( (__int64)(v115 - 1) <= 1 )
          {
            if ( v114 )
            {
              v115 = 0;
              qfree(v114);
              v114 = 0;
              v116 = 0;
            }
          }
          else
          {
            if ( v116 < v74 )
            {
              v114 = qvector_reserve(&v114, v114, v115 - 1, 1);
              v73 = v114;
            }
            v115 = v74;
            v99[v73 - 2] = 0;
          }
        }
      }
      if ( *(_QWORD *)(v24 + 64) <= 1u )
        goto LABEL_89;
      v100 = *(char **)(v24 + 56);
      sub_32AAE0(&v114, v104);
      v40 = (const char *)v114;
      if ( v100 )
      {
        v41 = v96 - tag_strlen(v114);
        if ( v41 > 0 )
        {
          v42 = v41;
          if ( !v115 )
          {
            v43 = v41 + 1LL;
            v44 = v41;
            v45 = 0;
            goto LABEL_46;
          }
          v45 = v115 - 1;
          v44 = v41 + v115 - 1;
          v43 = v41 + v115;
          if ( v115 < v43 )
          {
LABEL_46:
            v46 = v114;
            if ( v116 < v43 )
            {
              v88 = v44;
              v94 = v43;
              v114 = qvector_reserve(&v114, v114, v43, 1);
              v44 = v88;
              v46 = v114;
              v43 = v94;
            }
            v115 = v43;
            *(_BYTE *)(v46 + v44) = 0;
          }
          memset((void *)(v45 + v114), 32, v42);
        }
        v47 = v115;
        if ( v115 )
        {
          v48 = v115 + 3;
          v49 = v115 + 4;
          v50 = v114;
          v47 = v115 - 1;
          if ( v116 >= v115 + 4 )
          {
LABEL_52:
            v115 = v49;
            *(_BYTE *)(v50 + v48) = 0;
            *(_DWORD *)(v114 + v47) = 791612417;
            v51 = *(_DWORD *)(a2 + 32)
                + sub_25F9E0(
                    0,
                    0,
                    0,
                    (void (__fastcall ***)(_QWORD, _QWORD, void *, __int64))a2,
                    &v114,
                    v96,
                    v96 + 3,
                    v100);
            goto LABEL_53;
          }
        }
        else
        {
          v50 = v114;
          v49 = 5;
          v48 = 4;
          if ( v116 >= 5 )
            goto LABEL_52;
        }
        v90 = v49;
        v114 = qvector_reserve(&v114, v50, v49, 1);
        v49 = v90;
        v50 = v114;
        goto LABEL_52;
      }
LABEL_65:
      (**(void (***)(__int64, _QWORD, const char *, ...))a2)(a2, 0, "%s\n", v40);
      v51 = *(_DWORD *)(a2 + 32) + 1;
LABEL_53:
      *(_DWORD *)(a2 + 32) = v51;
      if ( v22 >= (unsigned __int64)v113 )
      {
        if ( v114 )
        {
          v115 = 0;
          qfree(v114);
        }
        break;
      }
      ++v22;
    }
  }
  v65 = 1;
LABEL_80:
  clear_tinfo_t(v105);
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    qfree(v112);
  }
  if ( v110 )
  {
    *(_QWORD *)&v111 = 0;
    qfree(v110);
  }
  if ( !v65 )
    goto LABEL_71;
LABEL_74:
  if ( v108 )
  {
    *(_QWORD *)&v109 = 0;
    qfree(v108);
  }
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree(v106);
  }
  return v121 - __readfsqword(0x28u);
}
