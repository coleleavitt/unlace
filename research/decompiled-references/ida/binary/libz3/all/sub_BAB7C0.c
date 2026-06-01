__int64 __fastcall sub_BAB7C0(__int64 a1, unsigned int a2, unsigned int *a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **exception; // r13
  char **v7; // r12
  char **v8; // r12
  __int64 *v9; // r15
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 **v18; // rbp
  unsigned int **v19; // rbx
  char v20; // r15
  __int64 v21; // rax
  int v22; // ecx
  __int64 *v23; // rax
  __int64 *v24; // rax
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // edi
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // edi
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // r8d
  size_t v37; // rsi
  _DWORD *v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  int v41; // edi
  unsigned int *v42; // r14
  _QWORD *v43; // rax
  __int64 v44; // r15
  int v45; // ebp
  __int64 v46; // r12
  int v47; // eax
  unsigned int v48; // ebp
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rax
  __int64 v52; // r15
  __int64 v53; // r13
  __int64 v54; // rdx
  __m128i v55; // xmm0
  _QWORD *v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 *v60; // rcx
  __int64 v61; // r13
  __int64 v62; // rax
  __int64 v63; // rbp
  __int64 v64; // rdi
  __int64 result; // rax
  __int64 v66; // rbp
  __m128 *v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rcx
  __m128 *v70; // rcx
  bool v71; // zf
  __int64 v72; // r13
  unsigned int **v73; // rbp
  unsigned __int64 v74; // r12
  unsigned int *v75; // rsi
  _QWORD *v76; // rax
  unsigned int v77; // r13d
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rcx
  unsigned int v81; // ebp
  unsigned int v82; // ecx
  unsigned int *v83; // rax
  __int64 v84; // rcx
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  int v87[2]; // [rsp+0h] [rbp-128h] BYREF
  __int64 *v88; // [rsp+8h] [rbp-120h]
  __int64 v89; // [rsp+10h] [rbp-118h]
  _QWORD *v90; // [rsp+18h] [rbp-110h]
  __int64 v91; // [rsp+20h] [rbp-108h]
  __int64 v92; // [rsp+28h] [rbp-100h]
  __int64 **v93; // [rsp+30h] [rbp-F8h]
  __int64 *v94; // [rsp+38h] [rbp-F0h]
  unsigned int v95; // [rsp+44h] [rbp-E4h]
  __int64 v96; // [rsp+48h] [rbp-E0h]
  __int64 v97; // [rsp+60h] [rbp-C8h]
  int v98[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v99; // [rsp+78h] [rbp-B0h]
  __int64 v100[4]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 (__fastcall **v101)(); // [rsp+A0h] [rbp-88h] BYREF
  __int64 v102; // [rsp+A8h] [rbp-80h]
  __int64 v103; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-70h]
  __int64 v105; // [rsp+C0h] [rbp-68h]
  int v106; // [rsp+C8h] [rbp-60h]
  __int64 v107; // [rsp+D0h] [rbp-58h]
  __m128i v108; // [rsp+D8h] [rbp-50h] BYREF

  v11 = *(_QWORD *)(a1 + 16);
  v12 = *a3;
  v92 = a1;
  v13 = *(_QWORD *)(v11 + 8656);
  v95 = a2;
  v14 = sub_B39350(*(_QWORD *)(v13 + 8 * v12), *(_DWORD *)(a1 + 8));
  v15 = v14;
  sub_BA8A20((_QWORD *)a1, v14, a4, a5, a6);
  sub_BA8A20((_QWORD *)a1, v15, a4, a5, a6);
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 200) + 16 * v15;
  v94 = (__int64 *)v98;
  v96 = v16;
  v97 = v16;
  sub_16669D0(v98, v16);
  v18 = *(__int64 ***)(v17 + 8);
  if ( !v18 || (v93 = &v18[*((unsigned int *)v18 - 1)], v93 == v18) )
  {
    v41 = v98[0];
    v19 = nullptr;
    v93 = *(__int64 ***)(v92 + 24);
  }
  else
  {
    v19 = nullptr;
    v20 = 0;
    do
    {
      v24 = *v18;
      v101 = nullptr;
      v102 = 0;
      v88 = v24;
      v103 = 1;
      v104 = 0;
      *(_QWORD *)v87 = *(_QWORD *)(v92 + 24);
      sub_182CBA0(qword_1C7F2C0, &v103);
      v28 = v99;
      BYTE4(v103) &= ~1u;
      LODWORD(v103) = 1;
      if ( !v99 )
      {
        sub_16669E0(v94);
        v28 = v99;
      }
      v89 = sub_166A700(v28, (unsigned int)&v101, 1, v25, v26, v27);
      v90 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v101);
      sub_182CBA0(v90, &v103);
      v102 = 0;
      v103 = 1;
      v104 = 0;
      v101 = (__int64 (__fastcall **)())(unsigned int)(1 << v20);
      sub_182CBA0(qword_1C7F2C0, &v103);
      v32 = v99;
      BYTE4(v103) &= ~1u;
      LODWORD(v103) = 1;
      if ( !v99 )
      {
        sub_16669E0(v94);
        v32 = v99;
      }
      v91 = sub_166A700(v32, (unsigned int)&v101, 1, v29, v30, v31);
      v90 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v101);
      sub_182CBA0(v90, &v103);
      v33 = sub_15E1BF0(v87[0]);
      v34 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      if ( v19 )
      {
        v35 = *((_DWORD *)v19 - 1);
        if ( v35 == *((_DWORD *)v19 - 2) )
        {
          v36 = (3 * v35 + 1) >> 1;
          v37 = 8 * v36 + 8;
          if ( 8 * v35 + 8 >= (unsigned int)v37 || v35 >= v36 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v101, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v101);
            sub_233E40((__int64)&v101);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v88) = (3 * v35 + 1) >> 1;
          *(_QWORD *)v87 = v33;
          v38 = (_DWORD *)sub_186B300(v19 - 1, v37);
          v19 = (unsigned int **)(v38 + 2);
          v34 = *(_QWORD *)v87;
          *v38 = (_DWORD)v88;
          v39 = (unsigned int)v38[1];
          v40 = v39;
          v23 = (__int64 *)&v19[v39];
          v22 = v40 + 1;
        }
        else
        {
          v21 = v35;
          v22 = v35 + 1;
          v23 = (__int64 *)&v19[v21];
        }
      }
      else
      {
        *(_QWORD *)v87 = v33;
        v76 = (_QWORD *)sub_186B270(0x18u);
        v19 = (unsigned int **)(v76 + 1);
        *v76 = 2;
        v34 = *(_QWORD *)v87;
        v22 = 1;
        v23 = v76 + 1;
      }
      *v23 = v34;
      ++v20;
      ++v18;
      *((_DWORD *)v19 - 1) = v22;
    }
    while ( v93 != v18 );
    v41 = v98[0];
    v93 = *(__int64 ***)(v92 + 24);
    if ( v22 == 1 )
    {
      v42 = *v19;
      if ( !*((_WORD *)*v19 + 2) )
        goto LABEL_19;
    }
  }
  v42 = (unsigned int *)sub_15E1AF0(v41);
  if ( v42 )
LABEL_19:
    ++v42[2];
  v89 = *(_QWORD *)(*(_QWORD *)(v92 + 32) + 8LL * v95);
  v43 = sub_966570(v92, v42);
  v44 = *(_QWORD *)(v92 + 16);
  v45 = *(_DWORD *)(v92 + 8);
  *(_QWORD *)v87 = v43;
  v90 = (_QWORD *)v44;
  v94 = (__int64 *)&v101;
  sub_B72D60((__int64)&v101, v44, 0, nullptr, 0, 0);
  v106 = v45;
  v107 = 0;
  v108.m128i_i64[0] = v89;
  v101 = &off_1C579E8;
  v108.m128i_i64[1] = *(_QWORD *)v87;
  nullsub_687();
  v88 = qword_1C6E7C8;
  v46 = sub_180C100(v44 + 8400, 72);
  *(_BYTE *)(v46 + 8) = v102 & 3 | *(_BYTE *)(v46 + 8) & 0xFC;
  *(_DWORD *)(v46 + 12) = HIDWORD(v102);
  *(_QWORD *)(v46 + 16) = v103;
  *(_DWORD *)(v46 + 24) = v104;
  *(_QWORD *)(v46 + 32) = v105;
  v88 = qword_1C6E7C8;
  *(_QWORD *)v46 = qword_1C6E7C8;
  v47 = v106;
  *(_QWORD *)(v46 + 48) = 0;
  *(_DWORD *)(v46 + 40) = v47;
  if ( !v107 )
  {
    *(__m128i *)(v46 + 56) = _mm_loadu_si128(&v108);
    *(_QWORD *)v46 = &off_1C579E8;
    goto LABEL_31;
  }
  v48 = *(_DWORD *)(v107 - 4);
  LODWORD(v91) = *(_DWORD *)(v107 - 8);
  v49 = sub_186B270(16LL * (unsigned int)v91 + 8) + 8;
  *(_QWORD *)(v49 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v91), _mm_cvtsi32_si128(v48)).m128i_u64[0];
  *(_QWORD *)(v46 + 48) = v49;
  v50 = v107;
  v91 = v49;
  if ( !v107 || (v51 = 16LL * *(unsigned int *)(v107 - 4), v52 = v107 + v51, v107 == v107 + v51) )
  {
    *(__m128i *)(v46 + 56) = _mm_loadu_si128(&v108);
    *(_QWORD *)v46 = &off_1C579E8;
  }
  else
  {
    v53 = v91;
    do
    {
      sub_15D0E50(v53, v50);
      v50 += 16;
      v53 += 16;
    }
    while ( v52 != v50 );
    v55 = _mm_loadu_si128(&v108);
    v91 = *(_QWORD *)(v46 + 48);
    v54 = v91;
    *(_QWORD *)v46 = &off_1C579E8;
    *(__m128i *)(v46 + 56) = v55;
    if ( !v54 )
      goto LABEL_31;
  }
  if ( *(_DWORD *)(v91 - 4) )
  {
    v56 = (_QWORD *)v90[1075];
    if ( v56 )
    {
      v57 = *((_DWORD *)v56 - 1);
      if ( v57 == *((_DWORD *)v56 - 2) )
      {
        v81 = (3 * v57 + 1) >> 1;
        v82 = 8 * v81 + 8;
        if ( 8 * v57 + 8 >= v82 || v57 >= v81 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v100, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v100);
          sub_233E40((__int64)v100);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v83 = (unsigned int *)sub_186B300(v56 - 1, v82);
        v56 = v83 + 2;
        v90[1075] = v83 + 2;
        v84 = v83[1];
        *v83 = v81;
        LODWORD(v83) = v84;
        v60 = &v56[v84];
        v59 = (_DWORD)v83 + 1;
      }
      else
      {
        v58 = v57;
        v59 = v57 + 1;
        v60 = &v56[v58];
      }
    }
    else
    {
      v86 = (_QWORD *)sub_186B270(0x18u);
      *v86 = 2;
      v56 = v86 + 1;
      v90[1075] = v86 + 1;
      v60 = v86 + 1;
      v59 = 1;
    }
    *v60 = v46;
    *((_DWORD *)v56 - 1) = v59;
  }
LABEL_31:
  v61 = v107;
  v101 = (__int64 (__fastcall **)())v88;
  if ( v107 )
  {
    v62 = *(unsigned int *)(v107 - 4);
    if ( (_DWORD)v62 )
    {
      v63 = v107 + 16 * v62;
      do
      {
        v64 = v61;
        v61 += 16;
        sub_15D0DF0(v64);
      }
      while ( v63 != v61 );
      v61 = v107;
    }
    sub_186B220((void *)(v61 - 8));
  }
  result = v89;
  if ( *(_QWORD *)(v89 + 8) != *(_QWORD *)(*(_QWORD *)v87 + 8LL) )
  {
    v66 = *(_QWORD *)(v92 + 16);
    v67 = *(__m128 **)(v66 + 8760);
    if ( v67 )
    {
      v68 = v67[-1].m128_u32[3];
      if ( v68 == v67[-1].m128_i32[2] )
      {
        v77 = (3 * v68 + 1) >> 1;
        v78 = 8 * (v77 + ((3 * v68 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v68 + 8 >= (unsigned int)v78 || v68 >= v77 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v94, "Overflow encountered when expanding vector");
          v9 = v94;
          v10 = v94;
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v10);
          sub_233E40((__int64)v9);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v79 = (unsigned int *)sub_186B300(&v67[-1].m128_u16[4], v78);
        v80 = v79[1];
        v67 = (__m128 *)(v79 + 2);
        *(_QWORD *)(v66 + 8760) = v79 + 2;
        *v79 = v77;
        LODWORD(v79) = v80;
        v70 = (__m128 *)((char *)v67 + 24 * v80);
        result = (unsigned int)((_DWORD)v79 + 1);
      }
      else
      {
        v69 = v68;
        result = v68 + 1;
        v70 = (__m128 *)((char *)v67 + 24 * v69);
      }
    }
    else
    {
      v85 = (_QWORD *)sub_186B270(0x38u);
      v67 = (__m128 *)(v85 + 1);
      *v85 = 2;
      result = 1;
      *(_QWORD *)(v66 + 8760) = v67;
      v70 = v67;
    }
    v70[1].m128_u64[0] = v46 | 3;
    *v70 = _mm_loadh_ps((const double *)v87);
    v67[-1].m128_i32[3] = result;
  }
  if ( v42 )
  {
    v71 = v42[2]-- == 1;
    if ( v71 )
      result = sub_15D7BC0(v93, v42);
  }
  if ( v19 )
  {
    v72 = v96;
    v73 = v19;
    v74 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
    if ( (unsigned __int64)v19 < v74 )
    {
      do
      {
        while ( 1 )
        {
          v75 = *v73;
          if ( *v73 )
          {
            v71 = v75[2]-- == 1;
            if ( v71 )
              break;
          }
          if ( (unsigned __int64)++v73 >= v74 )
            return sub_186B220(v19 - 1);
        }
        ++v73;
        sub_15D7BC0(v72, v75);
      }
      while ( (unsigned __int64)v73 < v74 );
    }
    return sub_186B220(v19 - 1);
  }
  return result;
}

