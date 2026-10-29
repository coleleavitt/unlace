__int64 __fastcall sub_51F0E0(
        __int64 a1,
        unsigned int a2,
        const __m128i *a3,
        int **a4,
        _DWORD *a5,
        char a6,
        __int64 a7)
{
  char **exception; // r12
  int **v9; // r13
  int v10; // r12d
  __int64 v11; // r14
  unsigned __int64 v13; // rax
  int *v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rbx
  unsigned int v17; // r8d
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  bool v20; // zf
  size_t v21; // rdx
  unsigned int v22; // r14d
  __int64 v23; // rcx
  _QWORD *v24; // r15
  _QWORD *v25; // rax
  __int64 v26; // rdx
  size_t v27; // rdx
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 result; // rax
  size_t v31; // rdi
  __int64 v32; // rax
  __int64 *v33; // r15
  __int64 *v34; // rdx
  __int64 v35; // r10
  __int64 *v36; // r9
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  __m128i v40; // xmm0
  unsigned __int64 v41; // rsi
  __int64 *v42; // rcx
  __int64 v43; // r9
  __int64 *v44; // rsi
  __int64 *v45; // r12
  unsigned __int64 v46; // r13
  void *v47; // rdi
  __int64 v48; // rdi
  unsigned int v49; // ebp
  _QWORD *v50; // rax
  size_t v51; // rdx
  _QWORD *v52; // rax
  __int64 *v53; // rcx
  unsigned __int64 v54; // rsi
  __int64 v55; // r8
  unsigned int v58; // [rsp+18h] [rbp-90h]
  unsigned int v59; // [rsp+18h] [rbp-90h]
  unsigned int v60; // [rsp+18h] [rbp-90h]
  _QWORD *v61; // [rsp+18h] [rbp-90h]
  unsigned int v62; // [rsp+18h] [rbp-90h]
  unsigned int v63; // [rsp+20h] [rbp-88h]
  unsigned int v64; // [rsp+20h] [rbp-88h]
  __int64 *v65; // [rsp+20h] [rbp-88h]
  _QWORD *v66; // [rsp+20h] [rbp-88h]
  unsigned int v67; // [rsp+28h] [rbp-80h]
  int v68; // [rsp+28h] [rbp-80h]
  unsigned __int64 v69; // [rsp+28h] [rbp-80h]
  _QWORD **v70; // [rsp+30h] [rbp-78h]
  int **v71; // [rsp+30h] [rbp-78h]
  int *v72; // [rsp+38h] [rbp-70h]
  _QWORD *v73; // [rsp+48h] [rbp-60h] BYREF
  __int64 v74[11]; // [rsp+50h] [rbp-58h] BYREF

  v9 = a4;
  v10 = a2;
  v11 = 8LL * a2;
  v13 = *(_QWORD *)(a1 + 48);
  v14 = *a4;
  v15 = (_QWORD *)(v13 + v11);
  v16 = *(_QWORD **)(v13 + v11);
  if ( v14 )
  {
    v17 = *(v14 - 1);
    if ( !v16 )
      goto LABEL_6;
  }
  else
  {
    v17 = 0;
    if ( !v16 )
    {
      if ( !a6 )
        goto LABEL_9;
      goto LABEL_48;
    }
  }
  v72 = v14;
  v70 = (_QWORD **)(v13 + v11);
  v67 = v17;
  v63 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v16 - 1)));
  v58 = *((_DWORD *)v16 - 2);
  v18 = (_QWORD *)sub_186B270(8LL * v58 + 8);
  v17 = v67;
  v16 = v18 + 1;
  v19 = *v70;
  v14 = v72;
  v20 = *v70 == nullptr;
  *v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v58), _mm_cvtsi32_si128(v63)).m128i_u64[0];
  if ( !v20 )
  {
    v21 = 8LL * *((unsigned int *)v19 - 1);
    if ( v21 <= 8 )
    {
      if ( v21 == 8 )
        v18[1] = *v19;
    }
    else
    {
      memmove(v18 + 1, v19, v21);
      v17 = v67;
      v14 = v72;
    }
  }
LABEL_6:
  if ( v17 )
  {
    v73 = v16;
    sub_51D070(&v73, v17, v14);
    v16 = v73;
  }
  v13 = *(_QWORD *)(a1 + 48);
  if ( !a6 )
  {
LABEL_9:
    if ( v13 )
    {
      v22 = *(_DWORD *)(v13 - 4);
      if ( v22 == *(_DWORD *)(v13 - 8) )
      {
        v60 = (3 * v22 + 1) >> 1;
        v31 = 8 * v60 + 8;
        if ( 8 * v22 + 8 >= (unsigned int)v31 || v22 >= (3 * v22 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v74, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v74);
          sub_233E40((__int64)v74);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = sub_186B270(v31);
        v33 = *(__int64 **)(a1 + 48);
        v34 = (__int64 *)v32;
        v13 = v32 + 8;
        if ( v33 )
        {
          v35 = *((unsigned int *)v33 - 1);
          *((_DWORD *)v34 + 1) = v35;
          v36 = &v33[v35];
          if ( v36 != v33 )
          {
            v37 = 8 * v35 - 8;
            if ( v37 <= 8 || v13 < (unsigned __int64)(v33 + 2) && v33 < v34 + 3 )
            {
              v53 = v33;
              v54 = v13;
              do
              {
                v55 = *v53;
                *v53++ = 0;
                v54 += 8LL;
                *(_QWORD *)(v54 - 8) = v55;
              }
              while ( v53 != v36 );
            }
            else
            {
              v38 = 0;
              v39 = (v37 >> 3) + 1;
              do
              {
                v40 = _mm_loadu_si128((const __m128i *)&v33[v38]);
                *(_OWORD *)&v33[v38] = 0;
                *(__m128i *)&v34[v38 + 1] = v40;
                v38 += 2LL;
              }
              while ( 2 * (v39 >> 1) != v38 );
              if ( (v39 & 1) != 0 )
              {
                v41 = v39 & 0xFFFFFFFFFFFFFFFELL;
                v42 = &v33[v41];
                v43 = *v42;
                *v42 = 0;
                *(_QWORD *)(v13 + 8 * v41) = v43;
              }
            }
          }
          v44 = &v33[v35];
          if ( (_DWORD)v35 )
          {
            v68 = v10;
            v45 = v34;
            v71 = v9;
            v46 = v13;
            do
            {
              while ( *v33 )
              {
                v47 = (void *)(*v33++ - 8);
                sub_186B220(v47);
                if ( v33 == v44 )
                  goto LABEL_35;
              }
              ++v33;
            }
            while ( v33 != v44 );
LABEL_35:
            v34 = v45;
            v13 = v46;
            v10 = v68;
            v9 = v71;
            v33 = *(__int64 **)(a1 + 48);
          }
          v69 = v13;
          v65 = v34;
          sub_186B220(v33 - 1);
          v34 = v65;
          v13 = v69;
          v23 = *((unsigned int *)v65 + 1);
          v24 = (_QWORD *)(v69 + 8 * v23);
        }
        else
        {
          *((_DWORD *)v34 + 1) = 0;
          v24 = (_QWORD *)v13;
          LODWORD(v23) = 0;
        }
        *(_QWORD *)(a1 + 48) = v13;
        *(_DWORD *)v34 = v60;
      }
      else
      {
        LODWORD(v23) = *(_DWORD *)(v13 - 4);
        v24 = (_QWORD *)(v13 + 8LL * v22);
      }
    }
    else
    {
      v52 = (_QWORD *)sub_186B270(0x18u);
      *v52 = 2;
      v13 = (unsigned __int64)(v52 + 1);
      LODWORD(v23) = 0;
      v22 = 0;
      *(_QWORD *)(a1 + 48) = v13;
      v24 = (_QWORD *)v13;
    }
    *v24 = 0;
    if ( v16 )
    {
      v59 = *((_DWORD *)v16 - 2);
      v64 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v16 - 1)));
      v25 = (_QWORD *)sub_186B270(8LL * v59 + 8);
      *v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), _mm_cvtsi32_si128(v64)).m128i_u64[0];
      v26 = *((unsigned int *)v16 - 1);
      *v24 = v25 + 1;
      v27 = 8 * v26;
      if ( v27 <= 8 )
      {
        if ( v27 == 8 )
          v25[1] = *v16;
        v13 = *(_QWORD *)(a1 + 48);
        LODWORD(v23) = *(_DWORD *)(v13 - 4);
      }
      else
      {
        memmove(v25 + 1, v16, v27);
        v13 = *(_QWORD *)(a1 + 48);
        LODWORD(v23) = *(_DWORD *)(v13 - 4);
      }
    }
    *(_DWORD *)(v13 - 4) = v23 + 1;
    v14 = *v9;
    *a5 = v22;
    if ( v14 )
      goto LABEL_16;
    goto LABEL_46;
  }
  v15 = (_QWORD *)(v13 + v11);
  v48 = *(_QWORD *)(v13 + v11);
  if ( v48 )
  {
    v61 = (_QWORD *)(v13 + v11);
    sub_186B220((void *)(v48 - 8));
    v15 = v61;
  }
  if ( !v16 )
  {
    v14 = *v9;
LABEL_48:
    *v15 = 0;
    v16 = nullptr;
    goto LABEL_45;
  }
  v49 = *((_DWORD *)v16 - 1);
  v66 = v15;
  v62 = *((_DWORD *)v16 - 2);
  v50 = (_QWORD *)sub_186B270(8LL * v62 + 8);
  *v50 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v62), _mm_cvtsi32_si128(v49)).m128i_u64[0];
  *v66 = v50 + 1;
  v51 = 8LL * *((unsigned int *)v16 - 1);
  if ( v51 <= 8 )
  {
    v14 = *v9;
    if ( v51 == 8 )
      v50[1] = *v16;
  }
  else
  {
    memmove(v50 + 1, v16, v51);
    v14 = *v9;
  }
LABEL_45:
  v22 = v10;
  *a5 = v10;
  if ( v14 )
  {
LABEL_16:
    v28 = *(v14 - 1);
    goto LABEL_17;
  }
LABEL_46:
  v28 = 0;
LABEL_17:
  v29 = sub_4DCFA0(v10, a3, v28, v14, v22);
  result = sub_52C6B0(a7, v29);
  if ( v16 )
    return sub_186B220(v16 - 1);
  return result;
}

