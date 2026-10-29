__int64 __fastcall sub_51FFF0(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        unsigned int *a5,
        char a6,
        __int64 a7)
{
  char **exception; // r12
  __int64 v11; // r14
  __int64 v13; // rbp
  void **v14; // rbp
  _DWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  size_t v18; // rdx
  _QWORD *v19; // rbp
  unsigned __int64 v20; // rdx
  unsigned int v21; // r14d
  _QWORD *v22; // r15
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  size_t v26; // rdx
  unsigned __int64 *v27; // rax
  __int64 v28; // rax
  __int64 result; // rax
  size_t v30; // rdi
  __int64 *v31; // r15
  __int64 *v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 *v35; // r10
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rsi
  __m128i v39; // xmm0
  unsigned __int64 v40; // rsi
  __int64 *v41; // rax
  __int64 v42; // r10
  __int64 *v43; // rax
  void *v44; // rdi
  _QWORD *v45; // r14
  unsigned int v46; // r15d
  _QWORD *v47; // rax
  __int64 v48; // rdx
  size_t v49; // rdx
  __int64 *v50; // rax
  unsigned __int64 v51; // rsi
  __int64 v52; // r11
  unsigned int v53; // [rsp+8h] [rbp-90h]
  unsigned int v54; // [rsp+8h] [rbp-90h]
  __int64 *v55; // [rsp+8h] [rbp-90h]
  __int64 *v56; // [rsp+8h] [rbp-90h]
  unsigned int v57; // [rsp+8h] [rbp-90h]
  unsigned int v58; // [rsp+10h] [rbp-88h]
  unsigned int v59; // [rsp+10h] [rbp-88h]
  unsigned __int64 v60; // [rsp+10h] [rbp-88h]
  unsigned __int64 v61; // [rsp+10h] [rbp-88h]
  __int64 *v62; // [rsp+18h] [rbp-80h]
  unsigned int v63; // [rsp+20h] [rbp-78h]
  int v64; // [rsp+24h] [rbp-74h] BYREF
  unsigned __int64 v65; // [rsp+28h] [rbp-70h] BYREF
  void *src; // [rsp+38h] [rbp-60h] BYREF
  __int64 v67[11]; // [rsp+40h] [rbp-58h] BYREF

  v11 = 8LL * a2;
  v13 = *(_QWORD *)(a1 + 48);
  v64 = a4;
  v14 = (void **)(v11 + v13);
  v65 = a3;
  v15 = *v14;
  if ( *v14 )
  {
    v58 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(v15 - 1)));
    v53 = *(v15 - 2);
    v16 = (_QWORD *)sub_186B270(8LL * v53 + 8);
    v17 = *v14;
    v15 = v16 + 1;
    *v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v53), _mm_cvtsi32_si128(v58)).m128i_u64[0];
    if ( v17 )
    {
      v18 = 8LL * *((unsigned int *)v17 - 1);
      if ( v18 <= 8 )
      {
        if ( v18 == 8 )
          v16[1] = *v17;
      }
      else
      {
        v15 = memmove(v16 + 1, v17, v18);
      }
    }
  }
  src = v15;
  sub_51D070(&src, 1u, &v64);
  v19 = src;
  v20 = *(_QWORD *)(a1 + 48);
  if ( a6 )
  {
    v45 = (_QWORD *)(v20 + v11);
    if ( *v45 )
      sub_186B220((void *)(*v45 - 8LL));
    if ( v19 )
    {
      v46 = *((_DWORD *)v19 - 1);
      v57 = *((_DWORD *)v19 - 2);
      v47 = (_QWORD *)sub_186B270(8LL * v57 + 8);
      *v47 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v57), _mm_cvtsi32_si128(v46)).m128i_u64[0];
      v48 = *((unsigned int *)v19 - 1);
      *v45 = v47 + 1;
      v49 = 8 * v48;
      if ( v49 <= 8 )
      {
        if ( v49 == 8 )
          v47[1] = *v19;
      }
      else
      {
        memmove(v47 + 1, v19, v49);
      }
    }
    else
    {
      *v45 = 0;
    }
    v21 = a2;
  }
  else
  {
    if ( v20 )
    {
      v21 = *(_DWORD *)(v20 - 4);
      if ( v21 == *(_DWORD *)(v20 - 8) )
      {
        v63 = (3 * v21 + 1) >> 1;
        v30 = 8 * v63 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v30 || v21 >= (3 * v21 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v67, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v67);
          sub_233E40((__int64)v67);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = sub_186B270(v30);
        v31 = *(__int64 **)(a1 + 48);
        v32 = (__int64 *)v23;
        v20 = v23 + 8;
        if ( v31 )
        {
          v33 = *((unsigned int *)v31 - 1);
          *(_DWORD *)(v23 + 4) = v33;
          v34 = 8 * v33;
          v35 = &v31[v33];
          if ( v31 != v35 )
          {
            v36 = v34 - 8;
            if ( (unsigned __int64)(v34 - 8) <= 8 || v20 < (unsigned __int64)(v31 + 2) && v31 < v32 + 3 )
            {
              v50 = v31;
              v51 = v20;
              do
              {
                v52 = *v50;
                *v50++ = 0;
                v51 += 8LL;
                *(_QWORD *)(v51 - 8) = v52;
              }
              while ( v35 != v50 );
            }
            else
            {
              v37 = 0;
              v38 = (v36 >> 3) + 1;
              do
              {
                v39 = _mm_loadu_si128((const __m128i *)&v31[v37]);
                *(_OWORD *)&v31[v37] = 0;
                *(__m128i *)&v32[v37 + 1] = v39;
                v37 += 2LL;
              }
              while ( 2 * (v38 >> 1) != v37 );
              if ( (v38 & 1) != 0 )
              {
                v40 = v38 & 0xFFFFFFFFFFFFFFFELL;
                v41 = &v31[v40];
                v42 = *v41;
                *v41 = 0;
                *(_QWORD *)(v20 + 8 * v40) = v42;
              }
            }
          }
          v43 = &v31[v33];
          if ( (_DWORD)v33 )
          {
            do
            {
              while ( *v31 )
              {
                v44 = (void *)(*v31 - 8);
                v62 = v43;
                ++v31;
                v60 = v20;
                v55 = v32;
                sub_186B220(v44);
                v43 = v62;
                v32 = v55;
                v20 = v60;
                if ( v31 == v62 )
                  goto LABEL_30;
              }
              ++v31;
            }
            while ( v31 != v43 );
LABEL_30:
            v31 = *(__int64 **)(a1 + 48);
          }
          v61 = v20;
          v56 = v32;
          sub_186B220(v31 - 1);
          v32 = v56;
          v20 = v61;
          v23 = *((unsigned int *)v56 + 1);
          v22 = (_QWORD *)(v61 + 8 * v23);
        }
        else
        {
          *(_DWORD *)(v23 + 4) = 0;
          v22 = (_QWORD *)(v23 + 8);
          LODWORD(v23) = 0;
        }
        *(_QWORD *)(a1 + 48) = v20;
        *(_DWORD *)v32 = v63;
      }
      else
      {
        v22 = (_QWORD *)(v20 + 8LL * v21);
        LODWORD(v23) = *(_DWORD *)(v20 - 4);
      }
    }
    else
    {
      v23 = sub_186B270(0x18u);
      v20 = v23 + 8;
      *(_QWORD *)v23 = 2;
      v21 = 0;
      LODWORD(v23) = 0;
      *(_QWORD *)(a1 + 48) = v20;
      v22 = (_QWORD *)v20;
    }
    *v22 = 0;
    if ( v19 )
    {
      v54 = *((_DWORD *)v19 - 2);
      v59 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v19 - 1)));
      v24 = (_QWORD *)sub_186B270(8LL * v54 + 8);
      *v24 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v54), _mm_cvtsi32_si128(v59)).m128i_u64[0];
      v25 = *((unsigned int *)v19 - 1);
      *v22 = v24 + 1;
      v26 = 8 * v25;
      if ( v26 <= 8 )
      {
        if ( v26 == 8 )
          v24[1] = *v19;
        v20 = *(_QWORD *)(a1 + 48);
        LODWORD(v23) = *(_DWORD *)(v20 - 4);
      }
      else
      {
        memmove(v24 + 1, v19, v26);
        v20 = *(_QWORD *)(a1 + 48);
        LODWORD(v23) = *(_DWORD *)(v20 - 4);
      }
    }
    *(_DWORD *)(v20 - 4) = v23 + 1;
  }
  v27 = *(unsigned __int64 **)a1;
  *a5 = v21;
  v28 = sub_4DB0F0(*v27, a2, &v65, v64, v21);
  result = sub_52C6B0(a7, v28);
  if ( v19 )
    return sub_186B220(v19 - 1);
  return result;
}

