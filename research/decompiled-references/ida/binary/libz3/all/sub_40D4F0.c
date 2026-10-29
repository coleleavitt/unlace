_QWORD *__fastcall sub_40D4F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char **exception; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // r8
  const __m128i *v11; // r15
  _DWORD *v12; // rax
  unsigned int v13; // ebx
  _QWORD *v14; // rax
  __m128i v15; // xmm1
  __m128i *v16; // rbx
  const __m128i *i; // rbp
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rsi
  _QWORD *v21; // rdi
  unsigned int v22; // r13d
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  _QWORD *v27; // r9
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rdx
  void (__fastcall ***v31)(_QWORD); // rbx
  unsigned int v34; // r9d
  size_t v35; // rsi
  unsigned int v36; // r12d
  unsigned int *v37; // rax
  __int64 v38; // rsi
  _QWORD *v39; // rax
  unsigned int v41; // [rsp+18h] [rbp-A0h]
  const __m128i *v42; // [rsp+28h] [rbp-90h] BYREF
  __int64 v43[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v44; // [rsp+40h] [rbp-78h] BYREF
  void *ptr; // [rsp+48h] [rbp-70h]
  _QWORD *v46; // [rsp+50h] [rbp-68h] BYREF
  __int64 v47[11]; // [rsp+60h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a2 + 152);
  *a1 = 0;
  v9 = *(unsigned int *)(a2 + 364);
  v43[0] = v8;
  v10 = *(_BYTE *)(a2 + 668);
  v43[1] = 0;
  v42 = nullptr;
  sub_40C0C0(a2, v9, (__int64)v43, &v42, v10, a6);
  v11 = v42;
  v44 = *(_QWORD *)(a2 + 152);
  v12 = *(_DWORD **)(a2 + 624);
  ptr = v12;
  if ( v12 )
    ++v12[2];
  v46 = nullptr;
  if ( v11 )
  {
    v13 = v11[-1].m128i_u32[3];
    v41 = v11[-1].m128i_u32[2];
    v14 = (_QWORD *)sub_186B270(48LL * v41 + 8);
    v15 = _mm_cvtsi32_si128(v13);
    v16 = (__m128i *)(v14 + 1);
    v46 = v14 + 1;
    *v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v41), v15).m128i_u64[0];
    for ( i = &v11[3 * v11[-1].m128i_u32[3]]; i != v11; v16 += 3 )
    {
      v18 = _mm_loadu_si128(v11);
      *v16 = v18;
      if ( v18.m128i_i64[0] )
        ++*(_DWORD *)(v18.m128i_i64[0] + 8);
      v19 = v11[1].m128i_i64[0];
      v16[1].m128i_i64[1] = 0;
      v20 = v11[1].m128i_i64[1];
      v16[1].m128i_i64[0] = v19;
      if ( v20 )
      {
        v21 = nullptr;
        v22 = 0;
        do
        {
          if ( v22 >= *(_DWORD *)(v20 - 4) )
            break;
          v23 = *(_QWORD *)(v20 + 8LL * v22);
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          if ( v21 )
          {
            v24 = *((_DWORD *)v21 - 1);
            if ( v24 == *((_DWORD *)v21 - 2) )
            {
              v34 = (3 * v24 + 1) >> 1;
              v35 = 8 * v34 + 8;
              v36 = v34;
              if ( 8 * v24 + 8 >= (unsigned int)v35 || v24 >= v34 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_3FCFD0(v47, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v47);
                sub_233E40((__int64)v47);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v37 = (unsigned int *)sub_186B300(v21 - 1, v35);
              v38 = v37[1];
              v21 = v37 + 2;
              *v37 = v36;
              v16[1].m128i_i64[1] = (__int64)(v37 + 2);
              LODWORD(v37) = v38;
              v27 = &v21[v38];
              v20 = v11[1].m128i_i64[1];
              v26 = (_DWORD)v37 + 1;
            }
            else
            {
              v25 = v24;
              v26 = v24 + 1;
              v27 = &v21[v25];
            }
          }
          else
          {
            v39 = (_QWORD *)sub_186B270(0x18u);
            v21 = v39 + 1;
            v16[1].m128i_i64[1] = (__int64)(v39 + 1);
            v27 = v39 + 1;
            v20 = v11[1].m128i_i64[1];
            *v39 = 2;
            v26 = 1;
          }
          *v27 = v23;
          ++v22;
          *((_DWORD *)v21 - 1) = v26;
        }
        while ( v20 );
      }
      v28 = _mm_loadu_si128(v11 + 2);
      v16[2] = v28;
      if ( v28.m128i_i64[0] )
        ++*(_DWORD *)(v28.m128i_i64[0] + 8);
      v11 += 3;
    }
  }
  sub_421690(&v44, a1);
  sub_41E3C0(&v46, a1, v29);
  v31 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    if ( (*((_DWORD *)ptr + 2))-- == 1 )
    {
      (**v31)(v31);
      sub_186B220(v31);
    }
  }
  sub_41E3C0(&v42, a1, v30);
  sub_2334C0(v43);
  return a1;
}

