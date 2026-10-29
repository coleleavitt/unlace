void *__fastcall sub_536180(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        double a4,
        double a5,
        double a6,
        __m128i a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 *v11; // r13
  __int64 *v12; // r12
  int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r15
  __m128 i; // xmm6
  __int64 v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  char v22; // r8
  char v23; // di
  unsigned int *v24; // rsi
  int v25; // eax
  __m128 v26; // xmm5
  _QWORD *v27; // rax
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r13
  _QWORD *v34; // r12
  __int64 v35; // rdx
  unsigned int v36; // r15d
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  size_t v39; // rdx
  _QWORD *v40; // rax
  _DWORD *v41; // rbx
  unsigned int v42; // edx
  size_t v43; // rsi
  unsigned int *v44; // rax
  unsigned int v45; // eax
  unsigned int v46; // r15d
  __int64 v47; // r8
  unsigned __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rax
  bool v51; // r8
  unsigned int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  bool *v55; // rcx
  unsigned int v56; // eax
  unsigned int v57; // r9d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rsi
  unsigned int v61; // ecx
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rdi
  int v65; // edx
  int v66; // r9d
  __int64 v67; // r15
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // rdx
  __int64 v72; // rax
  _QWORD *v73; // rbx
  _QWORD *v74; // r15
  __int64 v75; // r12
  int v76; // edx
  int v77; // ecx
  int v78; // r8d
  int v79; // r9d
  _QWORD *v80; // r15
  _QWORD *v82; // rax
  unsigned __int64 *v83; // rsi
  int v84; // eax
  _QWORD *v85; // rax
  char **exception; // rbx
  char **v87; // r13
  char **v88; // r13
  __int64 v89; // [rsp+0h] [rbp-A0h]
  __int64 v90; // [rsp+8h] [rbp-98h]
  void *ptr; // [rsp+10h] [rbp-90h]
  __int64 v92; // [rsp+18h] [rbp-88h]
  __int64 v93; // [rsp+20h] [rbp-80h]
  int v94; // [rsp+28h] [rbp-78h]
  int v95; // [rsp+28h] [rbp-78h]
  __int64 v96; // [rsp+28h] [rbp-78h]
  unsigned int v97; // [rsp+34h] [rbp-6Ch]
  unsigned int v98; // [rsp+34h] [rbp-6Ch]
  int v99; // [rsp+34h] [rbp-6Ch]
  int v100; // [rsp+34h] [rbp-6Ch]
  __int64 v101; // [rsp+38h] [rbp-68h]
  __int32 v102; // [rsp+38h] [rbp-68h]
  unsigned int v103; // [rsp+38h] [rbp-68h]
  unsigned int v104; // [rsp+38h] [rbp-68h]
  unsigned __int64 v105; // [rsp+38h] [rbp-68h]
  bool v106; // [rsp+38h] [rbp-68h]
  unsigned __int64 v107; // [rsp+38h] [rbp-68h]
  bool v108; // [rsp+38h] [rbp-68h]
  __int64 v109[10]; // [rsp+50h] [rbp-50h] BYREF

  v11 = *(__int64 **)(a2 + 24);
  v89 = a2;
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v12 != v11 )
    {
      v101 = a9;
      v13 = _mm_cvtsi128_si32(a7);
      do
      {
        v14 = *v11++;
        sub_531A80((__int64)a1, v14);
      }
      while ( v12 != v11 );
      a9 = v101;
      a7.m128i_i32[0] = v13;
    }
  }
  v15 = 0;
  v16 = 0;
  v17 = a9;
  for ( i = (__m128)0x41800000u; ; i = (__m128)0x41800000u )
  {
    v19 = a1[6];
    v20 = (_QWORD *)(v19 + 32LL * *((unsigned int *)a1 + 14));
    if ( (_QWORD *)v19 == v20 )
      break;
    while ( 1 )
    {
      v21 = (_QWORD *)v19;
      if ( *(_DWORD *)(v19 + 4) == 2 )
        break;
      v19 += 32;
      if ( v20 == (_QWORD *)v19 )
        goto LABEL_28;
    }
    if ( (_QWORD *)v19 == v20 )
      break;
    v22 = 0;
    v23 = 0;
    a5 = 0.0;
    do
    {
      v24 = (unsigned int *)v21[3];
      v25 = v24[1];
      if ( v25 )
      {
        HIDWORD(a4) = 0;
        a3.m128_u64[0] = *v24;
        *(float *)&a4 = (float)v25;
        a3.m128_f32[0] = a3.m128_f32[0] / (float)v25;
        if ( *((_BYTE *)v24 + 8) )
        {
          v26 = _mm_cmplt_ss((__m128)0LL, a3);
          *(_QWORD *)&a4 = v26.m128_i32[0] & 0x3D800000 | _mm_andnot_ps(v26, i).m128_u64[0];
          a3.m128_f32[0] = a3.m128_f32[0] * *(float *)&a4;
        }
        if ( !v23 || *(float *)a7.m128i_i32 > a3.m128_f32[0] )
        {
          v9 = v21[1];
          v17 = v21[2];
          a7.m128i_i32[0] = a3.m128_i32[0];
          v23 = 1;
          v22 = 1;
        }
      }
      v27 = v21 + 4;
      if ( v20 == v21 + 4 )
        break;
      while ( 1 )
      {
        v21 = v27;
        if ( *((_DWORD *)v27 + 1) == 2 )
          break;
        v27 += 4;
        if ( v20 == v27 )
          goto LABEL_24;
      }
    }
    while ( v27 != v20 );
LABEL_24:
    if ( v22 )
    {
      v15 = v9;
      v16 = v17;
    }
    if ( !v23 )
      break;
    v102 = a7.m128i_i32[0];
    sub_5340C0((__int64)a1, v15, v16);
    a7.m128i_i32[0] = v102;
  }
LABEL_28:
  if ( !*((_BYTE *)a1 + 120) )
    return nullptr;
  ptr = (void *)sub_186B270(0xF8u);
  sub_63D370(ptr, *a1);
  v30 = a1[10];
  v31 = v30 + 24LL * *((unsigned int *)a1 + 22);
  v90 = v31;
  v32 = v31;
  if ( v31 != v30 )
  {
    while ( *(_DWORD *)(v30 + 4) != 2 )
    {
      v30 += 24;
      if ( v31 == v30 )
        goto LABEL_72;
    }
    v92 = v30;
    if ( v31 != v30 )
    {
      while ( 1 )
      {
        v33 = *(_QWORD *)(v92 + 8);
        v34 = *(_QWORD **)(v92 + 16);
        v35 = *(unsigned int *)(v33 + 64);
        if ( v34 )
        {
          v36 = *((_DWORD *)v34 - 1);
          if ( v36 == (_DWORD)v35 )
            goto LABEL_88;
          v103 = *((_DWORD *)v34 - 2);
          v37 = (_QWORD *)sub_186B270(8LL * v103 + 8);
          v34 = v37 + 1;
          v38 = *(_QWORD **)(v92 + 16);
          a3.m128_u64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v103), _mm_cvtsi32_si128(v36)).m128i_u64[0];
          *v37 = a3.m128_u64[0];
          if ( v38 )
          {
            v39 = 8LL * *((unsigned int *)v38 - 1);
            if ( v39 <= 8 )
            {
              if ( v39 == 8 )
                v37[1] = *v38;
            }
            else
            {
              memmove(v37 + 1, v38, v39);
            }
          }
          if ( v36 )
          {
            v40 = (_QWORD *)sub_186B270(0xAu);
            v41 = v40 + 1;
            *v40 = 2;
            while ( 1 )
            {
              v45 = *(v41 - 2);
              if ( v45 >= v36 )
                break;
              v42 = (3 * v45 + 1) >> 1;
              v43 = v42 + 8;
              if ( v45 + 8 >= (unsigned int)v43 || v45 >= v42 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v109, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v109);
                sub_233E40((__int64)v109);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v104 = (3 * v45 + 1) >> 1;
              v44 = (unsigned int *)sub_186B300(v41 - 2, v43);
              v41 = v44 + 2;
              *v44 = v104;
            }
            *(v41 - 1) = v36;
            memset(v41, 0, v36);
          }
          else
          {
            v41 = nullptr;
          }
          v46 = *(_DWORD *)(v33 + 56);
          LODWORD(v35) = *(_DWORD *)(v33 + 64);
          if ( (unsigned int)v35 < v46 )
          {
LABEL_47:
            v47 = (unsigned int)v35;
            v48 = *(_QWORD *)(v33 + 8LL * (unsigned int)v35 + 80) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v34 )
            {
              v96 = (unsigned int)v35;
              v99 = v35;
              v107 = *(_QWORD *)(v33 + 8LL * (unsigned int)v35 + 80) & 0xFFFFFFFFFFFFFFF8LL;
              v82 = (_QWORD *)sub_186B270(0x18u);
              v83 = v82 + 1;
              v48 = v107;
              LODWORD(v35) = v99;
              v47 = v96;
              v34 = v82 + 1;
              *v82 = 2;
              v84 = 1;
              goto LABEL_50;
            }
            while ( 2 )
            {
              v56 = *((_DWORD *)v34 - 1);
              if ( v56 == *((_DWORD *)v34 - 2) )
              {
                v57 = (3 * v56 + 1) >> 1;
                v58 = 8 * v57 + 8;
                if ( 8 * v56 + 8 >= (unsigned int)v58 || v56 >= v57 )
                {
                  v88 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v109, "Overflow encountered when expanding vector");
                  *v88 = (char *)off_1C63128;
                  sub_2333C0(v88 + 1, v109);
                  sub_233E40((__int64)v109);
                  __cxa_throw(v88, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v93 = v47;
                v94 = v35;
                v97 = (3 * v56 + 1) >> 1;
                v105 = v48;
                v59 = (unsigned int *)sub_186B300(v34 - 1, v58);
                v60 = v59[1];
                v34 = v59 + 2;
                v48 = v105;
                LODWORD(v35) = v94;
                *v59 = v97;
                LODWORD(v59) = v60;
                v47 = v93;
                v83 = &v34[v60];
                v84 = (_DWORD)v59 + 1;
              }
              else
              {
                v49 = v56;
                v84 = v56 + 1;
                v83 = &v34[v49];
              }
LABEL_50:
              *v83 = v48;
              *((_DWORD *)v34 - 1) = v84;
              v50 = *(_QWORD *)(v33 + 8 * v47 + 80) & 7LL;
              v51 = v50 == 1;
              if ( v41 )
              {
                v52 = *(v41 - 1);
                if ( v52 == *(v41 - 2) )
                {
                  v61 = (3 * v52 + 1) >> 1;
                  v62 = v61 + 8;
                  if ( v52 + 8 >= (unsigned int)v62 || v52 >= v61 )
                  {
                    v87 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v109, "Overflow encountered when expanding vector");
                    *v87 = (char *)off_1C63128;
                    sub_2333C0(v87 + 1, v109);
                    sub_233E40((__int64)v109);
                    __cxa_throw(v87, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v95 = v35;
                  v98 = (3 * v52 + 1) >> 1;
                  v106 = v51;
                  v63 = (unsigned int *)sub_186B300(v41 - 2, v62);
                  v41 = v63 + 2;
                  *v63 = v98;
                  LODWORD(v35) = v95 + 1;
                  LODWORD(v63) = v63[1];
                  *((_BYTE *)v41 + (unsigned int)v63) = v106;
                  *(v41 - 1) = (_DWORD)v63 + 1;
                  if ( v95 + 1 >= v46 )
                    goto LABEL_62;
                }
                else
                {
                  v53 = v52;
                  v54 = v52 + 1;
                  v55 = (bool *)v41 + v53;
LABEL_53:
                  LODWORD(v35) = v35 + 1;
                  *v55 = v51;
                  *(v41 - 1) = v54;
                  if ( (unsigned int)v35 >= v46 )
                    goto LABEL_62;
                }
                v47 = (unsigned int)v35;
                v48 = *(_QWORD *)(v33 + 8LL * (unsigned int)v35 + 80) & 0xFFFFFFFFFFFFFFF8LL;
                continue;
              }
              break;
            }
            v100 = v35;
            v108 = v50 == 1;
            v85 = (_QWORD *)sub_186B270(0xAu);
            v51 = v108;
            LODWORD(v35) = v100;
            *v85 = 2;
            v41 = v85 + 1;
            v54 = 1;
            v55 = (bool *)v41;
            goto LABEL_53;
          }
LABEL_62:
          v64 = a1[2];
          v65 = *((_DWORD *)v34 - 1);
          v66 = v33 + 72;
        }
        else
        {
          if ( !(_DWORD)v35 )
          {
LABEL_88:
            sub_63DAD0(ptr, *(_QWORD *)(v92 + 8), v35, *(double *)a3.m128_u64);
            goto LABEL_67;
          }
          v46 = *(_DWORD *)(v33 + 56);
          v41 = nullptr;
          if ( (unsigned int)v35 < v46 )
            goto LABEL_47;
          v64 = a1[2];
          v66 = v33 + 72;
          v65 = 0;
        }
        v67 = sub_62C680(v64, *(_QWORD *)(v33 + 40), v65, (_DWORD)v34, (_DWORD)v41, v66, 1);
        sub_629AF0(v67, *a1);
        sub_62F7F0(a1[2], v33, v67, v68, v69, v70, v89, v90, (__int64)ptr);
        sub_63DAD0(ptr, v67, v71, *(double *)a3.m128_u64);
        if ( v41 )
          sub_186B220(v41 - 2);
        if ( v34 )
          sub_186B220(v34 - 1);
LABEL_67:
        v32 = v90;
        v72 = v92 + 24;
        if ( v90 != v92 + 24 )
        {
          while ( *(_DWORD *)(v72 + 4) != 2 )
          {
            v72 += 24;
            if ( v90 == v72 )
              goto LABEL_72;
          }
          v92 = v72;
          if ( v90 != v72 )
            continue;
        }
        break;
      }
    }
  }
LABEL_72:
  v73 = (_QWORD *)a1[14];
  if ( v73 )
  {
    v74 = &v73[*((unsigned int *)v73 - 1)];
    if ( v74 == v73 )
      goto LABEL_79;
    do
    {
      v75 = *v73;
      sub_63DAD0(ptr, *v73, v32, *(double *)a3.m128_u64);
      sub_62F900(a1[2], v75, v76, v77, v78, v79, v89, v90, (__int64)ptr);
      ++v73;
    }
    while ( v74 != v73 );
    v73 = (_QWORD *)a1[14];
    if ( v73 )
    {
      v80 = &v73[*((unsigned int *)v73 - 1)];
      if ( v73 >= v80 )
        goto LABEL_79;
      do
        sub_62A410(a1[13], *v73++);
      while ( v73 < v80 );
      v73 = (_QWORD *)a1[14];
      if ( v73 )
LABEL_79:
        *((_DWORD *)v73 - 1) = 0;
    }
  }
  sub_63DFA0(ptr, v89, v32, *(double *)a3.m128_u64, a4, a5, COERCE_DOUBLE(1031798784), v28, v29, *(double *)i.m128_u64);
  return ptr;
}

