__int64 __fastcall sub_6685D0(__int64 a1, __int64 *a2, __int64 a3, char *a4, char a5)
{
  char v7; // dl
  __int64 v9; // rdx
  char v10; // cl
  unsigned int v11; // r15d
  char *v12; // r15
  int v13; // eax
  __int64 v14; // rax
  char v15; // r12
  __int64 v16; // r13
  char v17; // cl
  int v18; // eax
  int v19; // eax
  char v20; // r15
  unsigned int v21; // r12d
  char **v22; // r13
  void *v23; // rdi
  char *v24; // rdi
  char *v25; // r14
  char *i; // r15
  char *v27; // rbx
  void *v28; // rdi
  void *v29; // rdi
  int v31; // eax
  const char *v32; // r13
  char v33; // dl
  const char *v34; // rsi
  __int64 v35; // r13
  unsigned __int64 v36; // rdx
  _BYTE *v37; // rsi
  __int64 v38; // rdi
  char v39; // cl
  __int64 v40; // r12
  unsigned __int64 v41; // r15
  _BYTE *v42; // rsi
  int v43; // r12d
  size_t v44; // rax
  bool v45; // zf
  size_t v46; // r8
  _BYTE *v47; // r13
  __int64 v48; // r9
  unsigned __int64 v49; // rdx
  _BYTE *v50; // rsi
  unsigned __int64 v51; // rdx
  __int64 v52; // r9
  _BYTE *v53; // rsi
  size_t v54; // r10
  __int64 v55; // r9
  size_t v56; // r11
  _BYTE *v57; // rsi
  __int64 v58; // r8
  unsigned __int64 v59; // rdx
  _BYTE *v60; // rsi
  unsigned __int64 v61; // rdx
  __int64 v62; // r8
  _BYTE *v63; // rsi
  unsigned __int64 v64; // r12
  __int64 v65; // r13
  _BYTE *v66; // rsi
  size_t v67; // rax
  __int64 v68; // r13
  unsigned __int64 v69; // rdx
  __int64 v70; // rsi
  size_t v71; // rax
  char *v72; // rsi
  __int64 v73; // r12
  _BYTE *v74; // rsi
  __int64 v75; // r13
  __int64 v76; // r12
  _BYTE *v77; // rax
  size_t v78; // rax
  __int64 v79; // r12
  size_t v80; // r13
  char *v81; // r8
  void *v82; // rsi
  char *v83; // rdx
  char *v84; // rdi
  size_t v85; // rax
  __int64 v86; // r13
  unsigned __int64 v87; // rdx
  __int64 v88; // rsi
  size_t v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rax
  unsigned __int64 v92; // r12
  unsigned __int64 v93; // r14
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rax
  void *v98; // r8
  const void *v99; // r15
  size_t v100; // [rsp+8h] [rbp-118h]
  __int64 v101; // [rsp+10h] [rbp-110h]
  __int64 v102; // [rsp+10h] [rbp-110h]
  __int64 v103; // [rsp+10h] [rbp-110h]
  __int64 v104; // [rsp+18h] [rbp-108h]
  __int64 v105; // [rsp+18h] [rbp-108h]
  size_t v106; // [rsp+18h] [rbp-108h]
  size_t v107; // [rsp+18h] [rbp-108h]
  size_t v108; // [rsp+18h] [rbp-108h]
  size_t nf; // [rsp+28h] [rbp-F8h]
  size_t n; // [rsp+28h] [rbp-F8h]
  size_t ne; // [rsp+28h] [rbp-F8h]
  size_t nd; // [rsp+28h] [rbp-F8h]
  size_t nb; // [rsp+28h] [rbp-F8h]
  size_t na; // [rsp+28h] [rbp-F8h]
  size_t nc; // [rsp+28h] [rbp-F8h]
  char *s1a; // [rsp+38h] [rbp-E8h]
  unsigned __int64 v119; // [rsp+40h] [rbp-E0h]
  unsigned __int64 v120; // [rsp+40h] [rbp-E0h]
  char *v121; // [rsp+40h] [rbp-E0h]
  unsigned __int64 v122; // [rsp+40h] [rbp-E0h]
  char *v123; // [rsp+48h] [rbp-D8h]
  size_t v124; // [rsp+48h] [rbp-D8h]
  size_t v125; // [rsp+48h] [rbp-D8h]
  const void *v126; // [rsp+48h] [rbp-D8h]
  size_t v127; // [rsp+48h] [rbp-D8h]
  __int64 v128; // [rsp+58h] [rbp-C8h] BYREF
  void *dest; // [rsp+60h] [rbp-C0h] BYREF
  __int128 v130; // [rsp+68h] [rbp-B8h]
  void *ptr; // [rsp+80h] [rbp-A0h] BYREF
  __int128 v132; // [rsp+88h] [rbp-98h]
  void *src; // [rsp+A0h] [rbp-80h] BYREF
  __int128 v134; // [rsp+A8h] [rbp-78h]
  __int64 v135; // [rsp+C0h] [rbp-60h] BYREF
  void *v136; // [rsp+C8h] [rbp-58h]
  __int64 tinfo_size; // [rsp+D0h] [rbp-50h]
  int v138; // [rsp+D8h] [rbp-48h]
  char v139; // [rsp+DCh] [rbp-44h]
  __int16 v140; // [rsp+DDh] [rbp-43h]
  unsigned __int64 v141; // [rsp+E8h] [rbp-38h]

  v7 = *(_BYTE *)(a1 + 34);
  v141 = __readfsqword(0x28u);
  dest = nullptr;
  v130 = 0;
  sub_660D20(&v135, a3, (v7 & 4) != 0);
  v9 = v135;
  v139 = a5;
  tinfo_size = 0;
  v10 = *(_BYTE *)(v135 + 88);
  v138 = 0;
  v140 = 1;
  v11 = v10 & 0xF0;
  if ( (v10 & 0xF0) == 0xC0 )
    v11 = *(_DWORD *)(v135 + 28);
  if ( v11 == 128 )
  {
    v12 = "__thiscall";
    goto LABEL_17;
  }
  if ( v11 <= 0x80 )
  {
    if ( v11 == 80 )
    {
      v12 = "__stdcall";
      goto LABEL_17;
    }
    if ( v11 > 0x50 )
    {
      if ( v11 == 96 )
      {
        v12 = "__pascal";
        goto LABEL_17;
      }
      if ( v11 == 112 )
      {
        v12 = "__fastcall";
        goto LABEL_17;
      }
    }
    else
    {
      if ( v11 == 32 )
        goto LABEL_83;
      if ( v11 <= 0x20 )
      {
        if ( !v11 )
        {
          v31 = *(_DWORD *)(v135 + 24) & 0xC0;
          switch ( v31 )
          {
            case 128:
              ptr = nullptr;
              v132 = 0;
              v32 = "__far";
              break;
            case 192:
              ptr = nullptr;
              v132 = 0;
              v32 = "__interrupt";
              break;
            case 64:
              ptr = nullptr;
              v132 = 0;
              v32 = "__near";
              break;
            default:
              v12 = "__bad_cc";
              v32 = nullptr;
              ptr = nullptr;
              v132 = 0;
              goto LABEL_77;
          }
          v12 = "__bad_cc";
          goto LABEL_77;
        }
        if ( v11 == 16 )
          goto LABEL_83;
      }
      else
      {
        if ( v11 == 48 )
        {
          v12 = "__cdecl";
          goto LABEL_17;
        }
        if ( v11 == 64 )
        {
LABEL_83:
          v12 = nullptr;
          v13 = *(_DWORD *)(v135 + 24) & 0xC0;
          if ( v13 == 128 )
          {
            ptr = nullptr;
            v132 = 0;
            v32 = "__far";
            goto LABEL_85;
          }
          goto LABEL_18;
        }
      }
    }
    goto LABEL_208;
  }
  if ( v11 == 224 )
  {
    v12 = "__userpurge";
    goto LABEL_17;
  }
  if ( v11 > 0xE0 )
  {
    if ( v11 != 240 )
    {
      if ( v11 == 256 )
      {
        v12 = "__gostk";
        goto LABEL_17;
      }
      goto LABEL_208;
    }
LABEL_213:
    v12 = "__usercall";
    goto LABEL_17;
  }
  switch ( v11 )
  {
    case 0xB0u:
      v12 = "__golang";
      goto LABEL_17;
    case 0xD0u:
      goto LABEL_213;
    case 0x90u:
      v12 = "__swiftcall";
      goto LABEL_17;
  }
LABEL_208:
  get_custom_callcnv(v11);
  if ( v91 )
  {
    if ( &dest != (void **)(v91 + 24) )
    {
      v92 = *(_QWORD *)(v91 + 32);
      if ( v92 > 1 )
      {
        v98 = dest;
        v99 = *(const void **)(v91 + 24);
        if ( *((_QWORD *)&v130 + 1) < v92 )
        {
          dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v91 + 32), 1);
          v98 = dest;
        }
        *(_QWORD *)&v130 = v92;
        memmove(v98, v99, v92 - 1);
        *((char *)dest + v92 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v130 = 0;
      }
    }
  }
  else
  {
    sub_35A790((char **)&dest);
  }
  v12 = (char *)dest;
  v9 = v135;
LABEL_17:
  v13 = *(_DWORD *)(v9 + 24) & 0xC0;
  if ( v13 == 128 )
  {
    ptr = nullptr;
    v132 = 0;
    v32 = "__far";
LABEL_113:
    if ( v12 )
      goto LABEL_114;
LABEL_85:
    v14 = *(int *)(a3 + 24);
    v12 = (char *)v32;
    if ( (v14 & 1) == 0 )
    {
      if ( (v14 & 0xFFFFFE3F) == 0 )
        goto LABEL_108;
      goto LABEL_87;
    }
    goto LABEL_121;
  }
LABEL_18:
  if ( v13 == 192 )
  {
    ptr = nullptr;
    v132 = 0;
    v32 = "__interrupt";
    goto LABEL_113;
  }
  if ( v13 == 64 )
  {
    ptr = nullptr;
    v132 = 0;
    v32 = "__near";
    goto LABEL_113;
  }
  ptr = nullptr;
  v132 = 0;
  if ( v12 )
  {
    v32 = nullptr;
LABEL_114:
    if ( !*v12 )
    {
      v14 = *(int *)(a3 + 24);
      if ( (v14 & 1) != 0 )
        goto LABEL_116;
      goto LABEL_78;
    }
LABEL_77:
    sub_65E8C0((__int64 *)&ptr, v12, 32);
    v14 = *(int *)(a3 + 24);
    if ( (v14 & 1) != 0 )
    {
LABEL_116:
      v40 = v132;
      v41 = 2;
      if ( (_QWORD)v132 )
      {
        v41 = v132 + 1;
        v40 = v132 - 1;
      }
      v42 = ptr;
      if ( *((_QWORD *)&v132 + 1) < v41 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v41, 1);
        v42 = ptr;
      }
      *(_QWORD *)&v132 = v41;
      v12 = (char *)v32;
      v42[v40] = 32;
      *((_BYTE *)ptr + v40 + 1) = 0;
LABEL_121:
      sub_65E8C0((__int64 *)&ptr, "__spoils", 32);
      sub_65F4F0((__int64 *)&ptr, 60);
      v43 = 0;
      v44 = 0;
      v45 = *(_QWORD *)(a3 + 72) == 0;
      src = nullptr;
      v134 = 0;
      if ( !v45 )
      {
        while ( get_reg_name(
                  &src,
                  *(unsigned int *)(*(_QWORD *)(a3 + 64) + 8 * v44),
                  *(int *)(*(_QWORD *)(a3 + 64) + 8 * v44 + 4),
                  0xFFFFFFFFLL) <= 0 )
        {
          sub_35A910((__int64 *)&ptr);
          v44 = ++v43;
          if ( (unsigned __int64)v43 >= *(_QWORD *)(a3 + 72) )
            goto LABEL_156;
LABEL_153:
          if ( v43 > 0 )
          {
            nf = v44;
            sub_65F4F0((__int64 *)&ptr, 44);
            v44 = nf;
          }
        }
        v46 = v134;
        if ( (_QWORD)v134 )
        {
          n = v134;
          v47 = (_BYTE *)qalloc_or_throw(v134);
          memcpy(v47, src, n);
          if ( !*v47 )
          {
LABEL_150:
            if ( v47 )
              qfree(v47);
LABEL_152:
            v44 = ++v43;
            if ( (unsigned __int64)v43 >= *(_QWORD *)(a3 + 72) )
              goto LABEL_156;
            goto LABEL_153;
          }
          v46 = n;
        }
        else
        {
          if ( !byte_2CCB1E1 )
            goto LABEL_152;
          v47 = nullptr;
        }
        v48 = v132;
        v49 = 2;
        if ( (_QWORD)v132 )
        {
          v49 = v132 + 1;
          v48 = v132 - 1;
        }
        v50 = ptr;
        if ( *((_QWORD *)&v132 + 1) < v49 )
        {
          v102 = v48;
          v107 = v46;
          na = v49;
          ptr = (void *)qvector_reserve(&ptr, ptr, v49, 1);
          v48 = v102;
          v50 = ptr;
          v46 = v107;
          v49 = na;
        }
        *(_QWORD *)&v132 = v49;
        v51 = 2;
        v50[v48] = 1;
        *((_BYTE *)ptr + v48 + 1) = 0;
        v52 = v132;
        if ( (_QWORD)v132 )
        {
          v51 = v132 + 1;
          v52 = v132 - 1;
        }
        v53 = ptr;
        if ( *((_QWORD *)&v132 + 1) < v51 )
        {
          v101 = v52;
          v106 = v46;
          nb = v51;
          ptr = (void *)qvector_reserve(&ptr, ptr, v51, 1);
          v52 = v101;
          v53 = ptr;
          v46 = v106;
          v51 = nb;
        }
        *(_QWORD *)&v132 = v51;
        v53[v52] = 33;
        *((_BYTE *)ptr + v52 + 1) = 0;
        if ( v46 )
        {
          v54 = v46 - 1;
          if ( v46 != 1 )
          {
            v55 = v132;
            v56 = v46 - 1;
            if ( (_QWORD)v132 )
            {
              v55 = v132 - 1;
              v56 = v54 + v132 - 1;
              v46 += v132 - 1;
            }
            v57 = ptr;
            if ( *((_QWORD *)&v132 + 1) < v46 )
            {
              v100 = v56;
              v103 = v55;
              v108 = v54;
              nc = v46;
              ptr = (void *)qvector_reserve(&ptr, ptr, v46, 1);
              v56 = v100;
              v57 = ptr;
              v55 = v103;
              v54 = v108;
              v46 = nc;
            }
            *(_QWORD *)&v132 = v46;
            v57[v56] = 0;
            memcpy((char *)ptr + v55, v47, v54);
          }
        }
        v58 = v132;
        v59 = 2;
        if ( (_QWORD)v132 )
        {
          v59 = v132 + 1;
          v58 = v132 - 1;
        }
        v60 = ptr;
        if ( *((_QWORD *)&v132 + 1) < v59 )
        {
          v105 = v58;
          nd = v59;
          ptr = (void *)qvector_reserve(&ptr, ptr, v59, 1);
          v58 = v105;
          v60 = ptr;
          v59 = nd;
        }
        *(_QWORD *)&v132 = v59;
        v61 = 2;
        v60[v58] = 2;
        *((_BYTE *)ptr + v58 + 1) = 0;
        v62 = v132;
        if ( (_QWORD)v132 )
        {
          v61 = v132 + 1;
          v62 = v132 - 1;
        }
        v63 = ptr;
        if ( *((_QWORD *)&v132 + 1) < v61 )
        {
          v104 = v62;
          ne = v61;
          ptr = (void *)qvector_reserve(&ptr, ptr, v61, 1);
          v62 = v104;
          v63 = ptr;
          v61 = ne;
        }
        *(_QWORD *)&v132 = v61;
        v63[v62] = 33;
        *((_BYTE *)ptr + v62 + 1) = 0;
        goto LABEL_150;
      }
LABEL_156:
      sub_65F4F0((__int64 *)&ptr, 62);
      if ( src )
      {
        *(_QWORD *)&v134 = 0;
        qfree(src);
      }
      v14 = *(int *)(a3 + 24);
      if ( (v14 & 0xFFFFFE3F) == 0 )
      {
        if ( !v12 )
          goto LABEL_24;
        goto LABEL_160;
      }
LABEL_168:
      v33 = 1;
LABEL_88:
      v123 = (char *)&unk_2B372E0;
      if ( (((unsigned __int64)&dword_0 + 2) & v14) == 0 )
        goto LABEL_93;
      if ( v33 )
      {
LABEL_96:
        v35 = v132;
        v36 = 2;
        if ( (_QWORD)v132 )
        {
          v36 = v132 + 1;
          v35 = v132 - 1;
        }
        v37 = ptr;
        if ( *((_QWORD *)&v132 + 1) < v36 )
        {
          v120 = v36;
          ptr = (void *)qvector_reserve(&ptr, ptr, v36, 1);
          v36 = v120;
          v37 = ptr;
        }
        *(_QWORD *)&v132 = v36;
        v37[v35] = 32;
        *((_BYTE *)ptr + v35 + 1) = 0;
      }
LABEL_90:
      v34 = *((const char **)v123 + 1);
      if ( *v34 )
        sub_65E8C0((__int64 *)&ptr, v34, 32);
      v33 = 1;
LABEL_93:
      while ( 1 )
      {
        v123 += 16;
        if ( v123 == algn_2B37310 )
          break;
        if ( (*(_QWORD *)v123 & *(int *)(a3 + 24)) != 0 )
        {
          if ( !v33 )
            goto LABEL_90;
          goto LABEL_96;
        }
      }
      if ( !v12 )
        goto LABEL_24;
      if ( !v33 )
      {
LABEL_108:
        if ( *v12 )
          sub_65E8C0((__int64 *)&ptr, v12, 32);
LABEL_25:
        if ( !a4 )
        {
LABEL_30:
          v15 = 1;
LABEL_31:
          v9 = v135;
          a4 = (char *)ptr;
          goto LABEL_32;
        }
        v16 = v132;
        if ( (unsigned __int64)v132 > 1 )
        {
          v72 = (char *)ptr;
          v73 = v132 + 1;
          if ( *((_QWORD *)&v132 + 1) < (unsigned __int64)(v132 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v132 + 1, 1);
            v72 = (char *)ptr;
          }
          *(_QWORD *)&v132 = v73;
          v72[v16 - 1] = 32;
          *((_BYTE *)ptr + v16) = 0;
        }
        if ( strncmp(a4, &byte_22D5D64, 5u) )
        {
          if ( *a4 )
            sub_65E8C0((__int64 *)&ptr, a4, 33);
          goto LABEL_30;
        }
        v74 = ptr;
        if ( (_QWORD)v132 )
        {
          v75 = v132 + 5;
          v125 = v132 - 1;
          v76 = v132 + 4;
          if ( *((_QWORD *)&v132 + 1) >= (unsigned __int64)(v132 + 5) )
            goto LABEL_181;
        }
        else
        {
          if ( *((_QWORD *)&v132 + 1) > 5u )
          {
            *(_QWORD *)&v132 = 6;
            *((_BYTE *)ptr + 5) = 0;
LABEL_183:
            v77 = ptr;
            *(_DWORD *)ptr = 36178177;
            v77[4] = 9;
            v126 = a4 + 5;
            v78 = strlen(a4 + 5);
            v79 = v132;
            v80 = v78;
            v81 = (char *)v78;
            if ( (_QWORD)v132 )
            {
              v79 = v132 - 1;
              v81 = (char *)(v78 + v132 - 1);
            }
            v82 = ptr;
            v83 = v81 + 1;
            if ( *((_QWORD *)&v132 + 1) < (unsigned __int64)(v81 + 1) )
            {
              s1a = v81;
              v121 = v81 + 1;
              ptr = (void *)qvector_reserve(&ptr, ptr, v83, 1);
              v81 = s1a;
              v82 = ptr;
              v83 = v121;
            }
            *(_QWORD *)&v132 = v83;
            v81[(_QWORD)v82] = 0;
            v84 = (char *)ptr + v79;
            v15 = 0;
            memmove(v84, v126, v80);
            goto LABEL_31;
          }
          v75 = 6;
          v76 = 5;
          v125 = 0;
        }
        ptr = (void *)qvector_reserve(&ptr, ptr, v75, 1);
        v74 = ptr;
LABEL_181:
        *(_QWORD *)&v132 = v75;
        v74[v76] = 0;
        if ( v125 )
          memmove((char *)ptr + 5, ptr, v125);
        goto LABEL_183;
      }
LABEL_160:
      v64 = 2;
      v65 = v132;
      if ( (_QWORD)v132 )
      {
        v64 = v132 + 1;
        v65 = v132 - 1;
      }
      v66 = ptr;
      if ( *((_QWORD *)&v132 + 1) < v64 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v64, 1);
        v66 = ptr;
      }
      *(_QWORD *)&v132 = v64;
      v66[v65] = 32;
      *((_BYTE *)ptr + v65 + 1) = 0;
      goto LABEL_108;
    }
LABEL_78:
    if ( (v14 & 0xFFFFFE3F) == 0 )
    {
      v12 = (char *)v32;
      if ( !v32 )
        goto LABEL_24;
      goto LABEL_160;
    }
    v12 = (char *)v32;
    goto LABEL_168;
  }
  v14 = *(int *)(a3 + 24);
  v15 = 1;
  if ( (_DWORD)v14 )
  {
    if ( (v14 & 1) == 0 )
    {
      if ( (v14 & 0xFFFFFE3F) == 0 )
      {
LABEL_24:
        v12 = nullptr;
        goto LABEL_25;
      }
LABEL_87:
      v33 = 0;
      goto LABEL_88;
    }
    goto LABEL_121;
  }
LABEL_32:
  if ( (*(_BYTE *)(a1 + 34) & 4) != 0 )
    goto LABEL_36;
  v17 = *(_BYTE *)(v9 + 88);
  v18 = v17 & 0xF0;
  if ( (v17 & 0xF0) == 0xC0 )
    v18 = *(_DWORD *)(v9 + 28);
  if ( (unsigned int)(v18 - 208) <= 0x2F )
  {
LABEL_36:
    if ( (get_tinfo_property(*(_QWORD *)(a3 + 32), 2) & 0x3F) != 1 )
    {
      v90 = *(_QWORD *)(a3 + 32);
      HIBYTE(v140) = 1;
      tinfo_size = get_tinfo_size(0, v90, 0);
    }
  }
  if ( !v15 )
    goto LABEL_101;
  v19 = *(_DWORD *)(a3 + 24);
  if ( (v19 & 0x20) != 0 )
  {
    v67 = a2[1];
    v124 = v67;
    if ( v67 )
    {
      v68 = v67 + 11;
      v69 = v67 + 12;
      v124 = v67 - 1;
    }
    else
    {
      v69 = 13;
      v68 = 12;
    }
    v70 = *a2;
    if ( a2[2] < v69 )
    {
      v119 = v69;
      v70 = qvector_reserve(a2, v70, v69, 1);
      v69 = v119;
      *a2 = v70;
    }
    a2[1] = v69;
    *(_BYTE *)(v70 + v68) = 0;
    v71 = *a2 + v124;
    *(_QWORD *)v71 = 0x6175747269762001LL;
    *(_DWORD *)(v71 + 8) = 538968684;
    v19 = *(_DWORD *)(a3 + 24);
  }
  else if ( (v19 & 0x10) != 0 )
  {
    v85 = a2[1];
    v127 = v85;
    if ( v85 )
    {
      v86 = v85 + 10;
      v87 = v85 + 11;
      v127 = v85 - 1;
    }
    else
    {
      v87 = 12;
      v86 = 11;
    }
    v88 = *a2;
    if ( a2[2] < v87 )
    {
      v122 = v87;
      v88 = qvector_reserve(a2, v88, v87, 1);
      v87 = v122;
      *a2 = v88;
    }
    a2[1] = v87;
    *(_BYTE *)(v88 + v86) = 0;
    v89 = *a2 + v127;
    *(_QWORD *)v89 = 0x6369746174732001LL;
    *(_DWORD *)(v89 + 7) = 538968675;
    v19 = *(_DWORD *)(a3 + 24);
  }
  if ( (v19 & 0x1800) != 0 )
  {
    if ( *v12 )
      sub_65E8C0(a2, v12, 37);
    v20 = 0;
  }
  else
  {
LABEL_101:
    v128 = 0;
    copy_tinfo_t(&v128);
    v38 = v128;
    v39 = v128;
    if ( (v128 & 0xF) == 0xB )
    {
      do
      {
        src = nullptr;
        src = (void *)get_tinfo_property(v38, 11);
        copy_tinfo_t(&v128);
        clear_tinfo_t(&src);
        v38 = v128;
        v39 = v128;
      }
      while ( (v128 & 0xF) == 0xB );
      v20 = 1;
    }
    else
    {
      v20 = 0;
    }
    if ( !(unsigned __int8)sub_664DE0(a1, a2, &v128, v39, 1, a4, nullptr, 0, (__int64)&v135) )
    {
      clear_tinfo_t(&v128);
      goto LABEL_111;
    }
    clear_tinfo_t(&v128);
  }
  if ( !(_BYTE)v140 )
  {
LABEL_53:
    v21 = 1;
    goto LABEL_54;
  }
  if ( HIBYTE(v140) )
  {
    sub_65F730(a2, v135 + 40, tinfo_size, 2u);
    HIBYTE(v140) = 0;
  }
  if ( (unsigned __int8)sub_667DE0(a1, a2, &v135) )
  {
    if ( v20 )
    {
      sub_662CD0(&src, a1, a2, (unsigned __int64 *)(a3 + 32));
      clear_tinfo_t(&src);
    }
    if ( v15 && (*(_BYTE *)(a3 + 25) & 4) != 0 )
    {
      v93 = 2;
      v94 = a2[1];
      if ( v94 )
      {
        v95 = v94-- + 1;
        v93 = v95;
      }
      v96 = *a2;
      if ( a2[2] < v93 )
      {
        v97 = qvector_reserve(a2, v96, v93, 1);
        *a2 = v97;
        v96 = v97;
      }
      a2[1] = v93;
      *(_BYTE *)(v96 + v94) = 32;
      *(_BYTE *)(*a2 + v94 + 1) = 0;
      sub_65E8C0(a2, "const", 32);
    }
    goto LABEL_53;
  }
LABEL_111:
  v21 = 0;
LABEL_54:
  if ( ptr )
  {
    *(_QWORD *)&v132 = 0;
    qfree(ptr);
  }
  v22 = (char **)v136;
  v135 = 0;
  if ( v136 )
  {
    v23 = *((void **)v136 + 8);
    if ( v23 )
    {
      *((_QWORD *)v136 + 9) = 0;
      qfree(v23);
    }
    cleanup_argloc(v22 + 5);
    clear_tinfo_t(v22 + 4);
    v24 = *v22;
    if ( *v22 )
    {
      v25 = v22[1];
      if ( v25 )
      {
        for ( i = nullptr; i != v25; ++i )
        {
          v27 = &v24[80 * (_QWORD)i];
          clear_tinfo_t(v27 + 64);
          v28 = *((void **)v27 + 5);
          if ( v28 )
          {
            *((_QWORD *)v27 + 6) = 0;
            qfree(v28);
          }
          v29 = *((void **)v27 + 2);
          if ( v29 )
          {
            *((_QWORD *)v27 + 3) = 0;
            qfree(v29);
          }
          cleanup_argloc(v27);
          v24 = *v22;
        }
      }
      v22[1] = nullptr;
      qfree(v24);
    }
    qfree(v22);
  }
  if ( dest )
  {
    *(_QWORD *)&v130 = 0;
    qfree(dest);
  }
  return v21;
}
