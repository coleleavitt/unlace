unsigned __int64 __fastcall sub_24E80(__m128i *a1, __int64 a2, __int64 a3)
{
  char *v3; // rcx
  __int64 v4; // rbx
  void (*v5)(); // rdx
  char *v6; // rax
  __int64 (*v7)(); // rdx
  unsigned int v8; // eax
  unsigned int v9; // ebp
  int v10; // edx
  unsigned __int64 v11; // r12
  char *v12; // rbp
  __int64 v13; // r13
  int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  char *v18; // rax
  int v19; // eax
  char *v20; // r14
  char *v21; // r13
  unsigned int v22; // edi
  int v23; // eax
  char *v24; // r13
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // r15
  char *v28; // r14
  int v29; // eax
  unsigned __int64 v30; // rdx
  char *v31; // rax
  signed __int64 v32; // r13
  _QWORD *v33; // r14
  unsigned int v34; // eax
  _QWORD *v35; // r15
  __int64 (*v36)(); // rax
  unsigned int v37; // ecx
  char *v38; // r15
  int v39; // r13d
  _QWORD *v40; // r14
  __int64 v41; // rax
  char *v42; // rdx
  _QWORD *v43; // r12
  __int64 (*v44)(); // rax
  __int64 v45; // rax
  __int64 v46; // rbp
  int v47; // eax
  char *v48; // rdx
  int v50; // eax
  int v51; // eax
  char *v52; // rdi
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rsi
  char **v57; // rdi
  __int64 v58; // rax
  int v59; // eax
  bool v60; // r13
  __int64 v61; // r14
  int v62; // eax
  char *v63; // rbp
  size_t v64; // rax
  unsigned int v65; // ecx
  int v66; // ebp
  int v67; // eax
  char *v68; // rdi
  int v69; // eax
  int v70; // eax
  char *v71; // r12
  char *v72; // r13
  unsigned __int64 v73; // rbp
  __int64 v74; // rsi
  int v75; // r12d
  __int64 v76; // r14
  const char **v77; // rbx
  __int64 v78; // r15
  unsigned int v79; // eax
  int v80; // edx
  int v81; // eax
  int v82; // eax
  int v83; // eax
  signed __int64 v85; // [rsp+18h] [rbp-F0h]
  size_t n; // [rsp+28h] [rbp-E0h]
  char *src; // [rsp+30h] [rbp-D8h]
  char *v89; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v90; // [rsp+38h] [rbp-D0h]
  __int64 v91; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v92; // [rsp+40h] [rbp-C8h]
  unsigned int v93; // [rsp+40h] [rbp-C8h]
  char *v94; // [rsp+48h] [rbp-C0h]
  char v95; // [rsp+50h] [rbp-B8h]
  char *v96; // [rsp+50h] [rbp-B8h]
  __int64 v97; // [rsp+58h] [rbp-B0h]
  char *s1; // [rsp+60h] [rbp-A8h] BYREF
  char *v99; // [rsp+68h] [rbp-A0h] BYREF
  char *v100; // [rsp+70h] [rbp-98h] BYREF
  char *v101; // [rsp+78h] [rbp-90h] BYREF
  char *v102; // [rsp+80h] [rbp-88h] BYREF
  char *v103; // [rsp+88h] [rbp-80h] BYREF
  char *v104; // [rsp+90h] [rbp-78h] BYREF
  char *v105; // [rsp+98h] [rbp-70h] BYREF
  char *v106; // [rsp+A0h] [rbp-68h] BYREF
  char *v107; // [rsp+A8h] [rbp-60h] BYREF
  char *v108; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v109; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v110; // [rsp+C8h] [rbp-40h]

  v110 = __readfsqword(0x28u);
  v3 = *(char **)a3;
  src = v3;
  s1 = *(char **)a3;
  if ( !v3 )
    return v110 - __readfsqword(0x28u);
  v4 = (__int64)a1;
  n = *(_QWORD *)(a3 + 8);
  v5 = *(void (**)())(*(_QWORD *)a2 + 40LL);
  v6 = v3;
  if ( v5 != nullsub_10 )
  {
    ((void (__fastcall *)(__int64, _QWORD))v5)(a2, 0);
    v6 = s1;
  }
  a1[10] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6);
  v7 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
  if ( v7 == sub_24950 || (v66 = ((__int64 (__fastcall *)(__int64))v7)(a2), v6 = s1, v66 <= 0) )
  {
    a1[11].m128i_i32[0] = 0;
  }
  else
  {
    if ( (v66 & 0xF) != 0 )
      sub_24D00((__int64)a1, a2, (v66 & 0xF) - 1, (const char **)&s1);
    if ( (v66 & 0x10) != 0 )
      sub_24DE0((__int64)a1, a2, (const char **)&s1);
    v6 = s1;
  }
  while ( 1 )
  {
    v108 = v6;
    v8 = sub_26960(&v108);
    v9 = v8;
    if ( v8 <= 0x7F )
    {
      if ( isspace(v8) )
        goto LABEL_8;
      if ( !v9 )
        break;
    }
    v11 = *(_QWORD *)(v4 + 96);
    v12 = s1;
    if ( v11 )
    {
      v13 = *(_QWORD *)(v4 + 88);
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = v13 + 48 * v15;
        v17 = *(_QWORD *)(v16 + 8);
        if ( v17 > 1 && !strncmp(v12, *(const char **)v16, v17 - 1) )
          break;
        v15 = ++v14;
        if ( v14 >= v11 )
          goto LABEL_16;
      }
      sub_249D0((_QWORD *)v4, a2, v12, *(_DWORD *)(v4 + 176));
      s1 += (*(_QWORD *)(v16 + 8) == 0) + *(_QWORD *)(v16 + 8) - 1;
      sub_24D00(v4, a2, v14, (const char **)&s1);
      v18 = s1;
    }
    else
    {
LABEL_16:
      v18 = v12;
    }
    v108 = v18;
    v19 = sub_26960(&v108);
    v20 = s1;
    if ( *(char *)(v4 + 185) != v19 )
      goto LABEL_21;
    v21 = *(char **)(v4 + 168);
    if ( v21 == *(char **)a3 || v21 == s1 )
    {
LABEL_56:
      sub_249D0((_QWORD *)v4, a2, v20, *(_DWORD *)(v4 + 176));
      sub_24DE0(v4, a2, (const char **)&s1);
      v6 = s1;
    }
    else
    {
      while ( 1 )
      {
        v22 = *v21;
        if ( v22 > 0x7F || !isspace(v22) )
          break;
        if ( ++v21 == v20 )
          goto LABEL_56;
      }
LABEL_21:
      v108 = v20;
      v23 = sub_26960(&v108);
      v24 = s1;
      if ( *(char *)(v4 + 182) == v23 || *(char *)(v4 + 180) == v23 )
      {
        *(_BYTE *)(v4 + 112) = v23;
        sub_249D0((_QWORD *)v4, a2, v24, *(_DWORD *)(v4 + 176));
        v47 = sub_26960(&s1);
        v48 = s1;
        if ( v47 == -1 )
          v48 = ++s1;
        v6 = sub_24C20(v4, a2, v48, *(_BYTE *)(v4 + 112));
        s1 = v6;
        if ( !v6 )
          return v110 - __readfsqword(0x28u);
      }
      else
      {
        v25 = *(_QWORD *)(v4 + 72);
        if ( v25 > 1 && !strncmp(s1, *(const char **)(v4 + 64), v25 - 1) )
        {
          sub_249D0((_QWORD *)v4, a2, v24, *(_DWORD *)(v4 + 176));
          v63 = s1;
          v64 = strlen(s1);
          v65 = *(_DWORD *)(v4 + 120);
          s1 = &v63[v64];
          sub_249D0((_QWORD *)v4, a2, &v63[v64], v65);
          *(_DWORD *)(v4 + 176) = *(_DWORD *)(v4 + 116);
          v6 = s1;
        }
        else
        {
          v108 = v24;
          v26 = (unsigned int)sub_26960(&v108) - 65;
          if ( (unsigned int)v26 > 0x39 )
            goto LABEL_41;
          v27 = 0x3FFFFFF43FFFFFFLL;
          if ( !_bittest64(&v27, v26) )
            goto LABEL_41;
          do
          {
            while ( 1 )
            {
              v28 = v108;
              v29 = sub_26960(&v108);
              v30 = (unsigned int)(v29 - 65);
              if ( (unsigned int)v30 > 0x39 )
                break;
              if ( !_bittest64(&v27, v30) )
                goto LABEL_29;
            }
          }
          while ( (unsigned int)(v29 - 48) <= 9 );
LABEL_29:
          v85 = v28 - v24;
          if ( v28 == v24 )
          {
LABEL_41:
            v85 = 0;
LABEL_42:
            v38 = s1;
            if ( s1 )
            {
              v108 = s1;
              v39 = sub_26960(&v108);
              if ( !v39 )
                goto LABEL_44;
              v108 = nullptr;
              v109 = 0;
              if ( !n )
                goto LABEL_73;
              v68 = nullptr;
              if ( n != -1 )
              {
                v108 = (char *)sub_29E60(&v108, 0, n + 1, 1);
                v68 = v108;
              }
              *(_QWORD *)&v109 = n + 1;
              memmove(v68, src, n);
              v108[n] = 0;
              if ( (_QWORD)v109 )
                v52 = v108;
              else
LABEL_73:
                v52 = (char *)::s1;
              v92 = sub_26C60(v52) + 1;
              if ( (unsigned int)(v39 - 48) <= 9 )
              {
                v56 = 1;
                v100 = v38;
                sub_26BD0(&v100, 1);
                v57 = &v100;
                v67 = sub_26960(&v100);
                v53 = (unsigned int)(v39 - 43);
                if ( v39 == 48 )
                {
                  if ( (v67 & 0xFFFFFFDF) == 0x58 )
                  {
                    v56 = 2;
                    v99 = v38;
                    sub_26BD0(&v99, 2);
                    v57 = &v99;
                    v81 = sub_26960(&v99);
                    if ( (v81 & 0xFFFFFFDF) - 65 <= 0x19 )
                    {
                      v90 = 1;
                      v60 = 0;
                      v61 = 2;
                    }
                    else
                    {
                      v90 = v81 == 46 || (unsigned int)(v81 - 48) <= 9;
                      if ( !v90 )
                        goto LABEL_92;
                      v60 = 0;
                      v61 = 2;
                    }
                  }
                  else
                  {
                    v90 = 0;
                    v60 = 0;
                    v61 = 1;
                  }
                  goto LABEL_104;
                }
              }
              else
              {
                v53 = (unsigned int)(v39 - 43);
                if ( (v53 & 0xFFFFFFFD) != 0 )
                {
                  v54 = (unsigned int)(v39 - 46);
                  if ( (unsigned int)v54 > 0x37 )
                    goto LABEL_92;
                  v55 = 0x80000000800001LL;
                  if ( !_bittest64(&v55, v54) )
                    goto LABEL_92;
                }
                else if ( v38 != src )
                {
                  v101 = v38;
                  sub_26AC0(0, &v101, src);
                  v62 = sub_26960(&v101);
                  if ( (unsigned int)(v62 - 97) <= 0x19
                    || (unsigned int)(v62 - 65) <= 0x19
                    || (unsigned int)(v62 - 48) <= 9
                    || v62 == 46 )
                  {
                    goto LABEL_92;
                  }
                }
                v56 = 1;
                v100 = v38;
                sub_26BD0(&v100, 1);
                v57 = &v100;
                sub_26960(&v100);
              }
              v58 = 0x400000004000005LL;
              v90 = _bittest64(&v58, v53);
              if ( v90 )
              {
                if ( v92 > 1 )
                {
                  v56 = 1;
                  v102 = v38;
                  sub_26BD0(&v102, 1);
                  v57 = &v102;
                  v59 = sub_26960(&v102);
                  if ( (v59 & 0xFFFFFFDF) - 65 <= 0x19 || (unsigned int)(v59 - 48) <= 9 || v59 == 46 )
                  {
                    v90 = 0;
                    v60 = 0;
                    v61 = 1;
LABEL_105:
                    v95 = 0;
LABEL_106:
                    v106 = v38;
                    if ( v61 <= 0 )
                      sub_24990((__int64)v57, v56);
                    while ( 1 )
                    {
                      sub_26BD0(&v106, v61);
                      v69 = sub_26960(&v106);
                      if ( (v69 & 0xFFFFFFDF) - 65 > 0x19 && (unsigned int)(v69 - 48) > 9 && v69 != 46 )
                        goto LABEL_115;
                      v56 = v61;
                      v107 = v38;
                      sub_26BD0(&v107, v61);
                      v57 = &v107;
                      v70 = sub_26960(&v107);
                      if ( (unsigned int)(v70 - 48) <= 9 )
                        goto LABEL_147;
                      if ( v90 )
                        break;
                      if ( v70 == 46 )
                        goto LABEL_122;
                      if ( v95 || (v70 & 0xFFFFFFDF) != 0x45 )
                        goto LABEL_128;
                      v103 = v38;
                      if ( v61 + 1 <= 0 )
                        sub_24990((__int64)&v107, v61);
                      v56 = v61 + 1;
                      sub_26BD0(&v103, v61 + 1);
                      v57 = &v103;
                      if ( (((unsigned int)sub_26960(&v103) - 43) & 0xFFFFFFFD) == 0 )
                      {
                        v95 = 1;
                        v61 += 2;
LABEL_148:
                        if ( v61 < v92 )
                          goto LABEL_106;
                        goto LABEL_115;
                      }
                      if ( v61 + 1 >= v92 )
                      {
                        ++v61;
                        goto LABEL_115;
                      }
                      v106 = v38;
                      ++v61;
                      v95 = 1;
                    }
                    if ( (v70 & 0xFFFFFFDF) - 65 <= 5 )
                    {
LABEL_147:
                      ++v61;
                      goto LABEL_148;
                    }
                    if ( v70 == 46 )
                    {
LABEL_122:
                      if ( v60 )
                      {
                        if ( v108 )
                        {
                          *(_QWORD *)&v109 = 0;
                          j__free(v108);
                        }
                        goto LABEL_44;
                      }
                      ++v61;
                      v60 = 1;
                      goto LABEL_148;
                    }
LABEL_128:
                    if ( v70 == 76 )
                    {
                      if ( v61 + 1 >= v92 )
                        goto LABEL_158;
                      v104 = v38;
                      if ( v61 + 1 <= 0 )
                        sub_24990((__int64)&v107, v61);
                      sub_26BD0(&v104, v61 + 1);
                      v82 = sub_26960(&v104);
                      if ( (unsigned int)(v82 - 97) > 0x19
                        && (unsigned int)(v82 - 65) > 0x19
                        && (unsigned int)(v82 - 48) > 9
                        && v82 != 46 )
                      {
LABEL_158:
                        v105 = v38;
                        if ( v61 != 1 )
                          sub_26BD0(&v105, v61 - 1);
                        v83 = sub_26960(&v105);
                        if ( (unsigned int)(v83 - 48) <= 9 || v90 && (v83 & 0xFFFFFFDF) - 65 <= 5 )
                        {
                          if ( v108 )
                          {
                            *(_QWORD *)&v109 = 0;
                            j__free(v108);
                          }
                          ++v61;
                          goto LABEL_117;
                        }
                      }
                    }
                  }
                }
LABEL_92:
                if ( v108 )
                {
                  *(_QWORD *)&v109 = 0;
                  j__free(v108);
                  v38 = s1;
                  goto LABEL_45;
                }
LABEL_44:
                v38 = s1;
                goto LABEL_45;
              }
              v61 = 1;
              v60 = v39 == 46;
LABEL_104:
              if ( v61 < v92 )
                goto LABEL_105;
LABEL_115:
              if ( v108 )
              {
                *(_QWORD *)&v109 = 0;
                j__free(v108);
              }
LABEL_117:
              sub_249D0((_QWORD *)v4, a2, s1, *(_DWORD *)(v4 + 176));
              sub_26BD0(&s1, v61);
              sub_249D0((_QWORD *)v4, a2, s1, 7u);
              v6 = s1;
            }
            else
            {
LABEL_45:
              v40 = *(_QWORD **)(v4 + 136);
              v41 = *(_QWORD *)(v4 + 144);
              if ( &v40[v41] != v40 )
              {
                v42 = v38;
                v89 = v12;
                v43 = &v40[v41];
                do
                {
                  while ( 1 )
                  {
                    v44 = *(__int64 (**)())(*(_QWORD *)*v40 + 16LL);
                    if ( v44 != sub_24970 )
                    {
                      v45 = ((__int64 (__fastcall *)(_QWORD, char **, char *))v44)(*v40, &v108, v42);
                      v42 = s1;
                      v46 = v45;
                      if ( v45 > 0 )
                        break;
                    }
                    if ( v43 == ++v40 )
                      goto LABEL_51;
                  }
                  ++v40;
                  sub_249D0((_QWORD *)v4, a2, s1, *(_DWORD *)(v4 + 176));
                  sub_26BD0(&s1, v46);
                  sub_249D0((_QWORD *)v4, a2, s1, (unsigned int)v108);
                  v42 = s1;
                  *(_DWORD *)(v4 + 176) = *(_DWORD *)(v4 + 116);
                }
                while ( v43 != v40 );
LABEL_51:
                v12 = v89;
                v38 = v42;
              }
              if ( v85 )
              {
                v6 = &v38[v85];
                s1 = &v38[v85];
              }
              else
              {
                while ( 1 )
                {
                  v108 = v38;
                  v51 = sub_26960(&v108);
                  if ( (v51 & 0xFFFFFFDF) - 65 > 0x19 && (unsigned int)(v51 - 48) > 9 && v51 != 46 )
                    break;
                  v50 = sub_26960(&s1);
                  v38 = s1;
                  if ( v50 == -1 )
                    v38 = ++s1;
                }
                v6 = s1;
              }
              if ( v12 == v6 )
              {
LABEL_8:
                v10 = sub_26960(&s1);
                v6 = s1;
                if ( v10 == -1 )
                  v6 = ++s1;
              }
            }
          }
          else
          {
            v31 = nullptr;
            v108 = nullptr;
            v109 = 0;
            v32 = v85 + 1;
            if ( v85 != -1 )
            {
              v108 = (char *)sub_29E60(&v108, 0, v85 + 1, 1);
              memset(&v108[v109], 0, v32 - v109);
              *(_QWORD *)&v109 = v85 + 1;
              v31 = v108;
            }
            v31[v85] = 0;
            sub_2ACE0(v108, s1, v32);
            v33 = *(_QWORD **)(v4 + 136);
            v34 = *(_DWORD *)(v4 + 176);
            v35 = &v33[*(_QWORD *)(v4 + 144)];
            LODWORD(v107) = v34;
            if ( v35 == v33 )
              goto LABEL_133;
            do
            {
              v36 = *(__int64 (**)())(*(_QWORD *)*v33 + 24LL);
              if ( v36 != sub_24980
                && ((unsigned __int8 (__fastcall *)(_QWORD, char **, char **))v36)(*v33, &v107, &v108) )
              {
                break;
              }
              ++v33;
            }
            while ( v35 != v33 );
            v37 = *(_DWORD *)(v4 + 176);
            v34 = (unsigned int)v107;
            if ( v37 == (_DWORD)v107 )
            {
LABEL_133:
              v71 = v108;
              if ( *(_QWORD *)(v4 + 48) )
              {
                v72 = (char *)::s1;
                v93 = v34;
                v97 = v4;
                v91 = *(_QWORD *)(v4 + 40);
                if ( (_QWORD)v109 )
                  v72 = v108;
                v94 = v12;
                v73 = *(_QWORD *)(v4 + 48);
                v74 = 0;
                v96 = v108;
                v75 = 0;
                while ( 1 )
                {
                  v76 = v91 + 32 * v74;
                  v77 = *(const char ***)v76;
                  v78 = *(_QWORD *)v76 + 8LL * *(_QWORD *)(v76 + 8);
                  if ( *(_QWORD *)v76 != v78 )
                  {
                    while ( strcmp(v72, *v77) )
                    {
                      if ( (const char **)v78 == ++v77 )
                        goto LABEL_142;
                    }
                    if ( v77 != (const char **)v78 )
                      break;
                  }
LABEL_142:
                  v74 = ++v75;
                  if ( v75 >= v73 )
                  {
                    v79 = v93;
                    v12 = v94;
                    v71 = v96;
                    v4 = v97;
                    v80 = (int)v107;
                    goto LABEL_144;
                  }
                }
                v80 = *(_DWORD *)(v76 + 24);
                v79 = v93;
                v12 = v94;
                v71 = v96;
                LODWORD(v107) = v80;
                v4 = v97;
LABEL_144:
                if ( v80 != v79 )
                {
                  v37 = v79;
                  goto LABEL_38;
                }
              }
              if ( v71 )
              {
                *(_QWORD *)&v109 = 0;
                j__free(v71);
              }
              goto LABEL_42;
            }
LABEL_38:
            sub_249D0((_QWORD *)v4, a2, s1, v37);
            s1 += v85;
            sub_249D0((_QWORD *)v4, a2, s1, (unsigned int)v107);
            if ( v108 )
            {
              *(_QWORD *)&v109 = 0;
              j__free(v108);
            }
            v6 = s1;
          }
        }
      }
    }
  }
  if ( *(char **)(v4 + 168) != s1 )
    sub_249D0((_QWORD *)v4, a2, s1, *(_DWORD *)(v4 + 176));
  return v110 - __readfsqword(0x28u);
}

