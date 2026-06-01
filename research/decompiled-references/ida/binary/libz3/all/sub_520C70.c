__int64 __fastcall sub_520C70(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int **a4,
        unsigned int *a5,
        char a6,
        __int64 a7)
{
  char **v7; // r13
  char **v8; // r12
  char **exception; // r13
  unsigned __int64 v10; // rax
  _QWORD **v11; // r14
  _QWORD *v12; // r15
  _QWORD **v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // r10d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  _QWORD *v27; // r15
  __int64 v28; // r8
  __int64 v29; // r14
  unsigned __int64 i; // rbp
  __int64 v31; // rax
  int v32; // edx
  _QWORD *v33; // rax
  unsigned int v34; // edx
  unsigned int v35; // r9d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rax
  int v39; // edx
  unsigned __int64 v40; // r13
  unsigned int v41; // r14d
  _QWORD *v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // ebp
  _QWORD *v45; // rax
  size_t v46; // rdx
  int *v47; // rcx
  unsigned int v48; // edx
  __int64 v49; // rax
  __int64 result; // rax
  size_t v51; // rdi
  unsigned int *v52; // r15
  __int64 *v53; // r12
  __int64 v54; // rdi
  __int64 *v55; // rsi
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __m128i v59; // xmm0
  unsigned __int64 v60; // rdx
  __int64 *v61; // rax
  __int64 v62; // rsi
  __int64 *v63; // rbp
  void *v64; // rdi
  _QWORD *v65; // r14
  __int64 v66; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rax
  __int64 *v69; // rax
  _DWORD *v70; // rdx
  __int64 v71; // r8
  unsigned int v72; // [rsp+0h] [rbp-A8h]
  unsigned int v73; // [rsp+0h] [rbp-A8h]
  _QWORD *v74; // [rsp+0h] [rbp-A8h]
  unsigned int v75; // [rsp+0h] [rbp-A8h]
  __int64 v76; // [rsp+8h] [rbp-A0h]
  unsigned int v77; // [rsp+8h] [rbp-A0h]
  __int64 v84; // [rsp+38h] [rbp-70h]
  __int64 v85[11]; // [rsp+50h] [rbp-58h] BYREF

  v10 = *(_QWORD *)(a1 + 48);
  v11 = (_QWORD **)(v10 + 8LL * a2);
  v12 = *v11;
  v13 = (_QWORD **)(v10 + 8LL * a3);
  v84 = 8LL * a2;
  if ( *v11 && (v14 = *((unsigned int *)v12 - 1), (_DWORD)v14) )
  {
    v15 = 8 * v14;
    v16 = (_QWORD *)sub_186B270(0x18u);
    v17 = 0;
    v18 = 1;
    *v16 = 2;
    v19 = v16 + 1;
    v20 = v19;
    while ( 1 )
    {
      v17 += 8;
      *v19 = *v12;
      *((_DWORD *)v20 - 1) = v18;
      if ( v15 == v17 )
        break;
      v12 = (_QWORD *)((char *)*v11 + v17);
      if ( *((_DWORD *)v20 - 2) == v18 )
      {
        v22 = (3 * v18 + 1) >> 1;
        v23 = 8 * v22 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v23 || v18 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v85, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v76 = v17;
        v72 = (3 * v18 + 1) >> 1;
        v24 = (unsigned int *)sub_186B300(v20 - 1, v23);
        v20 = v24 + 2;
        v17 = v76;
        *v24 = v72;
        v25 = v24[1];
        v26 = v25;
        v19 = &v20[v25];
        v18 = v26 + 1;
      }
      else
      {
        v21 = v18++;
        v19 = &v20[v21];
      }
    }
    v27 = *v13;
    if ( *v13 )
    {
      v28 = *((unsigned int *)v27 - 1);
      if ( (_DWORD)v28 )
      {
        v29 = 8 * v28;
        for ( i = 0; ; v27 = &(*v13)[i / 8] )
        {
          v34 = *((_DWORD *)v20 - 1);
          if ( v34 == *((_DWORD *)v20 - 2) )
          {
            v35 = (3 * v34 + 1) >> 1;
            v36 = 8 * v35 + 8;
            if ( 8 * v34 + 8 >= (unsigned int)v36 || v34 >= v35 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v85, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v85);
              sub_233E40((__int64)v85);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v73 = (3 * v34 + 1) >> 1;
            v37 = (unsigned int *)sub_186B300(v20 - 1, v36);
            v20 = v37 + 2;
            *v37 = v73;
            v38 = v37[1];
            v39 = v38;
            v33 = &v20[v38];
            v32 = v39 + 1;
          }
          else
          {
            v31 = v34;
            v32 = v34 + 1;
            v33 = &v20[v31];
          }
LABEL_14:
          i += 8LL;
          *v33 = *v27;
          *((_DWORD *)v20 - 1) = v32;
          if ( i == v29 )
            break;
        }
        v40 = *(_QWORD *)(a1 + 48);
        if ( !a6 )
          goto LABEL_21;
        v65 = (_QWORD *)(v40 + v84);
        v66 = *(_QWORD *)(v40 + v84);
        if ( !v66 )
          goto LABEL_60;
        goto LABEL_53;
      }
    }
    v10 = *(_QWORD *)(a1 + 48);
  }
  else
  {
    v27 = *v13;
    if ( *v13 )
    {
      v67 = *((unsigned int *)v27 - 1);
      if ( (_DWORD)v67 )
      {
        v29 = 8 * v67;
        i = 0;
        v68 = (_QWORD *)sub_186B270(0x18u);
        v32 = 1;
        *v68 = 2;
        v33 = v68 + 1;
        v20 = v33;
        goto LABEL_14;
      }
    }
    v20 = nullptr;
  }
  v40 = v10;
  if ( a6 )
  {
    v65 = (_QWORD *)(v10 + v84);
    v66 = *(_QWORD *)(v10 + v84);
    if ( !v66 )
    {
LABEL_54:
      if ( !v20 )
      {
        *v65 = 0;
LABEL_56:
        v41 = a2;
        goto LABEL_28;
      }
LABEL_60:
      v85[0] = (__int64)v20;
      sub_52CD90(v65, v85);
      goto LABEL_56;
    }
LABEL_53:
    sub_186B220((void *)(v66 - 8));
    goto LABEL_54;
  }
LABEL_21:
  if ( v40 )
  {
    v41 = *(_DWORD *)(v40 - 4);
    if ( v41 == *(_DWORD *)(v40 - 8) )
    {
      v75 = (3 * v41 + 1) >> 1;
      v51 = 8 * v75 + 8;
      if ( 8 * v41 + 8 >= (unsigned int)v51 || v41 >= (3 * v41 + 1) >> 1 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v52 = (unsigned int *)sub_186B270(v51);
      v40 = (unsigned __int64)(v52 + 2);
      v53 = *(__int64 **)(a1 + 48);
      if ( v53 )
      {
        v54 = *((unsigned int *)v53 - 1);
        v52[1] = v54;
        v55 = &v53[v54];
        if ( v53 != v55 )
        {
          v56 = 8 * v54 - 8;
          if ( v56 <= 8 || v40 < (unsigned __int64)(v53 + 2) && v53 < (__int64 *)v52 + 3 )
          {
            v69 = v53;
            v70 = v52 + 2;
            do
            {
              v71 = *v69;
              *v69++ = 0;
              v70 += 2;
              *((_QWORD *)v70 - 1) = v71;
            }
            while ( v55 != v69 );
          }
          else
          {
            v57 = 0;
            v58 = (v56 >> 3) + 1;
            do
            {
              v59 = _mm_loadu_si128((const __m128i *)&v53[v57 / 2]);
              *(_OWORD *)&v53[v57 / 2] = 0;
              *(__m128i *)&v52[v57 + 2] = v59;
              v57 += 4LL;
            }
            while ( 4 * (v58 >> 1) != v57 );
            if ( (v58 & 1) != 0 )
            {
              v60 = v58 & 0xFFFFFFFFFFFFFFFELL;
              v61 = &v53[v60];
              v62 = *v61;
              *v61 = 0;
              *(_QWORD *)(v40 + 8 * v60) = v62;
            }
          }
        }
        v63 = &v53[v54];
        if ( (_DWORD)v54 )
        {
          do
          {
            while ( *v53 )
            {
              v64 = (void *)(*v53++ - 8);
              sub_186B220(v64);
              if ( v63 == v53 )
                goto LABEL_47;
            }
            ++v53;
          }
          while ( v53 != v63 );
LABEL_47:
          v53 = *(__int64 **)(a1 + 48);
        }
        sub_186B220(v53 - 1);
        v43 = v52[1];
        v42 = (_QWORD *)(v40 + 8 * v43);
      }
      else
      {
        v52[1] = 0;
        v42 = v52 + 2;
        LODWORD(v43) = 0;
      }
      *(_QWORD *)(a1 + 48) = v40;
      *v52 = v75;
    }
    else
    {
      v42 = (_QWORD *)(v40 + 8LL * v41);
      LODWORD(v43) = *(_DWORD *)(v40 - 4);
    }
  }
  else
  {
    v43 = sub_186B270(0x18u);
    v40 = v43 + 8;
    *(_QWORD *)v43 = 2;
    v41 = 0;
    v42 = (_QWORD *)(v43 + 8);
    *(_QWORD *)(a1 + 48) = v43 + 8;
    LODWORD(v43) = 0;
  }
  *v42 = 0;
  v74 = v42;
  if ( v20 )
  {
    v44 = *((_DWORD *)v20 - 1);
    v77 = *((_DWORD *)v20 - 2);
    v45 = (_QWORD *)sub_186B270(8LL * v77 + 8);
    *v45 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v77), _mm_cvtsi32_si128(v44)).m128i_u64[0];
    *v74 = v45 + 1;
    v46 = 8LL * *((unsigned int *)v20 - 1);
    if ( v46 <= 8 )
    {
      if ( v46 == 8 )
        v45[1] = *v20;
      v40 = *(_QWORD *)(a1 + 48);
      LODWORD(v43) = *(_DWORD *)(v40 - 4);
    }
    else
    {
      memcpy(v45 + 1, v20, v46);
      v40 = *(_QWORD *)(a1 + 48);
      LODWORD(v43) = *(_DWORD *)(v40 - 4);
    }
  }
  *(_DWORD *)(v40 - 4) = v43 + 1;
LABEL_28:
  *a5 = v41;
  v47 = *a4;
  if ( *a4 )
    v48 = *(v47 - 1);
  else
    v48 = 0;
  v49 = sub_4DD3A0(a2, a3, v48, v47, a4[1], v41);
  result = sub_52C6B0(a7, v49);
  if ( v20 )
    return sub_186B220(v20 - 1);
  return result;
}

