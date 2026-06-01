__m128i *__fastcall sub_A90500(__m128i *a1, _QWORD *a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  int v8; // r15d
  unsigned __int8 v9; // al
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  unsigned __int8 v14; // r13
  unsigned int v15; // r12d
  _DWORD *v16; // rax
  bool v17; // r13
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned int *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int *v26; // r12
  unsigned int v28; // r12d
  _DWORD *v29; // rax
  bool v30; // r13
  __int64 v31; // r12
  __int64 v32; // rax
  unsigned int v33; // edx
  unsigned __int64 v34; // r13
  _QWORD *v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __m128i *v39; // rdx
  __int32 v40; // r15d
  _DWORD *v41; // rdi
  __int64 v42; // rax
  unsigned int v43; // edx
  _DWORD *v44; // rcx
  __int64 v45; // rdx
  _DWORD *v46; // rsi
  _DWORD *v47; // rax
  int v48; // edx
  _DWORD *v49; // rsi
  unsigned int v50; // edx
  __int64 v51; // r12
  __int64 v52; // rdi
  __m128i v53; // xmm1
  _QWORD *v54; // rax
  __int64 *v55; // r13
  __int64 v56; // rax
  unsigned int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r12
  int v61; // r9d
  __int64 v62; // r12
  __int64 v63; // rax
  int v64; // r9d
  void *v65; // rdi
  __int64 v66; // r15
  __int64 v67; // rbx
  __int64 v68; // r13
  void *v69; // r12
  __int64 v70; // rsi
  __int64 v71; // rax
  int v72; // edx
  unsigned int v73; // r8d
  size_t v74; // rdi
  unsigned int *v75; // r9
  unsigned int v76; // r8d
  _QWORD *v77; // r15
  __int64 v78; // rdi
  _DWORD *v79; // rdx
  _QWORD *v80; // rsi
  _QWORD *i; // rax
  __int64 v82; // r11
  __int64 v83; // r11
  __int64 v84; // r11
  __int64 *v85; // rbx
  __int64 *v86; // r12
  unsigned int *v87; // r15
  __int64 v88; // rsi
  __int64 v89; // rdi
  _QWORD *v91; // rax
  int v92; // eax
  unsigned int v93; // eax
  unsigned int v94; // r12d
  __m128i *v95; // rax
  __m128i *v96; // r13
  __m128i *v97; // rdx
  __m128i *v98; // rax
  __int64 v99; // rdx
  __m128i *v100; // rdi
  const __m128i *v101; // r12
  __int64 v102; // rdx
  __m128i *v103; // rsi
  __m128i *v104; // rdx
  char **exception; // r12
  int v108; // [rsp+24h] [rbp-E4h]
  __int64 v109; // [rsp+28h] [rbp-E0h]
  int v111[2]; // [rsp+38h] [rbp-D0h]
  __int64 v112; // [rsp+40h] [rbp-C8h]
  int v113[2]; // [rsp+40h] [rbp-C8h]
  __int64 v114; // [rsp+48h] [rbp-C0h]
  unsigned int v115; // [rsp+48h] [rbp-C0h]
  _DWORD *v116; // [rsp+48h] [rbp-C0h]
  _QWORD *v117; // [rsp+48h] [rbp-C0h]
  __m128i *v118; // [rsp+48h] [rbp-C0h]
  __int64 v119; // [rsp+50h] [rbp-B8h]
  unsigned int v120; // [rsp+50h] [rbp-B8h]
  unsigned int v121; // [rsp+50h] [rbp-B8h]
  unsigned int v122; // [rsp+50h] [rbp-B8h]
  __int64 v124; // [rsp+58h] [rbp-B0h]
  unsigned int *v125; // [rsp+58h] [rbp-B0h]
  __int64 v126; // [rsp+58h] [rbp-B0h]
  _QWORD *v127; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v128; // [rsp+70h] [rbp-98h] BYREF
  __m128i v129; // [rsp+80h] [rbp-88h] BYREF
  int v130[2]; // [rsp+90h] [rbp-78h] BYREF
  char v131[8]; // [rsp+98h] [rbp-70h]
  __int64 v132; // [rsp+A0h] [rbp-68h]
  __int64 v133; // [rsp+A8h] [rbp-60h]
  __m128i ptr; // [rsp+B0h] [rbp-58h] BYREF
  int v135; // [rsp+C0h] [rbp-48h]

  v5 = a4;
  v7 = (__int64)a2;
  *(_QWORD *)v130 = 0;
  *(_QWORD *)v131 = 0;
  v132 = 1;
  v133 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v130, a5);
  v8 = a5[8];
  v109 = a2[1];
  *(_QWORD *)v111 = 8 * v5;
  v108 = v8;
  v9 = sub_A72E00(**(_QWORD **)(*(_QWORD *)(*a2 + 32LL) + 8 * v5));
  v13 = a2[3];
  v14 = v9;
  if ( v8 <= 0 )
  {
    if ( !v13 )
    {
      sub_16669E0(a2 + 2);
      v13 = a2[3];
    }
    sub_166A700(v13, (unsigned int)v130, v14, v10, v11, v12);
    if ( a4 == -1 )
      v28 = -1;
    else
      v28 = sub_FF9FB0(a2[63], a4);
    v29 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a2 + 32LL) + 8 * v5)) + 24);
    if ( v29 )
    {
      v30 = 0;
      if ( *v29 == 5 )
        v30 = v29[1] == 1;
    }
    else
    {
      v30 = 0;
    }
    if ( (unsigned __int8)sub_FF9F70(a2[63], v28) )
    {
      v62 = sub_FF9F90(a2[63], v28);
      v63 = sub_186B270(0x180u);
      *(_BYTE *)(v63 + 20) &= 0xFCu;
      *(_BYTE *)(v63 + 36) &= 0xFCu;
      *(_BYTE *)(v63 + 68) &= 0xFCu;
      *(_BYTE *)(v63 + 84) &= 0xFCu;
      *(_BYTE *)(v63 + 116) &= 0xFCu;
      *(_BYTE *)(v63 + 132) &= 0xFCu;
      *(_BYTE *)(v63 + 164) &= 0xFCu;
      *(_BYTE *)(v63 + 180) &= 0xFCu;
      *(_BYTE *)(v63 + 212) &= 0xFCu;
      *(_QWORD *)v63 = 0;
      *(_QWORD *)(v63 + 24) = 0;
      *(_QWORD *)(v63 + 40) = 0;
      *(_QWORD *)(v63 + 48) = 0;
      *(_QWORD *)(v63 + 72) = 0;
      *(_QWORD *)(v63 + 88) = 0;
      *(_QWORD *)(v63 + 96) = 0;
      *(_QWORD *)(v63 + 120) = 0;
      *(_QWORD *)(v63 + 136) = 0;
      *(_QWORD *)(v63 + 144) = 0;
      *(_QWORD *)(v63 + 168) = 0;
      *(_QWORD *)(v63 + 184) = 0;
      *(_QWORD *)(v63 + 192) = 0;
      *(_QWORD *)(v63 + 216) = 0;
      *(_BYTE *)(v63 + 228) &= 0xFCu;
      *(_BYTE *)(v63 + 260) &= 0xFCu;
      *(_BYTE *)(v63 + 276) &= 0xFCu;
      *(_BYTE *)(v63 + 308) &= 0xFCu;
      *(_BYTE *)(v63 + 324) &= 0xFCu;
      *(_BYTE *)(v63 + 356) &= 0xFCu;
      *(_BYTE *)(v63 + 372) &= 0xFCu;
      *(_QWORD *)(v63 + 232) = 0;
      *(_QWORD *)(v63 + 240) = 0;
      *(_QWORD *)(v63 + 264) = 0;
      *(_QWORD *)(v63 + 280) = 0;
      *(_QWORD *)(v63 + 288) = 0;
      *(_QWORD *)(v63 + 312) = 0;
      *(_QWORD *)(v63 + 328) = 0;
      *(_QWORD *)(v63 + 336) = 0;
      *(_QWORD *)(v63 + 360) = 0;
      *(_QWORD *)(v63 + 376) = 0;
      *(_DWORD *)(v63 + 16) = 0;
      *(_DWORD *)(v63 + 64) = 0;
      *(_DWORD *)(v63 + 112) = 0;
      *(_DWORD *)(v63 + 160) = 0;
      *(_DWORD *)(v63 + 208) = 0;
      *(_DWORD *)(v63 + 256) = 0;
      *(_DWORD *)(v63 + 304) = 0;
      *(_DWORD *)(v63 + 352) = 0;
      *(_DWORD *)(v63 + 32) = 1;
      *(_DWORD *)(v63 + 80) = 1;
      *(_DWORD *)(v63 + 128) = 1;
      *(_DWORD *)(v63 + 176) = 1;
      *(_DWORD *)(v63 + 224) = 1;
      *(_DWORD *)(v63 + 272) = 1;
      *(_DWORD *)(v63 + 320) = 1;
      *(_DWORD *)(v63 + 368) = 1;
      ptr.m128i_i64[0] = v63;
      ptr.m128i_i64[1] = 8;
      v135 = 0;
      sub_A7CA80(a2, v62, (__int64)&ptr, (__int64)&qword_1C7F280);
      sub_A846A0(&v129, (__int64)a2, ptr.m128i_i64, (__int64)&qword_1C7F2A0, v30, v64);
      v65 = (void *)ptr.m128i_i64[0];
      v114 = v129.m128i_i64[1];
      v31 = v129.m128i_i64[0];
      if ( ptr.m128i_i64[0] )
      {
        if ( ptr.m128i_i32[2] )
        {
          v119 = v129.m128i_i64[0];
          v66 = ptr.m128i_i64[0];
          v67 = ptr.m128i_i64[0];
          v68 = ptr.m128i_i64[0] + 48LL * ptr.m128i_u32[2];
          do
          {
            v69 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v67 + 16);
            v70 = v67 + 32;
            v67 += 48;
            sub_182CBA0(v69, v70);
          }
          while ( v67 != v68 );
          v31 = v119;
          v7 = (__int64)a2;
          v65 = (void *)v66;
        }
        sub_186B220(v65);
      }
    }
    else
    {
      v114 = a2[1];
      v31 = **(_QWORD **)(*(_QWORD *)(*a2 + 32LL) + 8 * v5);
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
    }
    v32 = sub_15E1B70(*(_QWORD *)(v7 + 16));
    v21 = (unsigned int *)v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    sub_A72BC0(v31, v114);
  }
  else
  {
    if ( !v13 )
    {
      sub_16669E0(a2 + 2);
      v13 = a2[3];
    }
    sub_166A700(v13, (unsigned int)v130, v14, v10, v11, v12);
    if ( a4 == -1 )
      v15 = -1;
    else
      v15 = sub_FF9FB0(a2[63], a4);
    v16 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a2 + 32LL) + 8 * v5)) + 24);
    if ( v16 )
    {
      v17 = 0;
      if ( *v16 == 5 )
        v17 = v16[1] == 1;
    }
    else
    {
      v17 = 0;
    }
    if ( (unsigned __int8)sub_FF9F70(a2[63], v15) )
    {
      v60 = sub_FF9F90(a2[63], v15);
      ptr.m128i_i64[0] = sub_A729C0();
      ptr.m128i_i64[1] = 8;
      v135 = 0;
      sub_A7CA80(a2, v60, (__int64)&ptr, (__int64)&qword_1C7F280);
      sub_A846A0(&v128, (__int64)a2, ptr.m128i_i64, (__int64)&qword_1C7F2A0, v17, v61);
      v18 = v128.m128i_i64[1];
      v19 = v128.m128i_i64[0];
      if ( ptr.m128i_i64[0] )
        sub_A73030((char *)ptr.m128i_i64[0], ptr.m128i_i32[2]);
    }
    else
    {
      v18 = a2[1];
      v19 = **(_QWORD **)(*(_QWORD *)(*a2 + 32LL) + 8 * v5);
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
    }
    v20 = sub_15E1B70(a2[2]);
    v21 = (unsigned int *)v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    sub_A72BC0(v19, v18);
  }
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 16LL) + 8832LL);
  if ( v22 )
  {
    v23 = *v21;
    if ( (unsigned int)v23 < *(_DWORD *)(v22 - 4) && *(_DWORD *)(v22 + 4 * v23) != 0x7FFFFFFF )
      goto LABEL_18;
  }
  v34 = *((_QWORD *)v21 + 2);
  v112 = *(_QWORD *)(a3 + 32);
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v35 = *(_QWORD **)(a3 + 72);
  if ( v35 )
  {
    v36 = *((_DWORD *)v35 - 1);
    if ( v36 == *((_DWORD *)v35 - 2) )
    {
      v73 = (3 * v36 + 1) >> 1;
      v74 = 40 * v73 + 8;
      if ( 40 * v36 + 8 >= (unsigned int)v74 || v36 >= v73 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A((char **)&ptr);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &ptr);
        sub_233E40((__int64)&ptr);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v115 = (3 * v36 + 1) >> 1;
      v75 = (unsigned int *)sub_186B270(v74);
      v76 = v115;
      v35 = v75 + 2;
      v77 = *(_QWORD **)(a3 + 72);
      if ( v77 )
      {
        v78 = *((unsigned int *)v77 - 1);
        v79 = v75 + 2;
        v75[1] = v78;
        v80 = &v77[5 * v78];
        for ( i = v77; v80 != i; *(v79 - 2) = *((_DWORD *)i - 2) )
        {
          v82 = i[1];
          i += 5;
          v79 += 10;
          *((_QWORD *)v79 - 4) = v82;
          v83 = *(i - 5);
          *(i - 5) = 0;
          *((_QWORD *)v79 - 5) = v83;
          *((_QWORD *)v79 - 2) = *(i - 2);
          v84 = *(i - 3);
          *(i - 3) = 0;
          *((_QWORD *)v79 - 3) = v84;
        }
        if ( (_DWORD)v78 )
        {
          v124 = v7;
          v85 = v77;
          v86 = &v77[5 * v78];
          v116 = v75 + 2;
          v87 = v75;
          v120 = v76;
          do
          {
            sub_A72BE0(v85[2], v85[3]);
            v88 = *v85;
            if ( *v85 )
            {
              v89 = v85[1];
              if ( (*(_DWORD *)(v88 + 8))-- == 1 )
                sub_15D7BC0(v89, v88);
            }
            v85 += 5;
          }
          while ( v85 != v86 );
          v75 = v87;
          v35 = v116;
          v76 = v120;
          v7 = v124;
          v77 = *(_QWORD **)(a3 + 72);
        }
        v125 = v75;
        v121 = v76;
        v117 = v35;
        sub_186B220(v77 - 1);
        v75 = v125;
        v35 = v117;
        v76 = v121;
        v39 = (__m128i *)&v117[5 * v125[1]];
        v38 = v125[1] + 1;
      }
      else
      {
        v75[1] = 0;
        v39 = (__m128i *)(v75 + 2);
        v38 = 1;
      }
      *v75 = v76;
      *(_QWORD *)(a3 + 72) = v35;
    }
    else
    {
      v37 = v36;
      v38 = v36 + 1;
      v39 = (__m128i *)&v35[5 * v37];
    }
  }
  else
  {
    v91 = (_QWORD *)sub_186B270(0x58u);
    v35 = v91 + 1;
    *v91 = 2;
    v39 = (__m128i *)(v91 + 1);
    *(_QWORD *)(a3 + 72) = v91 + 1;
    v38 = 1;
  }
  v39[2].m128i_i32[0] = 0;
  v39[1].m128i_i64[0] = 0;
  v39[1].m128i_i64[1] = v112;
  *v39 = _mm_unpacklo_epi64((__m128i)v34, (__m128i)(unsigned __int64)v112);
  *((_DWORD *)v35 - 1) = v38;
  sub_A72BE0(0, v112);
  v40 = sub_B67520(*(_QWORD *)(*(_QWORD *)v7 + 16LL), v21);
  v41 = *(_DWORD **)(v7 + 216);
  v42 = *(unsigned int *)(v7 + 224);
  v43 = v42 - 1;
  v42 *= 24;
  v44 = (_DWORD *)((char *)v41 + v42);
  v45 = 24LL * (v40 & v43);
  v46 = &v41[(unsigned __int64)v45 / 4];
  if ( v45 == v42 )
  {
LABEL_69:
    if ( v41 != v46 )
    {
      v47 = *(_DWORD **)(v7 + 216);
      while ( 1 )
      {
        v72 = v47[1];
        if ( v72 == 2 )
        {
          if ( v40 == *v47 && v40 == v47[2] )
            goto LABEL_50;
        }
        else if ( !v72 )
        {
          goto LABEL_54;
        }
        v47 += 6;
        if ( v46 == v47 )
          goto LABEL_54;
      }
    }
    goto LABEL_54;
  }
  v47 = &v41[(unsigned __int64)v45 / 4];
  while ( 1 )
  {
    v48 = v47[1];
    if ( v48 != 2 )
    {
      if ( !v48 )
        goto LABEL_54;
      goto LABEL_46;
    }
    if ( v40 == *v47 && v40 == v47[2] )
      break;
LABEL_46:
    v47 += 6;
    if ( v44 == v47 )
      goto LABEL_69;
  }
LABEL_50:
  v49 = v47 + 6;
  if ( v44 == v47 + 6 )
    v49 = *(_DWORD **)(v7 + 216);
  v50 = *(_DWORD *)(v7 + 228) - 1;
  if ( !v49[1] )
  {
    v47[1] = 0;
    *(_DWORD *)(v7 + 228) = v50;
    goto LABEL_54;
  }
  v47[1] = 1;
  v92 = *(_DWORD *)(v7 + 232);
  *(_DWORD *)(v7 + 228) = v50;
  v93 = v92 + 1;
  if ( v50 < 0x40 )
    v50 = 64;
  *(_DWORD *)(v7 + 232) = v93;
  if ( v50 < v93 && !(unsigned __int8)sub_186AF10(v41) )
  {
    v94 = *(_DWORD *)(v7 + 224);
    v95 = (__m128i *)sub_186B270(24LL * v94);
    v96 = v95;
    if ( v94 )
    {
      if ( v94 == 1 )
        goto LABEL_105;
      v97 = v95;
      v98 = &v95[3 * (v94 >> 1)];
      do
      {
        v97->m128i_i64[0] = 0;
        v97 += 3;
        v97[-2].m128i_i64[1] = 0;
      }
      while ( v97 != v98 );
      if ( (v94 & 1) != 0 )
      {
        v95 = (__m128i *)((char *)v96 + 24 * (v94 & 0xFFFFFFFE));
LABEL_105:
        v95->m128i_i64[0] = 0;
      }
    }
    v99 = *(unsigned int *)(v7 + 224);
    v100 = *(__m128i **)(v7 + 216);
    v101 = v100;
    v122 = v99 - 1;
    v126 = 24 * v99;
    *(_QWORD *)v113 = (char *)v100 + 24 * v99;
    v118 = (__m128i *)((char *)v96 + 24 * v99);
    if ( v100 != *(__m128i **)v113 )
    {
      do
      {
        if ( v101->m128i_i32[1] == 2 )
        {
          v102 = 24LL * (v101->m128i_i32[0] & v122);
          v103 = (__m128i *)((char *)v96 + v102);
          if ( v126 == v102 )
          {
LABEL_121:
            if ( v96 == v103 )
            {
LABEL_126:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v104 = v96;
            while ( v104->m128i_i32[1] )
            {
              v104 = (__m128i *)((char *)v104 + 24);
              if ( v103 == v104 )
                goto LABEL_126;
            }
          }
          else
          {
            v104 = (__m128i *)((char *)v96 + v102);
            while ( v104->m128i_i32[1] )
            {
              v104 = (__m128i *)((char *)v104 + 24);
              if ( v118 == v104 )
                goto LABEL_121;
            }
          }
          *v104 = _mm_loadu_si128(v101);
          v104[1].m128i_i64[0] = v101[1].m128i_i64[0];
        }
        v101 = (const __m128i *)((char *)v101 + 24);
      }
      while ( *(const __m128i **)v113 != v101 );
      v100 = *(__m128i **)(v7 + 216);
    }
    if ( v100 )
      sub_186B220(v100);
    *(_QWORD *)(v7 + 216) = v96;
    *(_DWORD *)(v7 + 232) = 0;
  }
LABEL_54:
  sub_8F1CE0(*(_QWORD *)(*(_QWORD *)v7 + 16LL), v40, *(_DWORD *)(*(_QWORD *)v7 + 8LL));
  v51 = sub_A8C0A0(v7, v40, a4, v108 > 0, v130);
  sub_A8EA40(v7, v51);
  v52 = *(_QWORD *)(*(_QWORD *)v7 + 16LL);
  v53 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v7 + 248) + 4 * v5));
  v54 = (_QWORD *)sub_180C100(v52 + 8400, 24);
  *v54 = off_1C55270;
  v54[1] = v7 + 248;
  v127 = v54;
  v54[2] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v53))).m128i_u64[0];
  sub_A73EF0((_QWORD *)(v52 + 9456), &v127);
  ++*(_DWORD *)(*(_QWORD *)(v7 + 248) + 4 * v5);
  v55 = (__int64 *)(*(_QWORD *)(v7 + 240) + *(_QWORD *)v111);
  v56 = *v55;
  if ( !*v55 || (v57 = *(_DWORD *)(v56 - 4), v57 == *(_DWORD *)(v56 - 8)) )
  {
    sub_A8E970((unsigned int **)(*(_QWORD *)(v7 + 240) + *(_QWORD *)v111));
    v56 = *v55;
    v57 = *(_DWORD *)(*v55 - 4);
  }
  *(_QWORD *)(v56 + 8LL * v57) = v51;
  *(_DWORD *)(v56 - 4) = v57 + 1;
  v58 = *(_QWORD *)(v7 + 256);
  if ( !v58 || (v59 = *(unsigned int *)(v58 - 4), (_DWORD)v59 == *(_DWORD *)(v58 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(v7 + 256));
    v58 = *(_QWORD *)(v7 + 256);
    v59 = *(unsigned int *)(v58 - 4);
  }
  *(_DWORD *)(v58 + 4 * v59) = a4;
  ++*(_DWORD *)(v58 - 4);
  ptr.m128i_i32[0] = v40;
  ptr.m128i_i64[1] = v51;
  sub_A901E0(v7 + 216, &ptr);
LABEL_18:
  v24 = *(_QWORD *)(v7 + 8);
  if ( v108 <= 0 )
  {
    v33 = v21[2];
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)v24);
    if ( v33 )
      goto LABEL_21;
LABEL_37:
    sub_15D7BC0(v109, v21);
    goto LABEL_21;
  }
  v25 = sub_15E1A70(v24);
  v26 = (unsigned int *)v25;
  if ( !v25 )
  {
    sub_A72BC0((__int64)v21, v109);
    v71 = *(_QWORD *)(v7 + 8);
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = v71;
    goto LABEL_21;
  }
  ++*(_DWORD *)(v25 + 8);
  sub_A72BC0((__int64)v21, v109);
  v21 = v26;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)(v7 + 8));
  if ( !v26[2] )
    goto LABEL_37;
LABEL_21:
  sub_25A130((char *)v130);
  return a1;
}

