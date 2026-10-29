__int64 __fastcall sub_D97620(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, char *a6)
{
  __m128i *exception; // rax
  __m128i *v7; // r12
  char *v8; // rax
  void **v10; // r13
  __int64 *v11; // r12
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 *v14; // rcx
  int v15; // edi
  unsigned int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *i; // rax
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // rbx
  unsigned int v25; // r11d
  __int64 v26; // rcx
  __int64 *v27; // r14
  int v28; // esi
  __int64 v29; // r11
  _QWORD *v30; // rdi
  __int64 *v31; // rax
  __int64 *v32; // rbp
  __int64 v33; // rax
  __int64 *v34; // r12
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  int v37; // eax
  _QWORD *v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // r13
  unsigned int v46; // eax
  unsigned int v47; // edx
  size_t v48; // rsi
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 *v51; // rbp
  unsigned __int64 v52; // r12
  __int64 v53; // rsi
  __int64 result; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 *v58; // rax
  int v59; // esi
  const __m128i *v60; // r10
  __int64 v61; // rax
  unsigned __int64 v62; // r14
  __int64 *v63; // r15
  __int64 *v64; // rbp
  __int64 v65; // r12
  void **v66; // r9
  _QWORD *v67; // r13
  const __m128i *v68; // rbx
  int v69; // r10d
  __int64 v70; // rdx
  _QWORD *v71; // rsi
  int v72; // [rsp+0h] [rbp-E8h]
  __int64 v73; // [rsp+8h] [rbp-E0h]
  __m128i v74; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v75; // [rsp+20h] [rbp-C8h]
  __int64 v76; // [rsp+28h] [rbp-C0h]
  __int64 v77; // [rsp+30h] [rbp-B8h]
  __int64 v78; // [rsp+38h] [rbp-B0h]
  __int64 v79; // [rsp+40h] [rbp-A8h]
  __int64 *v80; // [rsp+48h] [rbp-A0h]
  void **v81; // [rsp+50h] [rbp-98h]
  int v82; // [rsp+5Ch] [rbp-8Ch]
  __int64 v83; // [rsp+60h] [rbp-88h]
  __int64 v84; // [rsp+70h] [rbp-78h] BYREF
  __int64 v85; // [rsp+78h] [rbp-70h]
  __int64 v86; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v87[2]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v88[9]; // [rsp+A0h] [rbp-48h] BYREF

  v10 = (void **)a5;
  v11 = a3;
  v12 = a3[2];
  v13 = *(unsigned int *)(a5 + 8);
  v78 = a4;
  v14 = *(__int64 **)a5;
  v15 = *(_DWORD *)(v12 + 12);
  v16 = v13 - 1;
  v13 *= 16;
  v73 = a2;
  v17 = (__int64 *)(*(_QWORD *)a5 + v13);
  v18 = 16LL * (v15 & v16);
  v19 = (__int64 *)(*(_QWORD *)a5 + v18);
  if ( v18 != v13 )
  {
    for ( i = (__int64 *)((char *)v14 + v18); v17 != i; i += 2 )
    {
      v18 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v15 && v12 == v18 )
          goto LABEL_19;
      }
      else if ( !v18 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v19 != v14; v14 += 2 )
  {
    v56 = *v14;
    if ( (unsigned __int64)*v14 > 1 )
    {
      if ( *(_DWORD *)(v56 + 12) == v15 && v12 == v56 )
      {
        i = v14;
LABEL_19:
        v76 = i[1];
        goto LABEL_20;
      }
    }
    else if ( !v56 )
    {
      break;
    }
  }
LABEL_8:
  v21 = *(_DWORD *)(v12 + 32);
  v22 = sub_186B270(0x38u);
  v23 = *(_QWORD *)(a1 + 32);
  v76 = v22;
  v74 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)(unsigned __int64)v22);
  sub_13478B0(v22, v23, v21);
  v18 = *((unsigned int *)v10 + 2);
  if ( 3 * (int)v18 < (unsigned int)(4 * (*((_DWORD *)v10 + 3) + *((_DWORD *)v10 + 4))) )
  {
    LODWORD(v77) = 2 * v18;
    v75 = 16LL * (unsigned int)(2 * v18);
    v58 = (__int64 *)sub_186B270(v75);
    v26 = v75;
    v59 = v77;
    v24 = v58;
    v19 = (__int64 *)((char *)v58 + v75);
    if ( (_DWORD)v77 )
    {
      v18 = v75 & 0x10;
      if ( (v75 & 0x10) == 0 || (*(_OWORD *)v58 = 0, v58 += 2, v58 != v19) )
      {
        do
        {
          *(_OWORD *)v58 = 0;
          v58 += 4;
          *((_OWORD *)v58 - 1) = 0;
        }
        while ( v58 != v19 );
      }
    }
    v60 = (const __m128i *)*v10;
    v25 = v59 - 1;
    v27 = v19;
    a6 = (char *)*v10 + 16 * *((unsigned int *)v10 + 2);
    if ( *v10 != a6 )
    {
      v61 = a1;
      v62 = v12;
      v63 = v19;
      v64 = v19;
      v19 = v11;
      v65 = (__int64)*v10 + 16 * *((unsigned int *)v10 + 2);
      v66 = v10;
      v67 = v24;
      v68 = v60;
      v69 = v59;
      do
      {
        v18 = v68->m128i_i64[0];
        if ( v68->m128i_i64[0] > 1uLL )
        {
          v70 = 16LL * (*(_DWORD *)(v18 + 12) & v25);
          v71 = &v67[(unsigned __int64)v70 / 8];
          if ( v26 == v70 )
          {
LABEL_74:
            if ( v67 == v71 )
            {
LABEL_86:
              v82 = v69;
              v81 = v66;
              v80 = v19;
              v79 = v61;
              v77 = v26;
              LODWORD(v75) = v25;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v18 = (__int64)v67;
            while ( *(_QWORD *)v18 )
            {
              v18 += 16;
              if ( v71 == (_QWORD *)v18 )
                goto LABEL_86;
            }
          }
          else
          {
            v18 = (__int64)&v67[(unsigned __int64)v70 / 8];
            while ( *(_QWORD *)v18 )
            {
              v18 += 16;
              if ( v64 == (__int64 *)v18 )
                goto LABEL_74;
            }
          }
          *(__m128i *)v18 = _mm_loadu_si128(v68);
        }
        ++v68;
      }
      while ( (const __m128i *)v65 != v68 );
      v24 = v67;
      v10 = v66;
      a6 = (char *)*v66;
      v12 = v62;
      v11 = v19;
      v27 = v63;
      v59 = v69;
      a1 = v61;
    }
    if ( a6 )
    {
      LODWORD(v79) = v59;
      v77 = v26;
      LODWORD(v75) = v25;
      sub_186B220(a6);
      v26 = v77;
      v25 = v75;
    }
    *v10 = v24;
    *((_DWORD *)v10 + 2) = v59;
    *((_DWORD *)v10 + 4) = 0;
  }
  else
  {
    v24 = *v10;
    v25 = v18 - 1;
    v26 = 16LL * (unsigned int)v18;
    v27 = (__int64 *)((char *)*v10 + v26);
  }
  v28 = *(_DWORD *)(v12 + 12);
  v29 = 16LL * (v28 & v25);
  v30 = &v24[(unsigned __int64)v29 / 8];
  if ( v29 == v26 )
  {
    v14 = nullptr;
    while ( 1 )
    {
LABEL_54:
      if ( v30 == v24 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v57 = *v24;
      if ( *v24 > 1u )
      {
        if ( *(_DWORD *)(v57 + 12) == v28 && v12 == v57 )
        {
          *(__m128i *)v24 = _mm_load_si128(&v74);
          goto LABEL_20;
        }
      }
      else
      {
        if ( !v57 )
        {
          if ( v14 )
            --*((_DWORD *)v10 + 4);
          else
            v14 = v24;
          goto LABEL_85;
        }
        v14 = v24;
      }
      v24 += 2;
    }
  }
  v31 = &v24[(unsigned __int64)v29 / 8];
  v14 = nullptr;
  while ( 1 )
  {
    v18 = *v31;
    if ( (unsigned __int64)*v31 <= 1 )
      break;
    if ( *(_DWORD *)(v18 + 12) == v28 && v12 == v18 )
    {
      *(__m128i *)v31 = _mm_load_si128(&v74);
      goto LABEL_20;
    }
LABEL_14:
    v31 += 2;
    if ( v31 == v27 )
      goto LABEL_54;
  }
  if ( v18 )
  {
    v14 = v31;
    goto LABEL_14;
  }
  if ( v14 )
    --*((_DWORD *)v10 + 4);
  else
    v14 = v31;
LABEL_85:
  *(__m128i *)v14 = _mm_load_si128(&v74);
  ++*((_DWORD *)v10 + 3);
LABEL_20:
  v32 = v11 + 4;
  v77 = *(_QWORD *)(a1 + 32);
  v83 = v77;
  v33 = *((unsigned int *)v11 + 6);
  v34 = &v11[v33 + 4];
  if ( v33 * 8 )
  {
    v35 = nullptr;
    v74.m128i_i64[0] = (__int64)&v84;
    do
    {
      while ( 1 )
      {
        v42 = *(_QWORD *)(a1 + 40);
        v43 = *v32;
        v84 = 0;
        v44 = *(_QWORD *)(v42 + 64);
        v85 = *(_QWORD *)(v42 + 8);
        sub_1435270(
          v44,
          v43,
          v74.m128i_i32[0],
          (_DWORD)v14,
          (_DWORD)v19,
          (_DWORD)a6,
          v72,
          v73,
          v74.m128i_i64[0],
          v74.m128i_i64[1],
          v75);
        sub_13615B0(&v86, v73, v84);
        v45 = v86;
        if ( v35 )
        {
          v46 = *((_DWORD *)v35 - 1);
          if ( v46 == *((_DWORD *)v35 - 2) )
          {
            v47 = (3 * v46 + 1) >> 1;
            v48 = 8 * v47 + 8;
            if ( 8 * v46 + 8 >= (unsigned int)v48 || v46 >= v47 )
            {
              exception = (__m128i *)__cxa_allocate_exception(0x28u);
              v87[0] = v88;
              v7 = exception;
              v8 = (char *)operator new(0x2Bu);
              strcpy(v8, "Overflow encountered when expanding vector");
              v7->m128i_i64[1] = (__int64)v8;
              v7->m128i_i64[0] = (__int64)off_1C63128;
              v87[0] = v88;
              v7[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
              v87[1] = 0;
              v88[0] = 0;
              sub_233E40((__int64)v87);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v75) = (3 * v46 + 1) >> 1;
            v49 = sub_186B300(v35 - 1, v48);
            v35 = (_QWORD *)(v49 + 8);
            *(_DWORD *)v49 = v75;
            LODWORD(v49) = *(_DWORD *)(v49 + 4);
            v38 = &v35[(unsigned int)v49];
            v37 = v49 + 1;
          }
          else
          {
            v36 = v46;
            v37 = v46 + 1;
            v38 = &v35[v36];
          }
        }
        else
        {
          v55 = (_QWORD *)sub_186B270(0x18u);
          v38 = v55 + 1;
          *v55 = 2;
          v37 = 1;
          v35 = v38;
        }
        v39 = v84;
        *v38 = v45;
        *((_DWORD *)v35 - 1) = v37;
        if ( v39 )
        {
          v40 = v85;
          v41 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v41 )
            break;
        }
        if ( v34 == ++v32 )
          goto LABEL_32;
      }
      sub_15D7BC0(v40, v39);
      ++v32;
    }
    while ( v34 != v32 );
LABEL_32:
    if ( !sub_1347AE0(v76, v35, v38) )
      sub_1348F50(v76, v35, v78);
    v50 = v77;
    v51 = v35;
    v52 = (unsigned __int64)&v35[*((unsigned int *)v35 - 1)];
    if ( (unsigned __int64)v35 < v52 )
    {
      do
      {
        while ( 1 )
        {
          v53 = *v51;
          if ( *v51 )
          {
            v41 = (*(_DWORD *)(v53 + 8))-- == 1;
            if ( v41 )
              break;
          }
          if ( (unsigned __int64)++v51 >= v52 )
            return sub_186B220(v35 - 1);
        }
        ++v51;
        sub_15D7BC0(v50, v53);
      }
      while ( (unsigned __int64)v51 < v52 );
    }
    return sub_186B220(v35 - 1);
  }
  else
  {
    result = sub_1347AE0(v76, 0, v18);
    if ( !result )
      return sub_1348F50(v76, 0, v78);
  }
  return result;
}

