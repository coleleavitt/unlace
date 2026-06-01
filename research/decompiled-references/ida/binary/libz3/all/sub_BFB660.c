__int64 __fastcall sub_BFB660(__int64 a1, __int64 a2)
{
  char **exception; // rax
  char **v3; // rbx
  void *v4; // r14
  _QWORD *v5; // rsi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  unsigned int *v11; // r13
  __int64 v12; // r15
  unsigned int *v13; // rax
  unsigned int **v14; // r8
  unsigned int *v15; // r12
  __int64 v16; // rax
  unsigned int *v17; // r15
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdi
  __int64 v22; // rax
  _DWORD *v23; // r14
  _DWORD *v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rdi
  __int64 v28; // rax
  unsigned int *v29; // r14
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // r12
  _DWORD *v33; // rax
  unsigned int *v34; // rcx
  unsigned int v35; // r14d
  __int64 v36; // rcx
  _DWORD *v37; // rsi
  __int64 v38; // rdi
  _DWORD *v39; // rsi
  _DWORD *v40; // rdi
  unsigned int *v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rax
  unsigned int *v44; // r14
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // r13
  _DWORD *v48; // rax
  int v49; // eax
  int v50; // r8d
  _QWORD *v51; // rdx
  __int64 v52; // rax
  unsigned int *v53; // rax
  unsigned int *v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdi
  int v57; // eax
  int v58; // r9d
  unsigned int v59; // ecx
  size_t v60; // rsi
  _DWORD *v61; // rax
  _QWORD *v62; // rax
  int v63; // [rsp-10h] [rbp-130h]
  int v64; // [rsp-8h] [rbp-128h]
  __m128i v65; // [rsp+0h] [rbp-120h] BYREF
  __m128i v66; // [rsp+10h] [rbp-110h] BYREF
  __int64 v67; // [rsp+20h] [rbp-100h]
  __int64 v68; // [rsp+28h] [rbp-F8h]
  __int64 v69; // [rsp+30h] [rbp-F0h]
  void *v70; // [rsp+38h] [rbp-E8h]
  __m128i v71; // [rsp+40h] [rbp-E0h] BYREF
  unsigned __int8 v72; // [rsp+57h] [rbp-C9h]
  unsigned int *v73; // [rsp+58h] [rbp-C8h] BYREF
  signed int v74; // [rsp+6Ch] [rbp-B4h] BYREF
  char v75[8]; // [rsp+70h] [rbp-B0h] BYREF
  char v76[8]; // [rsp+78h] [rbp-A8h] BYREF
  _DWORD *v77[2]; // [rsp+80h] [rbp-A0h] BYREF
  _DWORD *v78; // [rsp+90h] [rbp-90h] BYREF
  __int64 v79; // [rsp+98h] [rbp-88h]
  __m128 v80; // [rsp+A0h] [rbp-80h]
  __m128i v81; // [rsp+B0h] [rbp-70h]
  __m128 v82; // [rsp+C0h] [rbp-60h] BYREF
  __m128i v83; // [rsp+D0h] [rbp-50h] BYREF
  _QWORD v84[8]; // [rsp+E0h] [rbp-40h] BYREF

  v71.m128i_i64[1] = a2;
  v74 = 0;
  v72 = sub_BF62A0(a1, a2, a2 + 16, &v74);
  if ( !v72 )
    return v72;
  v8 = sub_15D1F10(**(_QWORD **)(a2 + 8));
  v9 = *(_QWORD *)(a2 + 8);
  v10 = v8;
  v11 = *(unsigned int **)v9;
  v69 = *(_QWORD *)(a1 + 24);
  if ( v11 )
    ++v11[2];
  v12 = *(_QWORD *)(a1 + 1736);
  if ( *(_DWORD *)(v9 - 4) == 1 )
  {
    v49 = sub_15D2D60(v12, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v8);
    v13 = (unsigned int *)sub_15DC610(
                            v12,
                            v49,
                            0,
                            0,
                            v50,
                            v63,
                            v65.m128i_i32[0],
                            v65.m128i_i32[2],
                            v66.m128i_i32[0],
                            v66.m128i_i32[2],
                            v67,
                            v68,
                            v69,
                            (int)v70,
                            v71.m128i_i32[0],
                            (void *)v71.m128i_i64[1]);
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v9 - 4) != 2 )
  {
    v13 = (unsigned int *)sub_15E1AF0(*(_QWORD *)(a1 + 1736));
LABEL_8:
    v73 = v13;
    v12 = *(_QWORD *)(a1 + 1736);
    v68 = *(_QWORD *)(a1 + 24);
    goto LABEL_9;
  }
  v73 = *(unsigned int **)(v9 + 8);
  v68 = v69;
LABEL_9:
  if ( v73 )
    ++v73[2];
  v14 = *(unsigned int ***)(v71.m128i_i64[1] + 24);
  v15 = *v14;
  if ( *v14 )
    ++v15[2];
  if ( *((_DWORD *)v14 - 1) == 1 )
  {
    v57 = sub_15D2D60(v12, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v10);
    v16 = sub_15DC610(
            v12,
            v57,
            0,
            0,
            v64,
            v58,
            v65.m128i_i32[0],
            v65.m128i_i32[2],
            v66.m128i_i32[0],
            v66.m128i_i32[2],
            v67,
            v68,
            v69,
            (int)v70,
            v71.m128i_i32[0],
            (void *)v71.m128i_i64[1]);
  }
  else
  {
    if ( *((_DWORD *)v14 - 1) == 2 )
    {
      v17 = v14[1];
      goto LABEL_17;
    }
    v16 = sub_15E1AF0(v12);
  }
  v17 = (unsigned int *)v16;
LABEL_17:
  if ( v17 )
    ++v17[2];
  sub_BB1EF0((__int64)v77, a1);
  sub_BB1EF0((__int64)&v78, a1);
  v67 = *(_QWORD *)(a1 + 24);
  if ( v74 )
  {
    v83.m128i_i8[4] &= 0xFCu;
    v83.m128i_i64[1] = 0;
    v84[0] = 1;
    v84[1] = 0;
    v83.m128i_i32[0] = v74;
    sub_182CBA0(qword_1C7F2C0, v84);
    v21 = *(_QWORD *)(a1 + 1840);
    BYTE4(v84[0]) &= ~1u;
    LODWORD(v84[0]) = 1;
    if ( !v21 )
    {
      v70 = &v83;
      sub_16669E0(a1 + 1832);
      v21 = *(_QWORD *)(a1 + 1840);
    }
    v70 = &v83;
    v66.m128i_i64[0] = sub_166A700(v21, (unsigned int)&v83, 1, v18, v19, v20);
    v71.m128i_i64[0] = (__int64)qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v83);
    sub_182CBA0(v71.m128i_i64[0], v84);
    v22 = sub_15E1B70(*(_QWORD *)(a1 + 1832));
    v23 = (_DWORD *)v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    v24 = v78;
    if ( v78 )
    {
      v25 = v79;
      v26 = v78[2]-- == 1;
      if ( v26 )
        sub_15D7BC0(v25, v24);
    }
    v78 = v23;
    if ( v74 <= 0 )
    {
      v74 = -v74;
      v71.m128i_i64[0] = (__int64)v76;
      sub_180C5A0(v76, "seq.align");
      sub_1407560((_DWORD)v70, a1 + 1848, (unsigned int)v76, (_DWORD)v73, (_DWORD)v17, (_DWORD)v15, (__int64)v11, 0, 1);
      v42 = *(_QWORD *)(a1 + 1736);
      v71.m128i_i64[0] = v83.m128i_i64[0];
      v66.m128i_i64[0] = *(_QWORD *)(a1 + 24);
      v82 = _mm_loadh_ps((const double *)v71.m128i_i64);
      v43 = sub_15E1AF0(v42);
      v44 = (unsigned int *)v43;
      v45 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v71), (__m128i)(unsigned __int64)v17);
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      if ( v11 )
      {
        v26 = v11[2]-- == 1;
        if ( v26 )
        {
          v65 = v45;
          sub_15D7BC0(v66.m128i_i64[0], v11);
          v45 = _mm_load_si128(&v65);
        }
      }
      v46 = *(_QWORD *)(a1 + 1736);
      v47 = *(_QWORD *)(a1 + 24);
      v83 = v45;
      v48 = (_DWORD *)sub_15E1AF0(v46);
      if ( v48 )
        ++v48[2];
      if ( v17 )
      {
        v26 = v17[2]-- == 1;
        if ( v26 )
        {
          v70 = v48;
          sub_15D7BC0(v47, v17);
          v48 = v70;
        }
      }
      v17 = v48;
      v11 = v44;
    }
    else
    {
      v71.m128i_i64[0] = (__int64)v75;
      sub_180C5A0(v75, "seq.align");
      sub_1407560((_DWORD)v70, a1 + 1848, (unsigned int)v75, (_DWORD)v17, (_DWORD)v73, (_DWORD)v11, (__int64)v15, 0, 1);
      v27 = *(_QWORD *)(a1 + 1736);
      v71.m128i_i64[0] = v83.m128i_i64[0];
      v70 = *(void **)(a1 + 24);
      v80 = _mm_loadh_ps((const double *)v71.m128i_i64);
      v28 = sub_15E1AF0(v27);
      v29 = (unsigned int *)v28;
      v30 = (__m128i)_mm_loadh_ps((const double *)&v73);
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      if ( v15 )
      {
        v26 = v15[2]-- == 1;
        if ( v26 )
        {
          v66 = v30;
          sub_15D7BC0(v70, v15);
          v30 = _mm_load_si128(&v66);
        }
      }
      v31 = *(_QWORD *)(a1 + 1736);
      v32 = *(_QWORD *)(a1 + 24);
      v81 = v30;
      v33 = (_DWORD *)sub_15E1AF0(v31);
      if ( v33 )
        ++v33[2];
      v34 = v73;
      if ( v73 )
      {
        LODWORD(v70) = v73[2];
        v26 = (_DWORD)v70 == 1;
        v73[2] = (_DWORD)v70 - 1;
        if ( v26 )
        {
          v70 = v33;
          sub_15D7BC0(v32, v34);
          v33 = v70;
        }
      }
      v73 = v33;
      v15 = v29;
    }
  }
  else
  {
    v71.m128i_i64[0] = 0;
  }
  v82.m128_u64[0] = 0;
  v71.m128i_i64[1] = *(_QWORD *)(v71.m128i_i64[1] + 40);
  v35 = sub_966380(a1, v77[0], v78);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v35) == 1 )
  {
    v51 = (_QWORD *)v82.m128_u64[0];
    if ( v82.m128_u64[0] )
    {
      v52 = *(unsigned int *)(v82.m128_u64[0] - 4);
      if ( (_DWORD)v52 == *(_DWORD *)(v82.m128_u64[0] - 8) )
      {
        v59 = (unsigned int)(3 * v52 + 1) >> 1;
        v60 = 4 * v59 + 8;
        if ( 4 * (int)v52 + 8 >= (unsigned int)v60 || (unsigned int)v52 >= v59 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          v70 = &v83;
          v3 = exception;
          sub_24ABB0(v83.m128i_i64, "Overflow encountered when expanding vector");
          v4 = v70;
          v5 = v70;
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v5);
          sub_233E40((__int64)v4);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v70) = (unsigned int)(3 * v52 + 1) >> 1;
        v61 = (_DWORD *)sub_186B300((void *)(v82.m128_u64[0] - 8), v60);
        v51 = v61 + 2;
        v82.m128_u64[0] = (unsigned __int64)(v61 + 2);
        *v61 = (_DWORD)v70;
        v53 = &v61[v61[1] + 2];
      }
      else
      {
        v53 = (unsigned int *)(v82.m128_u64[0] + 4 * v52);
      }
    }
    else
    {
      v62 = (_QWORD *)sub_186B270(0x10u);
      v51 = v62 + 1;
      *v62 = 2;
      v82.m128_u64[0] = (unsigned __int64)(v62 + 1);
      v53 = (unsigned int *)(v62 + 1);
    }
    *v53 = v35;
    ++*((_DWORD *)v51 - 1);
    if ( v74 )
    {
      sub_BB1EF0((__int64)&v83, a1);
      v54 = (unsigned int *)sub_993400(a1 + 1832, v74);
      sub_BC5010(a1, (_DWORD *)v71.m128i_i64[1], (int **)&v82, (unsigned int *)v83.m128i_i64[0], v54, 0);
      v55 = v83.m128i_i64[0];
      if ( v83.m128i_i64[0] )
      {
        v56 = v83.m128i_i64[1];
        v26 = (*(_DWORD *)(v83.m128i_i64[0] + 8))-- == 1;
        if ( v26 )
          sub_15D7BC0(v56, v55);
      }
    }
    sub_BC5010(a1, (_DWORD *)v71.m128i_i64[1], (int **)&v82, v15, v11, 1);
    sub_BC5010(a1, (_DWORD *)v71.m128i_i64[1], (int **)&v82, v73, v17, 0);
  }
  else
  {
    v72 = 0;
  }
  if ( v82.m128_u64[0] )
    sub_186B220((void *)(v82.m128_u64[0] - 8));
  v36 = v71.m128i_i64[0];
  if ( v71.m128i_i64[0] )
  {
    v71.m128i_i32[2] = *(_DWORD *)(v71.m128i_i64[0] + 8);
    v26 = v71.m128i_i32[2] == 1;
    *(_DWORD *)(v71.m128i_i64[0] + 8) = v71.m128i_i32[2] - 1;
    if ( v26 )
      sub_15D7BC0(v67, v36);
  }
  v37 = v78;
  if ( v78 )
  {
    v38 = v79;
    v26 = v78[2]-- == 1;
    if ( v26 )
      sub_15D7BC0(v38, v37);
  }
  v39 = v77[0];
  if ( v77[0] )
  {
    v40 = v77[1];
    v26 = v77[0][2]-- == 1;
    if ( v26 )
      sub_15D7BC0(v40, v39);
  }
  if ( v17 )
  {
    v26 = v17[2]-- == 1;
    if ( v26 )
      sub_15D7BC0(v68, v17);
  }
  if ( v15 )
  {
    v26 = v15[2]-- == 1;
    if ( v26 )
      sub_15D7BC0(v68, v15);
  }
  v41 = v73;
  if ( v73 )
  {
    v71.m128i_i32[2] = v73[2];
    v26 = v71.m128i_i32[2] == 1;
    v73[2] = v71.m128i_i32[2] - 1;
    if ( v26 )
      sub_15D7BC0(v69, v41);
  }
  if ( v11 )
  {
    v26 = v11[2]-- == 1;
    if ( v26 )
      sub_15D7BC0(v69, v11);
  }
  return v72;
}

