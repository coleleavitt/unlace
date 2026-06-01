__int64 __fastcall sub_1F8F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rbx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  size_t v15; // r14
  size_t v16; // r13
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  _BYTE *v20; // rax
  char *v21; // r13
  unsigned int v22; // edi
  __int64 v23; // r8
  unsigned __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // r15
  unsigned __int8 *v28; // rbx
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  char *v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r14
  char *v35; // rax
  void *v36; // rdi
  char *v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // r14
  char *v41; // rax
  void *v42; // rdi
  char *v43; // r15
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // rax
  const char *v46; // r13
  const char *v47; // rcx
  char *v48; // r15
  __int64 v49; // r14
  size_t v50; // r11
  char *v51; // rdi
  __int64 v52; // r15
  __int64 v53; // rsi
  size_t v54; // rdx
  char *v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r9
  __int64 v58; // rax
  size_t v59; // r9
  __int64 v60; // r14
  __int64 v61; // r13
  char *v62; // rax
  void *v63; // rdi
  const char *v64; // rax
  const char *v65; // r13
  size_t v66; // rax
  size_t v67; // r14
  __int64 v68; // r15
  unsigned __int64 v69; // rcx
  _BYTE *v70; // rsi
  __int64 v71; // r14
  char *v72; // rax
  char *v73; // r13
  unsigned __int64 v74; // rdx
  size_t v75; // r9
  __int64 v76; // r15
  size_t v77; // r10
  _BYTE *v78; // rsi
  __int64 v79; // r15
  unsigned __int64 v80; // rdx
  _BYTE *v81; // rsi
  __int64 v82; // r15
  unsigned __int64 v83; // rdx
  _BYTE *v84; // rsi
  __int64 v85; // r14
  __int64 v86; // r13
  __int64 v87; // r15
  unsigned __int8 *v88; // rbx
  void *v89; // rdi
  void *v90; // rdi
  void *v91; // rdi
  void *v92; // rdi
  size_t v93; // r15
  size_t v94; // [rsp+0h] [rbp-150h]
  size_t v95; // [rsp+8h] [rbp-148h]
  size_t v96; // [rsp+10h] [rbp-140h]
  size_t v97; // [rsp+18h] [rbp-138h]
  unsigned int v98; // [rsp+24h] [rbp-12Ch]
  char *v99; // [rsp+30h] [rbp-120h]
  unsigned __int64 v100; // [rsp+48h] [rbp-108h]
  size_t v101; // [rsp+48h] [rbp-108h]
  unsigned __int64 i; // [rsp+50h] [rbp-100h]
  size_t v103; // [rsp+50h] [rbp-100h]
  unsigned __int64 v104; // [rsp+50h] [rbp-100h]
  unsigned __int64 v105; // [rsp+50h] [rbp-100h]
  unsigned __int64 v106; // [rsp+50h] [rbp-100h]
  unsigned __int64 v107; // [rsp+50h] [rbp-100h]
  __int64 v108; // [rsp+58h] [rbp-F8h]
  char *v109; // [rsp+58h] [rbp-F8h]
  char *v110; // [rsp+58h] [rbp-F8h]
  __int64 v111; // [rsp+58h] [rbp-F8h]
  __int64 v112; // [rsp+58h] [rbp-F8h]
  void *v113; // [rsp+60h] [rbp-F0h] BYREF
  __int128 v114; // [rsp+68h] [rbp-E8h]
  void *v115; // [rsp+80h] [rbp-D0h] BYREF
  __int128 v116; // [rsp+88h] [rbp-C8h]
  void *dest; // [rsp+A0h] [rbp-B0h] BYREF
  __int128 v118; // [rsp+A8h] [rbp-A8h]
  void *ptr; // [rsp+C0h] [rbp-90h] BYREF
  __int128 v120; // [rsp+C8h] [rbp-88h]
  void *v121; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v122; // [rsp+E8h] [rbp-68h]
  _BYTE v123[24]; // [rsp+100h] [rbp-50h] BYREF
  unsigned __int64 v124; // [rsp+118h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(unsigned int *)(a1 + 180);
  v124 = __readfsqword(0x28u);
  v114 = 0;
  v113 = nullptr;
  v7 = *(_DWORD *)(v4 + 28);
  if ( v7 == 27 )
    goto LABEL_61;
  if ( v7 == 33 )
  {
    if ( a3 + 2 > 1 )
    {
      v121 = nullptr;
      v5 = (unsigned int)v5 | 1;
      v122 = 0;
LABEL_63:
      v98 = (*(__int64 (__fastcall **)(_QWORD, void **, void **, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 24)
                                                                                          + 208LL))(
              *(_QWORD *)(a1 + 24),
              &v113,
              &v121,
              a2,
              a3,
              v5);
      if ( !v98 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) == 27 )
          sub_19E20(a1, (__int64 *)&v121, 1);
        else
          sub_1A1A0(a1, (__int64 *)&v121, a3);
      }
      v38 = (char *)v121;
      if ( v121 )
      {
        if ( (_QWORD)v122 )
        {
          v39 = 0;
          v40 = v122;
          do
          {
            v41 = &v38[80 * v39];
            v42 = *(void **)v41;
            if ( *(_QWORD *)v41 )
            {
              *((_QWORD *)v41 + 1) = 0;
              j__free(v42);
              v38 = (char *)v121;
            }
            ++v39;
          }
          while ( v40 != v39 );
        }
        *(_QWORD *)&v122 = 0;
        j__free(v38);
      }
      goto LABEL_52;
    }
    v5 = (unsigned int)v5 | 3;
LABEL_61:
    v121 = nullptr;
    v122 = 0;
    if ( a3 == -2 )
      v5 = (unsigned int)v5 | 1;
    goto LABEL_63;
  }
  if ( v7 != 18 )
  {
    if ( !byte_1671A1 )
      sub_96F80(2653);
    BUG();
  }
  v8 = *(_QWORD *)(a1 + 24);
  v115 = nullptr;
  v116 = 0;
  v98 = (*(__int64 (__fastcall **)(__int64, void **, void **, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 184LL))(
          v8,
          &v113,
          &v115,
          a2,
          a1 + 48,
          a3);
  v11 = (char *)v115;
  if ( !v98 )
  {
    v99 = (char *)v115 + 88 * v116;
    if ( v99 == v115 )
      goto LABEL_41;
    sub_65BE0(v123, 20, "%F %T", *((_QWORD *)v115 + 1), v9, v10);
    while ( 1 )
    {
      dest = nullptr;
      v118 = 0;
      v19 = (unsigned __int8)v11[4];
      if ( (_BYTE)v19 )
      {
        v64 = (const char *)sub_64080(v19);
        v65 = v64;
        if ( v64 && (v66 = strlen(v64), (v67 = v66) != 0) )
        {
          v92 = dest;
          v93 = v66 + 1;
          if ( *((_QWORD *)&v118 + 1) < v66 + 1 )
          {
            dest = (void *)sub_96080(&dest, dest, v93, 1);
            v92 = dest;
          }
          *(_QWORD *)&v118 = v93;
          memmove(v92, v65, v67);
          *((_BYTE *)dest + v67) = 0;
          v68 = v118;
        }
        else
        {
          *(_QWORD *)&v118 = 0;
          v68 = 0;
        }
        while ( 2 )
        {
          if ( v68 )
          {
            if ( (unsigned __int64)(v68 - 1) > 4 )
              break;
            v69 = v68 + 1;
            v70 = dest;
            --v68;
            v71 = v69;
            if ( *((_QWORD *)&v118 + 1) < v69 )
            {
LABEL_112:
              dest = (void *)sub_96080(&dest, v70, v71, 1);
              v70 = dest;
            }
          }
          else
          {
            v70 = dest;
            v71 = 2;
            if ( *((_QWORD *)&v118 + 1) < 2u )
              goto LABEL_112;
          }
          *(_QWORD *)&v118 = v71;
          v70[v68] = 32;
          *((_BYTE *)dest + v68 + 1) = 0;
          v68 = v118;
          continue;
        }
      }
      ptr = nullptr;
      v120 = 0;
      sub_17D80((char **)&ptr);
      v13 = v120;
      v43 = (char *)ptr;
      if ( (*(_BYTE *)(a1 + 124) & 1) == 0 )
        break;
      if ( *((_QWORD *)v11 + 9) > 1u )
      {
        v12 = 2;
        if ( (_QWORD)v120 )
        {
          v13 = v120 - 1;
          v12 = v120 + 1;
        }
        if ( *((_QWORD *)&v120 + 1) < v12 )
        {
          ptr = (void *)sub_96080(&ptr, ptr, v12, 1);
          v43 = (char *)ptr;
        }
        *(_QWORD *)&v120 = v12;
        v43[v13] = 32;
        *((_BYTE *)ptr + v13 + 1) = 0;
        v14 = *((_QWORD *)v11 + 9);
        v43 = (char *)ptr;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v14 != 1 )
          {
            v16 = v14 - 1;
            v108 = v120;
            if ( (_QWORD)v120 )
            {
              v108 = v120 - 1;
              v16 = v15 + v120 - 1;
              v14 += v120 - 1;
            }
            if ( *((_QWORD *)&v120 + 1) < v14 )
            {
              v107 = v14;
              ptr = (void *)sub_96080(&ptr, ptr, v14, 1);
              v14 = v107;
              v43 = (char *)ptr;
            }
            *(_QWORD *)&v120 = v14;
            v43[v16] = 0;
            memcpy((char *)ptr + v108, *((const void **)v11 + 8), v15);
            v43 = (char *)ptr;
          }
        }
      }
      else if ( (unsigned __int64)v120 > 1 )
      {
        v20 = (char *)ptr + v120 - 1;
        if ( ptr < v20 )
        {
          v21 = (char *)ptr + v120 - 1;
          while ( 1 )
          {
            v22 = *(v21 - 1);
            if ( v22 > 0x7F || !isspace(v22) )
              break;
            if ( --v21 == v43 )
              goto LABEL_74;
          }
          v20 = v21;
        }
        v23 = v20 - v43;
        if ( v20 == v43 )
        {
LABEL_74:
          if ( v43 )
          {
            *(_QWORD *)&v120 = 0;
            j__free(v43);
            ptr = nullptr;
            *((_QWORD *)&v120 + 1) = 0;
          }
          v43 = nullptr;
        }
        else
        {
          v24 = v23 + 1;
          if ( v13 < v23 + 1 )
          {
            if ( *((_QWORD *)&v120 + 1) < v24 )
            {
              v112 = v20 - v43;
              ptr = (void *)sub_96080(&ptr, v43, v23 + 1, 1);
              v13 = v120;
              v43 = (char *)ptr;
              v23 = v112;
            }
            v111 = v23;
            memset(&v43[v13], 0, v24 - v13);
            *(_QWORD *)&v120 = v24;
            v20 = (char *)ptr + v111;
          }
          else if ( v24 != v13 )
          {
            *(_QWORD *)&v120 = v23 + 1;
          }
          *v20 = 0;
          v43 = (char *)ptr;
        }
      }
LABEL_18:
      sub_19CE0(a1, (__int64)"%s\n", v43);
      if ( ptr )
      {
        *(_QWORD *)&v120 = 0;
        j__free(ptr);
      }
      if ( dest )
      {
        *(_QWORD *)&v118 = 0;
        j__free(dest);
      }
      v11 += 88;
      if ( v99 == v11 )
      {
        v11 = (char *)v115;
LABEL_41:
        if ( v11 )
        {
          v25 = v116;
          if ( (_QWORD)v116 )
          {
            v26 = 0;
            v27 = 0;
            do
            {
              v28 = (unsigned __int8 *)&v11[v26];
              v29 = *((void **)v28 + 8);
              if ( v29 )
              {
                *((_QWORD *)v28 + 9) = 0;
                j__free(v29);
              }
              v30 = *((void **)v28 + 5);
              if ( v30 )
              {
                *((_QWORD *)v28 + 6) = 0;
                j__free(v30);
              }
              v31 = *((void **)v28 + 2);
              if ( v31 )
              {
                *((_QWORD *)v28 + 3) = 0;
                j__free(v31);
              }
              v11 = (char *)v115;
              v26 += 88;
              ++v27;
            }
            while ( v25 != v27 );
          }
          goto LABEL_51;
        }
        goto LABEL_52;
      }
      sub_65BE0(v123, 20, "%F %T", *((_QWORD *)v11 + 1), v17, v18, v94, v95, v96);
    }
    v44 = 2;
    if ( (_QWORD)v120 )
    {
      v13 = v120 - 1;
      v44 = v120 + 1;
    }
    if ( *((_QWORD *)&v120 + 1) < v44 )
    {
      ptr = (void *)sub_96080(&ptr, ptr, v44, 1);
      v43 = (char *)ptr;
    }
    *(_QWORD *)&v120 = v44;
    v43[v13] = 10;
    *((_BYTE *)ptr + v13 + 1) = 0;
    v121 = nullptr;
    v122 = 0;
    v45 = *((_QWORD *)v11 + 9);
    if ( v45 )
    {
      v46 = *((const char **)v11 + 8);
      v47 = v46;
      v100 = (unsigned __int64)&v46[v45 - 1];
      if ( (unsigned __int64)v46 < v100 )
      {
        v48 = nullptr;
        v49 = 0;
        for ( i = 0; ; i = *((_QWORD *)&v122 + 1) )
        {
          v55 = strchr(v46, 10);
          v56 = v49 + 1;
          v57 = (unsigned __int64)v55;
          if ( !v55 )
            v57 = v100;
          v109 = v55;
          v59 = v57 - (_QWORD)v46;
          if ( i < v56 )
          {
            v103 = v59;
            v121 = (void *)sub_96080(&v121, v48, v56, 24);
            v49 = v122;
            v48 = (char *)v121;
            v59 = v103;
          }
          v50 = v59;
          v51 = &v48[24 * v49];
          *(_OWORD *)(v51 + 8) = 0;
          *(_QWORD *)v51 = 0;
          *(_QWORD *)&v122 = v122 + 1;
          v52 = *((_QWORD *)v51 + 1);
          if ( v52 )
          {
            --v52;
            v50 = v59 + v52;
          }
          v53 = *(_QWORD *)v51;
          v54 = v50 + 1;
          if ( v50 != -1 )
          {
            v94 = v59;
            v95 = v50;
            v96 = v50 + 1;
            v58 = sub_96080(v51, v53, v54, 1);
            v59 = v94;
            v53 = v58;
            v50 = v95;
            v54 = v96;
            *(_QWORD *)v51 = v58;
          }
          *((_QWORD *)v51 + 1) = v54;
          *(_BYTE *)(v53 + v50) = 0;
          memmove((void *)(*(_QWORD *)v51 + v52), v46, v59);
          v48 = (char *)v121;
          v49 = v122;
          if ( !v109 )
            break;
          v46 = v109 + 1;
          if ( (unsigned __int64)(v109 + 1) >= v100 )
            break;
        }
        v45 = *((_QWORD *)v11 + 9);
        if ( v45 < 2 )
          goto LABEL_119;
        v47 = *((const char **)v11 + 8);
LABEL_115:
        if ( v47[v45 - 2] == 10 )
        {
          if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)(v49 + 1) )
          {
            v121 = (void *)sub_96080(&v121, v48, v49 + 1, 24);
            v49 = v122;
            v48 = (char *)v121;
          }
          v72 = &v48[24 * v49];
          *(_QWORD *)v72 = 0;
          *(_OWORD *)(v72 + 8) = 0;
          v48 = (char *)v121;
          v49 = v122 + 1;
          *(_QWORD *)&v122 = v122 + 1;
        }
LABEL_119:
        v73 = &v48[24 * v49];
        if ( v73 != v48 )
        {
          v110 = v48;
          do
          {
            v82 = v120;
            v83 = 2;
            if ( (_QWORD)v120 )
            {
              v83 = v120 + 1;
              v82 = v120 - 1;
            }
            v84 = ptr;
            if ( *((_QWORD *)&v120 + 1) < v83 )
            {
              v104 = v83;
              ptr = (void *)sub_96080(&ptr, ptr, v83, 1);
              v83 = v104;
              v84 = ptr;
            }
            *(_QWORD *)&v120 = v83;
            v84[v82] = 9;
            *((_BYTE *)ptr + v82 + 1) = 0;
            v74 = *((_QWORD *)v110 + 1);
            if ( v74 )
            {
              v75 = v74 - 1;
              if ( v74 != 1 )
              {
                v76 = v120;
                v77 = v74 - 1;
                if ( (_QWORD)v120 )
                {
                  v76 = v120 - 1;
                  v77 = v75 + v120 - 1;
                  v74 += v120 - 1;
                }
                v78 = ptr;
                if ( *((_QWORD *)&v120 + 1) < v74 )
                {
                  v97 = v77;
                  v101 = v75;
                  v106 = v74;
                  ptr = (void *)sub_96080(&ptr, ptr, v74, 1);
                  v77 = v97;
                  v78 = ptr;
                  v75 = v101;
                  v74 = v106;
                }
                *(_QWORD *)&v120 = v74;
                v78[v77] = 0;
                memcpy((char *)ptr + v76, *(const void **)v110, v75);
              }
            }
            v79 = v120;
            v80 = 2;
            if ( (_QWORD)v120 )
            {
              v80 = v120 + 1;
              v79 = v120 - 1;
            }
            v81 = ptr;
            if ( *((_QWORD *)&v120 + 1) < v80 )
            {
              v105 = v80;
              ptr = (void *)sub_96080(&ptr, ptr, v80, 1);
              v80 = v105;
              v81 = ptr;
            }
            *(_QWORD *)&v120 = v80;
            v81[v79] = 10;
            v110 += 24;
            *((_BYTE *)ptr + v79 + 1) = 0;
          }
          while ( v73 != v110 );
          v48 = (char *)v121;
        }
        if ( v48 )
        {
          v60 = v122;
          if ( (_QWORD)v122 )
          {
            v61 = 0;
            do
            {
              v62 = &v48[24 * v61];
              v63 = *(void **)v62;
              if ( *(_QWORD *)v62 )
              {
                *((_QWORD *)v62 + 1) = 0;
                j__free(v63);
              }
              v48 = (char *)v121;
              ++v61;
            }
            while ( v60 != v61 );
          }
          *(_QWORD *)&v122 = 0;
          j__free(v48);
        }
        goto LABEL_103;
      }
      if ( v45 != 1 )
      {
        v49 = 0;
        v48 = nullptr;
        goto LABEL_115;
      }
    }
LABEL_103:
    v43 = (char *)ptr;
    goto LABEL_18;
  }
  if ( v115 )
  {
    v85 = v116;
    if ( (_QWORD)v116 )
    {
      v86 = 0;
      v87 = 0;
      do
      {
        v88 = (unsigned __int8 *)&v11[v86];
        v89 = *((void **)v88 + 8);
        if ( v89 )
        {
          *((_QWORD *)v88 + 9) = 0;
          j__free(v89);
        }
        v90 = *((void **)v88 + 5);
        if ( v90 )
        {
          *((_QWORD *)v88 + 6) = 0;
          j__free(v90);
        }
        v91 = *((void **)v88 + 2);
        if ( v91 )
        {
          *((_QWORD *)v88 + 3) = 0;
          j__free(v91);
        }
        v11 = (char *)v115;
        v86 += 88;
        ++v87;
      }
      while ( v85 != v87 );
    }
LABEL_51:
    *(_QWORD *)&v116 = 0;
    j__free(v11);
  }
LABEL_52:
  sub_1A410(a1, (unsigned int **)&v113);
  v32 = (char *)v113;
  if ( v113 )
  {
    if ( (_QWORD)v114 )
    {
      v33 = 0;
      v34 = v114;
      do
      {
        v35 = &v32[32 * v33];
        v36 = *((void **)v35 + 1);
        if ( v36 )
        {
          *((_QWORD *)v35 + 2) = 0;
          j__free(v36);
          v32 = (char *)v113;
        }
        ++v33;
      }
      while ( v34 != v33 );
    }
    *(_QWORD *)&v114 = 0;
    j__free(v32);
  }
  return v98;
}

