__int64 __fastcall sub_E2CB00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r15
  _BYTE *v16; // rax
  __m128 v17; // xmm0
  char v18; // al
  char *p_ptr; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdi
  __int64 v24; // rdi
  _BYTE *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 result; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int8 v33; // al
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // r8
  __int64 v40; // rdi
  unsigned int v41; // edx
  __int64 v42; // r10
  int v43; // edx
  int *v44; // rbp
  unsigned int v45; // edx
  __int64 v46; // rdi
  __int64 v47; // rbx
  _BYTE *v48; // rax
  __int64 v49; // r12
  unsigned __int64 v50; // rdx
  __int64 v51; // rdi
  unsigned __int64 v52; // rax
  __int64 v53; // r8
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r14
  unsigned __int64 v58; // rdi
  __int64 v59; // r15
  __int64 v60; // rdi
  _BYTE *v61; // rax
  __int64 v62; // rdx
  int v63; // r15d
  int v64; // eax
  unsigned int v65; // r15d
  __int64 v66; // rdi
  _BYTE *v67; // rax
  __int64 v68; // rdi
  unsigned __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned int v76; // edx
  __int64 v77; // rax
  _BYTE *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  unsigned __int64 v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // rdi
  _BYTE *v84; // rax
  __int64 v85; // rsi
  int v86; // ecx
  int v87; // eax
  unsigned int v88; // ecx
  __int64 v89; // rdi
  _BYTE *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdi
  unsigned __int64 v93; // rcx
  __int64 v94; // r9
  unsigned __int64 v95; // rax
  __int64 v96; // rdi
  unsigned __int64 v97; // rax
  __int64 v98; // rcx
  unsigned __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r9
  int v105; // esi
  bool v106; // zf
  unsigned __int64 v107; // rdx
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 *v110; // rdx
  int v111; // esi
  __int64 v112; // r8
  __m128i si128; // xmm1
  int v114; // r14d
  __int64 v115; // r11
  int v116; // esi
  unsigned __int64 *v117; // rax
  __int64 *v118; // rdx
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // rax
  __int64 v121; // rdi
  __int64 *v122; // rax
  __int64 v123; // rcx
  unsigned __int64 v124; // [rsp+8h] [rbp-130h] BYREF
  __int64 v125; // [rsp+10h] [rbp-128h]
  __int64 v126; // [rsp+18h] [rbp-120h]
  __int64 v127; // [rsp+20h] [rbp-118h]
  unsigned __int64 v128; // [rsp+28h] [rbp-110h]
  __int64 v129; // [rsp+38h] [rbp-100h] BYREF
  __int64 *v130; // [rsp+40h] [rbp-F8h] BYREF
  __int64 *v131; // [rsp+48h] [rbp-F0h] BYREF
  void *v132[2]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v133[64]; // [rsp+60h] [rbp-D8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v135; // [rsp+A8h] [rbp-90h]
  _BYTE v136[64]; // [rsp+B0h] [rbp-88h] BYREF
  __m128 v137; // [rsp+F0h] [rbp-48h]

  v4 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v6 = *a1;
  v126 = a2;
  v127 = a3;
  v125 = a4;
  v7 = sub_E195F0(v6, a2 & 0xFFFFFFFFFFFFFFF8LL);
  v8 = *(_BYTE *)(v7 + 8) & 0x7F;
  if ( (*(_BYTE *)(v7 + 8) & 0x7F) == 0 || (_BYTE)v8 == 24 )
  {
LABEL_122:
    v12 = *a1;
    v10 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = 0;
    goto LABEL_9;
  }
  if ( (unsigned __int8)v8 > 0x27u || (v9 = 0xFC00040100LL, !_bittest64(&v9, v8)) )
  {
    v49 = 0xFC00040100LL;
    while ( 1 )
    {
      v10 = sub_B68470(v7);
      v7 = sub_E195F0(*a1, v10);
      v50 = *(_BYTE *)(v7 + 8) & 0x7F;
      if ( (*(_BYTE *)(v7 + 8) & 0x7F) == 0 || (_BYTE)v50 == 24 )
        goto LABEL_122;
      if ( (unsigned __int8)v50 <= 0x27u && _bittest64(&v49, v50) )
        goto LABEL_6;
    }
  }
  v10 = a2 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_6:
  v11 = 0;
  v12 = *a1;
  if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 58 < 4 )
    v11 = v10;
  else
    v10 = a2 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_9:
  v13 = sub_E195F0(v12, v10);
  v14 = a1[1];
  v15 = v13;
  v16 = *(_BYTE **)(v14 + 32);
  if ( *(_QWORD *)(v14 + 24) <= (unsigned __int64)v16 )
  {
    sub_2257CD0(v14, 90);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v16 + 1;
    *v16 = 90;
  }
  v132[0] = v133;
  v132[1] = (void *)0x400000000LL;
  v135 = 0x400000000LL;
  v124 = (unsigned __int64)(a1 + 6);
  ptr = v136;
  v17 = _mm_loadh_ps((const double *)a1 + 6);
  a1[6] = v132;
  v137 = v17;
  v18 = *(_BYTE *)(v15 + 8) & 0x7F;
  if ( v18 == 18 )
  {
    if ( v15 != 48 )
    {
      sub_E4BB20(*a1, v15 - 48, a1[1]);
      goto LABEL_14;
    }
    v69 = -24;
    v68 = -24;
LABEL_85:
    v124 = v69;
    if ( sub_B55E40(v68) )
    {
      v73 = v15 - 72;
      if ( (*(_BYTE *)(v15 - 43) & 1) == 0 )
      {
LABEL_87:
        v124 = v69;
        v74 = ((*(_BYTE *)(sub_B68890(v73) + 89) >> 2) ^ 1) & 1;
LABEL_88:
        v69 = v74 | v69 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_83;
      }
      v128 = v124;
      v124 = v15 - 72;
      v117 = sub_B68690(v15 - 72, v69, v70, v71, v73, v72);
      v73 = v15 - 72;
      v69 = v128;
      v118 = (__int64 *)*v117;
      v119 = *v117 + 8LL * *((unsigned int *)v117 + 2);
      if ( *v117 >= v119 )
      {
        if ( v118 == (__int64 *)v119 )
          goto LABEL_87;
        if ( *(_WORD *)(*(_QWORD *)v119 + 36LL) != 64 )
        {
          v122 = (__int64 *)(v119 + 8);
          while ( v118 != v122 )
          {
            v123 = *v122++;
            if ( *(_WORD *)(v123 + 36) == 64 )
            {
              v74 = 0;
              goto LABEL_88;
            }
          }
          goto LABEL_87;
        }
      }
      else
      {
        v120 = *v117;
        while ( *(_WORD *)(*(_QWORD *)v120 + 36LL) != 64 )
        {
          v120 += 8LL;
          if ( v119 == v120 )
            goto LABEL_87;
        }
        if ( v119 == v120 )
          goto LABEL_87;
      }
      v74 = 0;
      goto LABEL_88;
    }
LABEL_83:
    sub_E2ED50(a1, v69, 0);
    goto LABEL_14;
  }
  if ( v18 != 8 )
  {
    v68 = v15 - 72;
    v69 = v15 - 72;
    if ( v18 == 38 )
    {
      if ( v15 != 72 )
      {
        v69 &= 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_83;
      }
    }
    else
    {
      if ( v18 != 36 )
        goto LABEL_85;
      if ( v15 != 72 )
      {
        sub_E2ED50(a1, v69 & 0xFFFFFFFFFFFFFFF8LL | 1, 0);
        goto LABEL_14;
      }
    }
    v69 = v15 - 72;
    goto LABEL_85;
  }
  if ( v15 == 40 )
  {
    v69 = -32;
    v68 = -32;
    goto LABEL_85;
  }
  v51 = *a1;
  v124 = v15 - 40;
  v52 = sub_E195F0(v51, v15 - 40);
  v53 = v15 - 40;
  v54 = *(_BYTE *)(v52 + 8) & 0x7F;
  if ( (*(_BYTE *)(v52 + 8) & 0x7F) != 0 && (_BYTE)v54 != 24 )
  {
    if ( (unsigned __int8)v54 <= 0x27u && (v55 = 0xFC00040100LL, _bittest64(&v55, v54)) )
    {
      v56 = v124;
LABEL_61:
      if ( (*(_BYTE *)(v56 + 28) & 0x7Fu) - 58 <= 3 )
        goto LABEL_62;
    }
    else
    {
      while ( 1 )
      {
        v124 = v53;
        v91 = sub_B68470(v52);
        v92 = *a1;
        v128 = v91;
        v52 = sub_E195F0(v92, v91);
        v53 = v124;
        v93 = *(_BYTE *)(v52 + 8) & 0x7F;
        if ( (*(_BYTE *)(v52 + 8) & 0x7F) == 0 )
          break;
        v56 = v128;
        v94 = 0xFC00040100LL;
        if ( (_BYTE)v93 == 24 )
          break;
        if ( (unsigned __int8)v93 <= 0x27u && _bittest64(&v94, v93) )
          goto LABEL_61;
      }
    }
  }
  v96 = *a1;
  v124 = v53;
  v97 = sub_E195F0(v96, v53);
  v53 = v124;
  v98 = v97;
  v99 = *(_BYTE *)(v97 + 8) & 0x7F;
  if ( (unsigned __int8)v99 <= 0x27u )
  {
    v100 = 0xFC00040100LL;
    if ( _bittest64(&v100, v99) )
    {
LABEL_62:
      sub_E2CB00(a1, v53, 0, 0);
      goto LABEL_14;
    }
  }
  v128 = v98;
  v101 = sub_E14C00((__int64)a1, v124);
  if ( v101 )
    sub_E2C290((__int64)a1, v101, 0);
  else
    sub_E2C3F0((__int64)a1, v128, 0, *(double *)v17.m128_u64);
  sub_E1A920(a1, v124, v102, v103, v124, v104);
LABEL_14:
  p_ptr = (char *)&ptr;
  sub_E180E0((__int64 *)v132, (__int64 *)&ptr);
  v23 = v137.m128_u64[1];
  if ( v137.m128_u64[1] )
  {
    sub_E16EB0(
      (__int64 *)v137.m128_u64[1],
      (char *)(*(_QWORD *)v137.m128_u64[1] + 16LL * *(unsigned int *)(v137.m128_u64[1] + 8)),
      (char *)v132[0],
      (char *)v132[0] + 16 * LODWORD(v132[1]));
    p_ptr = (char *)(*(_QWORD *)(v137.m128_u64[1] + 80) + 16LL * *(unsigned int *)(v137.m128_u64[1] + 88));
    sub_E16EB0((__int64 *)(v137.m128_u64[1] + 80), p_ptr, (char *)ptr, (char *)ptr + 16 * (unsigned int)v135);
    v23 = v137.m128_u64[1];
  }
  *(_QWORD *)v137.m128_u64[0] = v23;
  if ( ptr != v136 )
    free(ptr);
  if ( v132[0] != v133 )
    free(v132[0]);
  v24 = a1[1];
  v25 = *(_BYTE **)(v24 + 32);
  if ( (unsigned __int64)v25 >= *(_QWORD *)(v24 + 24) )
  {
    p_ptr = (_BYTE *)(&dword_44 + 1);
    sub_2257CD0(v24, 69);
    if ( v11 )
      goto LABEL_22;
  }
  else
  {
    v26 = (__int64)(v25 + 1);
    *(_QWORD *)(v24 + 32) = v25 + 1;
    *v25 = 69;
    if ( v11 )
    {
LABEL_22:
      if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 59 <= 2 )
      {
        v27 = *(_QWORD *)(v11 + 128);
        if ( v27 )
        {
          if ( (*(_BYTE *)(v27 + 10) & 0x20) != 0 )
          {
            v79 = sub_B733B0(v11);
            v80 = v79;
            if ( v79 )
            {
              if ( (*(_BYTE *)(v79 + 28) & 0x7F) == 0x2B )
              {
                v81 = *(_QWORD *)(v79 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v79 + 16) & 4) != 0 )
                  v81 = *(_QWORD *)v81;
                if ( (*(_BYTE *)(v81 + 8) & 0x7Fu) - 34 <= 5 )
                {
                  v82 = v81 - 72;
                  if ( v81 != 72 )
                  {
                    v83 = a1[1];
                    v84 = *(_BYTE **)(v83 + 32);
                    if ( (unsigned __int64)v84 >= *(_QWORD *)(v83 + 24) )
                    {
                      v85 = 100;
                      v128 = v82;
                      v124 = v80;
                      sub_2257CD0(v83, 100);
                      v80 = v124;
                      v82 = v128;
                    }
                    else
                    {
                      v85 = (__int64)(v84 + 1);
                      *(_QWORD *)(v83 + 32) = v84 + 1;
                      *v84 = 100;
                    }
                    v124 = v80;
                    v86 = sub_B52330(v82, v85, v80, v82);
                    v87 = (unsigned __int8)(*(_WORD *)(v124 + 98) >> 4);
                    if ( v87 == 255 )
                    {
                      v121 = v124;
                      LODWORD(v124) = v86;
                      v87 = sub_B50B40(v121);
                      v86 = v124;
                    }
                    v88 = v86 - v87;
                    if ( v88 > 1 )
                      sub_E14650(a1 + 1, v88 - 2);
                    v89 = a1[1];
                    v90 = *(_BYTE **)(v89 + 32);
                    if ( (unsigned __int64)v90 >= *(_QWORD *)(v89 + 24) )
                    {
                      sub_2257CD0(v89, 95);
                    }
                    else
                    {
                      *(_QWORD *)(v89 + 32) = v90 + 1;
                      *v90 = 95;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v4 == v11 )
      {
        sub_E292D0(a1, v4, *(_QWORD *)(v4 + 40), v15, v125, *(double *)v17.m128_u64);
      }
      else
      {
        if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 8 )
        {
          v28 = sub_E14C00((__int64)a1, v4);
          if ( v28 )
          {
            sub_E2C290((__int64)a1, v28, 1u);
          }
          else
          {
            v95 = sub_E195F0(*a1, v4);
            sub_E2C3F0((__int64)a1, v95, 1u, *(double *)v17.m128_u64);
          }
LABEL_29:
          sub_E1A920(a1, v4, v26, v20, v21, v22);
          goto LABEL_30;
        }
        v75 = sub_E195F0(*a1, v4);
        sub_E2C6C0(a1, v126, v127, v75, v125, 1u, *(double *)v17.m128_u64);
      }
      goto LABEL_30;
    }
  }
  if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 8 )
  {
    v57 = *(_QWORD *)(v4 + 120);
    if ( v57 && (*(_BYTE *)(v57 + 28) & 0x7F) == 0x2B )
    {
      v58 = *(_QWORD *)(v57 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v57 + 16) & 4) != 0 )
        v58 = *(_QWORD *)v58;
      if ( (*(_BYTE *)(v58 + 8) & 0x7Fu) - 34 <= 5 )
      {
        v59 = v58 - 72;
        if ( v58 != 72 )
        {
          v60 = a1[1];
          v61 = *(_BYTE **)(v60 + 32);
          if ( (unsigned __int64)v61 >= *(_QWORD *)(v60 + 24) )
          {
            p_ptr = (_BYTE *)(&qword_60 + 4);
            sub_2257CD0(v60, 100);
          }
          else
          {
            v62 = (__int64)(v61 + 1);
            *(_QWORD *)(v60 + 32) = v61 + 1;
            *v61 = 100;
          }
          v63 = sub_B52330(v59, (__int64)p_ptr, v62, v20);
          v64 = (unsigned __int8)(*(_WORD *)(v57 + 98) >> 4);
          if ( v64 == 255 )
            v64 = sub_B50B40(v57);
          v65 = v63 - v64;
          if ( v65 > 1 )
            sub_E14650(a1 + 1, v65 - 2);
          v66 = a1[1];
          v67 = *(_BYTE **)(v66 + 32);
          if ( (unsigned __int64)v67 >= *(_QWORD *)(v66 + 24) )
          {
            sub_2257CD0(v66, 95);
          }
          else
          {
            v26 = (__int64)(v67 + 1);
            *(_QWORD *)(v66 + 32) = v67 + 1;
            *v67 = 95;
          }
        }
      }
    }
    goto LABEL_29;
  }
  sub_E292D0(a1, v126, *(_QWORD *)(v4 + 40), v15, v125, *(double *)v17.m128_u64);
LABEL_30:
  result = *(_BYTE *)(v10 + 28) & 0x7F;
  if ( (unsigned int)(result - 18) > 0x3F )
    return result;
  v30 = *a1;
  v129 = v10;
  if ( (unsigned int)(result - 59) > 2 )
  {
    if ( (unsigned int)(result - 58) > 4 )
      goto LABEL_37;
  }
  else
  {
    result = *(_QWORD *)(v10 + 128);
    if ( result && (*(_BYTE *)(result + 10) & 0x20) != 0 )
      return result;
  }
  v31 = *(_QWORD *)(v10 + 40);
  if ( (v31 & 7) != 0 || (v32 = v31 & 0xFFFFFFFFFFFFFFF8LL) == 0 || !**(_DWORD **)(v32 + 16) )
  {
    result = *(_QWORD *)(v10 + 120);
    if ( (result & 4) != 0 || (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return result;
  }
LABEL_37:
  v33 = sub_B5DE30(v10);
  if ( !v33 )
    goto LABEL_184;
  if ( v33 > 3u )
  {
    if ( v33 <= 6u )
    {
      result = sub_A68030(*(_QWORD *)(v30 + 8), v129, *(_BYTE *)(v30 + 28));
      v76 = result - 2;
      if ( (_DWORD)result == 1 )
        return result;
      v46 = a1[1];
      v47 = v76;
      if ( v76 <= 9 )
        goto LABEL_44;
      goto LABEL_95;
    }
LABEL_184:
    BUG();
  }
  v37 = *(unsigned int *)(v30 + 168);
  if ( !(_DWORD)v37 )
  {
    v132[0] = nullptr;
    goto LABEL_135;
  }
  v38 = v129;
  v36 = (unsigned int)(v37 - 1);
  v39 = *(_QWORD *)(v30 + 152);
  v40 = v129;
  v41 = v36 & (((unsigned int)v129 >> 9) ^ ((unsigned int)v129 >> 4));
  result = v39 + 16LL * v41;
  v42 = *(_QWORD *)result;
  if ( *(_QWORD *)result == v129 )
    goto LABEL_41;
  v114 = 1;
  v115 = 0;
  if ( v42 == -4096 )
  {
LABEL_151:
    v116 = *(_DWORD *)(v30 + 160);
    v132[0] = (void *)result;
    v34 = (unsigned int)(v116 + 1);
    v35 = (unsigned int)(4 * v34);
    if ( (unsigned int)v35 < 3 * (int)v37 )
    {
      v35 = (unsigned int)v37 >> 3;
      if ( (int)v37 - *(_DWORD *)(v30 + 164) - (int)v34 > (unsigned int)v35 )
        goto LABEL_137;
      v105 = v37;
LABEL_136:
      sub_A953E0((__int64 *)(v30 + 152), v105, v34, v37, v35, v36);
      sub_A62790((__int64 *)(v30 + 152), &v129, v132);
      v40 = v129;
      LODWORD(v34) = *(_DWORD *)(v30 + 160) + 1;
      result = (__int64)v132[0];
LABEL_137:
      v106 = *(_QWORD *)result == -4096;
      *(_DWORD *)(v30 + 160) = v34;
      if ( !v106 )
        --*(_DWORD *)(v30 + 164);
      *(_DWORD *)(result + 8) = 0;
      v44 = (int *)(result + 8);
      *(_QWORD *)result = v40;
      v38 = v129;
      goto LABEL_140;
    }
LABEL_135:
    v105 = 2 * v37;
    goto LABEL_136;
  }
  while ( 1 )
  {
    if ( !v115 && v42 == -8192 )
      v115 = result;
    v41 = v36 & (v114 + v41);
    result = v39 + 16LL * v41;
    v42 = *(_QWORD *)result;
    if ( v129 == *(_QWORD *)result )
      break;
    if ( v42 == -4096 )
    {
      if ( v115 )
        result = v115;
      goto LABEL_151;
    }
    ++v114;
  }
LABEL_41:
  v43 = *(_DWORD *)(result + 8);
  v44 = (int *)(result + 8);
  if ( v43 )
    goto LABEL_42;
LABEL_140:
  v124 = sub_E195F0(v30, v38);
  v107 = *(_QWORD *)(v129 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v129 + 40) & 7) != 0 )
    v107 = 0;
  v124 = v107;
  *(__m128 *)v132 = _mm_loadh_ps((const double *)&v124);
  if ( (unsigned __int8)sub_E17FF0((__int64 *)(v30 + 128), (__int64 *)v132, &v130) )
  {
    result = (__int64)v130;
    v43 = *((_DWORD *)v130 + 4) + 1;
    *((_DWORD *)v130 + 4) = v43;
    *v44 = v43;
LABEL_42:
    if ( v43 == 1 )
      return result;
    v45 = v43 - 2;
    v46 = a1[1];
    v47 = v45;
    if ( v45 <= 9 )
    {
LABEL_44:
      v48 = *(_BYTE **)(v46 + 32);
      if ( (unsigned __int64)v48 >= *(_QWORD *)(v46 + 24) )
      {
        v46 = sub_2257CD0(v46, 95);
      }
      else
      {
        *(_QWORD *)(v46 + 32) = v48 + 1;
        *v48 = 95;
      }
      return sub_2257BD0(v46, v47);
    }
LABEL_95:
    v77 = sub_971800(v46, "__");
    result = sub_2257BD0(v77, v47);
    v78 = *(_BYTE **)(result + 32);
    if ( (unsigned __int64)v78 >= *(_QWORD *)(result + 24) )
      return sub_2257CD0(result, 95);
    *(_QWORD *)(result + 32) = v78 + 1;
    *v78 = 95;
    return result;
  }
  v109 = *(unsigned int *)(v30 + 144);
  v110 = v130;
  result = (unsigned int)(*(_DWORD *)(v30 + 136) + 1);
  v111 = 2 * v109;
  v112 = (unsigned int)(4 * result);
  v131 = v130;
  if ( (unsigned int)v112 < 3 * (int)v109 )
  {
    if ( (int)v109 - *(_DWORD *)(v30 + 140) - (int)result > (unsigned int)v109 >> 3 )
      goto LABEL_146;
    v111 = v109;
  }
  sub_E1A460(v30 + 128, v111, (__int64)v130, v109, v112, v108);
  sub_E17FF0((__int64 *)(v30 + 128), (__int64 *)v132, &v131);
  v110 = v131;
  result = (unsigned int)(*(_DWORD *)(v30 + 136) + 1);
LABEL_146:
  v106 = *v110 == -4096;
  *(_DWORD *)(v30 + 136) = result;
  if ( !v106 || v110[1] != -4096 )
    --*(_DWORD *)(v30 + 140);
  si128 = _mm_load_si128((const __m128i *)v132);
  *((_DWORD *)v110 + 4) = 1;
  *(__m128i *)v110 = si128;
  *v44 = 1;
  return result;
}

