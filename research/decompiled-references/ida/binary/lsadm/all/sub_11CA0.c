__int64 __fastcall sub_11CA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // r15
  const char *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r14
  int v25; // edi
  __int64 v26; // rbx
  void *v27; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  _DWORD *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rbx
  const char *v34; // r8
  void *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  void *v38; // rsi
  __int64 v39; // rbx
  void *v40; // rsi
  __int64 v41; // rax
  __int64 *v42; // rbx
  __int64 v43; // r12
  __int64 v44; // r13
  __int64 v45; // rax
  __int64 v46; // rsi
  _DWORD *v47; // rdi
  __int64 v48; // rsi
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  _DWORD *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rsi
  __int64 v55; // r12
  _QWORD *v56; // r14
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 *v59; // rbx
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // rsi
  _DWORD *v63; // rdi
  __int64 v64; // rsi
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  _DWORD *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rbx
  __int64 v72; // r14
  __int64 v73; // r14
  __int64 v74; // r14
  __int64 v75; // r14
  _QWORD *v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r14
  _DWORD *v82; // rsi
  __int64 v83; // rax
  __int64 *v84; // r14
  _DWORD *v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  const char *src; // [rsp+10h] [rbp-C0h]
  __int64 v96; // [rsp+20h] [rbp-B0h]
  __int64 v97; // [rsp+20h] [rbp-B0h]
  size_t n; // [rsp+28h] [rbp-A8h]
  size_t nb; // [rsp+28h] [rbp-A8h]
  size_t na; // [rsp+28h] [rbp-A8h]
  __int64 v101; // [rsp+30h] [rbp-A0h]
  __int64 v102; // [rsp+30h] [rbp-A0h]
  __int64 v103; // [rsp+30h] [rbp-A0h]
  __int64 *v104; // [rsp+38h] [rbp-98h]
  int v105[2]; // [rsp+38h] [rbp-98h]
  int v106[2]; // [rsp+38h] [rbp-98h]
  int v107[2]; // [rsp+38h] [rbp-98h]
  __int64 v108; // [rsp+38h] [rbp-98h]
  __int64 v109; // [rsp+38h] [rbp-98h]
  int v110[2]; // [rsp+38h] [rbp-98h]
  _BYTE v111[16]; // [rsp+40h] [rbp-90h] BYREF
  _DWORD v112[4]; // [rsp+50h] [rbp-80h] BYREF
  void *v113; // [rsp+60h] [rbp-70h] BYREF
  unsigned __int64 v114; // [rsp+68h] [rbp-68h]
  void *ptr; // [rsp+80h] [rbp-50h] BYREF
  __int128 v116; // [rsp+88h] [rbp-48h]
  unsigned __int64 v117; // [rsp+98h] [rbp-38h]

  v117 = __readfsqword(0x28u);
  v3 = sub_29E10(24);
  *(_QWORD *)v3 = 0;
  v4 = (__int64 *)v3;
  *(_OWORD *)(v3 + 8) = 0;
  ptr = nullptr;
  v116 = 0;
  sub_CF40((char **)&ptr);
  v5 = s1;
  if ( (_QWORD)v116 )
    v5 = (const char *)ptr;
  sub_10E50(v4, "license_id", v5);
  if ( ptr )
  {
    *(_QWORD *)&v116 = 0;
    j__free(ptr);
  }
  v6 = *(int *)(a2 + 12);
  if ( (int)v6 >= 7 )
    v6 = 0;
  sub_10E50(v4, "product", off_7A560[v6]);
  v7 = *(int *)(a2 + 16);
  if ( (int)v7 >= 12 )
    v7 = 0;
  sub_10E50(v4, "edition", off_7A5A0[v7]);
  if ( *(_QWORD *)(a2 + 64) )
  {
    v57 = operator new(0x18u);
    v58 = *(_QWORD *)(a2 + 56);
    *(_QWORD *)v57 = 0;
    v59 = (__int64 *)v57;
    *(_OWORD *)(v57 + 8) = 0;
    v60 = v58 + 40LL * *(_QWORD *)(a2 + 64);
    if ( v58 != v60 )
    {
      v109 = v58;
      sub_11A50((__int64)&v113, v58);
      while ( 1 )
      {
        v64 = *v59;
        v65 = v59[2];
        if ( (unsigned __int64)&v113 < *v59 || (unsigned __int64)&v113 >= v64 + 16 * v65 )
        {
          v66 = v59[1];
          if ( v65 < v66 + 1 )
          {
            v68 = sub_29E60(v59, v64, v66 + 1, 16);
            *v59 = v68;
            v64 = v68;
            v66 = v59[1];
          }
          v67 = (_DWORD *)(v64 + 16 * v66);
          *v67 = 0;
          sub_21A60(v67, &v113);
        }
        else
        {
          LODWORD(ptr) = 0;
          sub_21A60(&ptr, &v113);
          v61 = v59[1];
          v62 = *v59;
          if ( v59[2] < (unsigned __int64)(v61 + 1) )
          {
            v77 = sub_29E60(v59, v62, v61 + 1, 16);
            *v59 = v77;
            v62 = v77;
            v61 = v59[1];
          }
          v63 = (_DWORD *)(v62 + 16 * v61);
          *v63 = 0;
          sub_21A60(v63, &ptr);
          sub_218D0(&ptr);
        }
        ++v59[1];
        sub_218D0(&v113);
        v109 += 40;
        if ( v60 == v109 )
          break;
        sub_11A50((__int64)&v113, v109);
      }
    }
    v69 = v4[1];
    v70 = *v4;
    if ( v69 )
    {
      na = (size_t)v59;
      v71 = *v4;
      v72 = 0;
      *(_QWORD *)v110 = v4[1];
      do
      {
        if ( *(_QWORD *)(v71 + 8) && !strcmp(*(const char **)v71, "add_ons") )
        {
          v73 = v71;
          v59 = (__int64 *)na;
          v74 = v73 + 24;
          goto LABEL_106;
        }
        ++v72;
        v71 += 40;
      }
      while ( *(_QWORD *)v110 != v72 );
      v59 = (__int64 *)na;
      v69 = *(_QWORD *)v110;
    }
    if ( v4[2] < (unsigned __int64)(v69 + 1) )
    {
      v92 = sub_29E60(v4, v70, v69 + 1, 40);
      *v4 = v92;
      v70 = v92;
      v69 = v4[1];
    }
    v81 = v70 + 40 * v69;
    *(_QWORD *)v81 = 0;
    *(_OWORD *)(v81 + 8) = 0;
    *(_DWORD *)(v81 + 24) = 0;
    *(_QWORD *)(v81 + 32) = 0;
    ++v4[1];
    v82 = *(_DWORD **)v81;
    if ( *(_QWORD *)(v81 + 16) <= 7u )
    {
      v91 = sub_29E60(v81, v82, 8, 1);
      *(_QWORD *)v81 = v91;
      v82 = (_DWORD *)v91;
    }
    *(_QWORD *)(v81 + 8) = 8;
    v74 = v81 + 24;
    *v82 = 1600414817;
    *(_DWORD *)((char *)v82 + 3) = 1936617311;
    *(_BYTE *)(*(_QWORD *)(v74 - 24) + 7LL) = 0;
LABEL_106:
    if ( *(_DWORD *)v74 )
      sub_218D0(v74);
    *(_DWORD *)v74 = 4;
    *(_QWORD *)(v74 + 8) = v59;
  }
  if ( *(_QWORD *)(a2 + 88) )
  {
    v8 = operator new(0x18u);
    v9 = *(_QWORD *)(a2 + 80);
    v104 = (__int64 *)v8;
    *(_QWORD *)v8 = 0;
    *(_OWORD *)(v8 + 8) = 0;
    v96 = v9 + 24LL * *(_QWORD *)(a2 + 88);
    while ( v96 != v9 )
    {
      v113 = nullptr;
      v114 = 0;
      v32 = operator new(0x18u);
      v33 = (_QWORD *)v32;
      v34 = s1;
      if ( *(_QWORD *)(v9 + 8) )
        v34 = *(const char **)v9;
      *(_QWORD *)v32 = 0;
      *(_OWORD *)(v32 + 8) = 0;
      if ( v34 )
      {
        src = v34;
        nb = strlen(v34);
        v35 = (void *)sub_29E60(v33, 0, nb + 1, 1);
        *v33 = v35;
        v33[1] = nb + 1;
        memmove(v35, src, nb);
        *(_BYTE *)(*v33 + nb) = 0;
      }
      if ( (_DWORD)v113 )
        sub_218D0(&v113);
      v114 = (unsigned __int64)v33;
      LODWORD(v113) = 2;
      LODWORD(ptr) = 0;
      sub_21A60(&ptr, &v113);
      v29 = v104[1];
      v30 = *v104;
      if ( v104[2] < (unsigned __int64)(v29 + 1) )
      {
        v36 = sub_29E60(v104, v30, v29 + 1, 16);
        *v104 = v36;
        v30 = v36;
        v29 = v104[1];
      }
      v31 = (_DWORD *)(v30 + 16 * v29);
      *v31 = 0;
      sub_21A60(v31, &ptr);
      v9 += 24;
      ++v104[1];
      sub_218D0(&ptr);
      sub_218D0(&v113);
    }
    v10 = v4[1];
    v11 = *v4;
    if ( v10 )
    {
      v12 = v104;
      v97 = *v4;
      v13 = *v4;
      *(_QWORD *)v105 = 0;
      n = (size_t)v12;
      do
      {
        if ( *(_QWORD *)(v13 + 8) && !strcmp(*(const char **)v13, "features") )
        {
          v14 = v13 + 24;
          v104 = (__int64 *)n;
          goto LABEL_18;
        }
        ++*(_QWORD *)v105;
        v13 += 40;
      }
      while ( v10 != *(_QWORD *)v105 );
      v11 = v97;
      v104 = (__int64 *)n;
    }
    if ( v4[2] < (unsigned __int64)(v10 + 1) )
    {
      v88 = sub_29E60(v4, v11, v10 + 1, 40);
      v10 = v4[1];
      *v4 = v88;
      v11 = v88;
    }
    v75 = v11 + 40 * v10;
    *(_QWORD *)v75 = 0;
    *(_OWORD *)(v75 + 8) = 0;
    *(_DWORD *)(v75 + 24) = 0;
    *(_QWORD *)(v75 + 32) = 0;
    ++v4[1];
    v76 = *(_QWORD **)v75;
    if ( *(_QWORD *)(v75 + 16) <= 8u )
    {
      v93 = sub_29E60(v75, v76, 9, 1);
      *(_QWORD *)v75 = v93;
      v76 = (_QWORD *)v93;
    }
    *(_QWORD *)(v75 + 8) = 9;
    v14 = v75 + 24;
    *v76 = 0x7365727574616566LL;
    *(_BYTE *)(*(_QWORD *)(v14 - 24) + 8LL) = 0;
LABEL_18:
    if ( *(_DWORD *)v14 )
      sub_218D0(v14);
    *(_DWORD *)v14 = 4;
    *(_QWORD *)(v14 + 8) = v104;
  }
  sub_11050((__int64)&v113, *(_QWORD *)(a2 + 104));
  if ( v114 > 1 )
    sub_10E50(v4, "start", (const char *)v113);
  sub_11050((__int64)&ptr, *(_QWORD *)(a2 + 112));
  if ( (unsigned __int64)v116 > 1 )
    sub_10E50(v4, "expiration", (const char *)ptr);
  v15 = *v4;
  v16 = 0;
  v101 = *(_QWORD *)(a2 + 24);
  v17 = v4[1];
  v18 = *v4;
  if ( v17 )
  {
    *(_QWORD *)v106 = v4[1];
    while ( !*(_QWORD *)(v18 + 8) || strcmp(*(const char **)v18, "total_seats") )
    {
      ++v16;
      v18 += 40;
      if ( *(_QWORD *)v106 == v16 )
      {
        v17 = *(_QWORD *)v106;
        goto LABEL_55;
      }
    }
    v19 = *(_DWORD *)(v18 + 24);
    v20 = v18 + 24;
    if ( v19 )
      goto LABEL_53;
  }
  else
  {
LABEL_55:
    if ( v4[2] < (unsigned __int64)(v17 + 1) )
    {
      v80 = sub_29E60(v4, v15, v17 + 1, 40);
      *v4 = v80;
      v15 = v80;
      v17 = v4[1];
    }
    v37 = v15 + 40 * v17;
    *(_QWORD *)v37 = 0;
    *(_OWORD *)(v37 + 8) = 0;
    *(_DWORD *)(v37 + 24) = 0;
    *(_QWORD *)(v37 + 32) = 0;
    ++v4[1];
    v38 = *(void **)v37;
    if ( *(_QWORD *)(v37 + 16) <= 0xBu )
    {
      v87 = sub_29E60(v37, v38, 12, 1);
      *(_QWORD *)v37 = v87;
      v38 = (void *)v87;
    }
    *(_QWORD *)(v37 + 8) = 12;
    v20 = v37 + 24;
    qmemcpy(v38, "total_seats", 11);
    *(_BYTE *)(*(_QWORD *)(v20 - 24) + 11LL) = 0;
    if ( *(_DWORD *)v20 )
LABEL_53:
      sub_218D0(v20);
  }
  *(_DWORD *)v20 = 1;
  *(_QWORD *)(v20 + 8) = v101;
  v21 = *v4;
  v102 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 160);
  v22 = v4[1];
  if ( v22 )
  {
    v23 = *v4;
    v24 = 0;
    *(_QWORD *)v107 = v4[1];
    while ( !*(_QWORD *)(v23 + 8) || strcmp(*(const char **)v23, "available_seats") )
    {
      ++v24;
      v23 += 40;
      if ( *(_QWORD *)v107 == v24 )
      {
        v22 = *(_QWORD *)v107;
        goto LABEL_62;
      }
    }
    v25 = *(_DWORD *)(v23 + 24);
    v26 = v23 + 24;
    if ( v25 )
      goto LABEL_52;
  }
  else
  {
LABEL_62:
    if ( v4[2] < (unsigned __int64)(v22 + 1) )
    {
      v79 = sub_29E60(v4, v21, v22 + 1, 40);
      *v4 = v79;
      v21 = v79;
      v22 = v4[1];
    }
    v39 = v21 + 40 * v22;
    *(_QWORD *)v39 = 0;
    *(_OWORD *)(v39 + 8) = 0;
    *(_DWORD *)(v39 + 24) = 0;
    *(_QWORD *)(v39 + 32) = 0;
    ++v4[1];
    v40 = *(void **)v39;
    if ( *(_QWORD *)(v39 + 16) <= 0xFu )
    {
      v86 = sub_29E60(v39, v40, 16, 1);
      *(_QWORD *)v39 = v86;
      v40 = (void *)v86;
    }
    *(_QWORD *)(v39 + 8) = 16;
    v26 = v39 + 24;
    qmemcpy(v40, "available_seats", 15);
    *(_BYTE *)(*(_QWORD *)(v26 - 24) + 15LL) = 0;
    if ( *(_DWORD *)v26 )
LABEL_52:
      sub_218D0(v26);
  }
  *(_DWORD *)v26 = 1;
  *(_QWORD *)(v26 + 8) = v102;
  if ( *(_QWORD *)(a2 + 160) )
  {
    v41 = operator new(0x18u);
    *(_QWORD *)v41 = 0;
    v42 = (__int64 *)v41;
    v43 = *(_QWORD *)(a2 + 152);
    *(_OWORD *)(v41 + 8) = 0;
    v44 = v43 + 88LL * *(_QWORD *)(a2 + 160);
    while ( v44 != v43 )
    {
      sub_111A0((__int64)v111, v43);
      v48 = *v42;
      v49 = v42[2];
      if ( (unsigned __int64)v111 < *v42 || (unsigned __int64)v111 >= v48 + 16 * v49 )
      {
        v50 = v42[1];
        if ( v49 < v50 + 1 )
        {
          v52 = sub_29E60(v42, v48, v50 + 1, 16);
          *v42 = v52;
          v48 = v52;
          v50 = v42[1];
        }
        v51 = (_DWORD *)(v48 + 16 * v50);
        *v51 = 0;
        sub_21A60(v51, v111);
      }
      else
      {
        v112[0] = 0;
        sub_21A60(v112, v111);
        v45 = v42[1];
        v46 = *v42;
        if ( v42[2] < (unsigned __int64)(v45 + 1) )
        {
          v78 = sub_29E60(v42, v46, v45 + 1, 16);
          *v42 = v78;
          v46 = v78;
          v45 = v42[1];
        }
        v47 = (_DWORD *)(v46 + 16 * v45);
        *v47 = 0;
        sub_21A60(v47, v112);
        sub_218D0(v112);
      }
      ++v42[1];
      v43 += 88;
      sub_218D0(v111);
    }
    v53 = v4[1];
    v54 = *v4;
    if ( v53 )
    {
      v103 = *v4;
      v55 = 0;
      v108 = *v4;
      do
      {
        if ( *(_QWORD *)(v108 + 8) && !strcmp(*(const char **)v108, "clients") )
        {
          v56 = (_QWORD *)(v108 + 24);
          goto LABEL_85;
        }
        ++v55;
        v108 += 40;
      }
      while ( v53 != v55 );
      v54 = v103;
    }
    if ( v4[2] < (unsigned __int64)(v53 + 1) )
    {
      v90 = sub_29E60(v4, v54, v53 + 1, 40);
      *v4 = v90;
      v53 = v4[1];
      v54 = v90;
    }
    v83 = v54 + 40 * v53;
    *(_QWORD *)v83 = 0;
    v84 = (__int64 *)v83;
    *(_OWORD *)(v83 + 8) = 0;
    *(_DWORD *)(v83 + 24) = 0;
    *(_QWORD *)(v83 + 32) = 0;
    ++v4[1];
    v85 = *(_DWORD **)v83;
    if ( *(_QWORD *)(v83 + 16) <= 7u )
    {
      v89 = sub_29E60(v83, v85, 8, 1);
      *v84 = v89;
      v85 = (_DWORD *)v89;
    }
    v84[1] = 8;
    *v85 = 1701407843;
    *(_DWORD *)((char *)v85 + 3) = 1937010277;
    *(_BYTE *)(*v84 + 7) = 0;
    v56 = v84 + 3;
LABEL_85:
    if ( *(_DWORD *)v56 )
      sub_218D0(v56);
    *(_DWORD *)v56 = 4;
    v56[1] = v42;
  }
  v27 = ptr;
  *(_DWORD *)a1 = 3;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v27 )
  {
    *(_QWORD *)&v116 = 0;
    j__free(v27);
  }
  if ( v113 )
  {
    v114 = 0;
    j__free(v113);
  }
  return a1;
}

