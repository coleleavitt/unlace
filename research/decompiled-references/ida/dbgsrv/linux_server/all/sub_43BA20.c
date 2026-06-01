/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43BA20
// Address: 0x000000000043BA20

//----- (000000000043BA20) ----------------------------------------------------
unsigned __int64 __fastcall sub_43BA20(__m128i *a1, __int64 a2, __int64 a3)
{
  char *v3; // rcx
  __m128i *v4; // rbx
  __int64 (__fastcall *v5)(); // rdx
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
  __int64 v32; // r13
  _QWORD *v33; // r14
  __int32 v34; // eax
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
  __int64 v56; // rax
  int v57; // eax
  bool v58; // r13
  __int64 v59; // r14
  int v60; // eax
  char *v61; // rbp
  size_t v62; // rax
  unsigned int v63; // ecx
  int v64; // ebp
  int v65; // eax
  char *v66; // rdi
  int v67; // eax
  int v68; // eax
  char *v69; // r12
  char *v70; // r13
  unsigned __int64 v71; // rbp
  __int64 v72; // rsi
  int v73; // r12d
  __int64 v74; // r14
  const char **v75; // rbx
  __int64 v76; // r15
  unsigned int v77; // eax
  int v78; // edx
  int v79; // eax
  int v80; // eax
  int v81; // eax
  signed __int64 v83; // [rsp+18h] [rbp-F0h]
  size_t n; // [rsp+28h] [rbp-E0h]
  char *src; // [rsp+30h] [rbp-D8h]
  char *v87; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v88; // [rsp+38h] [rbp-D0h]
  __int64 v89; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v90; // [rsp+40h] [rbp-C8h]
  unsigned int v91; // [rsp+40h] [rbp-C8h]
  char *v92; // [rsp+48h] [rbp-C0h]
  char v93; // [rsp+50h] [rbp-B8h]
  char *v94; // [rsp+50h] [rbp-B8h]
  __m128i *v95; // [rsp+58h] [rbp-B0h]
  char *s1; // [rsp+60h] [rbp-A8h] BYREF
  char *v97; // [rsp+68h] [rbp-A0h] BYREF
  char *v98; // [rsp+70h] [rbp-98h] BYREF
  char *v99; // [rsp+78h] [rbp-90h] BYREF
  char *v100; // [rsp+80h] [rbp-88h] BYREF
  char *v101; // [rsp+88h] [rbp-80h] BYREF
  char *v102; // [rsp+90h] [rbp-78h] BYREF
  char *v103; // [rsp+98h] [rbp-70h] BYREF
  char *v104; // [rsp+A0h] [rbp-68h] BYREF
  char *v105; // [rsp+A8h] [rbp-60h] BYREF
  char *v106; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v107; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v108; // [rsp+C8h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  v3 = *(char **)a3;
  src = v3;
  s1 = *(char **)a3;
  if ( !v3 )
    return v108 - __readfsqword(0x28u);
  v4 = a1;
  n = *(_QWORD *)(a3 + 8);
  v5 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 40LL);
  v6 = v3;
  if ( v5 != nullsub_8 )
  {
    ((void (__fastcall *)(__int64, _QWORD))v5)(a2, 0);
    v6 = s1;
  }
  a1[10] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6);
  v7 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
  if ( v7 == sub_43B4F0 || (v64 = ((__int64 (__fastcall *)(__int64))v7)(a2), v6 = s1, v64 <= 0) )
  {
    a1[11].m128i_i32[0] = 0;
  }
  else
  {
    if ( (v64 & 0xF) != 0 )
      sub_43B8A0((__int64)a1, a2, (v64 & 0xF) - 1, (const char **)&s1);
    if ( (v64 & 0x10) != 0 )
      sub_43B980((__int64)a1, a2, (const char **)&s1);
    v6 = s1;
  }
  while ( 1 )
  {
    v106 = v6;
    v8 = sub_4796E0((unsigned __int8 **)&v106);
    v9 = v8;
    if ( v8 <= 0x7F )
    {
      if ( isspace(v8) )
        goto LABEL_8;
      if ( !v9 )
        break;
    }
    v11 = v4[6].m128i_u64[0];
    v12 = s1;
    if ( v11 )
    {
      v13 = v4[5].m128i_i64[1];
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
      sub_43B570((__int64)v4, a2, v12, v4[11].m128i_u32[0]);
      s1 += (*(_QWORD *)(v16 + 8) == 0) + *(_QWORD *)(v16 + 8) - 1;
      sub_43B8A0((__int64)v4, a2, v14, (const char **)&s1);
      v18 = s1;
    }
    else
    {
LABEL_16:
      v18 = v12;
    }
    v106 = v18;
    v19 = sub_4796E0((unsigned __int8 **)&v106);
    v20 = s1;
    if ( v4[11].m128i_i8[9] != v19 )
      goto LABEL_21;
    v21 = (char *)v4[10].m128i_i64[1];
    if ( v21 == *(char **)a3 || v21 == s1 )
    {
LABEL_56:
      sub_43B570((__int64)v4, a2, v20, v4[11].m128i_u32[0]);
      sub_43B980((__int64)v4, a2, (const char **)&s1);
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
      v106 = v20;
      v23 = sub_4796E0((unsigned __int8 **)&v106);
      v24 = s1;
      if ( v4[11].m128i_i8[6] == v23 || v4[11].m128i_i8[4] == v23 )
      {
        v4[7].m128i_i8[0] = v23;
        sub_43B570((__int64)v4, a2, v24, v4[11].m128i_u32[0]);
        v47 = sub_4796E0((unsigned __int8 **)&s1);
        v48 = s1;
        if ( v47 == -1 )
          v48 = ++s1;
        v6 = (char *)sub_43B7C0((__int64)v4, a2, (unsigned __int8 *)v48, v4[7].m128i_i8[0]);
        s1 = v6;
        if ( !v6 )
          return v108 - __readfsqword(0x28u);
      }
      else
      {
        v25 = v4[4].m128i_u64[1];
        if ( v25 > 1 && !strncmp(s1, (const char *)v4[4].m128i_i64[0], v25 - 1) )
        {
          sub_43B570((__int64)v4, a2, v24, v4[11].m128i_u32[0]);
          v61 = s1;
          v62 = strlen(s1);
          v63 = v4[7].m128i_u32[2];
          s1 = &v61[v62];
          sub_43B570((__int64)v4, a2, &v61[v62], v63);
          v4[11].m128i_i32[0] = v4[7].m128i_i32[1];
          v6 = s1;
        }
        else
        {
          v106 = v24;
          v26 = (unsigned int)sub_4796E0((unsigned __int8 **)&v106) - 65;
          if ( (unsigned int)v26 > 0x39 )
            goto LABEL_41;
          v27 = 0x3FFFFFF43FFFFFFLL;
          if ( !_bittest64(&v27, v26) )
            goto LABEL_41;
          do
          {
            while ( 1 )
            {
              v28 = v106;
              v29 = sub_4796E0((unsigned __int8 **)&v106);
              v30 = (unsigned int)(v29 - 65);
              if ( (unsigned int)v30 > 0x39 )
                break;
              if ( !_bittest64(&v27, v30) )
                goto LABEL_29;
            }
          }
          while ( (unsigned int)(v29 - 48) <= 9 );
LABEL_29:
          v83 = v28 - v24;
          if ( v28 == v24 )
          {
LABEL_41:
            v83 = 0;
LABEL_42:
            v38 = s1;
            if ( s1 )
            {
              v106 = s1;
              v39 = sub_4796E0((unsigned __int8 **)&v106);
              if ( !v39 )
                goto LABEL_44;
              v106 = nullptr;
              v107 = 0;
              if ( !n )
                goto LABEL_73;
              v66 = nullptr;
              if ( n != -1 )
              {
                v106 = (char *)sub_481540((__int64)&v106, nullptr, n + 1, 1u);
                v66 = v106;
              }
              *(_QWORD *)&v107 = n + 1;
              memmove(v66, src, n);
              v106[n] = 0;
              if ( (_QWORD)v107 )
                v52 = v106;
              else
LABEL_73:
                v52 = (char *)::s1;
              v90 = sub_4799E0((unsigned __int8 *)v52) + 1;
              if ( (unsigned int)(v39 - 48) <= 9 )
              {
                v98 = v38;
                sub_479950((unsigned __int8 **)&v98, 1);
                v65 = sub_4796E0((unsigned __int8 **)&v98);
                v53 = (unsigned int)(v39 - 43);
                if ( v39 == 48 )
                {
                  if ( (v65 & 0xFFFFFFDF) == 0x58 )
                  {
                    v97 = v38;
                    sub_479950((unsigned __int8 **)&v97, 2);
                    v79 = sub_4796E0((unsigned __int8 **)&v97);
                    if ( (v79 & 0xFFFFFFDF) - 65 <= 0x19 )
                    {
                      v88 = 1;
                      v58 = 0;
                      v59 = 2;
                    }
                    else
                    {
                      v88 = v79 == 46 || (unsigned int)(v79 - 48) <= 9;
                      if ( !v88 )
                        goto LABEL_92;
                      v58 = 0;
                      v59 = 2;
                    }
                  }
                  else
                  {
                    v88 = 0;
                    v58 = 0;
                    v59 = 1;
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
                  v99 = v38;
                  sub_479840(nullptr, (unsigned __int8 **)&v99, (unsigned __int64)src);
                  v60 = sub_4796E0((unsigned __int8 **)&v99);
                  if ( (unsigned int)(v60 - 97) <= 0x19
                    || (unsigned int)(v60 - 65) <= 0x19
                    || (unsigned int)(v60 - 48) <= 9
                    || v60 == 46 )
                  {
                    goto LABEL_92;
                  }
                }
                v98 = v38;
                sub_479950((unsigned __int8 **)&v98, 1);
                sub_4796E0((unsigned __int8 **)&v98);
              }
              v56 = 0x400000004000005LL;
              v88 = _bittest64(&v56, v53);
              if ( v88 )
              {
                if ( v90 > 1 )
                {
                  v100 = v38;
                  sub_479950((unsigned __int8 **)&v100, 1);
                  v57 = sub_4796E0((unsigned __int8 **)&v100);
                  if ( (v57 & 0xFFFFFFDF) - 65 <= 0x19 || (unsigned int)(v57 - 48) <= 9 || v57 == 46 )
                  {
                    v88 = 0;
                    v58 = 0;
                    v59 = 1;
LABEL_105:
                    v93 = 0;
LABEL_106:
                    v104 = v38;
                    if ( v59 <= 0 )
                      sub_43B530();
                    while ( 1 )
                    {
                      sub_479950((unsigned __int8 **)&v104, v59);
                      v67 = sub_4796E0((unsigned __int8 **)&v104);
                      if ( (v67 & 0xFFFFFFDF) - 65 > 0x19 && (unsigned int)(v67 - 48) > 9 && v67 != 46 )
                        goto LABEL_115;
                      v105 = v38;
                      sub_479950((unsigned __int8 **)&v105, v59);
                      v68 = sub_4796E0((unsigned __int8 **)&v105);
                      if ( (unsigned int)(v68 - 48) <= 9 )
                        goto LABEL_147;
                      if ( v88 )
                        break;
                      if ( v68 == 46 )
                        goto LABEL_122;
                      if ( v93 || (v68 & 0xFFFFFFDF) != 0x45 )
                        goto LABEL_128;
                      v101 = v38;
                      if ( v59 + 1 <= 0 )
                        sub_43B530();
                      sub_479950((unsigned __int8 **)&v101, v59 + 1);
                      if ( (((unsigned int)sub_4796E0((unsigned __int8 **)&v101) - 43) & 0xFFFFFFFD) == 0 )
                      {
                        v93 = 1;
                        v59 += 2;
LABEL_148:
                        if ( v59 < v90 )
                          goto LABEL_106;
                        goto LABEL_115;
                      }
                      if ( v59 + 1 >= v90 )
                      {
                        ++v59;
                        goto LABEL_115;
                      }
                      v104 = v38;
                      ++v59;
                      v93 = 1;
                    }
                    if ( (v68 & 0xFFFFFFDF) - 65 <= 5 )
                    {
LABEL_147:
                      ++v59;
                      goto LABEL_148;
                    }
                    if ( v68 == 46 )
                    {
LABEL_122:
                      if ( v58 )
                      {
                        if ( v106 )
                        {
                          *(_QWORD *)&v107 = 0;
                          j__free(v106);
                        }
                        goto LABEL_44;
                      }
                      ++v59;
                      v58 = 1;
                      goto LABEL_148;
                    }
LABEL_128:
                    if ( v68 == 76 )
                    {
                      if ( v59 + 1 >= v90 )
                        goto LABEL_158;
                      v102 = v38;
                      if ( v59 + 1 <= 0 )
                        sub_43B530();
                      sub_479950((unsigned __int8 **)&v102, v59 + 1);
                      v80 = sub_4796E0((unsigned __int8 **)&v102);
                      if ( (unsigned int)(v80 - 97) > 0x19
                        && (unsigned int)(v80 - 65) > 0x19
                        && (unsigned int)(v80 - 48) > 9
                        && v80 != 46 )
                      {
LABEL_158:
                        v103 = v38;
                        if ( v59 != 1 )
                          sub_479950((unsigned __int8 **)&v103, v59 - 1);
                        v81 = sub_4796E0((unsigned __int8 **)&v103);
                        if ( (unsigned int)(v81 - 48) <= 9 || v88 && (v81 & 0xFFFFFFDF) - 65 <= 5 )
                        {
                          if ( v106 )
                          {
                            *(_QWORD *)&v107 = 0;
                            j__free(v106);
                          }
                          ++v59;
                          goto LABEL_117;
                        }
                      }
                    }
                  }
                }
LABEL_92:
                if ( v106 )
                {
                  *(_QWORD *)&v107 = 0;
                  j__free(v106);
                  v38 = s1;
                  goto LABEL_45;
                }
LABEL_44:
                v38 = s1;
                goto LABEL_45;
              }
              v59 = 1;
              v58 = v39 == 46;
LABEL_104:
              if ( v59 < v90 )
                goto LABEL_105;
LABEL_115:
              if ( v106 )
              {
                *(_QWORD *)&v107 = 0;
                j__free(v106);
              }
LABEL_117:
              sub_43B570((__int64)v4, a2, s1, v4[11].m128i_u32[0]);
              sub_479950((unsigned __int8 **)&s1, v59);
              sub_43B570((__int64)v4, a2, s1, 7u);
              v6 = s1;
            }
            else
            {
LABEL_45:
              v40 = (_QWORD *)v4[8].m128i_i64[1];
              v41 = v4[9].m128i_i64[0];
              if ( &v40[v41] != v40 )
              {
                v42 = v38;
                v87 = v12;
                v43 = &v40[v41];
                do
                {
                  while ( 1 )
                  {
                    v44 = *(__int64 (**)())(*(_QWORD *)*v40 + 16LL);
                    if ( v44 != sub_43B510 )
                    {
                      v45 = ((__int64 (__fastcall *)(_QWORD, char **, char *))v44)(*v40, &v106, v42);
                      v42 = s1;
                      v46 = v45;
                      if ( v45 > 0 )
                        break;
                    }
                    if ( v43 == ++v40 )
                      goto LABEL_51;
                  }
                  ++v40;
                  sub_43B570((__int64)v4, a2, s1, v4[11].m128i_u32[0]);
                  sub_479950((unsigned __int8 **)&s1, v46);
                  sub_43B570((__int64)v4, a2, s1, (unsigned int)v106);
                  v42 = s1;
                  v4[11].m128i_i32[0] = v4[7].m128i_i32[1];
                }
                while ( v43 != v40 );
LABEL_51:
                v12 = v87;
                v38 = v42;
              }
              if ( v83 )
              {
                v6 = &v38[v83];
                s1 = &v38[v83];
              }
              else
              {
                while ( 1 )
                {
                  v106 = v38;
                  v51 = sub_4796E0((unsigned __int8 **)&v106);
                  if ( (v51 & 0xFFFFFFDF) - 65 > 0x19 && (unsigned int)(v51 - 48) > 9 && v51 != 46 )
                    break;
                  v50 = sub_4796E0((unsigned __int8 **)&s1);
                  v38 = s1;
                  if ( v50 == -1 )
                    v38 = ++s1;
                }
                v6 = s1;
              }
              if ( v12 == v6 )
              {
LABEL_8:
                v10 = sub_4796E0((unsigned __int8 **)&s1);
                v6 = s1;
                if ( v10 == -1 )
                  v6 = ++s1;
              }
            }
          }
          else
          {
            v31 = nullptr;
            v106 = nullptr;
            v107 = 0;
            v32 = v83 + 1;
            if ( v83 != -1 )
            {
              v106 = (char *)sub_481540((__int64)&v106, nullptr, v83 + 1, 1u);
              memset(&v106[v107], 0, v32 - v107);
              *(_QWORD *)&v107 = v83 + 1;
              v31 = v106;
            }
            v31[v83] = 0;
            sub_4821A0(v106, s1, v32);
            v33 = (_QWORD *)v4[8].m128i_i64[1];
            v34 = v4[11].m128i_i32[0];
            v35 = &v33[v4[9].m128i_i64[0]];
            LODWORD(v105) = v34;
            if ( v35 == v33 )
              goto LABEL_133;
            do
            {
              v36 = *(__int64 (**)())(*(_QWORD *)*v33 + 24LL);
              if ( v36 != sub_43B520
                && ((unsigned __int8 (__fastcall *)(_QWORD, char **, char **))v36)(*v33, &v105, &v106) )
              {
                break;
              }
              ++v33;
            }
            while ( v35 != v33 );
            v37 = v4[11].m128i_u32[0];
            v34 = (int)v105;
            if ( v37 == (_DWORD)v105 )
            {
LABEL_133:
              v69 = v106;
              if ( v4[3].m128i_i64[0] )
              {
                v70 = (char *)::s1;
                v91 = v34;
                v95 = v4;
                v89 = v4[2].m128i_i64[1];
                if ( (_QWORD)v107 )
                  v70 = v106;
                v92 = v12;
                v71 = v4[3].m128i_u64[0];
                v72 = 0;
                v94 = v106;
                v73 = 0;
                while ( 1 )
                {
                  v74 = v89 + 32 * v72;
                  v75 = *(const char ***)v74;
                  v76 = *(_QWORD *)v74 + 8LL * *(_QWORD *)(v74 + 8);
                  if ( *(_QWORD *)v74 != v76 )
                  {
                    while ( strcmp(v70, *v75) )
                    {
                      if ( (const char **)v76 == ++v75 )
                        goto LABEL_142;
                    }
                    if ( v75 != (const char **)v76 )
                      break;
                  }
LABEL_142:
                  v72 = ++v73;
                  if ( v73 >= v71 )
                  {
                    v77 = v91;
                    v12 = v92;
                    v69 = v94;
                    v4 = v95;
                    v78 = (int)v105;
                    goto LABEL_144;
                  }
                }
                v78 = *(_DWORD *)(v74 + 24);
                v77 = v91;
                v12 = v92;
                v69 = v94;
                LODWORD(v105) = v78;
                v4 = v95;
LABEL_144:
                if ( v78 != v77 )
                {
                  v37 = v77;
                  goto LABEL_38;
                }
              }
              if ( v69 )
              {
                *(_QWORD *)&v107 = 0;
                j__free(v69);
              }
              goto LABEL_42;
            }
LABEL_38:
            sub_43B570((__int64)v4, a2, s1, v37);
            s1 += v83;
            sub_43B570((__int64)v4, a2, s1, (unsigned int)v105);
            if ( v106 )
            {
              *(_QWORD *)&v107 = 0;
              j__free(v106);
            }
            v6 = s1;
          }
        }
      }
    }
  }
  if ( (char *)v4[10].m128i_i64[1] != s1 )
    sub_43B570((__int64)v4, a2, s1, v4[11].m128i_u32[0]);
  return v108 - __readfsqword(0x28u);
}
// 43B4F0: using guessed type __int64 sub_43B4F0();
// 43B500: using guessed type __int64 __fastcall nullsub_8();
// 43B510: using guessed type __int64 sub_43B510();
// 43B520: using guessed type __int64 sub_43B520();
