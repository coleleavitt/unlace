int *__fastcall sub_BDFC50(__int64 a1, __int64 *a2, __m128 a3, __m128 a4, __m128 a5)
{
  char **exception; // r12
  int *v6; // r15
  __int64 v8; // rcx
  int v9; // eax
  __int64 *v10; // r14
  unsigned int v11; // r9d
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r12
  int *v15; // rax
  int *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned int *v19; // rax
  __int64 v20; // rcx
  unsigned int *v21; // r15
  unsigned int *v22; // r13
  unsigned int v23; // r12d
  __int64 v24; // r13
  __int64 v25; // rax
  int v26; // esi
  __int64 v27; // rdi
  int *result; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r13
  __m128i *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rsi
  int v36; // eax
  __m128i *v37; // rsi
  __int64 v39; // rax
  unsigned int v40; // r8d
  unsigned int v41; // esi
  unsigned int v42; // r8d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rsi
  _QWORD *v46; // rdx
  __int64 v47; // [rsp-10h] [rbp-120h]
  __int64 v48; // [rsp-8h] [rbp-118h]
  __int64 v49; // [rsp+0h] [rbp-110h]
  __int64 v50; // [rsp+8h] [rbp-108h]
  unsigned int v51; // [rsp+8h] [rbp-108h]
  int *v52; // [rsp+10h] [rbp-100h]
  __int64 v53; // [rsp+18h] [rbp-F8h]
  __int64 v54; // [rsp+18h] [rbp-F8h]
  unsigned __int64 v55; // [rsp+18h] [rbp-F8h]
  unsigned __int64 v56; // [rsp+18h] [rbp-F8h]
  __int64 v57; // [rsp+20h] [rbp-F0h]
  __int64 v58; // [rsp+28h] [rbp-E8h]
  __int64 v59[4]; // [rsp+30h] [rbp-E0h] BYREF
  void *ptr; // [rsp+50h] [rbp-C0h]
  __int64 v61; // [rsp+58h] [rbp-B8h]
  int v62[2]; // [rsp+60h] [rbp-B0h] BYREF

  v6 = v62;
  v8 = *a2;
  v52 = v62;
  ptr = v62;
  v9 = *(_DWORD *)(v8 + 24);
  v50 = v8;
  *(_QWORD *)v62 = v8;
  v61 = 0x1000000001LL;
  HIDWORD(v49) = v9 - 1;
  if ( (unsigned int)(v9 - 1) > 1 )
  {
    v10 = (__int64 *)(v8 + 40);
    v11 = 1;
    LODWORD(v53) = 16;
    v12 = v8 + 8LL * (unsigned int)(v9 - 3) + 48;
    do
    {
      v14 = *v10;
      if ( v11 >= (unsigned int)v53 )
      {
        LODWORD(v53) = 2 * v53;
        v15 = (int *)sub_186B270(8LL * (unsigned int)v53);
        v11 = v61;
        v16 = (int *)ptr;
        v6 = v15;
        if ( (_DWORD)v61 )
        {
          if ( (unsigned int)(v61 - 1) <= 2 || v15 == (int *)((char *)ptr + 8) )
          {
            v39 = 0;
            do
            {
              *(_QWORD *)&v6[v39] = *(_QWORD *)&v16[v39];
              v39 += 2;
            }
            while ( v39 != 2LL * v11 );
          }
          else
          {
            v17 = 0;
            do
            {
              a3 = (__m128)_mm_loadu_si128((const __m128i *)&v16[v17]);
              *(__m128 *)&v6[v17] = a3;
              v17 += 4;
            }
            while ( v17 != 4LL * (v11 >> 1) );
            if ( (v11 & 1) != 0 )
              *(_QWORD *)&v6[2 * (v11 & 0xFFFFFFFE)] = *(_QWORD *)&v16[2 * (v11 & 0xFFFFFFFE)];
          }
        }
        if ( v16 && v16 != v62 )
        {
          sub_186B220(v16);
          v11 = v61;
        }
        ptr = v6;
        HIDWORD(v61) = v53;
      }
      v13 = v11;
      ++v10;
      ++v11;
      *(_QWORD *)&v6[2 * v13] = v14;
      LODWORD(v61) = v11;
    }
    while ( v10 != (__int64 *)v12 );
  }
  v18 = *(_QWORD *)(a1 + 24);
  v19 = (unsigned int *)sub_15DCAD0(v18, (int)v6, 0);
  v21 = v19;
  if ( v19 )
    ++v19[2];
  v22 = *(unsigned int **)(v50 + 8LL * HIDWORD(v49) + 32);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
  {
    sub_B6F780(
      *(_QWORD **)(a1 + 16),
      (__int64)v19,
      0,
      a3,
      a4,
      a5,
      v20,
      v47,
      v48,
      v49,
      v50,
      (int)v62,
      v53,
      v57,
      v58,
      v59[0]);
    v29 = *(_QWORD *)(a1 + 16);
    v30 = *(_QWORD *)(v29 + 8656);
    v31 = *(_QWORD *)(v30 + 8LL * *v22);
    v32 = *(_QWORD *)(v30 + 8LL * *v21);
    if ( *(_QWORD *)(v32 + 8) != *(_QWORD *)(v31 + 8) )
    {
      v33 = *(__m128i **)(v29 + 8760);
      if ( v33 )
      {
        v34 = v33[-1].m128i_u32[3];
        if ( v34 == v33[-1].m128i_i32[2] )
        {
          v40 = 3 * v34 + 1;
          v41 = v40 & 0xFFFFFFFE;
          v42 = v40 >> 1;
          v43 = 8 * (v42 + v41) + 8;
          if ( 24 * v34 + 8 >= (unsigned int)v43 || v34 >= v42 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v59, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v59);
            sub_233E40((__int64)v59);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v51 = v42;
          v55 = v31;
          v44 = (unsigned int *)sub_186B300(&v33[-1].m128i_u64[1], v43);
          v45 = v44[1];
          v33 = (__m128i *)(v44 + 2);
          *(_QWORD *)(v29 + 8760) = v44 + 2;
          v31 = v55;
          *v44 = v51;
          LODWORD(v44) = v45;
          v29 = *(_QWORD *)(a1 + 16);
          v37 = (__m128i *)((char *)v33 + 24 * v45);
          v36 = (_DWORD)v44 + 1;
        }
        else
        {
          v35 = v34;
          v36 = v34 + 1;
          v37 = (__m128i *)((char *)v33 + 24 * v35);
        }
      }
      else
      {
        v56 = v31;
        v46 = (_QWORD *)sub_186B270(0x38u);
        *v46 = 2;
        v31 = v56;
        v36 = 1;
        v33 = (__m128i *)(v46 + 1);
        *(_QWORD *)(v29 + 8760) = v33;
        v37 = v33;
        v29 = *(_QWORD *)(a1 + 16);
      }
      v37[1].m128i_i64[0] = 0;
      *v37 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v31);
      v33[-1].m128i_i32[3] = v36;
    }
    (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v29 + 7488) + 48LL))(*(_QWORD *)(v29 + 7488), v21);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v29 + 7488) + 64LL))(*(_QWORD *)(v29 + 7488));
    goto LABEL_35;
  }
  v23 = sub_966380(a1, v19, *(_DWORD **)(v50 + 8LL * HIDWORD(v49) + 32));
  v24 = v23 >> 1;
  v54 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v54 + 7488) + 48LL))(
    *(_QWORD *)(v54 + 7488),
    *(_QWORD *)(*(_QWORD *)(v54 + 8840) + 8 * v24));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v54 + 7488) + 64LL))(*(_QWORD *)(v54 + 7488));
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
  {
    v25 = *(_QWORD *)(a1 + 16);
    v59[0] = 0;
    sub_966750(
      a1,
      *(_QWORD *)(*(_QWORD *)(v25 + 8840) + 8 * v24),
      -1,
      0,
      0,
      -1,
      (__int64 ***)v59,
      v48,
      v49,
      v50,
      (int)v62,
      (void *)v54);
    if ( v59[0] )
      sub_186B220((void *)(v59[0] - 8));
  }
  v26 = *(_DWORD *)(a1 + 8);
  v27 = *(_QWORD *)(a1 + 16);
  LODWORD(v59[0]) = v23;
  sub_B69FE0(v27, v26, 1, (unsigned int *)v59, 0, 0, 1u);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
    std::__ostream_insert<char,std::char_traits<char>>();
  if ( v21 )
  {
LABEL_35:
    if ( v21[2]-- == 1 )
      sub_15D7BC0(v18, v21);
  }
  result = v52;
  if ( ptr != v52 )
  {
    if ( ptr )
      return (int *)sub_186B220(ptr);
  }
  return result;
}

