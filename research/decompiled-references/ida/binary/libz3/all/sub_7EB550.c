unsigned int *__fastcall sub_7EB550(__int64 a1, __int64 a2, unsigned int a3)
{
  char **exception; // rbp
  char **v4; // rbp
  char **v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v8; // r12
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rax
  __m128i v14; // xmm0
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rcx
  _QWORD *v22; // rbp
  _QWORD *v23; // rdi
  __int64 v24; // rax
  unsigned int *result; // rax
  _QWORD *v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  size_t v30; // rdi
  unsigned int *v31; // rax
  __int64 *v32; // r13
  unsigned int *v33; // rbp
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 *v36; // r10
  unsigned __int64 v37; // rsi
  __int64 *v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  __m128i v41; // xmm0
  unsigned __int64 v42; // rsi
  __int64 *v43; // rdx
  __int64 v44; // r9
  __int64 *v45; // r15
  void *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // r13d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // ebx
  size_t v54; // rsi
  unsigned int *v55; // rax
  _DWORD *v56; // rdx
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  unsigned int v60; // [rsp+8h] [rbp-80h]
  __int64 v62; // [rsp+10h] [rbp-78h]
  unsigned int v63; // [rsp+18h] [rbp-70h]
  unsigned int v64; // [rsp+1Ch] [rbp-6Ch]
  __int64 v65[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = a1 + 2344;
  v8 = *(_QWORD *)(a1 + 2344);
  v9 = ***(_DWORD ***)(a2 + 64);
  v60 = v9 + 1;
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 - 4);
    if ( v10 >= v9 + 1 )
      goto LABEL_3;
  }
  else
  {
    if ( v9 == -1 )
      goto LABEL_3;
    v10 = 0;
    v26 = (_QWORD *)sub_186B270(0x18u);
    v8 = (unsigned __int64)(v26 + 1);
    *v26 = 2;
    *(_QWORD *)(a1 + 2344) = v26 + 1;
  }
  v62 = a1 + 2344;
  v63 = v10;
  v64 = v9;
  while ( 1 )
  {
    v27 = *(_DWORD *)(v8 - 8);
    v28 = v60;
    if ( v27 >= v60 )
      break;
    while ( 1 )
    {
      v29 = (3 * v27 + 1) >> 1;
      v30 = 8 * v29 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v30 || v27 >= v29 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v65, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v65);
        sub_233E40((__int64)v65);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = (unsigned int *)sub_186B270(v30);
      v32 = *(__int64 **)(a1 + 2344);
      v33 = v31;
      v8 = (unsigned __int64)(v31 + 2);
      if ( !v32 )
        break;
      v34 = *((unsigned int *)v32 - 1);
      v35 = 8 * v34;
      v31[1] = v34;
      v36 = &v32[v34];
      if ( v36 != v32 )
      {
        v37 = v35 - 8;
        v38 = v32;
        if ( (unsigned __int64)(v35 - 8) <= 8 || v8 < (unsigned __int64)(v32 + 2) && v32 < (__int64 *)v31 + 3 )
        {
          v56 = v31 + 2;
          do
          {
            v57 = *v38;
            *v38++ = 0;
            v56 += 2;
            *((_QWORD *)v56 - 1) = v57;
          }
          while ( v38 != v36 );
        }
        else
        {
          v39 = 0;
          v40 = (v37 >> 3) + 1;
          do
          {
            v41 = _mm_loadu_si128((const __m128i *)&v32[v39 / 2]);
            *(_OWORD *)&v32[v39 / 2] = 0;
            *(__m128i *)&v31[v39 + 2] = v41;
            v39 += 4LL;
          }
          while ( v39 != 4 * (v40 >> 1) );
          if ( (v40 & 1) != 0 )
          {
            v42 = v40 & 0xFFFFFFFFFFFFFFFELL;
            v43 = &v32[v42];
            v44 = *v43;
            *v43 = 0;
            *(_QWORD *)(v8 + 8 * v42) = v44;
          }
        }
      }
      v45 = &v32[v34];
      if ( (_DWORD)v34 )
      {
        do
        {
          while ( *v32 )
          {
            v46 = (void *)(*v32++ - 8);
            sub_186B220(v46);
            if ( v45 == v32 )
              goto LABEL_30;
          }
          ++v32;
        }
        while ( v32 != v45 );
LABEL_30:
        v32 = *(__int64 **)(a1 + 2344);
      }
      sub_186B220(v32 - 1);
      *v33 = v29;
      v28 = v60;
      v27 = *(_DWORD *)(v8 - 8);
      *(_QWORD *)(a1 + 2344) = v8;
      if ( v27 >= v60 )
        goto LABEL_32;
    }
    v31[1] = 0;
    *(_QWORD *)(a1 + 2344) = v8;
    *v31 = v29;
  }
LABEL_32:
  v6 = v62;
  *(_DWORD *)(v8 - 4) = v28;
  v47 = 8LL * v28;
  v9 = v64;
  v48 = 8LL * v63;
  if ( v48 != v47 )
    memset((void *)(v8 + v48), 0, v47 - v48);
LABEL_3:
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 8LL * v9;
  v13 = *(_QWORD *)(v8 + v12);
  if ( v13 )
    v14 = _mm_cvtsi32_si128(*(_DWORD *)(v13 - 4));
  else
    v14 = 0;
  v15 = (_QWORD *)sub_180C100(v11 + 2144, 24);
  v16 = *(_QWORD **)(v11 + 2128);
  v17 = v15;
  *v15 = off_1C54AE8;
  v15[1] = v6;
  v15[2] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), v14).m128i_u64[0];
  if ( v16 )
  {
    v18 = *((_DWORD *)v16 - 1);
    if ( v18 == *((_DWORD *)v16 - 2) )
    {
      v49 = (3 * v18 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v50 || v18 >= v49 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v65, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v65);
        sub_233E40((__int64)v65);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v16 - 1, v50);
      v52 = v51[1];
      v16 = v51 + 2;
      *(_QWORD *)(v11 + 2128) = v51 + 2;
      *v51 = v49;
      LODWORD(v51) = v52;
      v21 = &v16[v52];
      v20 = (_DWORD)v51 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v16[v19];
    }
  }
  else
  {
    v58 = (_QWORD *)sub_186B270(0x18u);
    v16 = v58 + 1;
    *v58 = 2;
    v20 = 1;
    *(_QWORD *)(v11 + 2128) = v16;
    v21 = v16;
  }
  v22 = (_QWORD *)(*(_QWORD *)(a1 + 2344) + v12);
  *v21 = v17;
  v23 = (_QWORD *)*v22;
  *((_DWORD *)v16 - 1) = v20;
  if ( v23 )
  {
    v24 = *((unsigned int *)v23 - 1);
    if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) )
    {
      v53 = (unsigned int)(3 * v24 + 1) >> 1;
      v54 = 4 * v53 + 8;
      if ( 4 * (int)v24 + 8 >= (unsigned int)v54 || (unsigned int)v24 >= v53 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v65, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v65);
        sub_233E40((__int64)v65);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v55 = (unsigned int *)sub_186B300(v23 - 1, v54);
      v23 = v55 + 2;
      *v22 = v55 + 2;
      *v55 = v53;
      result = &v55[v55[1] + 2];
    }
    else
    {
      result = (unsigned int *)v23 + v24;
    }
  }
  else
  {
    v59 = (_QWORD *)sub_186B270(0x10u);
    v23 = v59 + 1;
    *v59 = 2;
    *v22 = v59 + 1;
    result = (unsigned int *)(v59 + 1);
  }
  *result = a3;
  ++*((_DWORD *)v23 - 1);
  return result;
}

