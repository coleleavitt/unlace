_BYTE *__fastcall sub_7EC150(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  char **exception; // rbp
  __int64 *v5; // r15
  _BYTE *result; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // edx
  _QWORD *v15; // rcx
  __int64 *v16; // rax
  unsigned int v17; // edx
  _QWORD *v18; // rcx
  _BYTE *v19; // rcx
  char *v20; // r15
  __int64 v21; // rsi
  int v22; // eax
  _QWORD *v23; // rsi
  __int64 *v24; // r13
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 *v27; // rsi
  __int64 v28; // r12
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // r14
  unsigned int v32; // eax
  unsigned int v33; // r9d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r13
  char *v38; // rax
  char *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r13
  char *v42; // rax
  char *v43; // rdi
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+8h] [rbp-110h]
  char *v49; // [rsp+8h] [rbp-110h]
  unsigned int v50; // [rsp+10h] [rbp-108h]
  _QWORD *v51; // [rsp+10h] [rbp-108h]
  _QWORD *v52; // [rsp+10h] [rbp-108h]
  __int64 v53[4]; // [rsp+30h] [rbp-E8h] BYREF
  void *v54; // [rsp+50h] [rbp-C8h]
  __int64 v55; // [rsp+58h] [rbp-C0h]
  _BYTE v56[184]; // [rsp+60h] [rbp-B8h] BYREF

  v5 = *(__int64 **)(a2 + 48);
  v54 = v56;
  v55 = 0x1000000000LL;
  result = (_BYTE *)(a1 + 336);
  v48 = a1 + 336;
  if ( v5 )
  {
    do
    {
      while ( (unsigned __int8)sub_7EBDC0(a1, 1, (__int64)(v5 + 6), *((_DWORD *)v5 + 8), a2, a4) )
      {
        v17 = v55;
        if ( (unsigned int)v55 >= HIDWORD(v55) )
        {
          v41 = (unsigned int)(2 * HIDWORD(v55));
          v42 = (char *)sub_186B270(8 * v41);
          v17 = v55;
          v43 = (char *)v54;
          v18 = v42;
          if ( (_DWORD)v55 )
          {
            if ( (unsigned int)(v55 - 1) <= 2 || v42 == (char *)v54 + 8 )
            {
              v47 = 0;
              do
              {
                v18[v47] = *(_QWORD *)&v43[v47 * 8];
                ++v47;
              }
              while ( v17 != v47 );
            }
            else
            {
              v44 = 0;
              do
              {
                *(__m128i *)&v18[v44] = _mm_loadu_si128((const __m128i *)&v43[v44 * 8]);
                v44 += 2;
              }
              while ( v44 != 2LL * (v17 >> 1) );
              if ( (v17 & 1) != 0 )
                v18[v17 & 0xFFFFFFFE] = *(_QWORD *)&v43[8 * (v17 & 0xFFFFFFFE)];
            }
          }
          if ( v43 != v56 && v43 )
          {
            v52 = v18;
            sub_186B220(v43);
            v17 = v55;
            v18 = v52;
          }
          v54 = v18;
          HIDWORD(v55) = v41;
        }
        else
        {
          v18 = v54;
        }
        v18[v17] = v5;
        v5 = (__int64 *)*v5;
        v16 = *(__int64 **)(a2 + 48);
        LODWORD(v55) = v17 + 1;
        if ( v16 == v5 )
          goto LABEL_18;
      }
      if ( a3 )
      {
        v11 = *(_DWORD *)(a1 + 2352);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1040LL) >= v11 )
        {
          v12 = *(_QWORD *)(v5[2] + 40);
          v13 = *((_DWORD *)v5 + 8);
          if ( v13 < *(_DWORD *)(v12 + 8) )
            v13 = *(_DWORD *)(v12 + 8);
          if ( *(_DWORD *)(v12 + 40) < v13 )
          {
            *(_DWORD *)(v12 + 40) = v13;
            v11 = *(_DWORD *)(a1 + 2352);
          }
          *(_DWORD *)(a1 + 2352) = v11 + 1;
          sub_869AA0(v48, v5);
        }
        v14 = v55;
        if ( (unsigned int)v55 >= HIDWORD(v55) )
        {
          v37 = (unsigned int)(2 * HIDWORD(v55));
          v38 = (char *)sub_186B270(8 * v37);
          v14 = v55;
          v39 = (char *)v54;
          v15 = v38;
          if ( (_DWORD)v55 )
          {
            if ( (unsigned int)(v55 - 1) <= 2 || v38 == (char *)v54 + 8 )
            {
              v46 = 0;
              do
              {
                v15[v46] = *(_QWORD *)&v39[v46 * 8];
                ++v46;
              }
              while ( v14 != v46 );
            }
            else
            {
              v40 = 0;
              do
              {
                *(__m128i *)&v15[v40] = _mm_loadu_si128((const __m128i *)&v39[v40 * 8]);
                v40 += 2;
              }
              while ( 2LL * (v14 >> 1) != v40 );
              if ( (v14 & 1) != 0 )
                v15[v14 & 0xFFFFFFFE] = *(_QWORD *)&v39[8 * (v14 & 0xFFFFFFFE)];
            }
          }
          if ( v39 && v39 != v56 )
          {
            v51 = v15;
            sub_186B220(v39);
            v14 = v55;
            v15 = v51;
          }
          v54 = v15;
          HIDWORD(v55) = v37;
        }
        else
        {
          v15 = v54;
        }
        v15[v14] = v5;
        LODWORD(v55) = v14 + 1;
        *a4 = 1;
      }
      v5 = (__int64 *)*v5;
      v16 = *(__int64 **)(a2 + 48);
    }
    while ( v16 != v5 );
LABEL_18:
    v19 = v54;
    v49 = (char *)v54 + 8 * (unsigned int)v55;
    if ( v49 != v54 )
    {
      v20 = (char *)v54;
      while ( 1 )
      {
        v24 = *(__int64 **)v20;
        v25 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)v20, (__m128i)*(unsigned __int64 *)v20);
        if ( (__int64 *)*v16 == v16 )
        {
          *(_QWORD *)(a2 + 48) = 0;
        }
        else
        {
          if ( v24 == v16 )
            *(_QWORD *)(a2 + 48) = *v16;
          v26 = *v24;
          v27 = (__int64 *)v24[1];
          *v27 = *v24;
          *(_QWORD *)(v26 + 8) = v27;
        }
        v28 = *(_QWORD *)(a1 + 8);
        *(__m128i *)v24 = v25;
        v29 = (_QWORD *)sub_180C100(v28 + 2144, 32);
        v30 = *(_QWORD **)(v28 + 2128);
        v31 = v29;
        *v29 = off_1C54B38;
        v29[1] = v28;
        v29[2] = a2;
        v29[3] = v24;
        if ( v30 )
        {
          v32 = *((_DWORD *)v30 - 1);
          if ( v32 == *((_DWORD *)v30 - 2) )
          {
            v33 = (3 * v32 + 1) >> 1;
            v34 = 8 * v33 + 8;
            if ( 8 * v32 + 8 >= (unsigned int)v34 || v32 >= v33 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v53, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v53);
              sub_233E40((__int64)v53);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v50 = (3 * v32 + 1) >> 1;
            v35 = (unsigned int *)sub_186B300(v30 - 1, v34);
            v36 = v35[1];
            v30 = v35 + 2;
            *(_QWORD *)(v28 + 2128) = v35 + 2;
            *v35 = v50;
            LODWORD(v35) = v36;
            v23 = &v30[v36];
            v22 = (_DWORD)v35 + 1;
          }
          else
          {
            v21 = v32;
            v22 = v32 + 1;
            v23 = &v30[v21];
          }
        }
        else
        {
          v45 = (_QWORD *)sub_186B270(0x18u);
          v30 = v45 + 1;
          *v45 = 2;
          v22 = 1;
          *(_QWORD *)(v28 + 2128) = v30;
          v23 = v30;
        }
        *v23 = v31;
        v20 += 8;
        *((_DWORD *)v30 - 1) = v22;
        if ( v49 == v20 )
          break;
        v16 = *(__int64 **)(a2 + 48);
      }
      v19 = v54;
    }
    result = v56;
    if ( v19 != v56 )
    {
      if ( v19 )
        return (_BYTE *)sub_186B220(v19);
    }
  }
  return result;
}

