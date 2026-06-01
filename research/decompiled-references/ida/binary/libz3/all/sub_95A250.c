unsigned __int64 __fastcall sub_95A250(__int64 a1, __int64 a2, _DWORD *a3)
{
  char **exception; // rbp
  char **v4; // rbp
  _DWORD *v6; // r13
  _DWORD *v7; // r12
  unsigned __int64 result; // rax
  int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 i; // rax
  _DWORD *v23; // rdx
  _QWORD *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  _QWORD *v28; // rdx
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rbp
  int v32; // r8d
  __int64 v33; // rdx
  __m128i *v34; // r15
  __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  _DWORD *v39; // rdx
  _DWORD *v40; // rax
  _QWORD *v41; // rbx
  unsigned int v42; // eax
  __int64 v43; // rdx
  _QWORD *v44; // rdx
  _DWORD *v45; // rax
  __int64 v46; // rax
  unsigned int v47; // r11d
  int v48; // r9d
  _DWORD *v49; // rax
  __int64 v50; // rax
  const __m128i *v51; // rcx
  __m128i *v52; // r10
  _DWORD *v53; // rsi
  __int64 v54; // rdx
  __m128i *v55; // r12
  int v56; // r14d
  const __m128i *v57; // rbp
  const __m128i *v58; // rbx
  _DWORD *v59; // r10
  __int64 v60; // rcx
  __int64 v61; // rdx
  __m128i *v62; // rsi
  __m128i *v63; // rdx
  __m128i v64; // xmm0
  unsigned int v65; // ebp
  unsigned int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rcx
  _DWORD *v69; // r15
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  unsigned int v73; // ebp
  unsigned int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rdx
  _DWORD *v77; // r15
  __int64 v78; // rcx
  unsigned __int64 v79; // rax
  __int64 v80; // rcx
  _QWORD *v81; // rbx
  _QWORD *v82; // rbx
  size_t v83; // [rsp+8h] [rbp-A0h]
  int v84; // [rsp+8h] [rbp-A0h]
  __int64 v85; // [rsp+10h] [rbp-98h]
  unsigned int v86; // [rsp+18h] [rbp-90h]
  int v87; // [rsp+38h] [rbp-70h]
  __int64 v88[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = (_DWORD *)a2;
  v7 = a3;
  if ( !*(_WORD *)(a2 + 4) )
  {
    result = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( result )
    {
      if ( !*(_DWORD *)result && *(_DWORD *)(result + 4) == 2 )
        return result;
    }
  }
  if ( *a3 >= *(_DWORD *)a2 )
  {
    v7 = (_DWORD *)a2;
    v6 = a3;
  }
  v9 = v7[3];
  v10 = *(_QWORD *)(a1 + 80);
  v11 = (v6[3] - v9) ^ (v9 << 8);
  v12 = ((v11 ^ ((v9 - v11) << 16)) + v11 - v9) ^ ((v9 - v11) << 10);
  v13 = 24LL * (v12 & (unsigned int)(*(_DWORD *)(a1 + 88) - 1));
  v14 = 24LL * *(unsigned int *)(a1 + 88);
  v15 = v10 + v13;
  v16 = v10 + v14;
  if ( v13 != v14 )
  {
    for ( result = v10 + v13; v16 != result; result += 24LL )
    {
      v17 = *(_QWORD *)(result + 8);
      if ( v17 > 1 )
      {
        if ( *(_DWORD *)result == v12 && v7 == (_DWORD *)v17 && v6 == *(_DWORD **)(result + 16) )
          return result;
      }
      else if ( !v17 )
      {
        goto LABEL_13;
      }
    }
  }
  if ( v10 != v15 )
  {
    result = *(_QWORD *)(v10 + 8);
    if ( result <= 1 )
      goto LABEL_32;
LABEL_28:
    if ( *(_DWORD *)v10 == v12 && v7 == (_DWORD *)result && v6 == *(_DWORD **)(v10 + 16) )
      return result;
    do
    {
      v10 += 24;
      if ( v15 == v10 )
        break;
      result = *(_QWORD *)(v10 + 8);
      if ( result > 1 )
        goto LABEL_28;
LABEL_32:
      ;
    }
    while ( result );
  }
LABEL_13:
  v18 = *(unsigned int *)(a1 + 32);
  v19 = *(_QWORD *)(a1 + 24);
  v20 = 24LL * (v12 & (unsigned int)(v18 - 1));
  v21 = v19 + v20;
  if ( v20 != 24 * v18 )
  {
    for ( i = v19 + v20; v19 + 24 * v18 != i; i += 24 )
    {
      v23 = *(_DWORD **)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(i + 20) == v12 && v7 == v23 && v6 == *(_DWORD **)(i + 8) )
        {
LABEL_37:
          v87 = *(_DWORD *)(i + 16) + 1;
          goto LABEL_38;
        }
      }
      else if ( !v23 )
      {
        goto LABEL_20;
      }
    }
  }
  for ( ; v21 != v19; v19 += 24 )
  {
    v45 = *(_DWORD **)v19;
    if ( *(_QWORD *)v19 > 1u )
    {
      if ( *(_DWORD *)(v19 + 20) == v12 && v7 == v45 && v6 == *(_DWORD **)(v19 + 8) )
      {
        i = v19;
        goto LABEL_37;
      }
    }
    else if ( !v45 )
    {
      break;
    }
  }
LABEL_20:
  v24 = *(_QWORD **)(a1 + 48);
  ++v7[2];
  ++v6[2];
  if ( v24 )
  {
    v25 = *((_DWORD *)v24 - 1);
    if ( v25 == *((_DWORD *)v24 - 2) )
    {
      v73 = (3 * v25 + 1) >> 1;
      v74 = 16 * v73 + 8;
      if ( 16 * v25 + 8 >= v74 || v25 >= v73 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v88, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v88);
        sub_233E40((__int64)v88);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v75 = sub_186B270(v74);
      v76 = *(_QWORD *)(a1 + 48);
      v77 = (_DWORD *)v75;
      v24 = (_QWORD *)(v75 + 8);
      if ( v76 )
      {
        v78 = *(unsigned int *)(v76 - 4);
        *(_DWORD *)(v75 + 4) = v78;
        v79 = 0;
        v80 = 16 * v78;
        if ( v80 )
        {
          do
          {
            *(__m128i *)&v77[v79 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v76 + v79));
            v79 += 16LL;
          }
          while ( v80 != v79 );
        }
        sub_186B220((void *)(v76 - 8));
        v28 = &v24[2 * (unsigned int)v77[1]];
        v27 = v77[1] + 1;
      }
      else
      {
        *(_DWORD *)(v75 + 4) = 0;
        v28 = (_QWORD *)(v75 + 8);
        v27 = 1;
      }
      *(_QWORD *)(a1 + 48) = v24;
      *v77 = v73;
    }
    else
    {
      v26 = v25;
      v27 = v25 + 1;
      v28 = &v24[2 * v26];
    }
  }
  else
  {
    v81 = (_QWORD *)sub_186B270(0x28u);
    *v81 = 2;
    v27 = 1;
    v24 = v81 + 1;
    *(_QWORD *)(a1 + 48) = v24;
    v28 = v24;
  }
  *v28 = v7;
  v28[1] = v6;
  *((_DWORD *)v24 - 1) = v27;
  v29 = v7[3];
  v18 = *(unsigned int *)(a1 + 32);
  v87 = 1;
  v30 = (v29 << 8) ^ (v6[3] - v29);
  v12 = ((v29 - v30) << 10) ^ (v30 - v29 + (v30 ^ ((v29 - v30) << 16)));
LABEL_38:
  if ( 3 * (int)v18 < (unsigned int)(4 * (*(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40))) )
  {
    v86 = 2 * v18;
    v83 = 24LL * (unsigned int)(2 * v18);
    v46 = sub_186B270(v83);
    v47 = v86;
    v33 = v83;
    v31 = v46;
    if ( v86 )
    {
      v48 = v86 - 1;
      if ( v86 - 1 <= 2 )
      {
        *(_DWORD *)(v46 + 20) = 0;
        *(_DWORD *)(v46 + 44) = 0;
        *(_OWORD *)v46 = 0;
        *(_OWORD *)(v46 + 24) = 0;
      }
      else
      {
        v49 = (_DWORD *)(v46 + 20);
        do
        {
          *v49 = 0;
          v49 += 24;
          *(_OWORD *)(v49 - 29) = 0;
          *(_OWORD *)(v49 - 23) = 0;
          *(_OWORD *)(v49 - 17) = 0;
          *(_OWORD *)(v49 - 11) = 0;
          *(v49 - 18) = 0;
          *(v49 - 12) = 0;
          *(v49 - 6) = 0;
        }
        while ( v49 != (_DWORD *)(v31 + 96LL * (v86 >> 2) + 20) );
        v50 = v31 + 24LL * (v86 & 0xFFFFFFFC);
        if ( (v86 & 2) != 0 )
        {
          *(_DWORD *)(v50 + 20) = 0;
          *(_DWORD *)(v50 + 44) = 0;
          *(_OWORD *)v50 = 0;
          *(_OWORD *)(v50 + 24) = 0;
          if ( (v86 & 2) != 2 )
          {
            *(_QWORD *)(v50 + 64) = 0;
            *(_OWORD *)(v50 + 48) = 0;
          }
        }
      }
    }
    else
    {
      v48 = -1;
    }
    v51 = *(const __m128i **)(a1 + 24);
    v32 = v48;
    v52 = (__m128i *)((char *)v51 + 24 * *(unsigned int *)(a1 + 32));
    v34 = (__m128i *)(v31 + v83);
    if ( v51 != v52 )
    {
      v53 = v7;
      v54 = a1;
      v55 = (__m128i *)v31;
      v56 = v12;
      v57 = v52;
      v58 = v51;
      v59 = v53;
      v60 = v54;
      do
      {
        while ( v58->m128i_i64[0] <= 1uLL )
        {
          v58 = (const __m128i *)((char *)v58 + 24);
          if ( v57 == v58 )
            goto LABEL_92;
        }
        v61 = 24LL * (v58[1].m128i_i32[1] & (unsigned int)v48);
        v62 = (__m128i *)((char *)v55 + v61);
        if ( v61 == v83 )
        {
LABEL_96:
          if ( v62 == v55 )
          {
LABEL_105:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v63 = v55;
          while ( v63->m128i_i64[0] )
          {
            v63 = (__m128i *)((char *)v63 + 24);
            if ( v62 == v63 )
              goto LABEL_105;
          }
        }
        else
        {
          v63 = (__m128i *)((char *)v55 + v61);
          while ( v63->m128i_i64[0] )
          {
            v63 = (__m128i *)((char *)v63 + 24);
            if ( v34 == v63 )
              goto LABEL_96;
          }
        }
        v64 = _mm_loadu_si128(v58);
        v58 = (const __m128i *)((char *)v58 + 24);
        *v63 = v64;
        v63[1].m128i_i64[0] = v58[-1].m128i_i64[1];
      }
      while ( v57 != v58 );
LABEL_92:
      v31 = (__int64)v55;
      v7 = v59;
      v52 = *(__m128i **)(v60 + 24);
      v12 = v56;
      v33 = v83;
      a1 = v60;
    }
    if ( v52 )
    {
      v85 = v33;
      v84 = v48;
      sub_186B220(v52);
      v47 = v86;
      v33 = v85;
      v32 = v84;
    }
    *(_QWORD *)(a1 + 24) = v31;
    *(_DWORD *)(a1 + 32) = v47;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    v31 = *(_QWORD *)(a1 + 24);
    v32 = v18 - 1;
    v33 = 24 * v18;
    v34 = (__m128i *)(v31 + 24 * v18);
  }
  v35 = v12 & (unsigned int)v32;
  v36 = v31 + 24 * v35;
  if ( 24 * v35 != v33 )
  {
    v37 = v31 + 24 * v35;
    v38 = 0;
    while ( 1 )
    {
      v39 = *(_DWORD **)v37;
      if ( *(_QWORD *)v37 > 1u )
      {
        if ( *(_DWORD *)(v37 + 20) == v12 && v7 == v39 && v6 == *(_DWORD **)(v37 + 8) )
        {
          *(_QWORD *)v37 = v7;
          *(_QWORD *)(v37 + 8) = v6;
          *(_DWORD *)(v37 + 16) = v87;
          *(_DWORD *)(v37 + 20) = v12;
          goto LABEL_57;
        }
      }
      else
      {
        if ( !v39 )
        {
          if ( v38 )
            goto LABEL_103;
          v38 = v37;
          goto LABEL_104;
        }
        v38 = v37;
      }
      v37 += 24;
      if ( (__m128i *)v37 == v34 )
        goto LABEL_51;
    }
  }
  v38 = 0;
  while ( 1 )
  {
LABEL_51:
    if ( v36 == v31 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v40 = *(_DWORD **)v31;
    if ( *(_QWORD *)v31 <= 1u )
      break;
    if ( *(_DWORD *)(v31 + 20) == v12 && v7 == v40 && v6 == *(_DWORD **)(v31 + 8) )
    {
      *(_QWORD *)v31 = v7;
      *(_QWORD *)(v31 + 8) = v6;
      *(_DWORD *)(v31 + 16) = v87;
      *(_DWORD *)(v31 + 20) = v12;
      goto LABEL_57;
    }
LABEL_50:
    v31 += 24;
  }
  if ( v40 )
  {
    v38 = v31;
    goto LABEL_50;
  }
  if ( v38 )
LABEL_103:
    --*(_DWORD *)(a1 + 40);
  else
    v38 = v31;
LABEL_104:
  *(_QWORD *)v38 = v7;
  *(_QWORD *)(v38 + 8) = v6;
  *(_DWORD *)(v38 + 16) = v87;
  *(_DWORD *)(v38 + 20) = v12;
  ++*(_DWORD *)(a1 + 36);
LABEL_57:
  result = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(result + 16) == v87 )
  {
    v41 = *(_QWORD **)(a1 + 56);
    if ( v41 )
    {
      v42 = *((_DWORD *)v41 - 1);
      if ( v42 == *((_DWORD *)v41 - 2) )
      {
        v65 = (3 * v42 + 1) >> 1;
        v66 = 16 * v65 + 8;
        if ( 16 * v42 + 8 >= v66 || v42 >= v65 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v88, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v88);
          sub_233E40((__int64)v88);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v67 = sub_186B270(v66);
        v68 = *(_QWORD *)(a1 + 56);
        v69 = (_DWORD *)v67;
        v41 = (_QWORD *)(v67 + 8);
        if ( v68 )
        {
          v70 = *(unsigned int *)(v68 - 4);
          *(_DWORD *)(v67 + 4) = v70;
          v71 = 0;
          v72 = 16 * v70;
          if ( v72 )
          {
            do
            {
              *(__m128i *)&v69[v71 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v68 + v71));
              v71 += 16LL;
            }
            while ( v72 != v71 );
          }
          sub_186B220((void *)(v68 - 8));
          v44 = &v41[2 * (unsigned int)v69[1]];
          result = (unsigned int)(v69[1] + 1);
        }
        else
        {
          *(_DWORD *)(v67 + 4) = 0;
          v44 = (_QWORD *)(v67 + 8);
          result = 1;
        }
        *(_QWORD *)(a1 + 56) = v41;
        *v69 = v65;
      }
      else
      {
        v43 = v42;
        result = v42 + 1;
        v44 = &v41[2 * v43];
      }
    }
    else
    {
      v82 = (_QWORD *)sub_186B270(0x28u);
      *v82 = 2;
      result = 1;
      v41 = v82 + 1;
      *(_QWORD *)(a1 + 56) = v41;
      v44 = v41;
    }
    *v44 = v7;
    v44[1] = v6;
    *((_DWORD *)v41 - 1) = result;
  }
  return result;
}

