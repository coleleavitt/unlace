__int64 __fastcall sub_51E410(__int64 a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  char **exception; // r12
  int v5; // r12d
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  _QWORD **v8; // r15
  _QWORD *v9; // rbx
  __m128i v10; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  size_t v13; // rdx
  unsigned int v14; // r13d
  _QWORD *v15; // r8
  __int64 v16; // rax
  unsigned int v17; // r15d
  size_t v18; // rdi
  _QWORD *v19; // rax
  _QWORD *v20; // r8
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 result; // rax
  unsigned int v24; // r15d
  size_t v25; // rdi
  _DWORD *v26; // r15
  unsigned __int64 v27; // rax
  __int64 v28; // r11
  __int64 *v29; // r10
  unsigned __int64 v30; // r8
  __int64 v31; // rdi
  unsigned __int64 v32; // r8
  __m128i v33; // xmm0
  unsigned __int64 v34; // r8
  __int64 v35; // r10
  _QWORD *v36; // rbp
  _QWORD *v37; // r12
  _QWORD *v38; // rbx
  void *v39; // rdi
  int v40; // ecx
  __int64 *v41; // rdi
  _DWORD *v42; // r8
  __int64 v43; // rdx
  _QWORD *v46; // [rsp+18h] [rbp-80h]
  __int64 v47; // [rsp+20h] [rbp-78h]
  int v48; // [rsp+2Ch] [rbp-6Ch]
  __int64 v49[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = a2;
  v6 = a1;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = (_QWORD **)(v7 + 8LL * a2);
  v9 = *v8;
  if ( *v8 )
  {
    v10 = _mm_loadl_epi64((const __m128i *)(v9 - 1));
    v46 = (_QWORD *)v10.m128i_i64[0];
    v11 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v10) + 8);
    v12 = *v8;
    v9 = v11 + 1;
    *v11 = v10.m128i_i64[0];
    if ( v12 )
    {
      v13 = 8LL * *((unsigned int *)v12 - 1);
      if ( v13 <= 8 )
      {
        v7 = *(_QWORD *)(a1 + 48);
        if ( v13 == 8 )
          v11[1] = *v12;
      }
      else
      {
        memmove(v11 + 1, v12, v13);
        v7 = *(_QWORD *)(a1 + 48);
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 48);
    }
  }
  if ( v7 )
  {
    v14 = *(_DWORD *)(v7 - 4);
    if ( v14 == *(_DWORD *)(v7 - 8) )
    {
      v24 = (3 * v14 + 1) >> 1;
      v25 = 8 * v24 + 8;
      LODWORD(v46) = v24;
      if ( 8 * v14 + 8 >= (unsigned int)v25 || v14 >= v24 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v26 = (_DWORD *)sub_186B270(v25);
      v27 = *(_QWORD *)(v6 + 48);
      v7 = (unsigned __int64)(v26 + 2);
      if ( v27 )
      {
        v28 = *(unsigned int *)(v27 - 4);
        v26[1] = v28;
        v29 = (__int64 *)(v27 + 8 * v28);
        if ( (__int64 *)v27 != v29 )
        {
          v30 = 8 * v28 - 8;
          if ( v30 <= 8 || v7 < v27 + 16 && v27 < (unsigned __int64)(v26 + 6) )
          {
            v41 = (__int64 *)v27;
            v42 = v26 + 2;
            do
            {
              v43 = *v41;
              *v41++ = 0;
              v42 += 2;
              *((_QWORD *)v42 - 1) = v43;
            }
            while ( v41 != v29 );
          }
          else
          {
            v31 = 0;
            v32 = (v30 >> 3) + 1;
            do
            {
              v33 = _mm_loadu_si128((const __m128i *)(v27 + v31 * 4));
              *(_OWORD *)(v27 + v31 * 4) = 0;
              *(__m128i *)&v26[v31 + 2] = v33;
              v31 += 4;
            }
            while ( 4 * (v32 >> 1) != v31 );
            if ( (v32 & 1) != 0 )
            {
              v34 = 8 * (v32 & 0xFFFFFFFFFFFFFFFELL);
              v35 = *(_QWORD *)(v27 + v34);
              *(_QWORD *)(v27 + v34) = 0;
              *(_QWORD *)&v26[v34 / 4 + 2] = v35;
            }
          }
        }
        if ( (_DWORD)v28 )
        {
          v47 = v6;
          v36 = (_QWORD *)(v27 + 8 * v28);
          v48 = v5;
          v37 = v9;
          v38 = (_QWORD *)v27;
          do
          {
            while ( *v38 )
            {
              v39 = (void *)(*v38++ - 8LL);
              sub_186B220(v39);
              if ( v38 == v36 )
                goto LABEL_29;
            }
            ++v38;
          }
          while ( v38 != v36 );
LABEL_29:
          v6 = v47;
          v9 = v37;
          v5 = v48;
          v27 = *(_QWORD *)(v47 + 48);
        }
        sub_186B220((void *)(v27 - 8));
        v16 = (unsigned int)v26[1];
        v15 = (_QWORD *)(v7 + 8 * v16);
      }
      else
      {
        v26[1] = 0;
        v15 = v26 + 2;
        LODWORD(v16) = 0;
      }
      v40 = (int)v46;
      *(_QWORD *)(v6 + 48) = v7;
      *v26 = v40;
    }
    else
    {
      v15 = (_QWORD *)(v7 + 8LL * v14);
      LODWORD(v16) = *(_DWORD *)(v7 - 4);
    }
  }
  else
  {
    v16 = sub_186B270(0x18u);
    v7 = v16 + 8;
    *(_QWORD *)v16 = 2;
    v14 = 0;
    LODWORD(v16) = 0;
    *(_QWORD *)(a1 + 48) = v7;
    v15 = (_QWORD *)v7;
  }
  *v15 = 0;
  v46 = v15;
  if ( v9 )
  {
    v17 = *((_DWORD *)v9 - 1);
    v18 = 8LL * *((unsigned int *)v9 - 2) + 8;
    LODWORD(v47) = *((_DWORD *)v9 - 2);
    v19 = (_QWORD *)sub_186B270(v18);
    v20 = v46;
    v21 = 8LL * *((unsigned int *)v9 - 1);
    *v19 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), _mm_cvtsi32_si128(v17)).m128i_u64[0];
    *v20 = v19 + 1;
    if ( v21 <= 8 )
    {
      if ( v21 == 8 )
        v19[1] = *v9;
      v7 = *(_QWORD *)(v6 + 48);
      LODWORD(v16) = *(_DWORD *)(v7 - 4);
    }
    else
    {
      memcpy(v19 + 1, v9, v21);
      v7 = *(_QWORD *)(v6 + 48);
      LODWORD(v16) = *(_DWORD *)(v7 - 4);
    }
  }
  *(_DWORD *)(v7 - 4) = v16 + 1;
  *a3 = v14;
  v22 = sub_4DABC0(v5, v14);
  result = sub_52C6B0(a4, v22);
  if ( v9 )
    return sub_186B220(v9 - 1);
  return result;
}

