__int64 __fastcall sub_51F600(
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
  __int64 v10; // r15
  __int64 v11; // r12
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  bool v17; // zf
  size_t v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r11
  __int64 v21; // rax
  _QWORD *v22; // rsi
  unsigned int v23; // esi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  _QWORD *v27; // rax
  unsigned int v28; // r15d
  _QWORD *v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rax
  size_t v32; // rdx
  __int64 v33; // rax
  __int64 result; // rax
  size_t v35; // rdi
  unsigned __int64 v36; // rdx
  _DWORD *v37; // rsi
  __int64 v38; // r8
  __int64 *v39; // rdi
  unsigned __int64 v40; // r11
  __int64 v41; // rax
  unsigned __int64 v42; // r11
  __m128i v43; // xmm0
  unsigned __int64 v44; // r11
  __int64 v45; // rdi
  unsigned __int64 v46; // r12
  _QWORD *v47; // r13
  _QWORD *v48; // rbx
  _QWORD *v49; // rbp
  void *v50; // rdi
  _QWORD *v51; // r15
  unsigned int v52; // r12d
  _QWORD *v53; // rax
  size_t v54; // rdx
  __int64 *v55; // rax
  unsigned __int64 v56; // r11
  __int64 v57; // r10
  _QWORD **v59; // [rsp+8h] [rbp-90h]
  _QWORD *v60; // [rsp+8h] [rbp-90h]
  unsigned int v61; // [rsp+8h] [rbp-90h]
  unsigned int v62; // [rsp+8h] [rbp-90h]
  unsigned int v63; // [rsp+10h] [rbp-88h]
  unsigned int v64; // [rsp+10h] [rbp-88h]
  __int64 v65; // [rsp+10h] [rbp-88h]
  unsigned __int64 v66; // [rsp+10h] [rbp-88h]
  unsigned int v67; // [rsp+18h] [rbp-80h]
  unsigned int v68; // [rsp+18h] [rbp-80h]
  int v69; // [rsp+18h] [rbp-80h]
  char v70; // [rsp+24h] [rbp-74h]
  unsigned int v71; // [rsp+24h] [rbp-74h]
  __int64 v72[11]; // [rsp+40h] [rbp-58h] BYREF

  v9 = a2;
  v10 = 8LL * a2;
  v11 = a1;
  v13 = *(_QWORD *)(a1 + 48);
  v14 = *(_QWORD **)(v13 + v10);
  v59 = (_QWORD **)(v13 + v10);
  if ( v14 )
  {
    v70 = a6;
    v67 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v14 - 1)));
    v63 = *((_DWORD *)v14 - 2);
    v15 = (_QWORD *)sub_186B270(8LL * v63 + 8);
    a6 = v70;
    v14 = v15 + 1;
    v16 = *v59;
    v17 = *v59 == nullptr;
    *v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v63), _mm_cvtsi32_si128(v67)).m128i_u64[0];
    if ( v17 )
    {
      v13 = *(_QWORD *)(a1 + 48);
    }
    else
    {
      v18 = 8LL * *((unsigned int *)v16 - 1);
      if ( v18 <= 8 )
      {
        v13 = *(_QWORD *)(a1 + 48);
        if ( v18 == 8 )
          v15[1] = *v16;
      }
      else
      {
        memmove(v15 + 1, v16, v18);
        v13 = *(_QWORD *)(a1 + 48);
        a6 = v70;
      }
    }
  }
  if ( a3 > 1 )
  {
    v19 = (unsigned int)*a4;
    v20 = v14[v19];
    if ( a3 <= 3 )
    {
      v23 = 1;
    }
    else
    {
      v21 = 3;
      do
      {
        v22 = &v14[a4[v21 - 2]];
        v14[v19] = *v22;
        v19 = (unsigned int)a4[v21 - 1];
        *v22 = v14[v19];
        v23 = v21;
        v21 += 2;
      }
      while ( 2 * ((a3 - 4) >> 1) + 5LL != v21 );
    }
    v24 = v23;
    v25 = v23 - 1;
    v26 = v23 + 1;
    v27 = &v14[a4[v24]];
    v14[a4[v25]] = *v27;
    if ( (unsigned int)v26 < a3 )
      *v27 = v14[a4[v26]];
    v14[a4[a3 - 1]] = v20;
  }
  if ( a6 )
  {
    v51 = (_QWORD *)(v13 + v10);
    if ( *v51 )
      sub_186B220((void *)(*v51 - 8LL));
    if ( v14 )
    {
      v52 = *((_DWORD *)v14 - 1);
      v62 = *((_DWORD *)v14 - 2);
      v53 = (_QWORD *)sub_186B270(8LL * v62 + 8);
      v54 = 8LL * *((unsigned int *)v14 - 1);
      *v53 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v62), _mm_cvtsi32_si128(v52)).m128i_u64[0];
      *v51 = v53 + 1;
      if ( v54 <= 8 )
      {
        if ( v54 == 8 )
          v53[1] = *v14;
      }
      else
      {
        memcpy(v53 + 1, v14, v54);
      }
    }
    else
    {
      *v51 = 0;
    }
    v28 = v9;
  }
  else
  {
    if ( v13 )
    {
      v28 = *(_DWORD *)(v13 - 4);
      if ( v28 == *(_DWORD *)(v13 - 8) )
      {
        v61 = (3 * v28 + 1) >> 1;
        v35 = 8 * v61 + 8;
        if ( 8 * v28 + 8 >= (unsigned int)v35 || v28 >= (3 * v28 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v72, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v72);
          sub_233E40((__int64)v72);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = sub_186B270(v35);
        v36 = *(_QWORD *)(v11 + 48);
        v37 = (_DWORD *)v30;
        v13 = v30 + 8;
        if ( v36 )
        {
          v38 = *(unsigned int *)(v36 - 4);
          *(_DWORD *)(v30 + 4) = v38;
          v39 = (__int64 *)(v36 + 8 * v38);
          if ( (__int64 *)v36 != v39 )
          {
            v40 = 8 * v38 - 8;
            if ( v40 <= 8 || v13 < v36 + 16 && v36 < v30 + 24 )
            {
              v55 = (__int64 *)v36;
              v56 = v13;
              do
              {
                v57 = *v55;
                *v55++ = 0;
                v56 += 8LL;
                *(_QWORD *)(v56 - 8) = v57;
              }
              while ( v55 != v39 );
            }
            else
            {
              v41 = 0;
              v42 = (v40 >> 3) + 1;
              do
              {
                v43 = _mm_loadu_si128((const __m128i *)(v36 + v41 * 4));
                *(_OWORD *)(v36 + v41 * 4) = 0;
                *(__m128i *)&v37[v41 + 2] = v43;
                v41 += 4;
              }
              while ( 4 * (v42 >> 1) != v41 );
              if ( (v42 & 1) != 0 )
              {
                v44 = 8 * (v42 & 0xFFFFFFFFFFFFFFFELL);
                v45 = *(_QWORD *)(v36 + v44);
                *(_QWORD *)(v36 + v44) = 0;
                *(_QWORD *)&v37[v44 / 4 + 2] = v45;
              }
            }
          }
          if ( (_DWORD)v38 )
          {
            v65 = v11;
            v46 = v13;
            v69 = v9;
            v47 = v14;
            v48 = (_QWORD *)v36;
            v71 = a3;
            v49 = (_QWORD *)(v36 + 8 * v38);
            do
            {
              while ( *v48 )
              {
                v50 = (void *)(*v48++ - 8LL);
                sub_186B220(v50);
                if ( v48 == v49 )
                  goto LABEL_38;
              }
              ++v48;
            }
            while ( v48 != v49 );
LABEL_38:
            v13 = v46;
            v11 = v65;
            v14 = v47;
            v9 = v69;
            a3 = v71;
            v36 = *(_QWORD *)(v65 + 48);
          }
          v66 = v13;
          sub_186B220((void *)(v36 - 8));
          v13 = v66;
          v30 = (unsigned int)v37[1];
          v29 = (_QWORD *)(v66 + 8 * v30);
        }
        else
        {
          *(_DWORD *)(v30 + 4) = 0;
          v29 = (_QWORD *)(v30 + 8);
          LODWORD(v30) = 0;
        }
        *(_QWORD *)(v11 + 48) = v13;
        *v37 = v61;
      }
      else
      {
        v29 = (_QWORD *)(v13 + 8LL * v28);
        LODWORD(v30) = *(_DWORD *)(v13 - 4);
      }
    }
    else
    {
      v30 = sub_186B270(0x18u);
      v13 = v30 + 8;
      *(_QWORD *)v30 = 2;
      v28 = 0;
      LODWORD(v30) = 0;
      *(_QWORD *)(a1 + 48) = v13;
      v29 = (_QWORD *)v13;
    }
    *v29 = 0;
    v60 = v29;
    if ( v14 )
    {
      v64 = *((_DWORD *)v14 - 2);
      v68 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v14 - 1)));
      v31 = (_QWORD *)sub_186B270(8LL * v64 + 8);
      *v31 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v64), _mm_cvtsi32_si128(v68)).m128i_u64[0];
      *v60 = v31 + 1;
      v32 = 8LL * *((unsigned int *)v14 - 1);
      if ( v32 <= 8 )
      {
        if ( v32 == 8 )
          v31[1] = *v14;
        v13 = *(_QWORD *)(v11 + 48);
        LODWORD(v30) = *(_DWORD *)(v13 - 4);
      }
      else
      {
        memcpy(v31 + 1, v14, v32);
        v13 = *(_QWORD *)(v11 + 48);
        LODWORD(v30) = *(_DWORD *)(v13 - 4);
      }
    }
    *(_DWORD *)(v13 - 4) = v30 + 1;
  }
  *a5 = v28;
  v33 = sub_4DCC60(v9, a3, a4, v28);
  result = sub_52C6B0(a7, v33);
  if ( v14 )
    return sub_186B220(v14 - 1);
  return result;
}

