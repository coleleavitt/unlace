void __fastcall sub_B35800(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  char **exception; // rbx
  __int64 v6; // rdx
  char **v7; // rbx
  __int64 v8; // rdx
  char **v9; // rbx
  __int64 v10; // rdx
  char **v11; // r12
  __int64 v12; // rdx
  __int64 v14; // r12
  _QWORD *v16; // rax
  unsigned int v17; // r15d
  unsigned int v18; // r14d
  __int64 v19; // r15
  unsigned int v20; // r13d
  unsigned int v21; // ecx
  size_t v22; // rsi
  unsigned int v23; // ebx
  unsigned int *v24; // rdx
  unsigned int v25; // edx
  __int64 v26; // rdx
  int *v27; // r14
  __int64 v28; // r9
  int v29; // r13d
  int v30; // eax
  __int64 v31; // r14
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // r13
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 *v38; // rcx
  unsigned int *v39; // r13
  unsigned int *v40; // r12
  _QWORD *v41; // rax
  unsigned int *v42; // rax
  unsigned int *v43; // rbx
  unsigned int v44; // edx
  int v45; // ecx
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // rax
  _QWORD *v50; // r12
  unsigned int v51; // r13d
  _QWORD *v52; // rax
  size_t v53; // rdx
  bool v54; // zf
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned int v57; // r14d
  size_t v58; // rsi
  unsigned int *v59; // rax
  unsigned __int64 v60; // r12
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // r13d
  size_t v64; // rdi
  unsigned int *v65; // rax
  __int64 *v66; // r14
  unsigned int *v67; // r15
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 *v70; // r9
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rsi
  __m128i v74; // xmm0
  unsigned __int64 v75; // rsi
  __int64 v76; // r9
  __int64 *v77; // r13
  void *v78; // rdi
  _QWORD *v79; // rax
  __int64 *v80; // rax
  unsigned __int64 v81; // rsi
  __int64 v82; // rdx
  unsigned int v83; // r15d
  size_t v84; // rsi
  unsigned int *v85; // rax
  __int64 v86; // rcx
  _QWORD *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  _QWORD *v90; // r14
  _QWORD *v91; // r13
  void *v92; // rdi
  _QWORD *v93; // rdx
  unsigned int v94; // [rsp+4h] [rbp-94h]
  unsigned int v95; // [rsp+4h] [rbp-94h]
  unsigned int v96; // [rsp+4h] [rbp-94h]
  _DWORD *v97; // [rsp+8h] [rbp-90h]
  unsigned int v98; // [rsp+8h] [rbp-90h]
  unsigned int v101; // [rsp+1Ch] [rbp-7Ch]
  __int64 v102; // [rsp+20h] [rbp-78h] BYREF
  __int64 v103; // [rsp+28h] [rbp-70h] BYREF
  __int64 v104; // [rsp+30h] [rbp-68h] BYREF
  __int64 v105; // [rsp+38h] [rbp-60h] BYREF
  __int64 v106[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( !*(_QWORD *)(a1 + 216) )
    return;
  v14 = a4;
  sub_B34CD0(a1);
  v16 = *(_QWORD **)(a1 + 376);
  v17 = a2 >> 5;
  v18 = a2 >> 5;
  if ( !v16 )
  {
    v19 = a1 + 376;
    v20 = v18 + 1;
    v79 = (_QWORD *)sub_186B270(0x10u);
    v97 = a5;
    *v79 = 2;
    v16 = v79 + 1;
    *(_QWORD *)(a1 + 376) = v16;
    v94 = 0;
    goto LABEL_8;
  }
  if ( v17 >= *((_DWORD *)v16 - 1) )
  {
    v94 = *((_DWORD *)v16 - 1);
    v19 = a1 + 376;
    v20 = v18 + 1;
    v97 = a5;
LABEL_8:
    while ( 1 )
    {
      v25 = *((_DWORD *)v16 - 2);
      if ( v25 >= v20 )
        break;
      v21 = (3 * v25 + 1) >> 1;
      v22 = 4 * v21 + 8;
      v23 = v21;
      if ( 4 * v25 + 8 >= (unsigned int)v22 || v25 >= v21 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_147B96(v106, "Overflow encountered when expanding vector", v6);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v106);
        sub_233E40((__int64)v106);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v16 - 1, v22);
      v16 = v24 + 2;
      *(_QWORD *)(a1 + 376) = v24 + 2;
      *v24 = v23;
    }
    *((_DWORD *)v16 - 1) = v20;
    v26 = 4LL * v20;
    a5 = v97;
    v27 = (int *)v16 + v18;
    v28 = 4LL * v94;
    v29 = 1 << a2;
    if ( v28 != v26 )
      memset((char *)v16 + v28, 0, v26 - v28);
    v30 = *v27;
    goto LABEL_12;
  }
  v56 = v17;
  v19 = a1 + 376;
  v27 = (int *)v16 + v56;
  v30 = *v27;
  v29 = 1 << a2;
  if ( ((1 << a2) & *v27) != 0 )
    return;
LABEL_12:
  *v27 = v30 | v29;
  v31 = *(_QWORD *)(a1 + 16);
  v32 = sub_180C100(v31 + 8400, 24);
  v33 = *(_QWORD **)(v31 + 9456);
  v34 = v32;
  *(_QWORD *)v32 = off_1C548B8;
  *(_QWORD *)(v32 + 8) = v19;
  *(_DWORD *)(v32 + 16) = a2;
  if ( v33 )
  {
    v35 = *((_DWORD *)v33 - 1);
    if ( v35 == *((_DWORD *)v33 - 2) )
    {
      v83 = (3 * v35 + 1) >> 1;
      v84 = 8 * v83 + 8;
      if ( 8 * v35 + 8 >= (unsigned int)v84 || v35 >= v83 )
      {
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_147B96(v106, "Overflow encountered when expanding vector", v10);
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, v106);
        sub_233E40((__int64)v106);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v85 = (unsigned int *)sub_186B300(v33 - 1, v84);
      v86 = v85[1];
      v33 = v85 + 2;
      *(_QWORD *)(v31 + 9456) = v85 + 2;
      *v85 = v83;
      LODWORD(v85) = v86;
      v38 = &v33[v86];
      v37 = (_DWORD)v85 + 1;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = &v33[v36];
    }
  }
  else
  {
    v93 = (_QWORD *)sub_186B270(0x18u);
    *v93 = 2;
    v37 = 1;
    v33 = v93 + 1;
    *(_QWORD *)(v31 + 9456) = v33;
    v38 = v33;
  }
  *v38 = v34;
  *((_DWORD *)v33 - 1) = v37;
  if ( (_DWORD)v14 )
  {
    v39 = a5;
    v40 = &a5[v14];
    v41 = (_QWORD *)sub_186B270(0x10u);
    *v41 = 2;
    v42 = (unsigned int *)(v41 + 1);
    v43 = v42;
    while ( 1 )
    {
      v44 = *v39++;
      *v42 = v44;
      v45 = *(v43 - 1);
      v46 = (unsigned int)(v45 + 1);
      *(v43 - 1) = v46;
      if ( v40 == v39 )
        break;
      v47 = *(v43 - 2);
      if ( v47 == (_DWORD)v46 )
      {
        v57 = (3 * v47 + 1) >> 1;
        v58 = 4 * v57 + 8;
        if ( 4 * v45 + 12 >= (unsigned int)v58 || v47 >= v57 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_147B96(v106, "Overflow encountered when expanding vector", v8);
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v106);
          sub_233E40((__int64)v106);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v59 = (unsigned int *)sub_186B300(v43 - 2, v58);
        v43 = v59 + 2;
        *v59 = v57;
        v42 = &v59[v59[1] + 2];
      }
      else
      {
        v42 = &v43[v46];
      }
    }
  }
  else
  {
    v43 = nullptr;
  }
  v60 = *(_QWORD *)(a1 + 400);
  if ( v60 )
  {
    v61 = *(_DWORD *)(v60 - 4);
    v101 = v61;
    if ( a2 >= v61 )
    {
      v98 = a2 + 1;
      if ( v61 >= a2 + 1 )
      {
        v88 = 8LL * v98;
        v89 = 8LL * v61;
        v90 = (_QWORD *)(v60 + v88);
        v91 = (_QWORD *)(v60 + v89);
        if ( v88 != v89 )
        {
          do
          {
            while ( *v90 )
            {
              v92 = (void *)(*v90++ - 8LL);
              sub_186B220(v92);
              if ( v91 == v90 )
                goto LABEL_74;
            }
            ++v90;
          }
          while ( v91 != v90 );
LABEL_74:
          v60 = *(_QWORD *)(a1 + 400);
        }
        *(_DWORD *)(v60 - 4) = v98;
        goto LABEL_22;
      }
      goto LABEL_40;
    }
  }
  else
  {
    v98 = a2 + 1;
    if ( a2 != -1 )
    {
      v101 = 0;
      v87 = (_QWORD *)sub_186B270(0x18u);
      v60 = (unsigned __int64)(v87 + 1);
      *v87 = 2;
      *(_QWORD *)(a1 + 400) = v87 + 1;
LABEL_40:
      while ( 1 )
      {
        v62 = *(_DWORD *)(v60 - 8);
        if ( v62 >= v98 )
          break;
        v63 = (3 * v62 + 1) >> 1;
        v64 = 8 * v63 + 8;
        v96 = v63;
        if ( 8 * v62 + 8 >= (unsigned int)v64 || v62 >= v63 )
        {
          v11 = (char **)__cxa_allocate_exception(0x28u);
          sub_147B96(v106, "Overflow encountered when expanding vector", v12);
          *v11 = (char *)off_1C63128;
          sub_2333C0(v11 + 1, v106);
          sub_233E40((__int64)v106);
          __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v65 = (unsigned int *)sub_186B270(v64);
        v66 = *(__int64 **)(a1 + 400);
        v67 = v65;
        v60 = (unsigned __int64)(v65 + 2);
        if ( v66 )
        {
          v68 = *((unsigned int *)v66 - 1);
          v65[1] = v68;
          v69 = 8 * v68;
          v70 = &v66[v68];
          if ( v70 != v66 )
          {
            v71 = v69 - 8;
            if ( (unsigned __int64)(v69 - 8) <= 8 || v66 < (__int64 *)v67 + 3 && v60 < (unsigned __int64)(v66 + 2) )
            {
              v80 = v66;
              v81 = v60;
              do
              {
                v82 = *v80;
                *v80++ = 0;
                v81 += 8LL;
                *(_QWORD *)(v81 - 8) = v82;
              }
              while ( v80 != v70 );
            }
            else
            {
              v72 = 0;
              v73 = (v71 >> 3) + 1;
              do
              {
                v74 = _mm_loadu_si128((const __m128i *)&v66[v72 / 2]);
                *(_OWORD *)&v66[v72 / 2] = 0;
                *(__m128i *)&v67[v72 + 2] = v74;
                v72 += 4LL;
              }
              while ( 4 * (v73 >> 1) != v72 );
              if ( (v73 & 1) != 0 )
              {
                v75 = 2 * (v73 & 0xFFFFFFFFFFFFFFFELL);
                v76 = v66[v75 / 2];
                v66[v75 / 2] = 0;
                *(_QWORD *)&v67[v75 + 2] = v76;
              }
            }
          }
          v77 = &v66[v68];
          if ( (_DWORD)v68 )
          {
            do
            {
              while ( *v66 )
              {
                v78 = (void *)(*v66++ - 8);
                sub_186B220(v78);
                if ( v66 == v77 )
                  goto LABEL_55;
              }
              ++v66;
            }
            while ( v66 != v77 );
LABEL_55:
            v66 = *(__int64 **)(a1 + 400);
          }
          sub_186B220(v66 - 1);
          *(_QWORD *)(a1 + 400) = v60;
          *v67 = v96;
        }
        else
        {
          v65[1] = 0;
          *(_QWORD *)(a1 + 400) = v60;
          *v65 = v63;
        }
      }
      *(_DWORD *)(v60 - 4) = v98;
      v48 = 8LL * v98;
      v49 = 8LL * v101;
      if ( v49 != v48 )
        memset((void *)(v60 + v49), 0, v48 - v49);
    }
  }
LABEL_22:
  v50 = (_QWORD *)(v60 + 8LL * a2);
  if ( *v50 )
    sub_186B220((void *)(*v50 - 8LL));
  if ( v43 )
  {
    v51 = *(v43 - 1);
    v95 = *(v43 - 2);
    v52 = (_QWORD *)sub_186B270(4LL * v95 + 8);
    v53 = 4LL * *(v43 - 1);
    *v52 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v95), _mm_cvtsi32_si128(v51)).m128i_u64[0];
    *v50 = v52 + 1;
    if ( v53 )
      memcpy(v52 + 1, v43, v53);
    sub_186B220(v43 - 2);
  }
  else
  {
    *v50 = 0;
  }
  v54 = *(_QWORD *)(a1 + 216) == 0;
  v55 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL * a2);
  v102 = *(_QWORD *)(a1 + 64);
  v103 = a1 + 56;
  v104 = v55;
  v105 = a3;
  if ( v54 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *))(a1 + 224))(
    a1 + 200,
    &v102,
    &v103,
    &v104,
    &v105);
}

