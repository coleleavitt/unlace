__int64 __fastcall sub_7BD580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, __int64 a6, _DWORD *a7)
{
  char **v7; // rbp
  __int64 v8; // rdx
  char **v9; // rbp
  __int64 v10; // rdx
  char **exception; // rbx
  __int64 v12; // rdx
  _QWORD *v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // r13d
  __int64 v18; // r14
  unsigned int v19; // r15d
  size_t v20; // rsi
  unsigned int *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // r14
  __int64 *v24; // r14
  __int64 v25; // r11
  unsigned int *v26; // rax
  unsigned int v27; // r13d
  char v28; // di
  unsigned int v29; // r8d
  __int64 v30; // rsi
  unsigned int *v31; // r10
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 *v35; // rsi
  __int64 (__fastcall *v36)(); // rax
  __int64 v37; // rbx
  __int64 v38; // r15
  _QWORD *v39; // rax
  unsigned int *v40; // rax
  __int64 *v41; // rcx
  unsigned int *v42; // rbx
  int v43; // edi
  __int64 v44; // rax
  unsigned int v45; // edx
  unsigned int *v46; // rbx
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // rcx
  unsigned int *v50; // r15
  __int64 v51; // r14
  __int64 v52; // rdi
  double v53; // xmm0_8
  __int64 result; // rax
  unsigned int v55; // r9d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rax
  int v59; // esi
  const char *v60; // rdx
  _QWORD *v61; // rax
  _DWORD *v62; // rax
  __int64 v63; // rdx
  unsigned int *v64; // r14
  int v65; // ecx
  int v66; // edi
  __int64 v67; // rax
  unsigned int v68; // ecx
  unsigned int v69; // r15d
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rax
  int v73; // edx
  __int64 v74; // rcx
  int v75; // r8d
  int v76; // r9d
  __int64 (__fastcall *v77)(); // rax
  __int64 (__fastcall *v78)(__int64); // rax
  __int64 v79; // rdi
  __int32 v80; // eax
  _QWORD *v81; // rax
  int v82; // esi
  __int64 v83; // rdi
  __int32 v84; // eax
  __int64 *v85; // [rsp+20h] [rbp-78h]
  unsigned int v86; // [rsp+28h] [rbp-70h]
  unsigned int v87; // [rsp+28h] [rbp-70h]
  unsigned int v88; // [rsp+28h] [rbp-70h]
  unsigned int v89; // [rsp+28h] [rbp-70h]
  unsigned int v90; // [rsp+28h] [rbp-70h]
  unsigned int v91; // [rsp+28h] [rbp-70h]
  unsigned int v92; // [rsp+28h] [rbp-70h]
  unsigned int v93; // [rsp+2Ch] [rbp-6Ch]
  _DWORD *v94; // [rsp+30h] [rbp-68h] BYREF
  unsigned int *v95; // [rsp+38h] [rbp-60h] BYREF
  __m128i v96; // [rsp+40h] [rbp-58h] BYREF
  __int64 v97; // [rsp+50h] [rbp-48h]

  v15 = *(_QWORD **)(a1 + 976);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3296LL);
  if ( !v16 )
  {
    if ( !v15 )
      goto LABEL_11;
    v17 = 0;
    goto LABEL_68;
  }
  v17 = 2 * *(_DWORD *)(v16 - 4);
  if ( v15 )
  {
    v18 = *((unsigned int *)v15 - 1);
    if ( (unsigned int)v18 >= v17 )
    {
LABEL_68:
      *((_DWORD *)v15 - 1) = v17;
      goto LABEL_11;
    }
  }
  else
  {
    if ( !v17 )
      goto LABEL_11;
    v18 = 0;
    v81 = (_QWORD *)sub_186B270(0x10u);
    v15 = v81 + 1;
    *v81 = 2;
    *(_QWORD *)(a1 + 976) = v81 + 1;
  }
  while ( 1 )
  {
    v22 = *((_DWORD *)v15 - 2);
    if ( v22 >= v17 )
      break;
    v19 = (3 * v22 + 1) >> 1;
    v20 = 4 * v19 + 8;
    if ( 4 * v22 + 8 >= (unsigned int)v20 || v22 >= v19 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_113C8C(v96.m128i_i64, "Overflow encountered when expanding vector", v12);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v96);
      sub_233E40((__int64)&v96);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v21 = (unsigned int *)sub_186B300(v15 - 1, v20);
    v15 = v21 + 2;
    *v21 = v19;
    *(_QWORD *)(a1 + 976) = v21 + 2;
  }
  v23 = 4 * v18;
  *((_DWORD *)v15 - 1) = v17;
  a3 = 4LL * v17;
  if ( v23 != a3 )
    memset((char *)v15 + v23, 0, a3 - v23);
LABEL_11:
  v24 = (__int64 *)(a2 + 76);
  v25 = *(unsigned int *)(a2 + 32);
  if ( 8 * v25 )
  {
    v26 = (unsigned int *)(a2 + 76);
    do
    {
      a3 = v26[1];
      a4 = *v26;
      v26 += 2;
      *((_DWORD *)v15 + a3) += a4;
    }
    while ( v26 != (unsigned int *)(a2 + 76 + 8 * v25) );
    LODWORD(v25) = *(_DWORD *)(a2 + 32);
  }
  v27 = *(_DWORD *)(a2 + 60);
  v28 = v27 != 0 && (_DWORD)v25 != 0;
  if ( v28 )
  {
    a3 = 0;
    v29 = 0;
    while ( 1 )
    {
      v30 = *(unsigned int *)(a2 + 8 * a3 + 80);
      v31 = (unsigned int *)v15 + v30;
      v32 = *v31;
      a7 = (_DWORD *)v15 + (*(_DWORD *)(a2 + 8 * a3 + 80) ^ 1u);
      a4 = (unsigned int)*a7;
      if ( *v31 && v32 >= (unsigned int)a4 )
      {
        if ( (unsigned int)a4 >= v27 )
        {
          v27 = 0;
          v58 = *(unsigned int *)(a2 + 32);
          v35 = &v24[v58];
          if ( v58 * 8 )
            goto LABEL_24;
LABEL_48:
          v59 = *(_DWORD *)(a2 + 16);
          if ( v59 != -2 )
          {
            v79 = *(_QWORD *)(a1 + 24);
            v80 = *(_DWORD *)(v79 + 3612);
            LODWORD(v97) = 0;
            v96.m128i_i64[1] = 0;
            v96.m128i_i32[0] = v80;
            a5 = _mm_load_si128(&v96);
            sub_7C5F00(v79, v59, a3, a4, v29, (_DWORD)a7, (__int128)a5, v97);
          }
          v60 = "recompiled to true";
          return sub_7AFFA0(a1, (_BYTE *)a2, v60, *(double *)a5.m128i_i64);
        }
        *v31 = 0;
        v27 -= a4;
        *a7 = 0;
        v33 = v32 - a4;
        if ( v33 )
        {
          a4 = v29;
          a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(v30));
          ++v29;
          *(_QWORD *)(a2 + 8 * a4 + 76) = a5.m128i_i64[0];
          v28 &= v33 == 1;
        }
      }
      if ( (unsigned int)++a3 >= (unsigned int)v25 )
      {
        v34 = *(unsigned int *)(a2 + 32);
        v35 = &v24[v34];
        if ( !(v34 * 8) )
          goto LABEL_27;
        goto LABEL_24;
      }
    }
  }
  v29 = 0;
  v28 = 1;
  v35 = &v24[(unsigned int)v25];
  if ( !(8LL * (unsigned int)v25) )
  {
    if ( !v27 )
      goto LABEL_48;
    if ( v27 == 1 && *(_DWORD *)(a2 + 16) == -2 )
    {
LABEL_36:
      v87 = v29;
      v46 = nullptr;
      (*(void (__fastcall **)(__m128i *, __int64, __int64, __int64))(*(_QWORD *)a2 + 72LL))(&v96, a2, a3, a4);
      v48 = v87;
      v49 = v96.m128i_i64[0];
      if ( v87 )
      {
        v50 = (unsigned int *)v96.m128i_i64[0];
        v46 = nullptr;
        v51 = v96.m128i_i64[0] + 4LL * v87;
        do
        {
          v88 = v48;
          v95 = v46;
          sub_7B4F60(&v95, v50++);
          v46 = v95;
          v48 = v88;
        }
        while ( (unsigned int *)v51 != v50 );
        v49 = v96.m128i_i64[0];
      }
      if ( v49 )
      {
        v89 = v48;
        sub_186B220((void *)(v49 - 8));
        v48 = v89;
      }
      v52 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)&v53 = _mm_unpacklo_epi32(
                          _mm_cvtsi32_si128((unsigned int)*(unsigned __int8 *)(a2 + 48) + 1),
                          _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12))).m128i_u64[0];
      v96 = (__m128i)*(unsigned __int64 *)&v53;
      sub_11C4C20(v52, (unsigned int)v48, v46, &v96, v48, v47);
      result = sub_7AFFA0(a1, (_BYTE *)a2, "recompiled to clause", v53);
      if ( v46 )
        return sub_186B220(v46 - 2);
      return result;
    }
    goto LABEL_29;
  }
LABEL_24:
  a3 = a2 + 76;
  do
  {
    a4 = *(unsigned int *)(a3 + 4);
    a3 += 8;
    *((_DWORD *)v15 + a4) = 0;
    *((_DWORD *)v15 + ((unsigned int)a4 ^ 1)) = 0;
  }
  while ( (__int64 *)a3 != v35 );
  if ( !v27 )
    goto LABEL_48;
LABEL_27:
  if ( v27 == 1 && *(_DWORD *)(a2 + 16) == -2 )
    goto LABEL_36;
  if ( v28 )
  {
LABEL_29:
    v36 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 72LL);
    if ( v36 == sub_7C6130 )
    {
      v95 = nullptr;
      v37 = *(unsigned int *)(a2 + 32);
      if ( v37 * 8 )
      {
        v86 = v29;
        v38 = *(_QWORD *)(a2 + 76);
        v39 = (_QWORD *)sub_186B270(0x10u);
        *v39 = 2;
        v40 = (unsigned int *)(v39 + 1);
        v29 = v86;
        v41 = &v24[v37];
        v95 = v40;
        v42 = v40;
        while ( 1 )
        {
          ++v24;
          *v40 = HIDWORD(v38);
          v43 = *(v42 - 1);
          v44 = (unsigned int)(v43 + 1);
          *(v42 - 1) = v44;
          if ( v41 == v24 )
            break;
          v45 = *(v42 - 2);
          v38 = *v24;
          if ( v45 == (_DWORD)v44 )
          {
            v55 = (3 * v45 + 1) >> 1;
            v56 = 4 * v55 + 8;
            if ( 4 * v43 + 12 >= (unsigned int)v56 || v45 >= v55 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v96.m128i_i64, "Overflow encountered when expanding vector", v10);
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, &v96);
              sub_233E40((__int64)&v96);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v93 = (3 * v45 + 1) >> 1;
            v85 = v41;
            v90 = v29;
            v57 = (unsigned int *)sub_186B300(v42 - 2, v56);
            v42 = v57 + 2;
            v29 = v90;
            v95 = v57 + 2;
            v41 = v85;
            *v57 = v93;
            v40 = &v57[v57[1] + 2];
          }
          else
          {
            v40 = &v42[v44];
          }
        }
        v94 = nullptr;
        if ( !v29 )
        {
LABEL_62:
          sub_186B220(v42 - 2);
          goto LABEL_63;
        }
      }
      else
      {
        v94 = nullptr;
        v42 = nullptr;
        if ( !v29 )
        {
LABEL_63:
          sub_7B8AC0(a1, *(_DWORD *)(a2 + 16), (__int64 *)&v94, v27, *(unsigned __int8 *)(a2 + 48), a5);
          result = sub_7AFFA0(a1, (_BYTE *)a2, "recompiled to cardinality", *(double *)a5.m128i_i64);
          if ( v94 )
            return sub_186B220(v94 - 2);
          return result;
        }
      }
    }
    else
    {
      v92 = v29;
      ((void (__fastcall *)(unsigned int **, __int64, __int64 (__fastcall *)(), __int64))v36)(&v95, a2, sub_7C6130, a4);
      v29 = v92;
      v42 = v95;
      v94 = nullptr;
      if ( !v92 )
        goto LABEL_61;
    }
    v91 = v29;
    v61 = (_QWORD *)sub_186B270(0x10u);
    *v61 = 2;
    v62 = v61 + 1;
    v94 = v62;
    v63 = (__int64)v62;
    v64 = &v42[v91];
    while ( 1 )
    {
      v65 = *v42++;
      *v62 = v65;
      v66 = *(_DWORD *)(v63 - 4);
      v67 = (unsigned int)(v66 + 1);
      *(_DWORD *)(v63 - 4) = v67;
      if ( v42 == v64 )
        break;
      v68 = *(_DWORD *)(v63 - 8);
      if ( v68 == (_DWORD)v67 )
      {
        v69 = (3 * v68 + 1) >> 1;
        v70 = 4 * v69 + 8;
        if ( 4 * v66 + 12 >= (unsigned int)v70 || v68 >= v69 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_113C8C(v96.m128i_i64, "Overflow encountered when expanding vector", v8);
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v96);
          sub_233E40((__int64)&v96);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v71 = (unsigned int *)sub_186B300((void *)(v63 - 8), v70);
        v63 = (__int64)(v71 + 2);
        *v71 = v69;
        v72 = v71[1];
        v94 = (_DWORD *)v63;
        v62 = (_DWORD *)(v63 + 4 * v72);
      }
      else
      {
        v62 = (_DWORD *)(v63 + 4 * v67);
      }
    }
    v42 = v95;
LABEL_61:
    if ( !v42 )
      goto LABEL_63;
    goto LABEL_62;
  }
  *(_DWORD *)(a2 + 32) = v29;
  sub_81AF80(a2, v35, a3, a4);
  if ( *(_DWORD *)(a2 + 72) < v27 )
  {
    v82 = *(_DWORD *)(a2 + 16);
    v83 = *(_QWORD *)(a1 + 24);
    if ( v82 == -2 )
    {
      v96.m128i_i32[0] = 0;
      v96.m128i_i64[1] = 0;
      LODWORD(v97) = 0;
      a5 = _mm_load_si128(&v96);
      sub_11B4C90(v83, -2, v73, v74, v75, v76, (__int128)a5, 0);
    }
    else
    {
      v84 = *(_DWORD *)(v83 + 3612);
      v96.m128i_i64[1] = 0;
      LODWORD(v97) = 0;
      v96.m128i_i32[0] = v84;
      a5 = _mm_load_si128(&v96);
      sub_7C5F00(v83, v82 ^ 1, v73, v74, v75, v76, (__int128)a5, v97);
    }
    v60 = "recompiled to false";
    return sub_7AFFA0(a1, (_BYTE *)a2, v60, *(double *)a5.m128i_i64);
  }
  v77 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 152LL);
  if ( v77 == sub_7C59B0 )
  {
    *(_DWORD *)(a2 + 60) = v27;
    if ( v27 > 0xEE6B27FF )
    {
      sub_1872CE0("");
      sub_1873130(114, 48);
    }
    sub_81AF80(a2, v35, sub_7C59B0, v74);
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v77)(a2, v27);
  }
  if ( *(_DWORD *)(a2 + 16) == -2 )
    return sub_7AFDF0((_QWORD *)a1, a2);
  v78 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 536LL);
  result = v78 == sub_7C55E0 ? sub_7C55E0(a1) : v78(a1);
  if ( (_DWORD)result == 1 )
    return sub_7AFDF0((_QWORD *)a1, a2);
  return result;
}

