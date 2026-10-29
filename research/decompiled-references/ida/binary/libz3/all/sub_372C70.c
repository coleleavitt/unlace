__int64 __fastcall sub_372C70(__int64 a1, const __m128i **a2)
{
  const __m128i *v3; // r14
  __int64 v4; // rax
  __m128i *i; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int32 v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __m128i *v12; // rdx
  __int64 *v13; // rdi
  bool v14; // zf
  __int64 v15; // rdi
  __int64 v16; // rbx
  __m128i v17; // xmm0
  __int64 v18; // r13
  unsigned int v19; // r8d
  size_t v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // r15
  _DWORD *v23; // r9
  unsigned int v24; // r8d
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 *v27; // rdi
  __int64 *j; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v32; // rdx
  __int64 *v33; // rax
  __m128i *v34; // r15
  __int64 *v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  const __m128i *v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  _QWORD *v45; // rax
  __int64 v46; // rdi
  __int64 result; // rax
  const __m128i *v48; // r14
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdi
  __int32 v52; // eax
  __m128i *v53; // rsi
  unsigned int v54; // eax
  __int64 v55; // rdx
  __m128i *v56; // rdx
  __int64 *v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rbx
  __m128i v60; // xmm0
  __int64 v61; // r13
  unsigned int v62; // r8d
  size_t v63; // rdi
  __int64 v64; // rax
  const __m128i *v65; // r15
  _DWORD *v66; // r9
  unsigned int v67; // r8d
  __int64 v68; // r10
  __int64 v69; // rdx
  const __m128i *v70; // rdi
  const __m128i *k; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 *v75; // rbx
  __int64 *v76; // rdx
  __m128i *v77; // r15
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rdi
  const __m128i *v82; // rbx
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // rdi
  _QWORD *v87; // rax
  void *v88; // rbx
  __int64 v89; // rax
  void (__fastcall ***v90)(_QWORD); // r13
  __int64 v91; // r14
  char **exception; // r14
  __int64 v93; // rdx
  char **v94; // r14
  __int64 v95; // rdx
  __int64 *v97; // [rsp+10h] [rbp-A0h]
  __int64 *v98; // [rsp+10h] [rbp-A0h]
  _DWORD *v99; // [rsp+18h] [rbp-98h]
  _DWORD *v100; // [rsp+18h] [rbp-98h]
  _DWORD *v101; // [rsp+18h] [rbp-98h]
  _DWORD *v102; // [rsp+18h] [rbp-98h]
  unsigned int v103; // [rsp+24h] [rbp-8Ch]
  unsigned int v104; // [rsp+24h] [rbp-8Ch]
  unsigned int v105; // [rsp+24h] [rbp-8Ch]
  unsigned int v106; // [rsp+24h] [rbp-8Ch]
  unsigned int v107; // [rsp+28h] [rbp-88h]
  __int64 v108; // [rsp+28h] [rbp-88h]
  unsigned int v109; // [rsp+28h] [rbp-88h]
  __int64 v110; // [rsp+28h] [rbp-88h]
  const __m128i *v111; // [rsp+30h] [rbp-80h]
  const __m128i *v112; // [rsp+30h] [rbp-80h]
  __m128i v113; // [rsp+38h] [rbp-78h] BYREF
  __int64 *v114; // [rsp+48h] [rbp-68h]
  const __m128i *v115; // [rsp+58h] [rbp-58h] BYREF
  __int64 v116[10]; // [rsp+60h] [rbp-50h] BYREF

  if ( !*(_QWORD *)(a1 + 24) )
  {
    sub_1862370(a1 + 16, "smt.max_conflicts", 100);
    v88 = (void *)sub_AFF8B0();
    v89 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, _QWORD, _QWORD, __int64, const int *))(*(_QWORD *)v88 + 16LL))(
            v88,
            *(_QWORD *)(a1 + 8),
            a1 + 16,
            0,
            0,
            1,
            &qword_18D6CD0);
    v90 = *(void (__fastcall ****)(_QWORD))(a1 + 24);
    v91 = v89;
    if ( (void (__fastcall ***)(_QWORD))v89 != v90 )
    {
      if ( v90 )
      {
        (**v90)(*(_QWORD *)(a1 + 24));
        sub_186B220(v90);
      }
      *(_QWORD *)(a1 + 24) = v91;
    }
    (**(void (__fastcall ***)(void *))v88)(v88);
    sub_186B220(v88);
  }
  v3 = *a2;
  v115 = nullptr;
  if ( !v3 )
    goto LABEL_54;
  v4 = v3[-1].m128i_u32[3];
  v111 = (const __m128i *)((char *)v3 + 40 * v4);
  if ( v111 == v3 )
    goto LABEL_40;
  for ( i = nullptr; ; i = (__m128i *)v115 )
  {
    v15 = v3[1].m128i_i64[1];
    v16 = v3->m128i_i64[1];
    v17 = _mm_loadl_epi64(v3);
    v113.m128i_i64[1] = v3[1].m128i_i64[0];
    v18 = v3[2].m128i_i64[0];
    v114 = (__int64 *)v15;
    if ( v16 )
    {
      v6 = *(_DWORD *)(v16 + 8);
      *(_DWORD *)(v16 + 8) = v6 + 1;
      if ( v15 )
      {
        ++*(_DWORD *)(v15 + 8);
        v7 = v15;
        ++*(_DWORD *)(v16 + 8);
        v8 = *(_DWORD *)(v15 + 8);
        goto LABEL_7;
      }
      *(_DWORD *)(v16 + 8) = v6 + 2;
    }
    else if ( v114 )
    {
      v7 = v15;
      v113.m128i_i32[0] = *(_DWORD *)(v15 + 8);
      v8 = v113.m128i_i32[0] + 1;
LABEL_7:
      *(_DWORD *)(v7 + 8) = v8 + 1;
      if ( !i )
        goto LABEL_51;
      goto LABEL_8;
    }
    v114 = nullptr;
    if ( !i )
    {
LABEL_51:
      v113.m128i_i64[0] = v17.m128i_i64[0];
      v45 = (_QWORD *)sub_186B270(0x58u);
      i = (__m128i *)(v45 + 1);
      *v45 = 2;
      v17 = _mm_loadl_epi64(&v113);
      v11 = 1;
      v115 = i;
      v12 = i;
      goto LABEL_10;
    }
LABEL_8:
    v9 = i[-1].m128i_u32[3];
    if ( v9 == i[-1].m128i_i32[2] )
    {
      v19 = (3 * v9 + 1) >> 1;
      v20 = 40 * v19 + 8;
      if ( 40 * v9 + 8 >= (unsigned int)v20 || v9 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C281C(v116, "Overflow encountered when expanding vector", v93);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v116);
        sub_233E40((__int64)v116);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v107 = (3 * v9 + 1) >> 1;
      v113.m128i_i64[0] = v17.m128i_i64[0];
      v21 = sub_186B270(v20);
      v22 = (__int64 *)v115;
      v17 = _mm_loadl_epi64(&v113);
      v23 = (_DWORD *)v21;
      i = (__m128i *)(v21 + 8);
      v24 = v107;
      if ( v115 )
      {
        v25 = v115[-1].m128i_u32[3];
        v26 = v21 + 8;
        *(_DWORD *)(v21 + 4) = v25;
        v27 = &v22[5 * v25];
        for ( j = v22; v27 != j; *(_QWORD *)(v26 - 16) = v31 )
        {
          v29 = *j;
          j += 5;
          v26 += 40;
          *(_QWORD *)(v26 - 40) = v29;
          *(_QWORD *)(v26 - 24) = *(j - 3);
          v30 = *(j - 4);
          *(j - 4) = 0;
          *(_QWORD *)(v26 - 32) = v30;
          *(_QWORD *)(v26 - 8) = *(j - 1);
          v31 = *(j - 2);
          *(j - 2) = 0;
        }
        if ( (_DWORD)v25 )
        {
          v108 = v16;
          v32 = &v22[5 * v25];
          v33 = v114;
          v114 = v22;
          v34 = i;
          v103 = v24;
          v35 = v32;
          v99 = v23;
          v97 = v33;
          v113.m128i_i64[0] = v17.m128i_i64[0];
          do
          {
            while ( 1 )
            {
              v38 = v114[3];
              if ( v38 )
              {
                v39 = v114[4];
                v14 = (*(_DWORD *)(v38 + 8))-- == 1;
                if ( v14 )
                  sub_15D7BC0(v39, v38);
              }
              v36 = v114[1];
              if ( v36 )
              {
                v37 = v114[2];
                v14 = (*(_DWORD *)(v36 + 8))-- == 1;
                if ( v14 )
                  break;
              }
              v114 += 5;
              if ( v35 == v114 )
                goto LABEL_34;
            }
            sub_15D7BC0(v37, v36);
            v114 += 5;
          }
          while ( v35 != v114 );
LABEL_34:
          i = v34;
          v17.m128i_i64[0] = v113.m128i_i64[0];
          v16 = v108;
          v24 = v103;
          v23 = v99;
          v22 = (__int64 *)v115;
          v114 = v97;
        }
        v100 = v23;
        v104 = v24;
        v113.m128i_i64[0] = v17.m128i_i64[0];
        sub_186B220(v22 - 1);
        v23 = v100;
        v24 = v104;
        v17 = _mm_loadl_epi64(&v113);
        v12 = (__m128i *)((char *)i + 40 * (unsigned int)v100[1]);
        v11 = v100[1] + 1;
      }
      else
      {
        *(_DWORD *)(v21 + 4) = 0;
        v12 = (__m128i *)(v21 + 8);
        v11 = 1;
      }
      v115 = i;
      *v23 = v24;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = (__m128i *)((char *)i + 40 * v10);
    }
LABEL_10:
    v13 = v114;
    v12[2].m128i_i64[0] = v18;
    *v12 = _mm_unpacklo_epi64(v17, (__m128i)(unsigned __int64)v16);
    v12[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v113.m128i_u64[1]), (__m128i)(unsigned __int64)v13);
    i[-1].m128i_i32[3] = v11;
    if ( v13 )
    {
      v113.m128i_i32[0] = *((_DWORD *)v13 + 2);
      v14 = v113.m128i_i32[0] == 1;
      *((_DWORD *)v13 + 2) = v113.m128i_i32[0] - 1;
      if ( v14 )
        sub_15D7BC0(v18, v13);
    }
    if ( v16 )
    {
      v14 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v14 )
        break;
    }
    v3 = (const __m128i *)((char *)v3 + 40);
    if ( v111 == v3 )
      goto LABEL_38;
LABEL_16:
    ;
  }
  v3 = (const __m128i *)((char *)v3 + 40);
  sub_15D7BC0(v113.m128i_i64[1], v16);
  if ( v111 != v3 )
    goto LABEL_16;
LABEL_38:
  v3 = *a2;
  if ( *a2 )
  {
    v4 = v3[-1].m128i_u32[3];
LABEL_40:
    if ( (_DWORD)v4 )
    {
      v40 = (const __m128i *)((char *)v3 + 40 * v4);
      do
      {
        v43 = v3[1].m128i_i64[1];
        if ( v43 )
        {
          v44 = v3[2].m128i_i64[0];
          v14 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v44, v43);
        }
        v41 = v3->m128i_i64[1];
        if ( v41 )
        {
          v42 = v3[1].m128i_i64[0];
          v14 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v42, v41);
        }
        v3 = (const __m128i *)((char *)v3 + 40);
      }
      while ( v40 != v3 );
      v3 = *a2;
    }
    v3[-1].m128i_i32[3] = 0;
  }
LABEL_54:
  v46 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD *)(*(_QWORD *)v46 + 320LL);
  if ( (void (*)())result != nullsub_124 )
    result = ((__int64 (__fastcall *)(__int64, const __m128i **))result)(v46, &v115);
  v48 = v115;
  if ( !v115 )
    return result;
  v49 = v115[-1].m128i_u32[3];
  v112 = (const __m128i *)((char *)v115 + 40 * v49);
  if ( v112 == v115 )
  {
LABEL_93:
    if ( (_DWORD)v49 )
    {
      v82 = (const __m128i *)((char *)v48 + 40 * v49);
      do
      {
        v85 = v48[1].m128i_i64[1];
        if ( v85 )
        {
          v86 = v48[2].m128i_i64[0];
          v14 = (*(_DWORD *)(v85 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v86, v85);
        }
        v83 = v48->m128i_i64[1];
        if ( v83 )
        {
          v84 = v48[1].m128i_i64[0];
          v14 = (*(_DWORD *)(v83 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v84, v83);
        }
        v48 = (const __m128i *)((char *)v48 + 40);
      }
      while ( v48 != v82 );
      v48 = v115;
    }
    return sub_186B220(&v48[-1].m128i_u64[1]);
  }
  while ( 2 )
  {
    while ( 2 )
    {
      v58 = v48[1].m128i_i64[1];
      v59 = v48->m128i_i64[1];
      v60 = _mm_loadl_epi64(v48);
      v113.m128i_i64[1] = v48[1].m128i_i64[0];
      v61 = v48[2].m128i_i64[0];
      v114 = (__int64 *)v58;
      if ( v59 )
      {
        v50 = *(_DWORD *)(v59 + 8);
        *(_DWORD *)(v59 + 8) = v50 + 1;
        if ( v58 )
        {
          ++*(_DWORD *)(v58 + 8);
          v51 = v58;
          ++*(_DWORD *)(v59 + 8);
          v52 = *(_DWORD *)(v58 + 8);
          goto LABEL_61;
        }
        *(_DWORD *)(v59 + 8) = v50 + 2;
LABEL_103:
        v53 = (__m128i *)*a2;
        v114 = nullptr;
        if ( v53 )
          goto LABEL_62;
        goto LABEL_104;
      }
      if ( !v114 )
        goto LABEL_103;
      v51 = v58;
      v113.m128i_i32[0] = *(_DWORD *)(v58 + 8);
      v52 = v113.m128i_i32[0] + 1;
LABEL_61:
      v53 = (__m128i *)*a2;
      *(_DWORD *)(v51 + 8) = v52 + 1;
      if ( !v53 )
      {
LABEL_104:
        v113.m128i_i64[0] = v60.m128i_i64[0];
        v87 = (_QWORD *)sub_186B270(0x58u);
        v53 = (__m128i *)(v87 + 1);
        *v87 = 2;
        v60 = _mm_loadl_epi64(&v113);
        result = 1;
        *a2 = v53;
        v56 = v53;
        goto LABEL_64;
      }
LABEL_62:
      v54 = v53[-1].m128i_u32[3];
      if ( v54 == v53[-1].m128i_i32[2] )
      {
        v62 = (3 * v54 + 1) >> 1;
        v63 = 40 * v62 + 8;
        if ( 40 * v54 + 8 >= (unsigned int)v63 || v54 >= v62 )
        {
          v94 = (char **)__cxa_allocate_exception(0x28u);
          sub_C281C(v116, "Overflow encountered when expanding vector", v95);
          *v94 = (char *)off_1C63128;
          sub_2333C0(v94 + 1, v116);
          sub_233E40((__int64)v116);
          __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v109 = (3 * v54 + 1) >> 1;
        v113.m128i_i64[0] = v60.m128i_i64[0];
        v64 = sub_186B270(v63);
        v65 = *a2;
        v60 = _mm_loadl_epi64(&v113);
        v66 = (_DWORD *)v64;
        v53 = (__m128i *)(v64 + 8);
        v67 = v109;
        if ( *a2 )
        {
          v68 = v65[-1].m128i_u32[3];
          v69 = v64 + 8;
          *(_DWORD *)(v64 + 4) = v68;
          v70 = (const __m128i *)((char *)v65 + 40 * v68);
          for ( k = v65; v70 != k; *(_QWORD *)(v69 - 16) = v74 )
          {
            v72 = k->m128i_i64[0];
            k = (const __m128i *)((char *)k + 40);
            v69 += 40;
            *(_QWORD *)(v69 - 40) = v72;
            *(_QWORD *)(v69 - 24) = k[-2].m128i_i64[1];
            v73 = k[-2].m128i_i64[0];
            k[-2].m128i_i64[0] = 0;
            *(_QWORD *)(v69 - 32) = v73;
            *(_QWORD *)(v69 - 8) = k[-1].m128i_i64[1];
            v74 = k[-1].m128i_i64[0];
            k[-1].m128i_i64[0] = 0;
          }
          if ( (_DWORD)v68 )
          {
            v110 = v59;
            v75 = (__int64 *)v65;
            v76 = &v65->m128i_i64[5 * v68];
            v77 = v53;
            v105 = v67;
            v101 = v66;
            v98 = v114;
            v114 = v76;
            v113.m128i_i64[0] = v60.m128i_i64[0];
            do
            {
              while ( 1 )
              {
                v80 = v75[3];
                if ( v80 )
                {
                  v81 = v75[4];
                  v14 = (*(_DWORD *)(v80 + 8))-- == 1;
                  if ( v14 )
                    sub_15D7BC0(v81, v80);
                }
                v78 = v75[1];
                if ( v78 )
                {
                  v79 = v75[2];
                  v14 = (*(_DWORD *)(v78 + 8))-- == 1;
                  if ( v14 )
                    break;
                }
                v75 += 5;
                if ( v114 == v75 )
                  goto LABEL_87;
              }
              sub_15D7BC0(v79, v78);
              v75 += 5;
            }
            while ( v114 != v75 );
LABEL_87:
            v53 = v77;
            v60.m128i_i64[0] = v113.m128i_i64[0];
            v59 = v110;
            v67 = v105;
            v66 = v101;
            v65 = *a2;
            v114 = v98;
          }
          v102 = v66;
          v106 = v67;
          v113.m128i_i64[0] = v60.m128i_i64[0];
          sub_186B220(&v65[-1].m128i_u64[1]);
          v66 = v102;
          v67 = v106;
          v60 = _mm_loadl_epi64(&v113);
          v56 = (__m128i *)((char *)v53 + 40 * (unsigned int)v102[1]);
          result = (unsigned int)(v102[1] + 1);
        }
        else
        {
          *(_DWORD *)(v64 + 4) = 0;
          v56 = (__m128i *)(v64 + 8);
          result = 1;
        }
        *a2 = v53;
        *v66 = v67;
      }
      else
      {
        v55 = v54;
        result = v54 + 1;
        v56 = (__m128i *)((char *)v53 + 40 * v55);
      }
LABEL_64:
      v57 = v114;
      v56[2].m128i_i64[0] = v61;
      *v56 = _mm_unpacklo_epi64(v60, (__m128i)(unsigned __int64)v59);
      v56[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v113.m128i_u64[1]), (__m128i)(unsigned __int64)v57);
      v53[-1].m128i_i32[3] = result;
      if ( v57 )
      {
        v113.m128i_i32[0] = *((_DWORD *)v57 + 2);
        v14 = v113.m128i_i32[0] == 1;
        result = (unsigned int)(v113.m128i_i32[0] - 1);
        *((_DWORD *)v57 + 2) = result;
        if ( v14 )
          result = sub_15D7BC0(v61, v57);
      }
      if ( !v59 || (v14 = *(_DWORD *)(v59 + 8) == 1, --*(_DWORD *)(v59 + 8), !v14) )
      {
        v48 = (const __m128i *)((char *)v48 + 40);
        if ( v112 == v48 )
          goto LABEL_91;
        continue;
      }
      break;
    }
    v48 = (const __m128i *)((char *)v48 + 40);
    result = sub_15D7BC0(v113.m128i_i64[1], v59);
    if ( v112 != v48 )
      continue;
    break;
  }
LABEL_91:
  v48 = v115;
  if ( v115 )
  {
    v49 = v115[-1].m128i_u32[3];
    goto LABEL_93;
  }
  return result;
}

