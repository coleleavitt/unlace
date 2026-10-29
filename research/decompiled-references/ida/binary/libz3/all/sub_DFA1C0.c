__int64 *__fastcall sub_DFA1C0(__int64 *a1, __int64 a2)
{
  char **exception; // r12
  char **v3; // r12
  __int64 v5; // rax
  _QWORD *v6; // r13
  int v7; // edx
  __int64 v8; // rax
  _QWORD *v9; // rbp
  __int64 v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r12d
  size_t v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  _DWORD *v20; // r15
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // r15d
  __m128i *v25; // r12
  __m128i v26; // xmm0
  __m128i v27; // xmm2
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __m128i *v31; // rdx
  unsigned int v33; // ebp
  size_t v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  _DWORD *v37; // r13
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __m128i v42; // [rsp+0h] [rbp-68h] BYREF
  __int64 v43[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 792);
  *a1 = 0;
  v6 = *(_QWORD **)(a2 + 760);
  if ( v5 )
  {
    if ( !v6 )
      return a1;
    v7 = *(_DWORD *)(v5 - 4);
  }
  else
  {
    v7 = 0;
    if ( !v6 )
      return a1;
  }
  v8 = *((unsigned int *)v6 - 1);
  if ( (_DWORD)v8 == v7 )
  {
    v24 = 0;
    v25 = nullptr;
    if ( (_DWORD)v8 )
    {
      do
      {
        v26 = _mm_loadl_epi64((const __m128i *)&v6[v24]);
        v27 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a2 + 792) + 8LL * v24));
        if ( v25 )
        {
          v28 = v25[-1].m128i_u32[3];
          if ( v28 == v25[-1].m128i_i32[2] )
          {
            v33 = (3 * v28 + 1) >> 1;
            v34 = 16 * v33 + 8;
            if ( 16 * v28 + 8 >= (unsigned int)v34 || v28 >= v33 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_DF63A0(v43, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v43);
              sub_233E40((__int64)v43);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v42.m128i_i64[1] = v26.m128i_i64[0];
            v42.m128i_i64[0] = v27.m128i_i64[0];
            v35 = sub_186B270(v34);
            v36 = *a1;
            v27 = _mm_loadl_epi64(&v42);
            v37 = (_DWORD *)v35;
            v25 = (__m128i *)(v35 + 8);
            v26 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
            if ( *a1 )
            {
              v38 = *(unsigned int *)(v36 - 4);
              *(_DWORD *)(v35 + 4) = v38;
              v39 = 0;
              v40 = 16 * v38;
              if ( v40 )
              {
                do
                {
                  *(__m128i *)&v37[v39 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v36 + v39));
                  v39 += 16LL;
                }
                while ( v39 != v40 );
              }
              v42.m128i_i64[1] = v26.m128i_i64[0];
              v42.m128i_i64[0] = v27.m128i_i64[0];
              sub_186B220((void *)(v36 - 8));
              v27 = _mm_loadl_epi64(&v42);
              v26 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
              v31 = &v25[v37[1]];
              v30 = v37[1] + 1;
            }
            else
            {
              *(_DWORD *)(v35 + 4) = 0;
              v31 = (__m128i *)(v35 + 8);
              v30 = 1;
            }
            *v37 = v33;
            v6 = *(_QWORD **)(a2 + 760);
            *a1 = (__int64)v25;
          }
          else
          {
            v29 = v28;
            v30 = v28 + 1;
            v31 = &v25[v29];
          }
        }
        else
        {
          v42.m128i_i64[1] = v26.m128i_i64[0];
          v42.m128i_i64[0] = v27.m128i_i64[0];
          v41 = (_QWORD *)sub_186B270(0x28u);
          v25 = (__m128i *)(v41 + 1);
          *v41 = 2;
          v6 = *(_QWORD **)(a2 + 760);
          v30 = 1;
          *a1 = (__int64)v25;
          v27 = _mm_loadl_epi64(&v42);
          v31 = v25;
          v26 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
        }
        ++v24;
        *v31 = _mm_unpacklo_epi64(v26, v27);
        v25[-1].m128i_i32[3] = v30;
      }
      while ( v6 && v24 < *((_DWORD *)v6 - 1) );
    }
  }
  else
  {
    v9 = &v6[v8];
    if ( v9 != v6 )
    {
      v10 = *v6;
      v11 = (_QWORD *)sub_186B270(0x28u);
      *v11 = 2;
      v12 = v11 + 1;
      v13 = 1;
      *a1 = (__int64)v12;
      v14 = (__int64)v12;
      while ( 1 )
      {
        ++v6;
        *v12 = v10;
        v12[1] = 0;
        *(_DWORD *)(v14 - 4) = v13;
        if ( v9 == v6 )
          break;
        v10 = *v6;
        if ( *(_DWORD *)(v14 - 8) == v13 )
        {
          v16 = (3 * v13 + 1) >> 1;
          v17 = 16 * v16 + 8;
          if ( 16 * v13 + 8 >= (unsigned int)v17 || v13 >= v16 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_DF63A0(v43, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v43);
            sub_233E40((__int64)v43);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v18 = sub_186B270(v17);
          v19 = *a1;
          v20 = (_DWORD *)v18;
          v14 = v18 + 8;
          if ( *a1 )
          {
            v21 = *(unsigned int *)(v19 - 4);
            *(_DWORD *)(v18 + 4) = v21;
            v22 = 0;
            v23 = 16 * v21;
            if ( v23 )
            {
              do
              {
                *(__m128i *)&v20[v22 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v19 + v22));
                v22 += 16LL;
              }
              while ( v22 != v23 );
            }
            v42.m128i_i64[0] = v14;
            sub_186B220((void *)(v19 - 8));
            v14 = v42.m128i_i64[0];
            v12 = (_QWORD *)(v42.m128i_i64[0] + 16LL * (unsigned int)v20[1]);
            v13 = v20[1] + 1;
          }
          else
          {
            *(_DWORD *)(v18 + 4) = 0;
            v13 = 1;
            v12 = (_QWORD *)(v18 + 8);
          }
          *a1 = v14;
          *v20 = v16;
        }
        else
        {
          v15 = v13++;
          v12 = (_QWORD *)(v14 + 16 * v15);
        }
      }
    }
  }
  return a1;
}

