void __fastcall sub_7A8D90(__int64 a1, unsigned int a2, __int64 a3, int a4, _DWORD *a5)
{
  char **v5; // rbx
  char **v6; // r12
  char **v7; // rbx
  char **exception; // rbx
  bool v11; // zf
  _QWORD *v12; // rax
  __int64 v13; // r15
  unsigned int v14; // r13d
  __int64 v15; // r12
  unsigned int v16; // ebp
  unsigned int v17; // ebx
  size_t v18; // rsi
  unsigned int *v19; // rdx
  unsigned int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rdx
  int *v23; // r15
  int v24; // ebp
  int v25; // eax
  __int64 v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rbp
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 *v33; // rcx
  unsigned int *v34; // rbp
  unsigned int *v35; // r12
  _QWORD *v36; // rax
  unsigned int *v37; // rax
  unsigned int *v38; // rbx
  unsigned int v39; // edx
  int v40; // ecx
  __int64 v41; // rax
  unsigned int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r13
  _QWORD *v46; // rbp
  unsigned int v47; // r12d
  _QWORD *v48; // rax
  size_t v49; // rdx
  __int64 v50; // rdi
  _DWORD *v51; // rax
  _DWORD *v52; // rsi
  __int64 v53; // rax
  unsigned int v54; // r13d
  size_t v55; // rsi
  unsigned int *v56; // rax
  unsigned __int64 v57; // rbp
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // r12d
  size_t v61; // rdi
  unsigned int *v62; // rax
  __int64 *v63; // r13
  unsigned int *v64; // r15
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 *v67; // r10
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rsi
  __m128i v71; // xmm0
  unsigned __int64 v72; // rsi
  __int64 v73; // r10
  __int64 *v74; // r12
  void *v75; // rdi
  _QWORD *v76; // rax
  __int64 *v77; // rax
  unsigned __int64 v78; // rsi
  __int64 v79; // rdx
  unsigned int v80; // r12d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  _QWORD *v87; // r13
  _QWORD *v88; // r12
  void *v89; // rdi
  _QWORD *v90; // rdx
  _DWORD *v91; // [rsp+0h] [rbp-A8h]
  unsigned int v92; // [rsp+0h] [rbp-A8h]
  unsigned int v94; // [rsp+8h] [rbp-A0h]
  unsigned int v95; // [rsp+Ch] [rbp-9Ch]
  unsigned int v98; // [rsp+1Ch] [rbp-8Ch]
  __int64 v99; // [rsp+30h] [rbp-78h] BYREF
  __int64 v100; // [rsp+38h] [rbp-70h] BYREF
  __int64 v101; // [rsp+40h] [rbp-68h] BYREF
  __int64 v102; // [rsp+48h] [rbp-60h] BYREF
  __int64 v103[11]; // [rsp+50h] [rbp-58h] BYREF

  if ( !*(_QWORD *)(a1 + 272) )
    return;
  if ( *(_DWORD *)(a1 + 104) )
  {
    do
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
      v11 = (*(_DWORD *)(a1 + 104))-- == 1;
    }
    while ( !v11 );
  }
  v12 = *(_QWORD **)(a1 + 512);
  v13 = a2 >> 5;
  if ( !v12 )
  {
    v15 = a1 + 512;
    v16 = v13 + 1;
    v14 = 0;
    v76 = (_QWORD *)sub_186B270(0x10u);
    v91 = a5;
    *v76 = 2;
    v12 = v76 + 1;
    *(_QWORD *)(a1 + 512) = v12;
    goto LABEL_10;
  }
  v14 = *((_DWORD *)v12 - 1);
  if ( (unsigned int)v13 >= v14 )
  {
    v91 = a5;
    v15 = a1 + 512;
    v16 = v13 + 1;
LABEL_10:
    while ( 1 )
    {
      v20 = *((_DWORD *)v12 - 2);
      if ( v20 >= v16 )
        break;
      v17 = (3 * v20 + 1) >> 1;
      v18 = 4 * v17 + 8;
      if ( 4 * v20 + 8 >= (unsigned int)v18 || v20 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v103, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v103);
        sub_233E40((__int64)v103);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v12 - 1, v18);
      v12 = v19 + 2;
      *(_QWORD *)(a1 + 512) = v19 + 2;
      *v19 = v17;
    }
    *((_DWORD *)v12 - 1) = v16;
    v21 = 4LL * v14;
    v22 = 4LL * v16;
    a5 = v91;
    v23 = (int *)v12 + v13;
    v24 = 1 << a2;
    if ( v21 != v22 )
      memset((char *)v12 + v21, 0, v22 - v21);
    v25 = *v23;
    goto LABEL_14;
  }
  v23 = (int *)v12 + v13;
  v15 = a1 + 512;
  v25 = *v23;
  v24 = 1 << a2;
  if ( (*v23 & (1 << a2)) != 0 )
    return;
LABEL_14:
  *v23 = v25 | v24;
  v26 = *(_QWORD *)(a1 + 80);
  v27 = sub_180C100(v26 + 2144, 24);
  v28 = *(_QWORD **)(v26 + 2128);
  v29 = v27;
  *(_QWORD *)v27 = off_1C548B8;
  *(_QWORD *)(v27 + 8) = v15;
  *(_DWORD *)(v27 + 16) = a2;
  if ( v28 )
  {
    v30 = *((_DWORD *)v28 - 1);
    if ( v30 == *((_DWORD *)v28 - 2) )
    {
      v80 = (3 * v30 + 1) >> 1;
      v81 = 8 * v80 + 8;
      if ( 8 * v30 + 8 >= (unsigned int)v81 || v30 >= v80 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v103, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v103);
        sub_233E40((__int64)v103);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v82 = (unsigned int *)sub_186B300(v28 - 1, v81);
      v83 = v82[1];
      v28 = v82 + 2;
      *(_QWORD *)(v26 + 2128) = v82 + 2;
      *v82 = v80;
      LODWORD(v82) = v83;
      v33 = &v28[v83];
      v32 = (_DWORD)v82 + 1;
    }
    else
    {
      v31 = v30;
      v32 = v30 + 1;
      v33 = &v28[v31];
    }
  }
  else
  {
    v90 = (_QWORD *)sub_186B270(0x18u);
    *v90 = 2;
    v32 = 1;
    v28 = v90 + 1;
    *(_QWORD *)(v26 + 2128) = v28;
    v33 = v28;
  }
  *v33 = v29;
  *((_DWORD *)v28 - 1) = v32;
  if ( a4 )
  {
    v34 = &a5[a4];
    v35 = a5;
    v36 = (_QWORD *)sub_186B270(0x10u);
    *v36 = 2;
    v37 = (unsigned int *)(v36 + 1);
    v38 = v37;
    while ( 1 )
    {
      v39 = *v35++;
      *v37 = v39;
      v40 = *(v38 - 1);
      v41 = (unsigned int)(v40 + 1);
      *(v38 - 1) = v41;
      if ( v34 == v35 )
        break;
      v42 = *(v38 - 2);
      if ( v42 == (_DWORD)v41 )
      {
        v54 = (3 * v42 + 1) >> 1;
        v55 = 4 * v54 + 8;
        if ( 4 * v40 + 12 >= (unsigned int)v55 || v42 >= v54 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v103, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v103);
          sub_233E40((__int64)v103);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v56 = (unsigned int *)sub_186B300(v38 - 2, v55);
        v38 = v56 + 2;
        *v56 = v54;
        v37 = &v56[v56[1] + 2];
      }
      else
      {
        v37 = &v38[v41];
      }
    }
  }
  else
  {
    v38 = nullptr;
  }
  v57 = *(_QWORD *)(a1 + 448);
  if ( v57 )
  {
    v58 = *(_DWORD *)(v57 - 4);
    v98 = v58;
    if ( a2 >= v58 )
    {
      v95 = a2 + 1;
      if ( v58 >= a2 + 1 )
      {
        v85 = 8LL * v95;
        v86 = 8LL * v58;
        v87 = (_QWORD *)(v57 + v85);
        v88 = (_QWORD *)(v57 + v86);
        if ( v85 != v86 )
        {
          do
          {
            while ( *v87 )
            {
              v89 = (void *)(*v87++ - 8LL);
              sub_186B220(v89);
              if ( v88 == v87 )
                goto LABEL_80;
            }
            ++v87;
          }
          while ( v88 != v87 );
LABEL_80:
          v57 = *(_QWORD *)(a1 + 448);
        }
        *(_DWORD *)(v57 - 4) = v95;
        goto LABEL_24;
      }
      goto LABEL_47;
    }
  }
  else
  {
    v95 = a2 + 1;
    if ( a2 != -1 )
    {
      v98 = 0;
      v84 = (_QWORD *)sub_186B270(0x18u);
      v57 = (unsigned __int64)(v84 + 1);
      *v84 = 2;
      *(_QWORD *)(a1 + 448) = v84 + 1;
LABEL_47:
      while ( 1 )
      {
        v59 = *(_DWORD *)(v57 - 8);
        if ( v59 >= v95 )
          break;
        v60 = (3 * v59 + 1) >> 1;
        v61 = 8 * v60 + 8;
        v92 = v60;
        if ( 8 * v59 + 8 >= (unsigned int)v61 || v59 >= v60 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v103, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v103);
          sub_233E40((__int64)v103);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v62 = (unsigned int *)sub_186B270(v61);
        v63 = *(__int64 **)(a1 + 448);
        v64 = v62;
        v57 = (unsigned __int64)(v62 + 2);
        if ( v63 )
        {
          v65 = *((unsigned int *)v63 - 1);
          v62[1] = v65;
          v66 = 8 * v65;
          v67 = &v63[v65];
          if ( v67 != v63 )
          {
            v68 = v66 - 8;
            if ( (unsigned __int64)(v66 - 8) <= 8 || v63 < (__int64 *)v64 + 3 && v57 < (unsigned __int64)(v63 + 2) )
            {
              v77 = v63;
              v78 = v57;
              do
              {
                v79 = *v77;
                *v77++ = 0;
                v78 += 8LL;
                *(_QWORD *)(v78 - 8) = v79;
              }
              while ( v77 != v67 );
            }
            else
            {
              v69 = 0;
              v70 = (v68 >> 3) + 1;
              do
              {
                v71 = _mm_loadu_si128((const __m128i *)&v63[v69 / 2]);
                *(_OWORD *)&v63[v69 / 2] = 0;
                *(__m128i *)&v64[v69 + 2] = v71;
                v69 += 4LL;
              }
              while ( 4 * (v70 >> 1) != v69 );
              if ( (v70 & 1) != 0 )
              {
                v72 = 2 * (v70 & 0xFFFFFFFFFFFFFFFELL);
                v73 = v63[v72 / 2];
                v63[v72 / 2] = 0;
                *(_QWORD *)&v64[v72 + 2] = v73;
              }
            }
          }
          v74 = &v63[v65];
          if ( (_DWORD)v65 )
          {
            do
            {
              while ( *v63 )
              {
                v75 = (void *)(*v63++ - 8);
                sub_186B220(v75);
                if ( v63 == v74 )
                  goto LABEL_62;
              }
              ++v63;
            }
            while ( v63 != v74 );
LABEL_62:
            v63 = *(__int64 **)(a1 + 448);
          }
          sub_186B220(v63 - 1);
          *(_QWORD *)(a1 + 448) = v57;
          *v64 = v92;
        }
        else
        {
          v62[1] = 0;
          *(_QWORD *)(a1 + 448) = v57;
          *v62 = v60;
        }
      }
      *(_DWORD *)(v57 - 4) = v95;
      v43 = 8LL * v95;
      v44 = 8LL * v98;
      if ( v44 != v43 )
        memset((void *)(v57 + v44), 0, v43 - v44);
    }
  }
LABEL_24:
  v45 = a2;
  v46 = (_QWORD *)(v57 + 8LL * a2);
  if ( *v46 )
    sub_186B220((void *)(*v46 - 8LL));
  if ( v38 )
  {
    v47 = *(v38 - 1);
    v94 = *(v38 - 2);
    v48 = (_QWORD *)sub_186B270(4LL * v94 + 8);
    v49 = 4LL * *(v38 - 1);
    *v48 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v94), _mm_cvtsi32_si128(v47)).m128i_u64[0];
    *v46 = v48 + 1;
    if ( v49 )
      memcpy(v48 + 1, v38, v49);
    sub_186B220(v38 - 2);
  }
  else
  {
    *v46 = 0;
  }
  if ( a4 )
  {
    v50 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL);
    v51 = *(_DWORD **)(*(_QWORD *)(a1 + 448) + 8 * v45);
    v52 = &v51[a4];
    do
    {
      if ( *(_DWORD *)(v50 + 4LL * (unsigned int)*v51) == -1 )
        *v51 ^= 1u;
      ++v51;
    }
    while ( v51 != v52 );
  }
  v11 = *(_QWORD *)(a1 + 272) == 0;
  v53 = **(_QWORD **)(*(_QWORD *)(a1 + 88) + 8 * v45);
  v99 = *(_QWORD *)(a1 + 120);
  v100 = a1 + 112;
  v101 = v53;
  v102 = a3;
  if ( v11 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *))(a1 + 280))(
    a1 + 256,
    &v99,
    &v100,
    &v101,
    &v102);
}

