__int64 __fastcall sub_64ACD0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // dl
  char v9; // r15
  __int64 v10; // rdx
  char v11; // cl
  unsigned int v12; // r15d
  char *v13; // r15
  int v14; // eax
  __int64 v15; // rax
  char v16; // r12
  __int64 v17; // r13
  char v18; // cl
  int v19; // eax
  int v20; // eax
  char v21; // r15
  unsigned int v22; // r12d
  char **v23; // r13
  void *v24; // rdi
  char *v25; // rdi
  char *v26; // r14
  char *i; // r15
  char *v28; // rbx
  void *v29; // rdi
  void *v30; // rdi
  int v32; // eax
  const char *v33; // r13
  char v34; // dl
  const char *v35; // rsi
  __int64 v36; // r13
  unsigned __int64 v37; // rdx
  _BYTE *v38; // rsi
  __int64 v39; // rdi
  char v40; // cl
  __int64 v41; // r12
  unsigned __int64 v42; // r15
  _BYTE *v43; // rsi
  int v44; // r12d
  size_t v45; // rax
  bool v46; // zf
  unsigned int *v47; // r13
  const char *v48; // rsi
  size_t v49; // r8
  _BYTE *v50; // r13
  __int64 v51; // r9
  unsigned __int64 v52; // rdx
  _BYTE *v53; // rsi
  unsigned __int64 v54; // rdx
  __int64 v55; // r9
  _BYTE *v56; // rsi
  size_t v57; // r10
  __int64 v58; // r9
  size_t v59; // r11
  _BYTE *v60; // rsi
  __int64 v61; // r8
  unsigned __int64 v62; // rdx
  _BYTE *v63; // rsi
  unsigned __int64 v64; // rdx
  __int64 v65; // r8
  _BYTE *v66; // rsi
  unsigned __int64 v67; // r12
  __int64 v68; // r13
  _BYTE *v69; // rsi
  size_t v70; // rax
  __int64 v71; // r13
  unsigned __int64 v72; // rdx
  __int64 v73; // rsi
  size_t v74; // rax
  char *v75; // rsi
  __int64 v76; // r12
  _BYTE *v77; // rsi
  __int64 v78; // r13
  __int64 v79; // r12
  _BYTE *v80; // rax
  size_t v81; // rax
  __int64 v82; // r12
  size_t v83; // r13
  char *v84; // r8
  void *v85; // rsi
  char *v86; // rdx
  char *v87; // rdi
  size_t v88; // rax
  __int64 v89; // r13
  unsigned __int64 v90; // rdx
  __int64 v91; // rsi
  size_t v92; // rax
  __int64 v93; // rsi
  __int64 custom_callcnv; // rax
  unsigned __int64 v95; // r12
  unsigned __int64 v96; // r14
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 v100; // rax
  void *v101; // r8
  const void *v102; // r15
  size_t v103; // [rsp+8h] [rbp-118h]
  __int64 v104; // [rsp+10h] [rbp-110h]
  __int64 v105; // [rsp+10h] [rbp-110h]
  __int64 v106; // [rsp+10h] [rbp-110h]
  __int64 v107; // [rsp+18h] [rbp-108h]
  __int64 v108; // [rsp+18h] [rbp-108h]
  size_t v109; // [rsp+18h] [rbp-108h]
  size_t v110; // [rsp+18h] [rbp-108h]
  size_t v111; // [rsp+18h] [rbp-108h]
  size_t nf; // [rsp+28h] [rbp-F8h]
  size_t n; // [rsp+28h] [rbp-F8h]
  size_t ne; // [rsp+28h] [rbp-F8h]
  size_t nd; // [rsp+28h] [rbp-F8h]
  size_t nb; // [rsp+28h] [rbp-F8h]
  size_t na; // [rsp+28h] [rbp-F8h]
  size_t nc; // [rsp+28h] [rbp-F8h]
  char *s1; // [rsp+38h] [rbp-E8h]
  char *s1a; // [rsp+38h] [rbp-E8h]
  unsigned __int64 v122; // [rsp+40h] [rbp-E0h]
  unsigned __int64 v123; // [rsp+40h] [rbp-E0h]
  char *v124; // [rsp+40h] [rbp-E0h]
  unsigned __int64 v125; // [rsp+40h] [rbp-E0h]
  char *v126; // [rsp+48h] [rbp-D8h]
  size_t v127; // [rsp+48h] [rbp-D8h]
  size_t v128; // [rsp+48h] [rbp-D8h]
  const void *v129; // [rsp+48h] [rbp-D8h]
  size_t v130; // [rsp+48h] [rbp-D8h]
  __int64 v131; // [rsp+58h] [rbp-C8h] BYREF
  void *dest; // [rsp+60h] [rbp-C0h] BYREF
  __int128 v133; // [rsp+68h] [rbp-B8h]
  void *ptr; // [rsp+80h] [rbp-A0h] BYREF
  __int128 v135; // [rsp+88h] [rbp-98h]
  void *src; // [rsp+A0h] [rbp-80h] BYREF
  __int128 v137; // [rsp+A8h] [rbp-78h]
  __int64 v138; // [rsp+C0h] [rbp-60h] BYREF
  void *v139; // [rsp+C8h] [rbp-58h]
  __int64 tinfo_size; // [rsp+D0h] [rbp-50h]
  int v141; // [rsp+D8h] [rbp-48h]
  char v142; // [rsp+DCh] [rbp-44h]
  __int16 v143; // [rsp+DDh] [rbp-43h]
  unsigned __int64 v144; // [rsp+E8h] [rbp-38h]

  v8 = *(_BYTE *)(a1 + 34);
  s1 = (char *)a4;
  v144 = __readfsqword(0x28u);
  v9 = a5;
  dest = nullptr;
  v133 = 0;
  sub_643440(&v138, a3, (v8 & 4) != 0, a4, a5, a6);
  v10 = v138;
  v142 = v9;
  tinfo_size = 0;
  v11 = *(_BYTE *)(v138 + 88);
  v141 = 0;
  v143 = 1;
  v12 = v11 & 0xF0;
  if ( (v11 & 0xF0) == 0xC0 )
    v12 = *(_DWORD *)(v138 + 28);
  if ( v12 == 128 )
  {
    v13 = "__thiscall";
    goto LABEL_17;
  }
  if ( v12 <= 0x80 )
  {
    if ( v12 == 80 )
    {
      v13 = "__stdcall";
      goto LABEL_17;
    }
    if ( v12 > 0x50 )
    {
      if ( v12 == 96 )
      {
        v13 = "__pascal";
        goto LABEL_17;
      }
      if ( v12 == 112 )
      {
        v13 = "__fastcall";
        goto LABEL_17;
      }
    }
    else
    {
      if ( v12 == 32 )
        goto LABEL_83;
      if ( v12 <= 0x20 )
      {
        if ( !v12 )
        {
          v32 = *(_DWORD *)(v138 + 24) & 0xC0;
          switch ( v32 )
          {
            case 128:
              ptr = nullptr;
              v135 = 0;
              v33 = "__far";
              break;
            case 192:
              ptr = nullptr;
              v135 = 0;
              v33 = "__interrupt";
              break;
            case 64:
              ptr = nullptr;
              v135 = 0;
              v33 = "__near";
              break;
            default:
              v13 = "__bad_cc";
              v33 = nullptr;
              ptr = nullptr;
              v135 = 0;
              goto LABEL_77;
          }
          v13 = "__bad_cc";
          goto LABEL_77;
        }
        if ( v12 == 16 )
          goto LABEL_83;
      }
      else
      {
        if ( v12 == 48 )
        {
          v13 = "__cdecl";
          goto LABEL_17;
        }
        if ( v12 == 64 )
        {
LABEL_83:
          v13 = nullptr;
          v14 = *(_DWORD *)(v138 + 24) & 0xC0;
          if ( v14 == 128 )
          {
            ptr = nullptr;
            v135 = 0;
            v33 = "__far";
            goto LABEL_85;
          }
          goto LABEL_18;
        }
      }
    }
    goto LABEL_208;
  }
  if ( v12 == 224 )
  {
    v13 = "__userpurge";
    goto LABEL_17;
  }
  if ( v12 > 0xE0 )
  {
    if ( v12 != 240 )
    {
      if ( v12 == 256 )
      {
        v13 = "__gostk";
        goto LABEL_17;
      }
      goto LABEL_208;
    }
LABEL_213:
    v13 = "__usercall";
    goto LABEL_17;
  }
  switch ( v12 )
  {
    case 0xB0u:
      v13 = "__golang";
      goto LABEL_17;
    case 0xD0u:
      goto LABEL_213;
    case 0x90u:
      v13 = "__swiftcall";
      goto LABEL_17;
  }
LABEL_208:
  custom_callcnv = get_custom_callcnv(v12);
  if ( custom_callcnv )
  {
    if ( &dest != (void **)(custom_callcnv + 24) )
    {
      v95 = *(_QWORD *)(custom_callcnv + 32);
      if ( v95 > 1 )
      {
        v101 = dest;
        v102 = *(const void **)(custom_callcnv + 24);
        if ( *((_QWORD *)&v133 + 1) < v95 )
        {
          dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(custom_callcnv + 32), 1);
          v101 = dest;
        }
        *(_QWORD *)&v133 = v95;
        memmove(v101, v102, v95 - 1);
        *((char *)dest + v95 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v133 = 0;
      }
    }
  }
  else
  {
    sub_3573A0((char **)&dest);
  }
  v13 = (char *)dest;
  v10 = v138;
LABEL_17:
  v14 = *(_DWORD *)(v10 + 24) & 0xC0;
  if ( v14 == 128 )
  {
    ptr = nullptr;
    v135 = 0;
    v33 = "__far";
LABEL_113:
    if ( v13 )
      goto LABEL_114;
LABEL_85:
    v15 = *(int *)(a3 + 24);
    v13 = (char *)v33;
    if ( (v15 & 1) == 0 )
    {
      if ( (v15 & 0xFFFFFE3F) == 0 )
        goto LABEL_108;
      goto LABEL_87;
    }
    goto LABEL_121;
  }
LABEL_18:
  if ( v14 == 192 )
  {
    ptr = nullptr;
    v135 = 0;
    v33 = "__interrupt";
    goto LABEL_113;
  }
  if ( v14 == 64 )
  {
    ptr = nullptr;
    v135 = 0;
    v33 = "__near";
    goto LABEL_113;
  }
  ptr = nullptr;
  v135 = 0;
  if ( v13 )
  {
    v33 = nullptr;
LABEL_114:
    if ( !*v13 )
    {
      v15 = *(int *)(a3 + 24);
      if ( (v15 & 1) != 0 )
        goto LABEL_116;
      goto LABEL_78;
    }
LABEL_77:
    sub_640FE0((__int64 *)&ptr, v13, 32);
    v15 = *(int *)(a3 + 24);
    if ( (v15 & 1) != 0 )
    {
LABEL_116:
      v41 = v135;
      v42 = 2;
      if ( (_QWORD)v135 )
      {
        v42 = v135 + 1;
        v41 = v135 - 1;
      }
      v43 = ptr;
      if ( *((_QWORD *)&v135 + 1) < v42 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v42, 1);
        v43 = ptr;
      }
      *(_QWORD *)&v135 = v42;
      v13 = (char *)v33;
      v43[v41] = 32;
      *((_BYTE *)ptr + v41 + 1) = 0;
LABEL_121:
      sub_640FE0((__int64 *)&ptr, "__spoils", 32);
      sub_641C10((__int64 *)&ptr, 60);
      v44 = 0;
      v45 = 0;
      v46 = *(_QWORD *)(a3 + 72) == 0;
      src = nullptr;
      v137 = 0;
      if ( !v46 )
      {
        while ( 1 )
        {
          v47 = (unsigned int *)(*(_QWORD *)(a3 + 64) + 8 * v45);
          v48 = (const char *)*v47;
          if ( get_reg_name(&src, v48, (int)v47[1], 0xFFFFFFFFLL) > 0 )
            break;
          sub_357520((__int64 *)&ptr);
          v45 = ++v44;
          if ( (unsigned __int64)v44 >= *(_QWORD *)(a3 + 72) )
            goto LABEL_156;
LABEL_153:
          if ( v44 > 0 )
          {
            nf = v45;
            sub_641C10((__int64 *)&ptr, 44);
            v45 = nf;
          }
        }
        v49 = v137;
        if ( (_QWORD)v137 )
        {
          n = v137;
          v50 = (_BYTE *)qalloc_or_throw(v137, v48);
          memcpy(v50, src, n);
          if ( !*v50 )
          {
LABEL_150:
            if ( v50 )
              qfree(v50);
LABEL_152:
            v45 = ++v44;
            if ( (unsigned __int64)v44 >= *(_QWORD *)(a3 + 72) )
              goto LABEL_156;
            goto LABEL_153;
          }
          v49 = n;
        }
        else
        {
          if ( !byte_2CA12E1 )
            goto LABEL_152;
          v50 = nullptr;
        }
        v51 = v135;
        v52 = 2;
        if ( (_QWORD)v135 )
        {
          v52 = v135 + 1;
          v51 = v135 - 1;
        }
        v53 = ptr;
        if ( *((_QWORD *)&v135 + 1) < v52 )
        {
          v105 = v51;
          v110 = v49;
          na = v52;
          ptr = (void *)qvector_reserve(&ptr, ptr, v52, 1);
          v51 = v105;
          v53 = ptr;
          v49 = v110;
          v52 = na;
        }
        *(_QWORD *)&v135 = v52;
        v54 = 2;
        v53[v51] = 1;
        *((_BYTE *)ptr + v51 + 1) = 0;
        v55 = v135;
        if ( (_QWORD)v135 )
        {
          v54 = v135 + 1;
          v55 = v135 - 1;
        }
        v56 = ptr;
        if ( *((_QWORD *)&v135 + 1) < v54 )
        {
          v104 = v55;
          v109 = v49;
          nb = v54;
          ptr = (void *)qvector_reserve(&ptr, ptr, v54, 1);
          v55 = v104;
          v56 = ptr;
          v49 = v109;
          v54 = nb;
        }
        *(_QWORD *)&v135 = v54;
        v56[v55] = 33;
        *((_BYTE *)ptr + v55 + 1) = 0;
        if ( v49 )
        {
          v57 = v49 - 1;
          if ( v49 != 1 )
          {
            v58 = v135;
            v59 = v49 - 1;
            if ( (_QWORD)v135 )
            {
              v58 = v135 - 1;
              v59 = v57 + v135 - 1;
              v49 += v135 - 1;
            }
            v60 = ptr;
            if ( *((_QWORD *)&v135 + 1) < v49 )
            {
              v103 = v59;
              v106 = v58;
              v111 = v57;
              nc = v49;
              ptr = (void *)qvector_reserve(&ptr, ptr, v49, 1);
              v59 = v103;
              v60 = ptr;
              v58 = v106;
              v57 = v111;
              v49 = nc;
            }
            *(_QWORD *)&v135 = v49;
            v60[v59] = 0;
            memcpy((char *)ptr + v58, v50, v57);
          }
        }
        v61 = v135;
        v62 = 2;
        if ( (_QWORD)v135 )
        {
          v62 = v135 + 1;
          v61 = v135 - 1;
        }
        v63 = ptr;
        if ( *((_QWORD *)&v135 + 1) < v62 )
        {
          v108 = v61;
          nd = v62;
          ptr = (void *)qvector_reserve(&ptr, ptr, v62, 1);
          v61 = v108;
          v63 = ptr;
          v62 = nd;
        }
        *(_QWORD *)&v135 = v62;
        v64 = 2;
        v63[v61] = 2;
        *((_BYTE *)ptr + v61 + 1) = 0;
        v65 = v135;
        if ( (_QWORD)v135 )
        {
          v64 = v135 + 1;
          v65 = v135 - 1;
        }
        v66 = ptr;
        if ( *((_QWORD *)&v135 + 1) < v64 )
        {
          v107 = v65;
          ne = v64;
          ptr = (void *)qvector_reserve(&ptr, ptr, v64, 1);
          v65 = v107;
          v66 = ptr;
          v64 = ne;
        }
        *(_QWORD *)&v135 = v64;
        v66[v65] = 33;
        *((_BYTE *)ptr + v65 + 1) = 0;
        goto LABEL_150;
      }
LABEL_156:
      sub_641C10((__int64 *)&ptr, 62);
      if ( src )
      {
        *(_QWORD *)&v137 = 0;
        qfree(src);
      }
      v15 = *(int *)(a3 + 24);
      if ( (v15 & 0xFFFFFE3F) == 0 )
      {
        if ( !v13 )
          goto LABEL_24;
        goto LABEL_160;
      }
LABEL_168:
      v34 = 1;
LABEL_88:
      v126 = (char *)&unk_2B0D320;
      if ( (((unsigned __int64)&dword_0 + 2) & v15) == 0 )
        goto LABEL_93;
      if ( v34 )
      {
LABEL_96:
        v36 = v135;
        v37 = 2;
        if ( (_QWORD)v135 )
        {
          v37 = v135 + 1;
          v36 = v135 - 1;
        }
        v38 = ptr;
        if ( *((_QWORD *)&v135 + 1) < v37 )
        {
          v123 = v37;
          ptr = (void *)qvector_reserve(&ptr, ptr, v37, 1);
          v37 = v123;
          v38 = ptr;
        }
        *(_QWORD *)&v135 = v37;
        v38[v36] = 32;
        *((_BYTE *)ptr + v36 + 1) = 0;
      }
LABEL_90:
      v35 = *((const char **)v126 + 1);
      if ( *v35 )
        sub_640FE0((__int64 *)&ptr, v35, 32);
      v34 = 1;
LABEL_93:
      while ( 1 )
      {
        v126 += 16;
        if ( v126 == algn_2B0D350 )
          break;
        if ( (*(_QWORD *)v126 & *(int *)(a3 + 24)) != 0 )
        {
          if ( !v34 )
            goto LABEL_90;
          goto LABEL_96;
        }
      }
      if ( !v13 )
        goto LABEL_24;
      if ( !v34 )
      {
LABEL_108:
        if ( *v13 )
          sub_640FE0((__int64 *)&ptr, v13, 32);
LABEL_25:
        if ( !s1 )
        {
LABEL_30:
          v16 = 1;
LABEL_31:
          v10 = v138;
          s1 = (char *)ptr;
          goto LABEL_32;
        }
        v17 = v135;
        if ( (unsigned __int64)v135 > 1 )
        {
          v75 = (char *)ptr;
          v76 = v135 + 1;
          if ( *((_QWORD *)&v135 + 1) < (unsigned __int64)(v135 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v135 + 1, 1);
            v75 = (char *)ptr;
          }
          *(_QWORD *)&v135 = v76;
          v75[v17 - 1] = 32;
          *((_BYTE *)ptr + v17) = 0;
        }
        if ( strncmp(s1, &byte_22B2890, 5u) )
        {
          if ( *s1 )
            sub_640FE0((__int64 *)&ptr, s1, 33);
          goto LABEL_30;
        }
        v77 = ptr;
        if ( (_QWORD)v135 )
        {
          v78 = v135 + 5;
          v128 = v135 - 1;
          v79 = v135 + 4;
          if ( *((_QWORD *)&v135 + 1) >= (unsigned __int64)(v135 + 5) )
            goto LABEL_181;
        }
        else
        {
          if ( *((_QWORD *)&v135 + 1) > 5u )
          {
            *(_QWORD *)&v135 = 6;
            *((_BYTE *)ptr + 5) = 0;
LABEL_183:
            v80 = ptr;
            *(_DWORD *)ptr = 36178177;
            v80[4] = 9;
            v129 = s1 + 5;
            v81 = strlen(s1 + 5);
            v82 = v135;
            v83 = v81;
            v84 = (char *)v81;
            if ( (_QWORD)v135 )
            {
              v82 = v135 - 1;
              v84 = (char *)(v81 + v135 - 1);
            }
            v85 = ptr;
            v86 = v84 + 1;
            if ( *((_QWORD *)&v135 + 1) < (unsigned __int64)(v84 + 1) )
            {
              s1a = v84;
              v124 = v84 + 1;
              ptr = (void *)qvector_reserve(&ptr, ptr, v86, 1);
              v84 = s1a;
              v85 = ptr;
              v86 = v124;
            }
            *(_QWORD *)&v135 = v86;
            v84[(_QWORD)v85] = 0;
            v87 = (char *)ptr + v82;
            v16 = 0;
            memmove(v87, v129, v83);
            goto LABEL_31;
          }
          v78 = 6;
          v79 = 5;
          v128 = 0;
        }
        ptr = (void *)qvector_reserve(&ptr, ptr, v78, 1);
        v77 = ptr;
LABEL_181:
        *(_QWORD *)&v135 = v78;
        v77[v79] = 0;
        if ( v128 )
          memmove((char *)ptr + 5, ptr, v128);
        goto LABEL_183;
      }
LABEL_160:
      v67 = 2;
      v68 = v135;
      if ( (_QWORD)v135 )
      {
        v67 = v135 + 1;
        v68 = v135 - 1;
      }
      v69 = ptr;
      if ( *((_QWORD *)&v135 + 1) < v67 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v67, 1);
        v69 = ptr;
      }
      *(_QWORD *)&v135 = v67;
      v69[v68] = 32;
      *((_BYTE *)ptr + v68 + 1) = 0;
      goto LABEL_108;
    }
LABEL_78:
    if ( (v15 & 0xFFFFFE3F) == 0 )
    {
      v13 = (char *)v33;
      if ( !v33 )
        goto LABEL_24;
      goto LABEL_160;
    }
    v13 = (char *)v33;
    goto LABEL_168;
  }
  v15 = *(int *)(a3 + 24);
  v16 = 1;
  if ( (_DWORD)v15 )
  {
    if ( (v15 & 1) == 0 )
    {
      if ( (v15 & 0xFFFFFE3F) == 0 )
      {
LABEL_24:
        v13 = nullptr;
        goto LABEL_25;
      }
LABEL_87:
      v34 = 0;
      goto LABEL_88;
    }
    goto LABEL_121;
  }
LABEL_32:
  if ( (*(_BYTE *)(a1 + 34) & 4) != 0 )
    goto LABEL_36;
  v18 = *(_BYTE *)(v10 + 88);
  v19 = v18 & 0xF0;
  if ( (v18 & 0xF0) == 0xC0 )
    v19 = *(_DWORD *)(v10 + 28);
  if ( (unsigned int)(v19 - 208) <= 0x2F )
  {
LABEL_36:
    if ( (get_tinfo_property(*(_QWORD *)(a3 + 32), 2) & 0x3F) != 1 )
    {
      v93 = *(_QWORD *)(a3 + 32);
      HIBYTE(v143) = 1;
      tinfo_size = get_tinfo_size(0, v93, 0);
    }
  }
  if ( !v16 )
    goto LABEL_101;
  v20 = *(_DWORD *)(a3 + 24);
  if ( (v20 & 0x20) != 0 )
  {
    v70 = a2[1];
    v127 = v70;
    if ( v70 )
    {
      v71 = v70 + 11;
      v72 = v70 + 12;
      v127 = v70 - 1;
    }
    else
    {
      v72 = 13;
      v71 = 12;
    }
    v73 = *a2;
    if ( a2[2] < v72 )
    {
      v122 = v72;
      v73 = qvector_reserve(a2, v73, v72, 1);
      v72 = v122;
      *a2 = v73;
    }
    a2[1] = v72;
    *(_BYTE *)(v73 + v71) = 0;
    v74 = *a2 + v127;
    *(_QWORD *)v74 = 0x6175747269762001LL;
    *(_DWORD *)(v74 + 8) = 538968684;
    v20 = *(_DWORD *)(a3 + 24);
  }
  else if ( (v20 & 0x10) != 0 )
  {
    v88 = a2[1];
    v130 = v88;
    if ( v88 )
    {
      v89 = v88 + 10;
      v90 = v88 + 11;
      v130 = v88 - 1;
    }
    else
    {
      v90 = 12;
      v89 = 11;
    }
    v91 = *a2;
    if ( a2[2] < v90 )
    {
      v125 = v90;
      v91 = qvector_reserve(a2, v91, v90, 1);
      v90 = v125;
      *a2 = v91;
    }
    a2[1] = v90;
    *(_BYTE *)(v91 + v89) = 0;
    v92 = *a2 + v130;
    *(_QWORD *)v92 = 0x6369746174732001LL;
    *(_DWORD *)(v92 + 7) = 538968675;
    v20 = *(_DWORD *)(a3 + 24);
  }
  if ( (v20 & 0x1800) != 0 )
  {
    if ( *v13 )
      sub_640FE0(a2, v13, 37);
    v21 = 0;
  }
  else
  {
LABEL_101:
    v131 = 0;
    copy_tinfo_t(&v131);
    v39 = v131;
    v40 = v131;
    if ( (v131 & 0xF) == 0xB )
    {
      do
      {
        src = nullptr;
        src = (void *)get_tinfo_property(v39, 11);
        copy_tinfo_t(&v131);
        clear_tinfo_t(&src);
        v39 = v131;
        v40 = v131;
      }
      while ( (v131 & 0xF) == 0xB );
      v21 = 1;
    }
    else
    {
      v21 = 0;
    }
    if ( !(unsigned __int8)sub_6474E0(a1, a2, &v131, v40, 1, s1, nullptr, 0, (__int64)&v138) )
    {
      clear_tinfo_t(&v131);
      goto LABEL_111;
    }
    clear_tinfo_t(&v131);
  }
  if ( !(_BYTE)v143 )
  {
LABEL_53:
    v22 = 1;
    goto LABEL_54;
  }
  if ( HIBYTE(v143) )
  {
    sub_641E50(a2, v138 + 40, tinfo_size, 2u);
    HIBYTE(v143) = 0;
  }
  if ( (unsigned __int8)sub_64A4E0(a1, a2, &v138) )
  {
    if ( v21 )
    {
      sub_6453E0(&src, a1, a2, (unsigned __int64 *)(a3 + 32));
      clear_tinfo_t(&src);
    }
    if ( v16 && (*(_BYTE *)(a3 + 25) & 4) != 0 )
    {
      v96 = 2;
      v97 = a2[1];
      if ( v97 )
      {
        v98 = v97-- + 1;
        v96 = v98;
      }
      v99 = *a2;
      if ( a2[2] < v96 )
      {
        v100 = qvector_reserve(a2, v99, v96, 1);
        *a2 = v100;
        v99 = v100;
      }
      a2[1] = v96;
      *(_BYTE *)(v99 + v97) = 32;
      *(_BYTE *)(*a2 + v97 + 1) = 0;
      sub_640FE0(a2, "const", 32);
    }
    goto LABEL_53;
  }
LABEL_111:
  v22 = 0;
LABEL_54:
  if ( ptr )
  {
    *(_QWORD *)&v135 = 0;
    qfree(ptr);
  }
  v23 = (char **)v139;
  v138 = 0;
  if ( v139 )
  {
    v24 = *((void **)v139 + 8);
    if ( v24 )
    {
      *((_QWORD *)v139 + 9) = 0;
      qfree(v24);
    }
    cleanup_argloc(v23 + 5);
    clear_tinfo_t(v23 + 4);
    v25 = *v23;
    if ( *v23 )
    {
      v26 = v23[1];
      if ( v26 )
      {
        for ( i = nullptr; i != v26; ++i )
        {
          v28 = &v25[80 * (_QWORD)i];
          clear_tinfo_t(v28 + 64);
          v29 = *((void **)v28 + 5);
          if ( v29 )
          {
            *((_QWORD *)v28 + 6) = 0;
            qfree(v29);
          }
          v30 = *((void **)v28 + 2);
          if ( v30 )
          {
            *((_QWORD *)v28 + 3) = 0;
            qfree(v30);
          }
          cleanup_argloc(v28);
          v25 = *v23;
        }
      }
      v23[1] = nullptr;
      qfree(v25);
    }
    qfree(v23);
  }
  if ( dest )
  {
    *(_QWORD *)&v133 = 0;
    qfree(dest);
  }
  return v22;
}

