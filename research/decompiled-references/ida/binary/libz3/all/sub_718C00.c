__int64 __fastcall sub_718C00(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  _QWORD *v5; // rbx
  _QWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rax
  _QWORD *v11; // r13
  unsigned int v12; // ebx
  _QWORD *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 i; // rax
  unsigned int v17; // r13d
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // r14
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rsi
  int v24; // eax
  _QWORD *v25; // rsi
  __int64 *v26; // rbx
  __int64 *v27; // r12
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 *v30; // rcx
  int v31; // edi
  unsigned int v32; // edx
  __int64 *v33; // rsi
  __int64 v34; // rdx
  __int64 *v35; // r8
  __int64 *j; // rax
  __int64 v37; // rdx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // r13d
  __int64 v42; // r12
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  _QWORD *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rbx
  __int64 v50; // rsi
  __int64 v51; // rax
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __m128i v55; // xmm0
  void *v56; // rsi
  void *v57; // rdi
  unsigned __int64 v58; // r12
  __int64 v59; // rsi
  __int64 v60; // rbx
  unsigned __int64 v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rbp
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rsi
  __int64 v67; // rbp
  __int64 v68; // rdx
  int v69; // eax
  unsigned int v70; // ecx
  unsigned int v71; // eax
  unsigned int v72; // edi
  void (***v73)(void); // rdi
  unsigned int v74; // ebp
  unsigned int v75; // ebx
  __int64 v77; // rax
  unsigned int v78; // r8d
  size_t v79; // rsi
  unsigned int *v80; // rax
  __int64 v81; // rsi
  unsigned int v82; // ebx
  unsigned int v83; // ecx
  unsigned int *v84; // rax
  __int64 v85; // rcx
  _QWORD *v86; // rax
  void *v87; // rsi
  __int64 v88; // rdi
  _DWORD *v89; // rbp
  _QWORD *v90; // r12
  __int64 v91; // rdi
  _QWORD *v92; // rdx
  __int64 v93; // rdi
  char **v94; // rbp
  __int64 v95; // rdx
  char **exception; // rbp
  __int64 v97; // rdx
  int v98; // [rsp+8h] [rbp-B0h]
  unsigned int v99; // [rsp+8h] [rbp-B0h]
  struct _Unwind_Exception *v100; // [rsp+8h] [rbp-B0h]
  struct _Unwind_Exception *v101; // [rsp+8h] [rbp-B0h]
  int v102[2]; // [rsp+10h] [rbp-A8h]
  __m128i *v103; // [rsp+18h] [rbp-A0h]
  int v104[2]; // [rsp+20h] [rbp-98h]
  unsigned int v105; // [rsp+20h] [rbp-98h]
  int v106[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v107[2]; // [rsp+40h] [rbp-78h] BYREF
  int v108[2]; // [rsp+50h] [rbp-68h] BYREF
  int v109[2]; // [rsp+58h] [rbp-60h]
  void *ptr[2]; // [rsp+60h] [rbp-58h] BYREF

  v3 = a1 + 64;
  v5 = (_QWORD *)a2[1];
  if ( (*(_BYTE *)(a1 + 400) & 1) == 0 )
    v3 = a1 + 104;
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *a2;
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_10;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_10:
    v5 = (_QWORD *)a2[1];
    if ( v5 )
LABEL_11:
      *((_DWORD *)v5 - 1) = 0;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v3 + 16) + 24LL))(*(_QWORD *)(v3 + 16), a2);
  v103 = (__m128i *)(a1 + 144);
  sub_714A10((__int64 *)(a1 + 144), a2, a1 + 184);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD **)(a1 + 432);
  v107[1] = 0;
  *(_QWORD *)v102 = v10;
  v107[0] = v10;
  *(_QWORD *)v104 = *(_QWORD *)(a1 + 408);
  v12 = *(_DWORD *)(a1 + 400) - 1;
  if ( v11 )
  {
    v13 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v13 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v14 = *v11;
        if ( *v11 )
        {
          v15 = *(_QWORD *)(a1 + 424);
          v9 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v11 >= v13 )
          goto LABEL_19;
      }
      sub_15D7BC0(v15, v14);
      ++v11;
    }
    while ( v11 < v13 );
LABEL_19:
    v11 = *(_QWORD **)(a1 + 432);
    if ( v11 )
LABEL_20:
      *((_DWORD *)v11 - 1) = 0;
  }
  for ( i = *(_QWORD *)(a1 + 392); i; ++v12 )
  {
    if ( v12 >= *(_DWORD *)(i - 4) )
      break;
    v17 = 0;
    v18 = i + 16LL * v12;
    v19 = *(_QWORD *)(v18 + 8);
    if ( v19 )
    {
      do
      {
        if ( v17 >= *(_DWORD *)(v19 - 4) )
          break;
        v20 = *(_QWORD *)(v19 + 8LL * v17);
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        v21 = *(_QWORD **)(a1 + 432);
        if ( v21 )
        {
          v22 = *((_DWORD *)v21 - 1);
          if ( v22 == *((_DWORD *)v21 - 2) )
          {
            v78 = (3 * v22 + 1) >> 1;
            v79 = 8 * v78 + 8;
            if ( 8 * v22 + 8 >= (unsigned int)v79 || v22 >= v78 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38((__int64 *)ptr, "Overflow encountered when expanding vector", v97);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, ptr);
              sub_233E40((__int64)ptr);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v99 = (3 * v22 + 1) >> 1;
            v80 = (unsigned int *)sub_186B300(v21 - 1, v79);
            v81 = v80[1];
            v21 = v80 + 2;
            *(_QWORD *)(a1 + 432) = v80 + 2;
            v19 = *(_QWORD *)(v18 + 8);
            *v80 = v99;
            LODWORD(v80) = v81;
            v25 = &v21[v81];
            v24 = (_DWORD)v80 + 1;
          }
          else
          {
            v23 = v22;
            v24 = v22 + 1;
            v25 = &v21[v23];
          }
        }
        else
        {
          v86 = (_QWORD *)sub_186B270(0x18u);
          v21 = v86 + 1;
          *(_QWORD *)(a1 + 432) = v86 + 1;
          v25 = v86 + 1;
          *v86 = 2;
          v19 = *(_QWORD *)(v18 + 8);
          v24 = 1;
        }
        *v25 = v20;
        ++v17;
        *((_DWORD *)v21 - 1) = v24;
      }
      while ( v19 );
      i = *(_QWORD *)(a1 + 392);
    }
  }
  v9 = *(_DWORD *)(a1 + 416) == 1;
  *(_BYTE *)(*(_QWORD *)v104 + 137LL) = 1;
  sub_6F0E90(a1 + 56, !v9, a1 + 424, *(_QWORD *)v104, a2, 0);
  v26 = *(__int64 **)(a1 + 432);
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 == v27 )
      goto LABEL_47;
    do
    {
      v28 = *v26;
      v29 = *(unsigned int *)(a1 + 320);
      v30 = *(__int64 **)(a1 + 312);
      v31 = *(_DWORD *)(*v26 + 12);
      v32 = v29 - 1;
      v29 *= 16;
      v33 = (__int64 *)((char *)v30 + v29);
      v34 = 16LL * (v31 & v32);
      v35 = &v30[(unsigned __int64)v34 / 8];
      if ( v34 != v29 )
      {
        for ( j = &v30[(unsigned __int64)v34 / 8]; v33 != j; j += 2 )
        {
          v37 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v37 + 12) == v31 && v28 == v37 )
              goto LABEL_45;
          }
          else if ( !v37 )
          {
            goto LABEL_42;
          }
        }
      }
      for ( ; v35 != v30; v30 += 2 )
      {
        v77 = *v30;
        if ( (unsigned __int64)*v30 > 1 )
        {
          if ( *(_DWORD *)(v77 + 12) == v31 && v28 == v77 )
            goto LABEL_45;
        }
        else if ( !v77 )
        {
          break;
        }
      }
LABEL_42:
      v38 = *(_DWORD *)(a1 + 400);
      v39 = -1;
      v40 = v38 - 1;
      if ( (v38 & 1) != 0 )
      {
        v39 = v38 - 1;
        v40 = -1;
      }
      ptr[0] = (void *)*v26;
      ptr[1] = (void *)__PAIR64__(v40, v39);
      sub_7183C0(a1 + 312, (const __m128i *)ptr);
LABEL_45:
      ++v26;
    }
    while ( v27 != v26 );
    v27 = *(__int64 **)(a1 + 432);
    v26 = v27;
    if ( v27 )
    {
LABEL_47:
      v41 = 0;
      do
      {
        if ( v41 >= *((_DWORD *)v27 - 1) )
          break;
        v42 = v27[v41];
        if ( v42 )
          ++*(_DWORD *)(v42 + 8);
        v43 = *(_QWORD **)(a1 + 448);
        if ( v43 )
        {
          v44 = *((_DWORD *)v43 - 1);
          if ( v44 == *((_DWORD *)v43 - 2) )
          {
            v82 = (3 * v44 + 1) >> 1;
            v83 = 8 * v82 + 8;
            if ( 8 * v44 + 8 >= v83 || v44 >= v82 )
            {
              v94 = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38((__int64 *)ptr, "Overflow encountered when expanding vector", v95);
              *v94 = (char *)off_1C63128;
              sub_2333C0(v94 + 1, ptr);
              sub_233E40((__int64)ptr);
              __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v84 = (unsigned int *)sub_186B300(v43 - 1, v83);
            v85 = v84[1];
            v43 = v84 + 2;
            *v84 = v82;
            *(_QWORD *)(a1 + 448) = v84 + 2;
            v26 = *(__int64 **)(a1 + 432);
            LODWORD(v84) = v85;
            v47 = &v43[v85];
            v46 = (_DWORD)v84 + 1;
          }
          else
          {
            v45 = v44;
            v46 = v44 + 1;
            v47 = &v43[v45];
          }
        }
        else
        {
          v92 = (_QWORD *)sub_186B270(0x18u);
          *v92 = 2;
          v26 = *(__int64 **)(a1 + 432);
          v46 = 1;
          v43 = v92 + 1;
          *(_QWORD *)(a1 + 448) = v43;
          v47 = v43;
        }
        *v47 = v42;
        ++v41;
        v27 = v26;
        *((_DWORD *)v43 - 1) = v46;
      }
      while ( v26 );
    }
  }
  v48 = a2[1];
  v49 = *a2;
  if ( v48 )
    v50 = *(unsigned int *)(v48 - 4);
  else
    v50 = 0;
  v51 = sub_15EC1C0(*a2, v50);
  v55 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v51, (__m128i)(unsigned __int64)v49);
  *(__m128i *)ptr = v55;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  sub_15ECFD0((unsigned int)v108, (unsigned int)ptr, 8, v52, v53, v54);
  v56 = ptr[0];
  if ( ptr[0] )
  {
    v57 = ptr[1];
    v9 = (*((_DWORD *)ptr[0] + 2))-- == 1;
    if ( v9 )
      sub_15D7BC0(v57, v56);
  }
  v58 = *(_QWORD *)v108;
  *(_QWORD *)v106 = -1;
  v59 = *(_QWORD *)v108;
  *(_QWORD *)v108 = *(_QWORD *)v102;
  *(_QWORD *)v109 = 0;
  sub_715950(v103, v59, (unsigned int *)v106, (__int64)v108);
  v60 = *(_QWORD *)v109;
  v61 = *(_QWORD *)v108;
  v105 = v106[1];
  v98 = v106[0];
  if ( *(_QWORD *)v109 )
    v62 = *(unsigned int *)(*(_QWORD *)v109 - 4LL);
  else
    v62 = 0;
  v63 = sub_15EC1C0(*(_QWORD *)v108, v62);
  v64 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL);
  if ( v63 )
  {
    v65 = *(_DWORD *)(v63 + 8);
    *(_DWORD *)(v63 + 8) = v65 + 1;
    if ( v63 != v64 )
    {
      sub_E5EBF0(*(_QWORD *)(a1 + 120), v63);
      v65 = *(_DWORD *)(v63 + 8) - 1;
    }
    *(_DWORD *)(v63 + 8) = v65;
    if ( !v65 )
    {
      sub_15D7BC0(v61, v63);
      if ( v60 )
        goto LABEL_69;
      goto LABEL_106;
    }
  }
  else if ( v64 )
  {
    sub_E5EBF0(*(_QWORD *)(a1 + 120), 0);
  }
  if ( v60 )
  {
LABEL_69:
    v66 = *(unsigned int *)(v60 - 4);
    goto LABEL_70;
  }
LABEL_106:
  v66 = 0;
LABEL_70:
  v67 = sub_15EC1C0(v61, v66);
  v68 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 856LL);
  if ( v67 )
  {
    v69 = *(_DWORD *)(v67 + 8);
    *(_DWORD *)(v67 + 8) = v69 + 1;
    if ( v67 != v68 )
    {
      sub_E5EBF0(*(_QWORD *)(a1 + 80), v67);
      v69 = *(_DWORD *)(v67 + 8) - 1;
    }
    *(_DWORD *)(v67 + 8) = v69;
    if ( !v69 )
    {
      sub_15D7BC0(v61, v67);
      v70 = v98;
      v71 = *(_DWORD *)(a1 + 400);
      if ( v98 != -1 )
        goto LABEL_75;
LABEL_108:
      if ( v105 == -1 )
        goto LABEL_80;
      if ( v71 < v105 + 2 )
        goto LABEL_112;
      v98 = v105;
      goto LABEL_79;
    }
  }
  else if ( v68 )
  {
    sub_E5EBF0(*(_QWORD *)(a1 + 80), 0);
  }
  v70 = v98;
  v71 = *(_DWORD *)(a1 + 400);
  if ( v98 == -1 )
    goto LABEL_108;
LABEL_75:
  v72 = v105;
  if ( v105 != -1 )
  {
    if ( v70 >= v105 )
      v72 = v70;
    v98 = v72;
    if ( v71 >= v72 + 2 )
      goto LABEL_79;
LABEL_112:
    v75 = 0;
    goto LABEL_86;
  }
  if ( v71 < v70 + 2 )
    goto LABEL_112;
LABEL_79:
  v71 -= v98;
LABEL_80:
  v73 = *(void (****)(void))(a1 + 408);
  v74 = v71 & 0xFFFFFFFE;
  if ( v73 )
  {
    v9 = (*((_DWORD *)v73 + 4))-- == 1;
    if ( v9 )
    {
      (**v73)();
      sub_186B220(v73);
    }
  }
  *(_QWORD *)(a1 + 408) = 0;
  sub_712900(v103, v74);
  v9 = *(_DWORD *)(a1 + 400) == v74;
  *(_DWORD *)(a1 + 400) -= v74;
  if ( !v9 || *(_DWORD *)(a1 + 416) == 2 )
  {
    sub_714210((__m128i *)ptr, v103, v58);
    v87 = ptr[1];
    v88 = v58;
    v89 = ptr[0];
    v90 = (_QWORD *)(a1 + 64);
    sub_710AA0(v88, (__int64)ptr[1]);
    if ( (*(_BYTE *)(a1 + 400) & 1) == 0 )
      v90 = (_QWORD *)(a1 + 104);
    if ( v89 == *(_DWORD **)(*v90 + 856LL) )
      goto LABEL_121;
    v91 = v90[3];
    if ( v89 == (_DWORD *)v91 && v91 )
    {
      if ( v89 != *(_DWORD **)(*v90 + 864LL) )
      {
        sub_180B130(v91);
        if ( (unsigned __int8)sub_186A530(*(double *)v55.m128i_i64) )
        {
          sub_186A4C0(*(double *)v55.m128i_i64);
          v100 = (struct _Unwind_Exception *)sub_180B150(v91, v87);
          std::__ostream_insert<char,std::char_traits<char>>();
          v93 = sub_160EBE0(v100, v90 + 3);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v93, "\n");
        }
        else
        {
          v101 = (struct _Unwind_Exception *)sub_180B150(v91, v87);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_160EBE0(v101, v90 + 3);
          std::operator<<<std::char_traits<char>>();
        }
        sub_1872CE0("");
        sub_1873130(114, 579);
      }
    }
    else if ( !v89 )
    {
LABEL_120:
      sub_710AA0(v91, v90[4]);
      v90[3] = v89;
      sub_E5EBF0(v90[2], v89);
LABEL_121:
      v58 = (unsigned __int64)v89;
      v75 = 1;
      goto LABEL_86;
    }
    ++v89[2];
    goto LABEL_120;
  }
  sub_7186C0(a1, v58);
  v75 = 1;
LABEL_86:
  sub_2334C0(v107);
  sub_2334C0((__int64 *)v108);
  if ( v58 )
  {
    v9 = (*(_DWORD *)(v58 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(*(_QWORD *)v102, v58);
  }
  return v75;
}

