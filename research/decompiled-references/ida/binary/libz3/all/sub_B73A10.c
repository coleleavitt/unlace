__int64 __fastcall sub_B73A10(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5, unsigned int a6, __int64 a7)
{
  char **exception; // rbx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 *m128i_i64; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  size_t v16; // rdi
  __int64 v17; // rax
  const __m128i *v18; // r14
  _DWORD *v19; // r13
  __m128i *v20; // rax
  __int64 v21; // rcx
  __m128i *v22; // rdx
  const __m128i *v23; // rax
  const __m128i *v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  const __m128i *v27; // rbp
  const __m128i *v28; // rdi
  __int64 result; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdi
  int v33; // ecx
  __m128i *v34; // [rsp+0h] [rbp-88h]
  __int64 v35; // [rsp+8h] [rbp-80h]
  unsigned int v36; // [rsp+10h] [rbp-78h]
  __int64 v39[11]; // [rsp+30h] [rbp-58h] BYREF

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_1C57A40;
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a6 )
  {
    v10 = a7;
    v35 = a7 + 16LL * a6;
    v11 = (_QWORD *)sub_186B270(0x28u);
    m128i_i64 = v11 + 1;
    *v11 = 2;
    *(_QWORD *)(a1 + 16) = v11 + 1;
    while ( 1 )
    {
      v10 += 16;
      sub_15D0E50(m128i_i64, a7);
      v13 = *(_QWORD *)(a1 + 16);
      v14 = (unsigned int)(*(_DWORD *)(v13 - 4) + 1);
      *(_DWORD *)(v13 - 4) = v14;
      if ( v35 == v10 )
        break;
      v15 = *(_DWORD *)(v13 - 8);
      a7 = v10;
      if ( v15 == (_DWORD)v14 )
      {
        v36 = (3 * v15 + 1) >> 1;
        v16 = 16 * v36 + 8;
        if ( 16 * v15 + 8 >= (unsigned int)v16 || v15 >= (3 * v15 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v39, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v39);
          sub_233E40((__int64)v39);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = sub_186B270(v16);
        v18 = *(const __m128i **)(a1 + 16);
        v19 = (_DWORD *)v17;
        v20 = (__m128i *)(v17 + 8);
        v34 = v20;
        if ( v18 )
        {
          v21 = v18[-1].m128i_u32[3];
          v22 = v20;
          v23 = *(const __m128i **)(a1 + 16);
          v19[1] = v21;
          v24 = &v18[v21];
          if ( v18 != v24 )
          {
            do
            {
              v25 = v23->m128i_i8[8] == 0;
              *v22 = _mm_loadu_si128(v23);
              v23->m128i_i32[0] = 0;
              if ( !v25 )
                v23->m128i_i8[8] = 0;
              ++v23;
              ++v22;
            }
            while ( v23 != v24 );
          }
          v26 = v18[-1].m128i_u32[3];
          v27 = &v18[v26];
          if ( (_DWORD)v26 )
          {
            do
            {
              v28 = v18++;
              sub_15D0DF0(v28);
            }
            while ( v18 != v27 );
            v18 = *(const __m128i **)(a1 + 16);
          }
          sub_186B220(&v18[-1].m128i_u64[1]);
          m128i_i64 = v34[v19[1]].m128i_i64;
          v20 = v34;
        }
        else
        {
          v19[1] = 0;
          m128i_i64 = (__int64 *)v20;
        }
        *(_QWORD *)(a1 + 16) = v20;
        *v19 = v36;
      }
      else
      {
        m128i_i64 = (__int64 *)(v13 + 16 * v14);
      }
    }
  }
  *(_DWORD *)(a1 + 24) = a4;
  result = sub_186B270(8LL * a4);
  *(_QWORD *)(a1 + 32) = result;
  v30 = result;
  if ( a4 )
  {
    v31 = 0;
    v32 = *(_QWORD *)(a3 + 8840);
    do
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v32 + 8LL * (*(_DWORD *)(a5 + 4 * v31) >> 1));
        v33 = *(_DWORD *)(a5 + 4 * v31) & 1;
        if ( !result )
          break;
        ++*(_DWORD *)(result + 8);
        result = (unsigned __int8)v33 | (unsigned __int64)result;
        *(_QWORD *)(v30 + 8 * v31++) = result;
        if ( v31 == a4 )
          return result;
      }
      *(_QWORD *)(v30 + 8 * v31++) = (unsigned __int8)v33;
    }
    while ( a4 != v31 );
  }
  return result;
}

