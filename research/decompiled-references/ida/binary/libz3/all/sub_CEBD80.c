__int64 __fastcall sub_CEBD80(__int64 a1, __m128i **a2, __int64 a3)
{
  __m128i *v4; // rdx
  __m128i *v5; // rax
  __int64 v6; // r15
  char v7; // r13
  __int64 v8; // rsi
  __m128i *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // dl
  unsigned int v13; // r14d
  __int64 v14; // r12
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // edx
  int v18; // edx
  _QWORD *v19; // rax
  __m128i *v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  char v26; // al
  unsigned int v27; // eax
  int v28; // eax
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  bool v33; // zf
  __int64 v34; // rax
  _QWORD *v35; // rdx
  bool v36; // dl
  __int64 v37; // r12
  __m128i *v38; // r13
  unsigned int v39; // edx
  unsigned int v40; // ebx
  __int64 v41; // r12
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 *v47; // rbx
  unsigned __int64 v48; // rbp
  __int64 v49; // rsi
  __int64 *v50; // rbx
  unsigned __int64 v51; // rbp
  __int64 v52; // rsi
  unsigned int v54; // ebx
  bool v55; // dl
  __m128i *v56; // rbx
  __m128i *v57; // r12
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rbp
  void (__fastcall ***v61)(void *); // r13
  unsigned int v62; // r12d
  __int64 v63; // rdx
  int v64; // eax
  __m128 *v65; // rdx
  __int64 *v66; // rdi
  __m128 v67; // xmm0
  __int64 v68; // rbp
  __m128 *v69; // r14
  unsigned int v70; // eax
  unsigned int v71; // r15d
  size_t v72; // rdi
  __int64 v73; // rax
  _QWORD *v74; // r13
  __m128i *v75; // r8
  __int64 v76; // rdi
  __int64 v77; // rdx
  _QWORD *v78; // rsi
  _QWORD *i; // rax
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 *v83; // rax
  __int64 *v84; // rbp
  __m128i *v85; // r13
  __int64 *v86; // rbx
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rbx
  _QWORD *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  unsigned __int64 v96; // rax
  char **exception; // r12
  __int64 v98; // rdx
  __int64 v99; // [rsp+0h] [rbp-F8h]
  __int64 *v100; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v101; // [rsp+10h] [rbp-E8h]
  __int64 v102; // [rsp+18h] [rbp-E0h]
  __int64 v103; // [rsp+20h] [rbp-D8h]
  char *v104; // [rsp+28h] [rbp-D0h]
  __m128i *v105; // [rsp+30h] [rbp-C8h]
  __int64 v106; // [rsp+38h] [rbp-C0h]
  char v107[8]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v109[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v110; // [rsp+60h] [rbp-98h] BYREF
  _QWORD *v111; // [rsp+68h] [rbp-90h]
  __int64 v112; // [rsp+70h] [rbp-88h] BYREF
  __int64 *v113; // [rsp+78h] [rbp-80h]
  __int64 v114; // [rsp+80h] [rbp-78h] BYREF
  __int64 v115; // [rsp+88h] [rbp-70h]
  __int64 v116; // [rsp+90h] [rbp-68h] BYREF
  __int64 v117; // [rsp+98h] [rbp-60h]
  __int64 v118[11]; // [rsp+A0h] [rbp-58h] BYREF

  v102 = a3;
  v4 = *a2;
  v103 = a1;
  v104 = v107;
  sub_EE4940(v107, "nnf", v4);
  v5 = *a2;
  v101 = (__int64)v109;
  v6 = v5->m128i_i64[0];
  v7 = v5[7].m128i_i8[11] & 8;
  sub_13A2DE0(v109, v5->m128i_i64[0], "z3name");
  v8 = v6;
  sub_13A5730((int)&v108, (__int64)&v108, (int)v100, (__int64)v109, v102, a1);
  v9 = *a2;
  *(_QWORD *)(a1 + 24) = &v108;
  v110 = v6;
  v10 = v9[4].m128i_i64[1];
  v112 = v6;
  v111 = nullptr;
  v113 = nullptr;
  v114 = 0;
  v115 = v6;
  v116 = 0;
  v117 = v6;
  if ( !v10 )
    goto LABEL_54;
  v11 = v10;
  v12 = *(_BYTE *)(v10 + 3) >> 6;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
LABEL_4:
      if ( v12 == 2 )
        v13 = *(_DWORD *)(v11 + 4) - 1;
      else
        v13 = *(_DWORD *)(v11 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v11 = *(_QWORD *)(v11 + 16);
      v12 = *(_BYTE *)(v11 + 3) >> 6;
    }
    while ( !v12 );
    if ( v12 != 1 )
      goto LABEL_4;
  }
  v13 = *(_DWORD *)(v11 + 4) + 1;
LABEL_6:
  if ( (v9[7].m128i_i8[11] & 0x20) != 0 || !v13 )
    goto LABEL_54;
  v14 = 0;
  v15 = 0;
  v100 = &v116;
  while ( 2 )
  {
    v18 = 17;
    while ( 1 )
    {
      if ( *(char *)(v10 + 3) < 0 )
      {
        if ( *(_BYTE *)(v10 + 3) >> 6 != 2 )
        {
          v19 = (_QWORD *)(v14 + *(_QWORD *)(v10 + 16));
          goto LABEL_19;
        }
        goto LABEL_26;
      }
      if ( *(_DWORD *)(v10 + 4) == v15 )
        break;
LABEL_26:
      v10 = *(_QWORD *)(v10 + 16);
      if ( !--v18 )
      {
        v22 = v9->m128i_i64[0];
        v105 = v9;
        sub_233F80((__int64 *)(v22 + 616), &v9[4].m128i_i32[2]);
        v19 = (_QWORD *)(v14 + *(_QWORD *)(v105[4].m128i_i64[1] + 16));
        goto LABEL_19;
      }
    }
    v19 = (_QWORD *)(v10 + 8);
LABEL_19:
    sub_13A61F0(v99, *v19, (unsigned int)&v110, (unsigned int)&v112, (unsigned int)&v114, (_DWORD)v100);
    if ( !v7 )
      goto LABEL_20;
    v23 = *a2;
    v24 = (*a2)[5].m128i_i64[1];
    if ( !v24 )
      goto LABEL_39;
    v25 = (*a2)[5].m128i_i64[1];
    v26 = *(_BYTE *)(v24 + 3) >> 6;
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_31;
LABEL_47:
      if ( v15 >= *(_DWORD *)(v25 + 4) + 1 )
        goto LABEL_48;
    }
    else
    {
      do
      {
        v25 = *(_QWORD *)(v25 + 16);
        v26 = *(_BYTE *)(v25 + 3) >> 6;
      }
      while ( !v26 );
      if ( v26 == 1 )
        goto LABEL_47;
LABEL_31:
      if ( v26 == 2 )
        v27 = *(_DWORD *)(v25 + 4) - 1;
      else
        v27 = *(_DWORD *)(v25 + 4);
      if ( v15 >= v27 )
      {
LABEL_48:
        v24 = 0;
        goto LABEL_39;
      }
    }
    v28 = 17;
    while ( 2 )
    {
      if ( *(char *)(v24 + 3) < 0 )
      {
        if ( *(_BYTE *)(v24 + 3) >> 6 != 2 )
        {
          v29 = (__int64 *)(v14 + *(_QWORD *)(v24 + 16));
          goto LABEL_38;
        }
LABEL_50:
        v24 = *(_QWORD *)(v24 + 16);
        if ( !--v28 )
        {
          v34 = v23->m128i_i64[0];
          v105 = *a2;
          sub_233F80((__int64 *)(v34 + 616), &v23[5].m128i_i32[2]);
          v29 = (__int64 *)(v14 + *(_QWORD *)(v105[5].m128i_i64[1] + 16));
          goto LABEL_38;
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v24 + 4) != v15 )
      goto LABEL_50;
    v29 = (__int64 *)(v24 + 8);
LABEL_38:
    v24 = *v29;
LABEL_39:
    v30 = sub_15DE0E0(v6, v24, v116);
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v31 = v116;
    if ( v116 )
    {
      v32 = v117;
      v33 = (*(_DWORD *)(v116 + 8))-- == 1;
      if ( v33 )
      {
        v105 = (__m128i *)v30;
        sub_15D7BC0(v32, v31);
        v30 = (__int64)v105;
      }
    }
    v116 = v30;
LABEL_20:
    v20 = *a2;
    if ( ((*a2)[7].m128i_i8[11] & 0x10) != 0 )
    {
      v16 = v20[6].m128i_i64[1];
      v17 = 17;
      do
      {
        if ( *(char *)(v16 + 3) >= 0 )
        {
          if ( *(_DWORD *)(v16 + 4) == v15 )
            goto LABEL_12;
        }
        else if ( *(_BYTE *)(v16 + 3) >> 6 != 2 )
        {
          goto LABEL_12;
        }
        v16 = *(_QWORD *)(v16 + 16);
        --v17;
      }
      while ( v17 );
      v21 = v20->m128i_i64[0];
      v105 = *a2;
      sub_236900((_QWORD *)(v21 + 672), &v20[6].m128i_i64[1]);
      LODWORD(v20) = (_DWORD)v105;
    }
LABEL_12:
    v8 = v15;
    sub_EDBFA0((int)v20);
    v9 = *a2;
    ++v15;
    v14 += 8;
    if ( v15 < v13 && ((*a2)[7].m128i_i8[11] & 0x20) == 0 )
    {
      v10 = v9[4].m128i_i64[1];
      continue;
    }
    break;
  }
  v35 = v111;
  if ( v111 )
  {
    v54 = *((_DWORD *)v111 - 1);
    if ( v54 )
    {
      if ( ((*a2)[7].m128i_i8[11] & 0x20) == 0 )
      {
        v37 = 0;
        if ( v7 )
        {
          while ( 1 )
          {
            v8 = v35[v37];
            sub_EDB570(v9, v8, v113[v37], 0);
            v9 = *a2;
            v36 = (int)v37++ + 1 < v54;
            if ( (v36 & (unsigned __int8)~((unsigned __int8)(*a2)[7].m128i_i8[11] >> 5)) == 0 )
              break;
            v35 = v111;
          }
        }
        else
        {
          while ( 1 )
          {
            v8 = v35[v37];
            sub_EDB570(v9, v8, 0, 0);
            v9 = *a2;
            v55 = (int)v37++ + 1 < v54;
            if ( (v55 & (unsigned __int8)~((unsigned __int8)(*a2)[7].m128i_i8[11] >> 5)) == 0 )
              break;
            v35 = v111;
          }
        }
      }
    }
  }
LABEL_54:
  v9[7].m128i_i32[2] = (v9[7].m128i_i32[2] + 1) & 0x3FFFFFF | v9[7].m128i_i32[2] & 0xFC000000;
  v38 = *a2;
  if ( *a2 )
    ++v38[2].m128i_i32[0];
  v39 = *(_DWORD *)(v102 + 8);
  v40 = *(_DWORD *)(v102 + 12);
  if ( v39 >= v40 )
  {
    v91 = 2 * v40;
    v41 = sub_186B270(8 * v91);
    v39 = *(_DWORD *)(v102 + 8);
    v92 = *(_QWORD **)v102;
    if ( v39 )
    {
      if ( v39 - 1 <= 2 || (_QWORD *)v41 == v92 + 1 )
      {
        v96 = 0;
        v8 = 8LL * v39;
        do
        {
          *(_QWORD *)(v41 + v96) = v92[v96 / 8];
          v96 += 8LL;
        }
        while ( v96 != v8 );
      }
      else
      {
        v93 = 0;
        do
        {
          *(__m128i *)(v41 + v93 * 8) = _mm_loadu_si128((const __m128i *)&v92[v93]);
          v93 += 2;
        }
        while ( v93 != 2LL * (v39 >> 1) );
        if ( (v39 & 1) != 0 )
          *(_QWORD *)(v41 + 8LL * (v39 & 0xFFFFFFFE)) = v92[v39 & 0xFFFFFFFE];
      }
    }
    if ( v92 != (_QWORD *)(v102 + 16) && v92 )
    {
      sub_186B220(v92);
      v39 = *(_DWORD *)(v102 + 8);
    }
    v94 = v102;
    *(_QWORD *)v102 = v41;
    *(_DWORD *)(v94 + 12) = v91;
  }
  else
  {
    v41 = *(_QWORD *)v102;
  }
  v42 = v101;
  *(_QWORD *)(v41 + 8LL * v39) = v38;
  *(_DWORD *)(v102 + 8) = v39 + 1;
  LODWORD(v102) = sub_13A2C70(v42, v8);
  if ( (_DWORD)v102 && ((*a2)[7].m128i_i8[11] & 0x20) == 0 )
  {
    v56 = (__m128i *)sub_186B270(0x50u);
    v56[1].m128i_i8[8] = 1;
    v57 = *a2;
    v56->m128i_i32[2] = 0;
    v56[1].m128i_i64[0] = 0;
    v56[3].m128i_i16[4] = 28270;
    v56->m128i_i64[0] = (__int64)&off_1C60CE8;
    v56[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)&v56[3].m128i_u64[1]);
    v56[3].m128i_i8[10] = 102;
    v56[3].m128i_i8[11] = 0;
    v58 = v57->m128i_i64[1];
    v56[3].m128i_i64[0] = 3;
    v56[4].m128i_i64[1] = 0;
    v59 = sub_1336AB0(v58, v56);
    v60 = v59;
    if ( v59 )
      ++*(_DWORD *)(v59 + 8);
    v61 = (void (__fastcall ***)(void *))v57->m128i_i64[1];
    if ( v61 )
    {
      v33 = (*((_DWORD *)v61 + 2))-- == 1;
      if ( v33 )
      {
        (**v61)(v61);
        sub_186B220(v61);
      }
    }
    v57->m128i_i64[1] = v60;
    v62 = 0;
    do
    {
      v68 = sub_13A2CA0(v101, v62);
      v100 = (__int64 *)v56[2].m128i_i64[0];
      if ( v68 )
        ++*(_DWORD *)(v68 + 8);
      v69 = (__m128 *)v56[4].m128i_i64[1];
      if ( v69 )
      {
        v70 = v69[-1].m128_u32[3];
        if ( v70 == v69[-1].m128_i32[2] )
        {
          v71 = (3 * v70 + 1) >> 1;
          v72 = 40 * v71 + 8;
          if ( 40 * v70 + 8 >= (unsigned int)v72 || v70 >= v71 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_16506C(v118, "Overflow encountered when expanding vector", v98);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v118);
            sub_233E40((__int64)v118);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v73 = sub_186B270(v72);
          v74 = (_QWORD *)v56[4].m128i_i64[1];
          v75 = (__m128i *)v73;
          v69 = (__m128 *)(v73 + 8);
          if ( v74 )
          {
            v76 = *((unsigned int *)v74 - 1);
            v77 = v73 + 8;
            *(_DWORD *)(v73 + 4) = v76;
            v78 = &v74[5 * v76];
            for ( i = v74; v78 != i; *(_DWORD *)(v77 - 8) = *((_DWORD *)i - 2) )
            {
              v80 = i[1];
              i += 5;
              v77 += 40;
              *(_QWORD *)(v77 - 32) = v80;
              v81 = *(i - 5);
              *(i - 5) = 0;
              *(_QWORD *)(v77 - 40) = v81;
              *(_QWORD *)(v77 - 16) = *(i - 2);
              v82 = *(i - 3);
              *(i - 3) = 0;
              *(_QWORD *)(v77 - 24) = v82;
            }
            if ( (_DWORD)v76 )
            {
              v105 = v56;
              v83 = &v74[5 * v76];
              v106 = v68;
              v84 = v74;
              v85 = v75;
              v86 = v83;
              do
              {
                while ( 1 )
                {
                  v89 = v84[2];
                  if ( v89 )
                  {
                    v90 = v84[3];
                    v33 = (*(_DWORD *)(v89 + 8))-- == 1;
                    if ( v33 )
                      sub_15D7BC0(v90, v89);
                  }
                  v87 = *v84;
                  if ( *v84 )
                  {
                    v88 = v84[1];
                    v33 = (*(_DWORD *)(v87 + 8))-- == 1;
                    if ( v33 )
                      break;
                  }
                  v84 += 5;
                  if ( v86 == v84 )
                    goto LABEL_123;
                }
                sub_15D7BC0(v88, v87);
                v84 += 5;
              }
              while ( v86 != v84 );
LABEL_123:
              v56 = v105;
              v75 = v85;
              v74 = (_QWORD *)v105[4].m128i_i64[1];
            }
            v105 = v75;
            sub_186B220(v74 - 1);
            v75 = v105;
            v65 = (__m128 *)((char *)v69 + 40 * v105->m128i_u32[1]);
            v64 = v105->m128i_i32[1] + 1;
          }
          else
          {
            *(_DWORD *)(v73 + 4) = 0;
            v65 = (__m128 *)(v73 + 8);
            v64 = 1;
          }
          v56[4].m128i_i64[1] = (__int64)v69;
          v75->m128i_i32[0] = v71;
        }
        else
        {
          v63 = v70;
          v64 = v70 + 1;
          v65 = (__m128 *)((char *)v69 + 40 * v63);
        }
      }
      else
      {
        v95 = (_QWORD *)sub_186B270(0x58u);
        v69 = (__m128 *)(v95 + 1);
        *v95 = 2;
        v64 = 1;
        v56[4].m128i_i64[1] = (__int64)v69;
        v65 = v69;
      }
      v66 = v100;
      ++v62;
      v65[1].m128_u64[0] = 0;
      v67 = _mm_loadh_ps((const double *)&v100);
      v65[2].m128_i32[0] = 0;
      v65[1].m128_u64[1] = (unsigned __int64)v66;
      *v65 = v67;
      v69[-1].m128_i32[3] = v64;
    }
    while ( (_DWORD)v102 != v62 );
  }
  v43 = v116;
  if ( v116 )
  {
    v44 = v117;
    v33 = (*(_DWORD *)(v116 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v44, v43);
  }
  v45 = v114;
  if ( v114 )
  {
    v46 = v115;
    v33 = (*(_DWORD *)(v114 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v46, v45);
  }
  v47 = v113;
  if ( v113 )
  {
    v48 = (unsigned __int64)&v113[*((unsigned int *)v113 - 1)];
    if ( (unsigned __int64)v113 >= v48 )
      goto LABEL_74;
    do
    {
      while ( 1 )
      {
        v49 = *v47;
        if ( *v47 )
        {
          v33 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v33 )
            break;
        }
        if ( (unsigned __int64)++v47 >= v48 )
          goto LABEL_73;
      }
      sub_15D7BC0(v112, v49);
      ++v47;
    }
    while ( (unsigned __int64)v47 < v48 );
LABEL_73:
    v47 = v113;
    if ( v113 )
LABEL_74:
      sub_186B220(v47 - 1);
  }
  v50 = v111;
  if ( v111 )
  {
    v51 = (unsigned __int64)&v111[*((unsigned int *)v111 - 1)];
    if ( (unsigned __int64)v111 >= v51 )
      goto LABEL_83;
    do
    {
      while ( 1 )
      {
        v52 = *v50;
        if ( *v50 )
        {
          v33 = (*(_DWORD *)(v52 + 8))-- == 1;
          if ( v33 )
            break;
        }
        if ( (unsigned __int64)++v50 >= v51 )
          goto LABEL_82;
      }
      sub_15D7BC0(v110, v52);
      ++v50;
    }
    while ( (unsigned __int64)v50 < v51 );
LABEL_82:
    v50 = v111;
    if ( v111 )
LABEL_83:
      sub_186B220(v50 - 1);
  }
  *(_QWORD *)(v103 + 24) = 0;
  sub_13A5000(v99);
  sub_13A2BD0(v101);
  return sub_EE4A00(v104);
}

