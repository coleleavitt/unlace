void __fastcall sub_E07B50(__int64 a1, const __m128i *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char **exception; // r13
  char **v6; // r13
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(); // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rdi
  int v28; // eax
  __int64 *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  size_t v34; // rsi
  __int64 v35; // rax
  unsigned int v36; // edx
  size_t v37; // rsi
  __int64 v38; // rax
  _DWORD *v39; // rsi
  int v40; // eax
  int v41; // r9d
  void *v42; // rsi
  int v43; // ecx
  int v44; // r8d
  int v45; // r8d
  _QWORD *v46; // rdi
  __int64 *v47; // r12
  _QWORD *v48; // r15
  unsigned __int64 v49; // r13
  __int64 v50; // rsi
  bool v51; // zf
  unsigned __int64 v52; // r12
  __int64 *v53; // r15
  __int64 v54; // rsi
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rsi
  char v58; // al
  __m128i v59; // xmm0
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  __m128i v62; // xmm1
  __int64 v63; // rbx
  __int32 v64; // r10d
  __int64 v65; // r11
  __m128i *v66; // r13
  unsigned __int64 v67; // rsi
  __int64 v68; // r10
  __int64 v69; // rdi
  _QWORD *v70; // r11
  __int64 v71; // rax
  int v72; // edx
  __int64 v73; // r14
  _QWORD *v74; // rdx
  int v75; // eax
  __int64 v76; // rax
  __int32 v77; // r8d
  __int64 v78; // rsi
  _QWORD *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdx
  const __m128i *v82; // r14
  __m128i *v83; // r9
  __int64 v84; // rax
  __int64 v85; // rdx
  __m128i *v86; // rsi
  _QWORD *v87; // rdi
  __m128i *v88; // rdx
  __m128i v89; // xmm0
  int v90; // [rsp+0h] [rbp-1B0h]
  __int64 v91; // [rsp+8h] [rbp-1A8h]
  __int64 v92; // [rsp+8h] [rbp-1A8h]
  __int64 v93; // [rsp+10h] [rbp-1A0h]
  __int64 v94; // [rsp+10h] [rbp-1A0h]
  int v95; // [rsp+18h] [rbp-198h]
  __m128i v96; // [rsp+20h] [rbp-190h] BYREF
  const __m128i *v97; // [rsp+30h] [rbp-180h]
  int v98[2]; // [rsp+38h] [rbp-178h]
  unsigned int v99; // [rsp+44h] [rbp-16Ch]
  __int64 v100; // [rsp+48h] [rbp-168h]
  __m128i v101; // [rsp+50h] [rbp-160h] BYREF
  __m128i v102; // [rsp+60h] [rbp-150h]
  __m128i *v103; // [rsp+70h] [rbp-140h]
  int v104[4]; // [rsp+78h] [rbp-138h]
  __m128i v105; // [rsp+88h] [rbp-128h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-110h]
  char v107; // [rsp+B0h] [rbp-100h] BYREF
  __int64 v108; // [rsp+B8h] [rbp-F8h]
  int v109[2]; // [rsp+C0h] [rbp-F0h] BYREF
  __int64 v110; // [rsp+C8h] [rbp-E8h]
  unsigned __int64 v111[2]; // [rsp+E0h] [rbp-D0h] BYREF
  _QWORD v112[14]; // [rsp+F0h] [rbp-C0h] BYREF
  int v113; // [rsp+160h] [rbp-50h]
  __int64 v114; // [rsp+168h] [rbp-48h]
  __int64 v115; // [rsp+170h] [rbp-40h] BYREF

  v9 = a2->m128i_i64[0];
  v97 = a2;
  v10 = *(_DWORD *)(a1 + 704);
  v11 = *(_QWORD *)(a1 + 696);
  v99 = a3;
  v111[0] = v9;
  *(_QWORD *)v98 = a5;
  v12 = sub_DF60C0(v11, v10, v111);
  *(_QWORD *)v104 = v12;
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    sub_DFBCB0(a1);
    v14 = *(_QWORD *)(a1 + 296);
    v105.m128i_i64[0] = v13;
    if ( !(unsigned __int8)sub_DFA8D0((__int64 ****)&v105, v14, v99, a4, *(__int64 *)v98) )
    {
      sub_1872CE0("");
      sub_1873130(114, 396);
    }
    goto LABEL_3;
  }
  sub_DFBCB0(a1);
  v57 = *(_QWORD *)(a1 + 296);
  v105.m128i_i64[0] = 0;
  v58 = sub_DFA8D0((__int64 ****)&v105, v57, v99, a4, *(__int64 *)v98);
  v59 = _mm_loadl_epi64(&v105);
  if ( !v58 )
  {
    v102.m128i_i64[0] = v59.m128i_i64[0];
    sub_1872CE0("");
    sub_1873130(114, 392);
  }
  v60 = v97->m128i_i64[0];
  v61 = *(unsigned int *)(a1 + 704);
  v62 = _mm_unpacklo_epi64((__m128i)v97->m128i_u64[0], v59);
  if ( 3 * (int)v61 < (unsigned int)(4 * (*(_DWORD *)(a1 + 708) + *(_DWORD *)(a1 + 712))) )
  {
    v100 = v97->m128i_i64[0];
    LODWORD(v103) = 2 * v61;
    v96 = v62;
    v101.m128i_i64[0] = 24LL * (unsigned int)(2 * v61);
    v102.m128i_i64[0] = v101.m128i_i64[0];
    v76 = sub_186B270(v101.m128i_u64[0]);
    v77 = (int)v103;
    v78 = v101.m128i_i64[0];
    v63 = v76;
    v79 = *(_QWORD **)v104;
    v65 = v101.m128i_i64[0];
    v80 = v76 + 8;
    v60 = v100;
    v81 = v63 + v101.m128i_i64[0] + 8;
    v62 = _mm_load_si128(&v96);
    if ( (_DWORD)v103 )
    {
      do
      {
        *(_QWORD *)(v80 - 8) = 0;
        v80 += 24;
        *(_QWORD *)(v80 - 24) = 0;
        *(_QWORD *)(v80 - 16) = 0;
      }
      while ( v81 != v80 );
      *(_QWORD *)v104 = v79;
    }
    v82 = *(const __m128i **)(a1 + 696);
    v64 = v77 - 1;
    v66 = (__m128i *)(v63 + v78);
    v83 = (__m128i *)((char *)v82 + 24 * *(unsigned int *)(a1 + 704));
    v84 = v78;
    if ( v82 != v83 )
    {
      do
      {
        if ( v82->m128i_i32[1] == 2 )
        {
          v85 = 24LL * (v82->m128i_i32[0] & (unsigned int)v64);
          v86 = (__m128i *)(v63 + v85);
          if ( v85 == v84 )
          {
LABEL_103:
            if ( v86 == (__m128i *)v63 )
            {
LABEL_111:
              v96.m128i_i64[0] = v65;
              LODWORD(v100) = v77 - 1;
              v103 = v83;
              v101.m128i_i64[0] = v60;
              v102 = v62;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v87 = *(_QWORD **)v104;
            v88 = (__m128i *)v63;
            while ( v88->m128i_i32[1] )
            {
              v88 = (__m128i *)((char *)v88 + 24);
              if ( v86 == v88 )
                goto LABEL_111;
            }
          }
          else
          {
            v87 = *(_QWORD **)v104;
            v88 = (__m128i *)(v63 + v85);
            while ( v88->m128i_i32[1] )
            {
              v88 = (__m128i *)((char *)v88 + 24);
              if ( v66 == v88 )
                goto LABEL_103;
            }
          }
          v89 = _mm_loadu_si128(v82);
          *(_QWORD *)v104 = v87;
          *v88 = v89;
          v88[1].m128i_i64[0] = v82[1].m128i_i64[0];
        }
        v82 = (const __m128i *)((char *)v82 + 24);
      }
      while ( v83 != v82 );
      v83 = *(__m128i **)(a1 + 696);
    }
    if ( v83 )
    {
      v96.m128i_i32[0] = v77;
      v100 = v65;
      LODWORD(v103) = v77 - 1;
      v102.m128i_i64[0] = v60;
      v101 = v62;
      sub_186B220(v83);
      v77 = v96.m128i_i32[0];
      v65 = v100;
      v64 = (int)v103;
      v62 = _mm_load_si128(&v101);
      v60 = v102.m128i_i64[0];
    }
    *(_QWORD *)(a1 + 696) = v63;
    *(_DWORD *)(a1 + 704) = v77;
    *(_DWORD *)(a1 + 712) = 0;
  }
  else
  {
    v63 = *(_QWORD *)(a1 + 696);
    v64 = v61 - 1;
    v65 = 24 * v61;
    v66 = (__m128i *)(v63 + 24 * v61);
  }
  if ( v60 )
  {
    if ( (v60 & 7) == 1 )
      v67 = v60 >> 3;
    else
      LODWORD(v67) = *(_DWORD *)(v60 - 8);
  }
  else
  {
    LODWORD(v67) = -1640531495;
  }
  v68 = (unsigned int)v67 & v64;
  v69 = v63 + 24 * v68;
  if ( 24 * v68 == v65 )
    goto LABEL_73;
  v70 = *(_QWORD **)v104;
  v71 = v63 + 24 * v68;
  while ( 1 )
  {
    v72 = *(_DWORD *)(v71 + 4);
    if ( v72 == 2 )
    {
      if ( (_DWORD)v67 == *(_DWORD *)v71 && *(_QWORD *)(v71 + 8) == v60 )
      {
        *(_DWORD *)(v71 + 4) = 2;
        *(__m128i *)(v71 + 8) = v62;
        goto LABEL_3;
      }
      goto LABEL_61;
    }
    if ( !v72 )
      break;
    v70 = (_QWORD *)v71;
LABEL_61:
    v71 += 24;
    if ( (__m128i *)v71 == v66 )
    {
      *(_QWORD *)v104 = v70;
LABEL_73:
      if ( v69 == v63 )
      {
LABEL_102:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v74 = *(_QWORD **)v104;
      while ( 1 )
      {
        v75 = *(_DWORD *)(v63 + 4);
        if ( v75 == 2 )
        {
          if ( (_DWORD)v67 == *(_DWORD *)v63 && *(_QWORD *)(v63 + 8) == v60 )
          {
            *(_DWORD *)(v63 + 4) = 2;
            *(__m128i *)(v63 + 8) = v62;
            goto LABEL_3;
          }
        }
        else
        {
          if ( !v75 )
          {
            *(_QWORD *)v104 = v74;
            v71 = (__int64)v74;
            if ( v74 )
            {
              --*(_DWORD *)(a1 + 712);
            }
            else
            {
              *(_QWORD *)v104 = v63;
              v71 = v63;
            }
            goto LABEL_84;
          }
          v74 = (_QWORD *)v63;
        }
        v63 += 24;
        if ( v69 == v63 )
          goto LABEL_102;
      }
    }
  }
  *(_QWORD *)v104 = v70;
  if ( v70 )
  {
    --*(_DWORD *)(a1 + 712);
    v71 = (__int64)v70;
  }
  else
  {
    *(_QWORD *)v104 = v71;
  }
LABEL_84:
  *(_DWORD *)(v71 + 4) = 2;
  *(_DWORD *)v71 = v67;
  *(__m128i *)(v71 + 8) = v62;
  ++*(_DWORD *)(a1 + 708);
LABEL_3:
  v15 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 32LL);
  if ( v15 == sub_E0F550 )
  {
    sub_DFBCB0(a1);
    v16 = *(_QWORD *)(a1 + 296);
  }
  else
  {
    v16 = ((__int64 (__fastcall *)(__int64))v15)(a1);
  }
  sub_162A710(v111, v16);
  v96.m128i_i64[0] = v112[0];
  sub_DFBCB0(a1);
  v17 = *(_QWORD *)(a1 + 296);
  v111[0] = (unsigned __int64)&off_1C4CAA0;
  v112[2] = 0;
  v111[1] = v17;
  v112[0] = v17;
  v112[1] = v17;
  v112[3] = v17;
  v112[8] = v17;
  memset(&v112[4], 0, 32);
  v112[9] = 0;
  v112[10] = &v115;
  v112[11] = 1;
  v112[12] = 0;
  v112[13] = 0;
  v113 = 1065353216;
  v114 = 0;
  v115 = 0;
  sub_DFBCB0(a1);
  v91 = *(_QWORD *)(a1 + 296);
  v105.m128i_i64[1] = v91;
  sub_DFBCB0(a1);
  v93 = *(_QWORD *)(a1 + 296);
  v106 = v93;
  if ( v99 )
  {
    *(_QWORD *)v104 = 0;
    v18 = 0;
    v102.m128i_i64[0] = v99;
    v19 = nullptr;
    v101.m128i_i32[0] = v99 - 1;
    do
    {
      sub_DFBCB0(a1);
      v30 = sub_15DB5C0(*(_QWORD *)(a1 + 296), (unsigned int)v18, *(_QWORD *)(a4 + 8 * v18));
      v31 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      if ( v19 )
      {
        v32 = *((_DWORD *)v19 - 1);
        if ( v32 == *((_DWORD *)v19 - 2) )
        {
          v33 = (3 * v32 + 1) >> 1;
          v34 = 8 * v33 + 8;
          if ( 8 * v32 + 8 >= (unsigned int)v34 || v32 >= v33 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_DF63A0((__int64 *)v109, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v109);
            sub_233E40((__int64)v109);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v100) = (3 * v32 + 1) >> 1;
          v103 = (__m128i *)v31;
          v35 = sub_186B300(v19 - 1, v34);
          v19 = (_QWORD *)(v35 + 8);
          v31 = (__int64)v103;
          *(_DWORD *)v35 = v100;
          LODWORD(v35) = *(_DWORD *)(v35 + 4);
          v22 = &v19[(unsigned int)v35];
          v21 = v35 + 1;
        }
        else
        {
          v20 = v32;
          v21 = v32 + 1;
          v22 = &v19[v20];
        }
      }
      else
      {
        v103 = (__m128i *)v30;
        v56 = (_QWORD *)sub_186B270(0x18u);
        v19 = v56 + 1;
        *v56 = 2;
        v31 = (__int64)v103;
        v21 = 1;
        v22 = v19;
      }
      *v22 = v31;
      *((_DWORD *)v19 - 1) = v21;
      sub_DFBCB0(a1);
      v23 = sub_15DB5C0(
              *(_QWORD *)(a1 + 296),
              (unsigned int)v18,
              *(_QWORD *)(a4 + 8LL * (unsigned int)(v101.m128i_i32[0] - v18)));
      v24 = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      if ( *(_QWORD *)v104 )
      {
        v25 = *(_DWORD *)(*(_QWORD *)v104 - 4LL);
        if ( v25 == *(_DWORD *)(*(_QWORD *)v104 - 8LL) )
        {
          v36 = (3 * v25 + 1) >> 1;
          v37 = 8 * v36 + 8;
          if ( 8 * v25 + 8 >= (unsigned int)v37 || v25 >= v36 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_DF63A0((__int64 *)v109, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v109);
            sub_233E40((__int64)v109);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v103) = (3 * v25 + 1) >> 1;
          v38 = sub_186B300((void *)(*(_QWORD *)v104 - 8LL), v37);
          v39 = (_DWORD *)(v38 + 8);
          *(_QWORD *)v104 = v38 + 8;
          v27 = (_QWORD *)(v38 + 8);
          *(_DWORD *)v38 = (_DWORD)v103;
          LODWORD(v38) = *(_DWORD *)(v38 + 4);
          v29 = (__int64 *)&v39[2 * (unsigned int)v38];
          v28 = v38 + 1;
        }
        else
        {
          v26 = v25;
          v27 = *(_QWORD **)v104;
          v28 = v25 + 1;
          v29 = (__int64 *)(*(_QWORD *)v104 + 8 * v26);
        }
      }
      else
      {
        v55 = (_QWORD *)sub_186B270(0x18u);
        *v55 = 2;
        *(_QWORD *)v104 = v55 + 1;
        v29 = v55 + 1;
        v27 = v55 + 1;
        v28 = 1;
      }
      *v29 = v24;
      ++v18;
      *((_DWORD *)v27 - 1) = v28;
    }
    while ( v102.m128i_i64[0] != v18 );
  }
  else
  {
    *(_QWORD *)v104 = 0;
    v19 = nullptr;
  }
  v40 = sub_15D1F10(*(_QWORD *)v98);
  sub_16307A0((unsigned int)&v107, v96.m128i_i32[0], (_DWORD)v97, v99, a4, v40, 0);
  v42 = *(void **)(a1 + 800);
  if ( !v42 )
  {
    v73 = sub_186B270(0x228u);
    sub_DFBCB0(a1);
    sub_633760(v73, *(_QWORD *)(a1 + 296), 0, v73 + 536);
    v42 = *(void **)(a1 + 800);
    *(_BYTE *)(v73 + 544) = 1;
    *(_QWORD *)v73 = &off_1C4CA80;
    if ( (void *)v73 != v42 )
    {
      sub_E0F960(v42);
      *(_QWORD *)(a1 + 800) = v73;
      LODWORD(v42) = v73;
    }
  }
  if ( *(_QWORD *)v104 )
  {
    v43 = *(_DWORD *)(*(_QWORD *)v104 - 4LL);
    v44 = v104[0];
  }
  else
  {
    v43 = 0;
    v44 = 0;
  }
  sub_157BE40(
    (int)v109,
    (int)v42,
    v98[0],
    v43,
    v44,
    v41,
    v90,
    v91,
    v93,
    (int)v111,
    v96.m128i_i32[0],
    v96.m128i_i32[2],
    (__int64)v97,
    *(void **)v98);
  if ( v19 )
    v45 = *((_DWORD *)v19 - 1);
  else
    v45 = 0;
  sub_1631DC0(v96.m128i_i32[0], v95, (unsigned int)&v107, 1, v45, (_DWORD)v19, *(__int64 *)v109);
  sub_E073E0(a1, v97, *(_QWORD *)(v108 + 72));
  sub_DF6300(*(__int64 *)v109, v110);
  v46 = *(_QWORD **)v104;
  if ( *(_QWORD *)v104 )
  {
    v47 = *(__int64 **)v104;
    v48 = *(_QWORD **)v104;
    v49 = *(_QWORD *)v104 + 8LL * *(unsigned int *)(*(_QWORD *)v104 - 4LL);
    if ( *(_QWORD *)v104 < v49 )
    {
      do
      {
        while ( 1 )
        {
          v50 = *v47;
          if ( *v47 )
          {
            v51 = (*(_DWORD *)(v50 + 8))-- == 1;
            if ( v51 )
              break;
          }
          if ( (unsigned __int64)++v47 >= v49 )
            goto LABEL_37;
        }
        ++v47;
        sub_15D7BC0(v94, v50);
      }
      while ( (unsigned __int64)v47 < v49 );
LABEL_37:
      *(_QWORD *)v104 = v48;
      v46 = v48;
    }
    sub_186B220(v46 - 1);
  }
  if ( v19 )
  {
    v52 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
    if ( (unsigned __int64)v19 < v52 )
    {
      v53 = v19;
      do
      {
        while ( 1 )
        {
          v54 = *v53;
          if ( *v53 )
          {
            v51 = (*(_DWORD *)(v54 + 8))-- == 1;
            if ( v51 )
              break;
          }
          if ( (unsigned __int64)++v53 >= v52 )
            goto LABEL_46;
        }
        sub_15D7BC0(v92, v54);
        ++v53;
      }
      while ( (unsigned __int64)v53 < v52 );
    }
LABEL_46:
    sub_186B220(v19 - 1);
  }
  v111[0] = (unsigned __int64)&off_1C4CAA0;
  sub_268600((__int64)v112);
}

