__int64 __fastcall sub_51FB70(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int *a4,
        unsigned int *a5,
        char a6,
        __int64 a7)
{
  char **exception; // r12
  int v9; // r13d
  __int64 v10; // r14
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  size_t v16; // rdx
  unsigned __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rsi
  _QWORD *v20; // r15
  _QWORD *v21; // rax
  __int64 v22; // rdx
  size_t v23; // rdx
  __int64 v24; // rax
  __int64 result; // rax
  size_t v26; // rdi
  __int64 v27; // rax
  __int64 *v28; // r15
  __int64 *v29; // rdx
  __int64 v30; // r10
  __int64 *v31; // r9
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdi
  __m128i v35; // xmm0
  unsigned __int64 v36; // rdi
  __int64 v37; // r9
  unsigned __int64 v38; // rbp
  __int64 *v39; // r13
  _QWORD *v40; // r12
  __int64 *v41; // rbx
  void *v42; // rdi
  _QWORD *v43; // rbp
  __int64 v44; // rdi
  unsigned int v45; // r14d
  _QWORD *v46; // rax
  __int64 v47; // rdx
  size_t v48; // rdx
  _QWORD *v49; // rax
  __int64 *v50; // rsi
  unsigned __int64 v51; // rdi
  __int64 v52; // rcx
  _QWORD **v55; // [rsp+10h] [rbp-88h]
  unsigned int v56; // [rsp+10h] [rbp-88h]
  unsigned int v57; // [rsp+10h] [rbp-88h]
  unsigned int v58; // [rsp+10h] [rbp-88h]
  unsigned int v59; // [rsp+18h] [rbp-80h]
  unsigned int v60; // [rsp+18h] [rbp-80h]
  __int64 v61; // [rsp+18h] [rbp-80h]
  unsigned __int64 v62; // [rsp+18h] [rbp-80h]
  unsigned int v63; // [rsp+20h] [rbp-78h]
  int v64; // [rsp+20h] [rbp-78h]
  __int64 *v65; // [rsp+20h] [rbp-78h]
  unsigned int v66; // [rsp+2Ch] [rbp-6Ch]
  _QWORD *v67; // [rsp+38h] [rbp-60h] BYREF
  __int64 v68[11]; // [rsp+40h] [rbp-58h] BYREF

  v9 = a2;
  v10 = 8LL * a2;
  v12 = a1;
  v13 = *(_QWORD **)(v10 + *(_QWORD *)(a1 + 48));
  v55 = (_QWORD **)(v10 + *(_QWORD *)(a1 + 48));
  if ( v13 )
  {
    v63 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v13 - 1)));
    v59 = *((_DWORD *)v13 - 2);
    v14 = (_QWORD *)sub_186B270(8LL * v59 + 8);
    v13 = v14 + 1;
    v15 = *v55;
    *v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), _mm_cvtsi32_si128(v63)).m128i_u64[0];
    if ( v15 )
    {
      v16 = 8LL * *((unsigned int *)v15 - 1);
      if ( v16 <= 8 )
      {
        if ( v16 == 8 )
          v14[1] = *v15;
      }
      else
      {
        memmove(v14 + 1, v15, v16);
      }
    }
  }
  if ( a3 )
  {
    v67 = v13;
    sub_51D070(&v67, a3, a4);
    v13 = v67;
  }
  v17 = *(_QWORD *)(a1 + 48);
  if ( a6 )
  {
    v43 = (_QWORD *)(v17 + v10);
    v44 = *(_QWORD *)(v17 + v10);
    if ( v44 )
      sub_186B220((void *)(v44 - 8));
    if ( v13 )
    {
      v45 = *((_DWORD *)v13 - 1);
      v58 = *((_DWORD *)v13 - 2);
      v46 = (_QWORD *)sub_186B270(8LL * v58 + 8);
      *v46 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v58), _mm_cvtsi32_si128(v45)).m128i_u64[0];
      v47 = *((unsigned int *)v13 - 1);
      *v43 = v46 + 1;
      v48 = 8 * v47;
      if ( v48 <= 8 )
      {
        if ( v48 == 8 )
          v46[1] = *v13;
      }
      else
      {
        memmove(v46 + 1, v13, v48);
      }
    }
    else
    {
      *v43 = 0;
    }
    v18 = v9;
  }
  else
  {
    if ( v17 )
    {
      v18 = *(_DWORD *)(v17 - 4);
      if ( v18 == *(_DWORD *)(v17 - 8) )
      {
        v57 = (3 * v18 + 1) >> 1;
        v26 = 8 * v57 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v26 || v18 >= (3 * v18 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v68, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v68);
          sub_233E40((__int64)v68);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = sub_186B270(v26);
        v28 = *(__int64 **)(v12 + 48);
        v29 = (__int64 *)v27;
        v17 = v27 + 8;
        if ( v28 )
        {
          v30 = *((unsigned int *)v28 - 1);
          *((_DWORD *)v29 + 1) = v30;
          v31 = &v28[v30];
          if ( v28 != v31 )
          {
            v32 = 8 * v30 - 8;
            if ( v32 <= 8 || v17 < (unsigned __int64)(v28 + 2) && v28 < v29 + 3 )
            {
              v50 = v28;
              v51 = v17;
              do
              {
                v52 = *v50;
                *v50++ = 0;
                v51 += 8LL;
                *(_QWORD *)(v51 - 8) = v52;
              }
              while ( v50 != v31 );
            }
            else
            {
              v33 = 0;
              v34 = (v32 >> 3) + 1;
              do
              {
                v35 = _mm_loadu_si128((const __m128i *)&v28[v33]);
                *(_OWORD *)&v28[v33] = 0;
                *(__m128i *)&v29[v33 + 1] = v35;
                v33 += 2LL;
              }
              while ( 2 * (v34 >> 1) != v33 );
              if ( (v34 & 1) != 0 )
              {
                v36 = v34 & 0xFFFFFFFFFFFFFFFELL;
                v37 = v28[v36];
                v28[v36] = 0;
                v29[v36 + 1] = v37;
              }
            }
          }
          if ( (_DWORD)v30 )
          {
            v61 = v12;
            v38 = v17;
            v64 = v9;
            v39 = v29;
            v66 = a3;
            v40 = v13;
            v41 = &v28[v30];
            do
            {
              while ( *v28 )
              {
                v42 = (void *)(*v28++ - 8);
                sub_186B220(v42);
                if ( v28 == v41 )
                  goto LABEL_33;
              }
              ++v28;
            }
            while ( v28 != v41 );
LABEL_33:
            v17 = v38;
            v12 = v61;
            v13 = v40;
            v29 = v39;
            a3 = v66;
            v9 = v64;
            v28 = *(__int64 **)(v61 + 48);
          }
          v65 = v29;
          v62 = v17;
          sub_186B220(v28 - 1);
          v29 = v65;
          v17 = v62;
          v19 = *((unsigned int *)v65 + 1);
          v20 = (_QWORD *)(v62 + 8 * v19);
        }
        else
        {
          *((_DWORD *)v29 + 1) = 0;
          v20 = (_QWORD *)v17;
          LODWORD(v19) = 0;
        }
        *(_QWORD *)(v12 + 48) = v17;
        *(_DWORD *)v29 = v57;
      }
      else
      {
        LODWORD(v19) = *(_DWORD *)(v17 - 4);
        v20 = (_QWORD *)(v17 + 8LL * v18);
      }
    }
    else
    {
      v49 = (_QWORD *)sub_186B270(0x18u);
      *v49 = 2;
      v17 = (unsigned __int64)(v49 + 1);
      LODWORD(v19) = 0;
      v18 = 0;
      *(_QWORD *)(a1 + 48) = v17;
      v20 = (_QWORD *)v17;
    }
    *v20 = 0;
    if ( v13 )
    {
      v56 = *((_DWORD *)v13 - 2);
      v60 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v13 - 1)));
      v21 = (_QWORD *)sub_186B270(8LL * v56 + 8);
      *v21 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v56), _mm_cvtsi32_si128(v60)).m128i_u64[0];
      v22 = *((unsigned int *)v13 - 1);
      *v20 = v21 + 1;
      v23 = 8 * v22;
      if ( v23 <= 8 )
      {
        if ( v23 == 8 )
          v21[1] = *v13;
        v17 = *(_QWORD *)(v12 + 48);
        LODWORD(v19) = *(_DWORD *)(v17 - 4);
      }
      else
      {
        memmove(v21 + 1, v13, v23);
        v17 = *(_QWORD *)(v12 + 48);
        LODWORD(v19) = *(_DWORD *)(v17 - 4);
      }
    }
    *(_DWORD *)(v17 - 4) = v19 + 1;
  }
  *a5 = v18;
  v24 = sub_4DCE00(v9, a3, a4, v18);
  result = sub_52C6B0(a7, v24);
  if ( v13 )
    return sub_186B220(v13 - 1);
  return result;
}

