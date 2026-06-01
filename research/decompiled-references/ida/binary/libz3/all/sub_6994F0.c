__int64 __fastcall sub_6994F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  _OWORD *v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbx
  const void *v12; // rdi
  const __m128i *v13; // r14
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 *v16; // r13
  __int64 *v17; // r15
  __int64 v18; // rsi
  __int64 *v19; // rdx
  __int64 *v20; // r13
  __int64 *v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // r15
  unsigned int v26; // r14d
  __int64 v27; // rsi
  int *v28; // r13
  int *v29; // r15
  __int64 v30; // rax
  int v31; // r14d
  __int64 v32; // rdx
  int *v33; // r13
  int *v34; // r15
  __int64 v35; // rax
  int v36; // r14d
  __int64 v37; // rdx
  int *v38; // r13
  int *v39; // r15
  __int64 v40; // rax
  int v41; // r14d
  __int64 v42; // rdx
  __int64 *v43; // rdx
  __int64 *v44; // r13
  __int64 *v45; // r15
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // r13
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 *v56; // rcx
  __int64 v57; // rdi
  _DWORD *v58; // rax
  _DWORD *v59; // r13
  _DWORD *v60; // rax
  __int64 v61; // rdi
  __int64 v63; // rdi
  __int64 v64; // rax
  unsigned int v65; // r13d
  __int64 v66; // rax
  _BYTE *v67; // rsi
  size_t v68; // rdx
  unsigned int v70; // r14d
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  char **exception; // r12
  int v76; // [rsp-E0h] [rbp-E8h]
  __int64 v77; // [rsp-D8h] [rbp-E0h]
  unsigned int v78; // [rsp-D0h] [rbp-D8h]
  __int64 v79; // [rsp-C0h] [rbp-C8h] BYREF
  __int64 v80; // [rsp-B8h] [rbp-C0h] BYREF
  __int64 v81[4]; // [rsp-B0h] [rbp-B8h] BYREF
  _OWORD v82[2]; // [rsp-90h] [rbp-98h] BYREF
  __int64 v83; // [rsp-70h] [rbp-78h]
  _OWORD *v84; // [rsp-68h] [rbp-70h]
  __int64 v85; // [rsp-60h] [rbp-68h]
  int v86; // [rsp-58h] [rbp-60h]
  __int128 v87; // [rsp-50h] [rbp-58h]
  int v88; // [rsp-40h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 8);
  v83 = 0;
  v82[0] = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(unsigned __int64)a2);
  v82[1] = 0;
  v6 = (_OWORD *)sub_186B270(0x80u);
  v84 = v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v85 = 8;
  v86 = 0;
  v88 = 0;
  v87 = 0;
  if ( v5 != a2 )
  {
    sub_15DA640(DWORD2(v82[0]), v82[0], v7, v8, v9, v10, v76);
    sub_15D2280(*((_QWORD *)&v82[0] + 1), *(_QWORD *)&v82[0]);
  }
  v77 = a1 + 96;
  sub_11C7890(a1 + 96);
  v11 = sub_186B270(0x1308u);
  sub_698D70(v11, a2, a3, *(_BYTE *)(a1 + 385));
  v12 = *(const void **)(a1 + 624);
  if ( v12
    && (v13 = (const __m128i *)__dynamic_cast(
                                 v12,
                                 (const struct __class_type_info *)&`typeinfo for'sat::extension,
                                 (const struct __class_type_info *)&`typeinfo for'euf::solver,
                                 0)) != nullptr )
  {
    v14 = sub_7868E0(
            (int)v11 + 4376,
            a2,
            (int)a1 + 4392,
            (int)v11 + 96,
            (int)v11 + 4480,
            (int)v11 + 4840,
            *(unsigned __int8 *)(a1 + 385));
    v13[139].m128i_i64[1] = a2;
    v13[140].m128i_i64[0] = v14;
    sub_11CB970(v11 + 96, v77, 0);
    *(const __m128i *)((char *)&v13[139] + 8) = _mm_loadu_si128(v13 + 9);
  }
  else
  {
    sub_11CB970(v11 + 96, v77, 0);
  }
  v15 = *(__int64 **)(a1 + 4408);
  *(_DWORD *)(v11 + 4456) = *(_DWORD *)(a1 + 4456);
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 != v16 )
    {
      v17 = v15;
      do
      {
        v18 = *v17;
        if ( *((_QWORD *)&v82[0] + 1) != *(_QWORD *)&v82[0] )
          v18 = sub_15CFF50(v82, v18);
        v79 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        sub_68D130((unsigned int **)(v11 + 4408), &v79);
        ++v17;
      }
      while ( v16 != v17 );
    }
  }
  v19 = *(__int64 **)(a1 + 4424);
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    if ( v20 != v19 )
    {
      v21 = *(__int64 **)(a1 + 4424);
      do
      {
        v22 = *v21;
        if ( *(_QWORD *)&v82[0] != *((_QWORD *)&v82[0] + 1) )
          v22 = sub_15CFF50(v82, v22);
        v80 = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        sub_68D130((unsigned int **)(v11 + 4424), &v80);
        ++v21;
      }
      while ( v20 != v21 );
    }
  }
  v23 = *(_QWORD *)(a1 + 4496);
  if ( v23 )
  {
    v24 = v23 + 16LL * *(unsigned int *)(v23 - 4);
    if ( v24 != v23 )
    {
      v25 = *(_QWORD *)(a1 + 4496);
      do
      {
        v26 = *(_DWORD *)(v25 + 8);
        v27 = *(_QWORD *)v25;
        if ( *(_QWORD *)&v82[0] != *((_QWORD *)&v82[0] + 1) )
          v27 = sub_15CFF50(v82, v27);
        sub_16238E0(v11 + 4480, v27, v26);
        v25 += 16;
      }
      while ( v24 != v25 );
    }
  }
  v28 = *(int **)(a1 + 4432);
  if ( v28 )
  {
    v29 = &v28[*(v28 - 1)];
    if ( v29 != v28 )
    {
      v30 = *(_QWORD *)(v11 + 4432);
      v31 = *v28;
      if ( v30 )
        goto LABEL_35;
LABEL_32:
      sub_2FD3F0((unsigned int **)(v11 + 4432));
      v30 = *(_QWORD *)(v11 + 4432);
      v32 = *(unsigned int *)(v30 - 4);
      while ( 1 )
      {
        ++v28;
        *(_DWORD *)(v30 + 4 * v32) = v31;
        ++*(_DWORD *)(v30 - 4);
        if ( v29 == v28 )
          break;
        v31 = *v28;
LABEL_35:
        v32 = *(unsigned int *)(v30 - 4);
        if ( (_DWORD)v32 == *(_DWORD *)(v30 - 8) )
          goto LABEL_32;
      }
    }
  }
  v33 = *(int **)(a1 + 4440);
  if ( v33 )
  {
    v34 = &v33[*(v33 - 1)];
    if ( v34 != v33 )
    {
      v35 = *(_QWORD *)(v11 + 4440);
      v36 = *v33;
      if ( v35 )
        goto LABEL_43;
LABEL_40:
      sub_2FD3F0((unsigned int **)(v11 + 4440));
      v35 = *(_QWORD *)(v11 + 4440);
      v37 = *(unsigned int *)(v35 - 4);
      while ( 1 )
      {
        ++v33;
        *(_DWORD *)(v35 + 4 * v37) = v36;
        ++*(_DWORD *)(v35 - 4);
        if ( v34 == v33 )
          break;
        v36 = *v33;
LABEL_43:
        v37 = *(unsigned int *)(v35 - 4);
        if ( (_DWORD)v37 == *(_DWORD *)(v35 - 8) )
          goto LABEL_40;
      }
    }
  }
  v38 = *(int **)(a1 + 4448);
  if ( v38 )
  {
    v39 = &v38[*(v38 - 1)];
    if ( v39 != v38 )
    {
      v40 = *(_QWORD *)(v11 + 4448);
      v41 = *v38;
      if ( v40 )
        goto LABEL_51;
LABEL_48:
      sub_2FD3F0((unsigned int **)(v11 + 4448));
      v40 = *(_QWORD *)(v11 + 4448);
      v42 = *(unsigned int *)(v40 - 4);
      while ( 1 )
      {
        ++v38;
        *(_DWORD *)(v40 + 4 * v42) = v41;
        ++*(_DWORD *)(v40 - 4);
        if ( v39 == v38 )
          break;
        v41 = *v38;
LABEL_51:
        v42 = *(unsigned int *)(v40 - 4);
        if ( (_DWORD)v42 == *(_DWORD *)(v40 - 8) )
          goto LABEL_48;
      }
    }
  }
  v43 = *(__int64 **)(a1 + 4824);
  if ( v43 )
  {
    v44 = &v43[*((unsigned int *)v43 - 1)];
    if ( v44 != v43 )
    {
      v45 = *(__int64 **)(a1 + 4824);
      do
      {
        v46 = *v45;
        if ( *(_QWORD *)&v82[0] != *((_QWORD *)&v82[0] + 1) )
          v46 = sub_15CFF50(v82, v46);
        v81[0] = v46;
        if ( v46 )
          ++*(_DWORD *)(v46 + 8);
        sub_68D130((unsigned int **)(v11 + 4824), v81);
        ++v45;
      }
      while ( v44 != v45 );
    }
  }
  v47 = *(_QWORD *)(a1 + 4712);
  v48 = 0x7FFFFFFF8LL;
  if ( v47 )
    v48 = 8LL * (unsigned int)(*(_DWORD *)(v47 - 4) - 1);
  v49 = *(_QWORD *)(v47 + v48);
  if ( v49 )
  {
    v50 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v49 + 56LL))(v49, v82);
    v51 = v50;
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    v52 = *(_QWORD **)(v11 + 4712);
    if ( v52 )
    {
      v53 = *((_DWORD *)v52 - 1);
      if ( v53 == *((_DWORD *)v52 - 2) )
      {
        v70 = (3 * v53 + 1) >> 1;
        v71 = 8 * v70 + 8;
        if ( 8 * v53 + 8 >= (unsigned int)v71 || v53 >= v70 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_68CF80(v81, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v81);
          sub_233E40((__int64)v81);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v72 = (unsigned int *)sub_186B300(v52 - 1, v71);
        v73 = v72[1];
        v52 = v72 + 2;
        *v72 = v70;
        *(_QWORD *)(v11 + 4712) = v72 + 2;
        LODWORD(v72) = v73;
        v56 = &v52[v73];
        v55 = (_DWORD)v72 + 1;
      }
      else
      {
        v54 = v53;
        v55 = v53 + 1;
        v56 = &v52[v54];
      }
    }
    else
    {
      v74 = (_QWORD *)sub_186B270(0x18u);
      v52 = v74 + 1;
      *v74 = 2;
      v55 = 1;
      *(_QWORD *)(v11 + 4712) = v52;
      v56 = v52;
    }
    *v56 = v51;
    *((_DWORD *)v52 - 1) = v55;
  }
  v57 = *(_QWORD *)(a1 + 4752);
  if ( v57 )
  {
    sub_7826B0(v57, v77, a1 + 4480);
    v58 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _OWORD *))(**(_QWORD **)(a1 + 4752) + 56LL))(
                      *(_QWORD *)(a1 + 4752),
                      v82);
    v59 = v58;
    if ( v58 )
    {
      v60 = __dynamic_cast(
              v58,
              (const struct __class_type_info *)&`typeinfo for'model_converter,
              (const struct __class_type_info *)&`typeinfo for'sat2goal::mc,
              0);
      v59 = v60;
      if ( v60 )
        ++v60[2];
    }
    v61 = *(_QWORD *)(v11 + 4752);
    if ( v61 )
    {
      if ( (*(_DWORD *)(v61 + 8))-- == 1 )
        sub_68ECD0((void (***)(void))v61);
    }
    *(_QWORD *)(v11 + 4752) = v59;
  }
  *(_BYTE *)(v11 + 4360) = *(_BYTE *)(a1 + 4360);
  if ( a1 + 4368 != v11 + 4368 )
  {
    v63 = *(_QWORD *)(v11 + 4368);
    if ( v63 )
      sub_186B220((void *)(v63 - 8));
    v64 = *(_QWORD *)(a1 + 4368);
    if ( v64 )
    {
      v65 = *(_DWORD *)(v64 - 4);
      v78 = *(_DWORD *)(v64 - 8);
      v66 = sub_186B270(v78 + 8LL);
      v67 = *(_BYTE **)(a1 + 4368);
      *(_QWORD *)(v11 + 4368) = v66 + 8;
      *(_QWORD *)v66 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v78), _mm_cvtsi32_si128(v65)).m128i_u64[0];
      if ( v67 )
      {
        v68 = *((unsigned int *)v67 - 1);
        if ( v68 <= 1 )
        {
          if ( v68 == 1 )
            *(_BYTE *)(v66 + 8) = *v67;
        }
        else
        {
          memmove((void *)(v66 + 8), v67, v68);
        }
      }
    }
    else
    {
      *(_QWORD *)(v11 + 4368) = 0;
    }
  }
  *(_BYTE *)(v11 + 4808) = *(_BYTE *)(a1 + 4808);
  sub_15CE760(v82);
  return v11;
}

