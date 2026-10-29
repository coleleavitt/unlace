__int64 __fastcall sub_CCD400(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v4; // r12
  char **exception; // r12
  __int64 v6; // r8
  unsigned __int64 *v8; // r13
  __int64 v9; // rdx
  unsigned __int64 *v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  _QWORD *v13; // rax
  __m128i *v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  __m128i v18; // xmm1
  __int64 v19; // rsi
  int v20; // eax
  unsigned __int64 *v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // r12
  __int64 v26; // r13
  __int64 *v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // edi
  unsigned int v31; // edx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 *v34; // r9
  __int64 v35; // rdx
  _QWORD *v36; // r15
  unsigned int v37; // eax
  __int64 v38; // rdx
  _QWORD *v39; // rdx
  _QWORD *v40; // r15
  unsigned int v41; // r14d
  size_t v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdi
  _DWORD *v45; // rsi
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rsi
  unsigned int v50; // r14d
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rdx
  _DWORD *v54; // rcx
  __int64 v55; // rsi
  unsigned __int64 v56; // rax
  __int64 v57; // rsi
  __m128i v58; // [rsp+8h] [rbp-90h] BYREF
  __m128i v59; // [rsp+18h] [rbp-80h] BYREF
  __int64 v60; // [rsp+28h] [rbp-70h]
  __int64 v61[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = a3;
  v8 = *(unsigned __int64 **)a3;
  v9 = *(unsigned int *)(a3 + 8);
  *(_BYTE *)(a1 + 24) = 1;
  v60 = a4;
  v9 *= 16;
  *(_DWORD *)(a1 + 8) = 0;
  v10 = (unsigned __int64 *)((char *)v8 + v9);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &off_1C74C90;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = 0;
  if ( v8 != (unsigned __int64 *)((char *)v8 + v9) )
  {
    while ( *v8 <= 1 )
    {
      v8 += 2;
      if ( v10 == v8 )
        goto LABEL_18;
    }
    if ( v10 != v8 )
    {
      v11 = v8[1];
      v58.m128i_i64[1] = v6;
      v12 = *v8;
      v58.m128i_i64[0] = *(_QWORD *)(v11 + 16);
      v13 = (_QWORD *)sub_186B270(0x28u);
      v14 = (__m128i *)(v13 + 1);
      v15 = *v8;
      *v13 = 2;
      v16 = v8[1];
      v6 = v58.m128i_i64[1];
      *(_QWORD *)(a1 + 40) = v14;
      v17 = (__int64)v14;
      v18 = _mm_loadl_epi64(&v58);
      v19 = *(_QWORD *)(v16 + 16);
      v20 = 1;
      while ( 1 )
      {
        *v14 = _mm_unpacklo_epi64((__m128i)v12, v18);
        *(_DWORD *)(v17 - 4) = v20;
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        v21 = v8 + 2;
        if ( v10 == v8 + 2 )
          break;
        while ( 1 )
        {
          v12 = *v21;
          v8 = v21;
          if ( *v21 > 1 )
            break;
          v21 += 2;
          if ( v10 == v21 )
            goto LABEL_18;
        }
        if ( v10 == v21 )
          break;
        v18 = _mm_loadl_epi64((const __m128i *)(v21[1] + 16));
        v22 = *(_DWORD *)(v17 - 4);
        if ( v22 == *(_DWORD *)(v17 - 8) )
        {
          v41 = (3 * v22 + 1) >> 1;
          v42 = 16 * v41 + 8;
          if ( 16 * v22 + 8 >= (unsigned int)v42 || v22 >= v41 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v61, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v61);
            sub_233E40((__int64)v61);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v58.m128i_i64[1] = v6;
          v58.m128i_i64[0] = v18.m128i_i64[0];
          v43 = sub_186B270(v42);
          v44 = *(_QWORD *)(a1 + 40);
          v6 = v58.m128i_i64[1];
          v45 = (_DWORD *)v43;
          v17 = v43 + 8;
          v18 = _mm_loadl_epi64(&v58);
          if ( v44 )
          {
            v46 = *(unsigned int *)(v44 - 4);
            *(_DWORD *)(v43 + 4) = v46;
            v47 = 0;
            v48 = 16 * v46;
            if ( v48 )
            {
              do
              {
                *(__m128i *)&v45[v47 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v44 + v47));
                v47 += 16LL;
              }
              while ( v48 != v47 );
            }
            v59.m128i_i64[1] = v6;
            v58.m128i_i64[1] = v17;
            v58.m128i_i64[0] = (__int64)v45;
            v59.m128i_i64[0] = v18.m128i_i64[0];
            sub_186B220((void *)(v44 - 8));
            v17 = v58.m128i_i64[1];
            v45 = (_DWORD *)v58.m128i_i64[0];
            v18 = _mm_loadl_epi64(&v59);
            v6 = v59.m128i_i64[1];
            v14 = (__m128i *)(v58.m128i_i64[1] + 16LL * *(unsigned int *)(v58.m128i_i64[0] + 4));
            v20 = *(_DWORD *)(v58.m128i_i64[0] + 4) + 1;
          }
          else
          {
            *(_DWORD *)(v43 + 4) = 0;
            v14 = (__m128i *)(v43 + 8);
            v20 = 1;
          }
          *v45 = v41;
          v49 = v21[1];
          *(_QWORD *)(a1 + 40) = v17;
          v15 = *v21;
          v19 = *(_QWORD *)(v49 + 16);
        }
        else
        {
          v23 = v22;
          v19 = v18.m128i_i64[0];
          v20 = v22 + 1;
          v15 = *v21;
          v14 = (__m128i *)(v17 + 16 * v23);
        }
      }
    }
  }
LABEL_18:
  result = v60;
  v25 = *(_QWORD *)(v60 + 120);
  if ( !v25 )
    return result;
  result = *(unsigned int *)(v25 - 4);
  v26 = v25 + 8 * result;
  if ( v26 == v25 )
    return result;
  do
  {
    v27 = *(__int64 **)v6;
    v28 = *(_QWORD *)(*(_QWORD *)v25 + 16LL);
    v29 = *(unsigned int *)(v6 + 8);
    v30 = *(_DWORD *)(v28 + 12);
    v31 = v29 - 1;
    v29 *= 16;
    v32 = *(_QWORD *)v6 + v29;
    v33 = 16LL * (v30 & v31);
    v34 = (__int64 *)(*(_QWORD *)v6 + v33);
    if ( v33 != v29 )
    {
      for ( result = *(_QWORD *)v6 + v33; v32 != result; result += 16 )
      {
        v35 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v35 + 12) == v30 && v28 == v35 )
            goto LABEL_31;
        }
        else if ( !v35 )
        {
          goto LABEL_27;
        }
      }
    }
    if ( v27 == v34 )
    {
LABEL_27:
      v36 = *(_QWORD **)(a1 + 40);
      ++*(_DWORD *)(v28 + 8);
      if ( !v36 )
        goto LABEL_41;
      goto LABEL_28;
    }
    while ( 1 )
    {
      result = *v27;
      if ( (unsigned __int64)*v27 <= 1 )
        break;
      if ( *(_DWORD *)(result + 12) == v30 && v28 == result )
        goto LABEL_31;
LABEL_37:
      v27 += 2;
      if ( v34 == v27 )
        goto LABEL_27;
    }
    if ( result )
      goto LABEL_37;
    v36 = *(_QWORD **)(a1 + 40);
    ++*(_DWORD *)(v28 + 8);
    if ( !v36 )
    {
LABEL_41:
      v58.m128i_i64[0] = v6;
      v40 = (_QWORD *)sub_186B270(0x28u);
      *v40 = 2;
      v6 = v58.m128i_i64[0];
      result = 1;
      v36 = v40 + 1;
      *(_QWORD *)(a1 + 40) = v36;
      v39 = v36;
      goto LABEL_30;
    }
LABEL_28:
    v37 = *((_DWORD *)v36 - 1);
    if ( v37 == *((_DWORD *)v36 - 2) )
    {
      v50 = (3 * v37 + 1) >> 1;
      v51 = 16 * v50 + 8;
      if ( 16 * v37 + 8 >= v51 || v37 >= v50 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v61, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v61);
        sub_233E40((__int64)v61);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v58.m128i_i64[0] = v6;
      v52 = sub_186B270(v51);
      v53 = *(_QWORD *)(a1 + 40);
      v6 = v58.m128i_i64[0];
      v54 = (_DWORD *)v52;
      v36 = (_QWORD *)(v52 + 8);
      if ( v53 )
      {
        v55 = *(unsigned int *)(v53 - 4);
        *(_DWORD *)(v52 + 4) = v55;
        v56 = 0;
        v57 = 16 * v55;
        if ( v57 )
        {
          do
          {
            *(__m128i *)&v54[v56 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v53 + v56));
            v56 += 16LL;
          }
          while ( v56 != v57 );
        }
        v58.m128i_i64[1] = v6;
        v58.m128i_i64[0] = (__int64)v54;
        sub_186B220((void *)(v53 - 8));
        v6 = v58.m128i_i64[1];
        v54 = (_DWORD *)v58.m128i_i64[0];
        v39 = &v36[2 * *(unsigned int *)(v58.m128i_i64[0] + 4)];
        result = (unsigned int)(*(_DWORD *)(v58.m128i_i64[0] + 4) + 1);
      }
      else
      {
        *(_DWORD *)(v52 + 4) = 0;
        v39 = (_QWORD *)(v52 + 8);
        result = 1;
      }
      *(_QWORD *)(a1 + 40) = v36;
      *v54 = v50;
    }
    else
    {
      v38 = v37;
      result = v37 + 1;
      v39 = &v36[2 * v38];
    }
LABEL_30:
    *v39 = v28;
    v39[1] = 0;
    *((_DWORD *)v36 - 1) = result;
LABEL_31:
    v25 += 8;
  }
  while ( v26 != v25 );
  return result;
}

