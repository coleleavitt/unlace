/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DDC0
// Address: 0x000000000044DDC0

//----- (000000000044DDC0) ----------------------------------------------------
__int64 __fastcall sub_44DDC0(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  char *j; // rbx
  bool v8; // zf
  _BYTE *k; // rax
  unsigned __int64 v10; // r15
  bool v11; // bl
  unsigned __int8 v12; // al
  _QWORD *v13; // rdx
  char *v14; // r13
  char *v15; // rcx
  int v16; // r8d
  __int64 v17; // rsi
  char *v18; // rax
  int v19; // r8d
  char *v20; // rcx
  _BYTE *v21; // rax
  char v22; // dl
  char *i; // rax
  char *v24; // rcx
  int v25; // r8d
  int v26; // eax
  char *v28; // rax
  int v29; // edx
  char v30; // r14
  char *v31; // rcx
  char v32; // al
  char *v33; // r9
  unsigned __int8 *v34; // r14
  int v35; // r8d
  unsigned int v36; // edi
  char *v37; // r10
  unsigned __int8 v38; // al
  unsigned __int8 *n; // rbx
  unsigned __int8 v40; // di
  char v41; // al
  int v42; // eax
  char *v43; // rax
  int v44; // ecx
  __int64 v45; // rdi
  __int64 v46; // rsi
  unsigned int v47; // edi
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  int v50; // r14d
  __int64 v51; // r11
  unsigned int v52; // edi
  unsigned __int64 v53; // r15
  int v54; // eax
  char v55; // dl
  bool v56; // r13
  char v57; // r14
  __int64 v58; // rax
  char v59; // al
  bool v60; // cc
  char *v61; // rbx
  char m; // al
  __int64 v63; // r13
  __int64 v64; // r15
  unsigned __int64 v65; // r14
  void *v66; // rsi
  char v67; // r15
  __int64 v68; // rbx
  unsigned __int64 v69; // r13
  __int64 v70; // r14
  void *v71; // rsi
  void *v72; // rax
  char v73; // al
  __int64 v74; // rbx
  char v75; // r14
  unsigned __int64 v76; // r13
  __int64 v77; // r15
  void *v78; // rsi
  void *v79; // rax
  int v80; // ebx
  unsigned __int8 *v81; // rax
  unsigned __int8 v82; // al
  _BYTE *v83; // rax
  void *v84; // rax
  char v85; // bl
  unsigned __int8 v86; // bl
  char v87; // al
  unsigned int v88; // edi
  int v89; // eax
  unsigned __int64 v90; // rax
  unsigned __int8 *v91; // rbx
  char v92; // al
  int v93; // edx
  __int64 v94; // rax
  __int64 v95; // rbx
  size_t v96; // rbx
  __int64 v97; // rax
  int v98; // eax
  int v99; // eax
  __int16 v100; // ax
  unsigned __int8 v101; // al
  char v102; // r14
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned int v105; // edi
  char v106; // r14
  int v107; // eax
  char v108; // al
  int v109[2]; // [rsp+8h] [rbp-70h]
  int v110; // [rsp+8h] [rbp-70h]
  int cd; // [rsp+10h] [rbp-68h]
  int c; // [rsp+10h] [rbp-68h]
  int ca[2]; // [rsp+10h] [rbp-68h]
  unsigned __int8 *cb; // [rsp+10h] [rbp-68h]
  int cc[2]; // [rsp+10h] [rbp-68h]
  int v116; // [rsp+18h] [rbp-60h]
  char *v117; // [rsp+18h] [rbp-60h]
  int v118; // [rsp+18h] [rbp-60h]
  char *v119; // [rsp+18h] [rbp-60h]
  int v120; // [rsp+18h] [rbp-60h]
  unsigned __int8 *v121; // [rsp+18h] [rbp-60h]
  char *v122; // [rsp+20h] [rbp-58h]
  char *v123; // [rsp+20h] [rbp-58h]
  unsigned __int64 v124; // [rsp+20h] [rbp-58h]
  unsigned __int64 v125; // [rsp+28h] [rbp-50h]
  char *v126; // [rsp+28h] [rbp-50h]
  unsigned __int8 v128; // [rsp+30h] [rbp-48h]
  __int64 v129; // [rsp+38h] [rbp-40h]

  j = *(char **)(a1 + 8);
  v8 = *(_BYTE *)(a1 + 144) == 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = j;
  if ( v8 )
    goto LABEL_2;
  while ( 2 )
  {
    v22 = *j;
    for ( i = j + 1; ; ++i )
    {
      if ( v22 != 42 )
      {
        if ( !v22 )
          goto LABEL_70;
        goto LABEL_28;
      }
      *(_QWORD *)(a1 + 8) = i;
      v22 = *i;
      if ( *i == 47 )
        break;
      if ( v22 == 41 )
      {
        if ( (*(_BYTE *)(a1 + 652) & 2) != 0 )
          goto LABEL_34;
LABEL_45:
        ++i;
LABEL_28:
        *(_QWORD *)(a1 + 8) = i;
        v22 = *i;
        continue;
      }
    }
    if ( (*(_BYTE *)(a1 + 652) & 1) == 0 )
      goto LABEL_45;
LABEL_34:
    *(_BYTE *)(a1 + 144) = 0;
    for ( j = i + 1; ; j = *(char **)(a1 + 8) )
    {
      while ( 1 )
      {
LABEL_2:
        for ( k = j + 1; ; ++k )
        {
          *(_QWORD *)(a1 + 8) = k;
          v10 = (unsigned __int8)*(k - 1);
          v11 = (_BYTE)v10 == 9 || (_BYTE)v10 == 32;
          if ( !v11 && (unsigned __int8)(v10 - 10) > 3u )
            break;
        }
        if ( a4 )
          *a4 = *(_DWORD *)(a1 + 304);
        if ( !(_BYTE)v10 )
          goto LABEL_70;
        if ( (_BYTE)v10 != 47 )
          break;
        v14 = *(char **)(a1 + 8);
        if ( *v14 != 47 )
        {
          v15 = v14 - 1;
          v16 = 47;
          LODWORD(v17) = 47;
          goto LABEL_19;
        }
        if ( (*(_BYTE *)(a1 + 652) & 4) == 0 )
        {
          *(_QWORD *)(a1 + 24) = v14 - 1;
          if ( !isalpha(47) )
          {
            v24 = v14 - 1;
            v25 = 47;
            LODWORD(v17) = 47;
            goto LABEL_51;
          }
          goto LABEL_39;
        }
LABEL_70:
        if ( a3 == *(_QWORD *)(a1 + 64) )
        {
          v104 = *(_QWORD *)(a1 + 8);
          if ( !*(_BYTE *)(v104 - 1) )
            *(_QWORD *)(a1 + 8) = v104 - 1;
          *(_WORD *)(a2 + 24) = 1;
          return 0;
        }
        sub_4495F0(a1);
        j = *(char **)(a1 + 8);
      }
      if ( (_BYTE)v10 == 59 )
      {
        if ( (*(_BYTE *)(a1 + 652) & 8) == 0 )
        {
          v14 = *(char **)(a1 + 8);
          v16 = 59;
          LODWORD(v17) = 59;
          v15 = v14 - 1;
LABEL_19:
          *(_QWORD *)(a1 + 24) = v15;
          v116 = v16;
          *(_QWORD *)v109 = v15;
          if ( !isalpha((char)v10) )
          {
            v18 = strchr("?(),.[\\]`{};~@", v17);
            v19 = v116;
            v20 = *(char **)v109;
            if ( v18 )
            {
              *(_WORD *)(a2 + 24) = (unsigned __int8)v10;
              goto LABEL_22;
            }
            goto LABEL_72;
          }
          goto LABEL_39;
        }
        goto LABEL_70;
      }
      v12 = v10 + 0x80;
      if ( (unsigned __int8)(v10 + 0x80) > 0x7Eu )
        break;
      if ( !*(_QWORD *)(a1 + 64) )
        goto LABEL_81;
      v13 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL * *(int *)(a1 + 80));
      if ( (unsigned __int64)v12 < v13[1] )
      {
        j = *(char **)(*v13 + 24LL * v12);
        if ( j )
        {
          if ( *j )
          {
            sub_449530((__int64 *)a1, 0, nullptr);
            v42 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 56LL * *(int *)(a1 + 80) + 48);
            *(_QWORD *)a1 = j;
            *(_DWORD *)(a1 + 80) = v42;
            goto LABEL_2;
          }
        }
      }
LABEL_15:
      ;
    }
    v14 = *(char **)(a1 + 8);
    v24 = v14 - 1;
    *(_QWORD *)(a1 + 24) = v14 - 1;
    if ( (unsigned int)(char)v10 <= 0x7F )
    {
      if ( !isalpha((char)v10) )
      {
        v25 = (char)v10;
        v24 = v14 - 1;
        goto LABEL_37;
      }
      if ( (_BYTE)v10 != 76 )
      {
LABEL_39:
        v26 = sub_44DA00((__m128i *)a1, 0, a2);
        if ( !v26 )
          return 0;
        if ( v26 != 1 )
          return sub_479E90();
        goto LABEL_15;
      }
      if ( *v14 != 34 )
      {
        if ( *v14 != 39 )
          goto LABEL_39;
        *(_QWORD *)(a1 + 8) = v14 + 1;
        *(_BYTE *)(a2 + 40) = 1;
LABEL_153:
        *(_QWORD *)(a2 + 32) = 0;
        v80 = 0;
        *(_WORD *)(a2 + 24) = 5;
        while ( 1 )
        {
          v81 = *(unsigned __int8 **)(a1 + 8);
          if ( *v81 == 39 )
            break;
          if ( !*v81 )
            return sub_479EB0(0x1Au);
          *(_QWORD *)(a1 + 8) = v81 + 1;
          v82 = *v81;
          if ( v82 == 92 )
            v82 = sub_476490((unsigned __int8 **)(a1 + 8));
          ++v80;
          *(_QWORD *)(a2 + 32) = (*(_QWORD *)(a2 + 32) << 8) | v82;
          if ( v80 == 4 )
          {
            v83 = *(_BYTE **)(a1 + 8);
            if ( *v83 == 39 )
            {
              *(_QWORD *)(a1 + 8) = v83 + 1;
              return 0;
            }
            return sub_479EB0(0x1Au);
          }
        }
        if ( v80 )
        {
          ++*(_QWORD *)(a1 + 8);
          if ( v80 == 1 )
            *(_QWORD *)(a2 + 32) = *(char *)(a2 + 32);
          return 0;
        }
        return sub_479EB0(0x1Au);
      }
      v11 = 1;
      *(_QWORD *)(a1 + 8) = v14 + 1;
LABEL_123:
      *(_BYTE *)(a2 + 40) = v11;
      v60 = *(_QWORD *)(a2 + 16) <= 0x3FFu;
      *(_WORD *)(a2 + 24) = 4;
      *(_QWORD *)(a2 + 8) = 0;
      if ( v60 )
        *(_QWORD *)a2 = sub_481540(a2, *(void **)a2, 0x400u, 1u);
      v61 = *(char **)(a1 + 8);
      for ( m = *v61; *v61 != 34; m = *v61 )
      {
        if ( !m )
          return sub_479EB0(0x18u);
        if ( m == 92 )
        {
          if ( (*(_BYTE *)(a1 + 356) & 0x10) != 0 )
          {
            if ( !v61[1] )
              return sub_479EB0(0x18u);
            v63 = *(_QWORD *)(a2 + 8);
            if ( v63 )
            {
              v64 = v63 + 1;
              v65 = v63 + 2;
              --v63;
            }
            else
            {
              v65 = 3;
              v64 = 2;
            }
            v66 = *(void **)a2;
            if ( *(_QWORD *)(a2 + 16) < v65 )
            {
              v79 = sub_481540(a2, v66, v65, 1u);
              *(_QWORD *)a2 = v79;
              v66 = v79;
            }
            *(_QWORD *)(a2 + 8) = v65;
            *((_BYTE *)v66 + v64) = 0;
            *(_WORD *)(*(_QWORD *)a2 + v63) = *(_WORD *)v61;
            v61 = (char *)(*(_QWORD *)(a1 + 8) + 2LL);
            *(_QWORD *)(a1 + 8) = v61;
          }
          else
          {
            *(_QWORD *)(a1 + 8) = v61 + 1;
            v73 = sub_476490((unsigned __int8 **)(a1 + 8));
            v74 = *(_QWORD *)(a2 + 8);
            v75 = v73;
            if ( v74 )
            {
              v76 = v74 + 1;
              v77 = *(_QWORD *)(a2 + 8);
              --v74;
            }
            else
            {
              v77 = 1;
              v76 = 2;
            }
            v78 = *(void **)a2;
            if ( *(_QWORD *)(a2 + 16) < v76 )
            {
              v84 = sub_481540(a2, v78, v76, 1u);
              *(_QWORD *)a2 = v84;
              v78 = v84;
            }
            *(_QWORD *)(a2 + 8) = v76;
            *((_BYTE *)v78 + v74) = v75;
            *(_BYTE *)(*(_QWORD *)a2 + v77) = 0;
            v61 = *(char **)(a1 + 8);
          }
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v61 + 1;
          v67 = *v61;
          v68 = *(_QWORD *)(a2 + 8);
          if ( v68 )
          {
            v69 = v68 + 1;
            v70 = *(_QWORD *)(a2 + 8);
            --v68;
          }
          else
          {
            v70 = 1;
            v69 = 2;
          }
          v71 = *(void **)a2;
          if ( *(_QWORD *)(a2 + 16) < v69 )
          {
            v72 = sub_481540(a2, v71, v69, 1u);
            *(_QWORD *)a2 = v72;
            v71 = v72;
          }
          *(_QWORD *)(a2 + 8) = v69;
          *((_BYTE *)v71 + v68) = v67;
          *(_BYTE *)(*(_QWORD *)a2 + v70) = 0;
          v61 = *(char **)(a1 + 8);
        }
      }
      *(_QWORD *)(a1 + 8) = v61 + 1;
      return 0;
    }
    v25 = -1;
LABEL_37:
    if ( (_BYTE)v10 == 95 || (_BYTE)v10 == 36 )
      goto LABEL_39;
    LODWORD(v17) = (unsigned __int8)v10;
LABEL_51:
    v117 = v24;
    cd = v25;
    v28 = strchr("?(),.[\\]`{};~@", v17);
    v17 = (unsigned int)v17;
    v19 = cd;
    v20 = v117;
    if ( v28 )
    {
      *(_WORD *)(a2 + 24) = (unsigned __int8)v10;
      if ( (_BYTE)v10 == 46 )
      {
        v14 = *(char **)(a1 + 8);
        v29 = *(_DWORD *)(a1 + 356);
        v30 = *v14;
        if ( (v29 & 1) == 0 )
          goto LABEL_187;
        if ( (unsigned int)v30 > 0x7F )
          return 0;
        if ( (unsigned int)(v30 - 48) > 9
          || (v31 = v14 - 1, *(_QWORD *)a1 < (unsigned __int64)(v14 - 1))
          && (v118 = *(_DWORD *)(a1 + 356),
              v32 = sub_4494F0(*(v14 - 2), (unsigned int)v17, v29),
              v17 = (unsigned int)v17,
              v31 = v14 - 1,
              v29 = v118,
              v32) )
        {
LABEL_187:
          if ( v30 == 46 && v14[1] == 46 )
          {
            *(_QWORD *)(a1 + 8) = v14 + 2;
            *(_WORD *)(a2 + 24) = 11868;
          }
          return 0;
        }
        LOBYTE(v110) = v29;
        v33 = v31;
        v34 = (unsigned __int8 *)v31;
LABEL_59:
        v35 = 0;
        while ( 2 )
        {
          v36 = *v33;
          v37 = v33 + 1;
          v38 = *v33;
          if ( v36 <= 0x7F )
          {
            if ( v36 - 48 <= 9 )
            {
LABEL_185:
              v33 = v37;
              continue;
            }
            if ( v38 == 46 )
            {
              if ( v35 )
                goto LABEL_64;
              v35 = 1;
              goto LABEL_185;
            }
          }
          break;
        }
        v126 = v31;
        v123 = v33;
        v120 = v35;
        *(_QWORD *)ca = v33 + 1;
        v87 = toupper(v38);
        v17 = (unsigned int)v17;
        v31 = v126;
        if ( v87 != 69 )
        {
          if ( !v120 )
          {
            v33 = v126;
            goto LABEL_100;
          }
          if ( v87 == 76 || v87 == 70 )
          {
            v88 = v123[1];
            if ( v88 <= 0x7F )
            {
              v89 = isalnum(v88);
              v31 = v126;
              if ( v89
                || (unsigned __int8)(v88 - 36) <= 0x3Bu
                && (v90 = 0xF7FFFFFFFFFFFBFELL, !_bittest64((const __int64 *)&v90, v88 - 36)) )
              {
LABEL_64:
                for ( n = (unsigned __int8 *)v31; ; v34 = n )
                {
                  *(_QWORD *)(a1 + 8) = v34;
                  v40 = *n++;
                  v41 = sub_4494F0(v40, v17, v29);
                  if ( v40 != 46 && !v41 )
                    break;
                }
                return sub_479EB0(0x15u);
              }
            }
          }
          *(_QWORD *)(a1 + 8) = v31;
          v17 = a2 + 48;
          v47 = 22;
          if ( (unsigned int)sub_47BE00((char **)(a1 + 8), (_OWORD *)(a2 + 48)) != 1 )
            return sub_479EB0(v47);
          *(_WORD *)(a2 + 24) = 7;
          v91 = *(unsigned __int8 **)(a1 + 8);
          v53 = *v91;
          v92 = toupper(*v91);
          if ( v92 == 70 || v92 == 76 )
          {
            *(_QWORD *)(a1 + 8) = v91 + 1;
            v53 = v91[1];
          }
LABEL_199:
          if ( (*(_BYTE *)(a1 + 356) & 2) != 0 )
          {
            if ( (unsigned __int8)sub_4494F0(v53, v17, v93) )
              return sub_479EB0(0x17u);
            if ( (unsigned __int8)v53 <= 0x2Eu )
            {
              v94 = 0x408400000000LL;
              if ( _bittest64(&v94, v53) )
                return sub_479EB0(0x17u);
            }
          }
          v95 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)(a1 + 40) = 0;
          v96 = v95 - (_QWORD)v34;
          if ( *(_QWORD *)(a1 + 48) < v96 + 1 )
            *(_QWORD *)(a1 + 32) = sub_481540(a1 + 32, *(void **)(a1 + 32), v96 + 1, 1u);
          v97 = *(_QWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 40) = v96 + 1;
          *(_BYTE *)(v97 + v96) = 0;
          memmove(*(void **)(a1 + 32), v34, v96);
          return 0;
        }
        if ( (v120 & 2) != 0 )
          goto LABEL_64;
        v35 = v120 | 2;
        v37 = *(char **)ca;
        if ( ((v123[1] - 43) & 0xFD) == 0 )
          v37 = v123 + 2;
        goto LABEL_185;
      }
LABEL_22:
      if ( (_BYTE)v10 != 40 )
        return 0;
      v21 = *(_BYTE **)(a1 + 8);
      if ( *v21 != 42 || (*(_BYTE *)(a1 + 652) & 2) == 0 )
        return 0;
LABEL_25:
      j = v21 + 1;
      *(_BYTE *)(a1 + 144) = 1;
      *(_QWORD *)(a1 + 8) = v21 + 1;
      *(_QWORD *)(a1 + 16) = v21 + 1;
      *(_QWORD *)(a1 + 24) = 0;
      continue;
    }
    break;
  }
LABEL_72:
  v119 = v20;
  c = v19;
  v43 = strchr("!%&*+-/<=>^|:", v17);
  v17 = (unsigned int)v17;
  v31 = v119;
  if ( v43 )
  {
    *(_WORD *)(a2 + 24) = (unsigned __int8)v10;
    v21 = *(_BYTE **)(a1 + 8);
    v44 = (char)*v21;
    if ( *v21 == 61 )
    {
      *(_WORD *)(a2 + 24) = ((unsigned __int8)v10 << 8) + 61;
      ++*(_QWORD *)(a1 + 8);
      return 0;
    }
    if ( (char)v10 > 60 )
    {
      if ( (_BYTE)v10 != 62 )
      {
        if ( (_BYTE)v10 == 124 && (_DWORD)v17 == v44 )
        {
          *(_WORD *)(a2 + 24) = 257 * (unsigned __int8)v10;
          ++*(_QWORD *)(a1 + 8);
        }
        return 0;
      }
      if ( (_DWORD)v17 == v44 )
      {
        *(_WORD *)(a2 + 24) = 257 * (unsigned __int8)v10;
        v48 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v48 + 1;
        goto LABEL_93;
      }
    }
    else
    {
      if ( (char)v10 <= 37 )
        return 0;
      v45 = 0x1400284000000000LL;
      if ( !_bittest64(&v45, v10) )
      {
        if ( (_BYTE)v10 != 47 || (_BYTE)v44 != 42 || (*(_BYTE *)(a1 + 652) & 1) == 0 )
          return 0;
        goto LABEL_25;
      }
      if ( (_DWORD)v17 != (char)v44 )
      {
        if ( (_BYTE)v10 == 45 && (_BYTE)v44 == 62 )
        {
          *(_WORD *)(a2 + 24) = 11582;
          ++*(_QWORD *)(a1 + 8);
        }
        return 0;
      }
      *(_WORD *)(a2 + 24) = 257 * (unsigned __int8)v10;
      v48 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v48 + 1;
      if ( (v10 & 0xFD) == 0x3C )
      {
LABEL_93:
        if ( *(_BYTE *)(v48 + 1) == 61 )
        {
          *(_WORD *)(a2 + 24) += 61;
          ++*(_QWORD *)(a1 + 8);
        }
      }
    }
    return 0;
  }
  if ( (unsigned int)(c - 48) > 9 )
  {
    if ( (_BYTE)v10 != 34 )
    {
      if ( (_BYTE)v10 != 39 )
      {
        if ( (_BYTE)v10 == 35 && *v14 < -1 )
        {
          if ( *(_QWORD *)(a1 + 64) )
          {
            *(_QWORD *)(a1 + 8) = v14 + 1;
            v85 = *v14;
            *(_WORD *)(a2 + 24) = 4;
            v86 = v85 + 0x80;
            *(_BYTE *)(a2 + 40) = 0;
            v60 = *(_QWORD *)(a2 + 16) <= 0x3FFu;
            *(_QWORD *)(a2 + 8) = 0;
            if ( v60 )
              *(_QWORD *)a2 = sub_481540(a2, *(void **)a2, 0x400u, 1u);
            sub_449870(a1, (char ***)a2, v86, *(_DWORD *)(a1 + 80));
            return 0;
          }
          v46 = *v14;
        }
        else
        {
LABEL_81:
          v46 = (char)v10;
        }
        sub_479EE0(0, v46);
        v47 = 27;
        return sub_479EB0(v47);
      }
      goto LABEL_153;
    }
    goto LABEL_123;
  }
  v33 = v119;
  v110 = *(_DWORD *)(a1 + 356);
  if ( (v110 & 1) != 0 )
  {
    v34 = (unsigned __int8 *)v119;
    goto LABEL_59;
  }
LABEL_100:
  v49 = (int)v17 - 48;
  if ( (_BYTE)v10 != 48 )
  {
    v50 = 10;
LABEL_102:
    v51 = v50;
    while ( 1 )
    {
      v52 = *v14;
      v129 = v51;
      v53 = v52;
      if ( v52 > 0x7F )
        break;
      v125 = v49;
      v122 = v33;
      v54 = isxdigit(v52);
      v33 = v122;
      v49 = v125;
      v17 = (char)v52;
      v51 = v129;
      if ( !v54 )
        break;
      *(_QWORD *)(a1 + 8) = ++v14;
      if ( (unsigned __int8)v52 > 0x39u && v50 == 10
        || (unsigned __int8)v52 > 0x37u && v50 == 8
        || (unsigned __int8)v52 > 0x31u && v50 == 2 )
      {
        sub_479EE0(0, (char)v52);
        return sub_479EB0(0x14u);
      }
      if ( (unsigned __int8)v52 > 0x39u )
      {
        if ( (unsigned __int8)v52 > 0x60u )
          v17 = (unsigned int)((char)v52 - 32);
        LOBYTE(v53) = v17 - 7;
      }
      v49 = (unsigned __int8)v53 - 48 + v129 * v125;
    }
    v55 = 1;
    v56 = v50 != 10;
    v57 = 0;
    while ( 1 )
    {
      while ( (v53 & 0xDF) == 0x55 )
      {
        v103 = *(_QWORD *)(a1 + 8);
        v56 = 1;
        *(_QWORD *)(a1 + 8) = v103 + 1;
        v55 = 0;
        v53 = *(unsigned __int8 *)(v103 + 1);
      }
      if ( (v53 & 0xDF) != 0x4C )
        break;
      if ( v57 )
        return sub_479EB0(0x17u);
      v58 = *(_QWORD *)(a1 + 8);
      v17 = v58 + 1;
      *(_QWORD *)(a1 + 8) = v58 + 1;
      v53 = *(unsigned __int8 *)(v58 + 1);
      if ( (*(_BYTE *)(v58 + 1) & 0xDF) == 0x4C )
      {
        v17 = v58 + 2;
        v57 = 1;
        *(_QWORD *)(a1 + 8) = v58 + 2;
        v53 = *(unsigned __int8 *)(v58 + 2);
      }
    }
    v124 = v49;
    v128 = v55;
    v121 = (unsigned __int8 *)v33;
    cb = *(unsigned __int8 **)(a1 + 8);
    v98 = tolower(*cb);
    v93 = v128;
    if ( v98 == 105 )
    {
      v101 = cb[1];
      if ( v101 == 51 )
      {
        if ( cb[2] != 50 )
          goto LABEL_211;
        v102 = 1;
      }
      else
      {
        if ( v101 != 54 || cb[2] != 52 )
          goto LABEL_211;
        v102 = 0;
      }
      v57 = v102 ^ 1;
      *(_QWORD *)(a1 + 8) = cb + 3;
      v53 = cb[3];
    }
LABEL_211:
    if ( (v110 & 8) != 0 )
    {
      if ( v57 )
        goto LABEL_228;
      v57 = v128 & (v124 <= 0x7FFFFFFF);
      if ( v57 )
      {
        v57 = 0;
        v99 = -1;
        goto LABEL_216;
      }
      if ( v124 > 0xFFFFFFFF || (v99 = 1, !v56) )
      {
LABEL_228:
        v99 = -1;
        v57 = v128 & ((v124 & 0x8000000000000000LL) == 0LL);
        if ( !v57 )
        {
          v99 = v56;
          v57 = 1;
        }
      }
LABEL_216:
      v11 = v99 != -1;
    }
    *(_BYTE *)(a2 + 40) = v11;
    if ( v57 )
    {
      *(_QWORD *)(a2 + 48) = v124;
      v100 = 8;
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v124;
      v100 = 3;
    }
    *(_WORD *)(a2 + 24) = v100;
    v34 = v121;
    goto LABEL_199;
  }
  v59 = *v14;
  if ( *v14 == 98 )
    goto LABEL_243;
  if ( v59 > 98 )
  {
    if ( v59 != 120 )
      goto LABEL_115;
    goto LABEL_240;
  }
  if ( v59 == 66 )
  {
LABEL_243:
    v17 = (__int64)(v14 + 1);
    *(_QWORD *)(a1 + 8) = v14 + 1;
    v108 = v14[1];
    if ( (unsigned __int8)(v108 - 48) <= 1u )
    {
      ++v14;
      v50 = 2;
      goto LABEL_102;
    }
    sub_479EE0(0, v108);
    return sub_479EB0(0x14u);
  }
  else
  {
    if ( v59 != 88 )
    {
LABEL_115:
      v50 = 8;
      goto LABEL_102;
    }
LABEL_240:
    *(_QWORD *)(a1 + 8) = v14 + 1;
    v105 = v14[1];
    *(_QWORD *)cc = v33;
    v106 = v14[1];
    if ( v105 <= 0x7F )
    {
      v107 = isxdigit(v105);
      v33 = *(char **)cc;
      v49 = (int)v17 - 48;
      if ( v107 )
      {
        ++v14;
        v50 = 16;
        goto LABEL_102;
      }
    }
    sub_479EE0(0, v106);
    ++*(_QWORD *)(a1 + 8);
    return sub_479EB0(0x14u);
  }
}
// 44E1FF: variable 'v29' is possibly undefined
// 44EA36: variable 'v93' is possibly undefined
