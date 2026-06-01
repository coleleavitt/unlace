__int64 __fastcall sub_9DEA00(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v10; // r15
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 *m128i_i64; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // r14d
  size_t v18; // rdi
  __int64 v19; // rax
  const __m128i *v20; // r14
  _DWORD *v21; // r13
  __m128i *v22; // rax
  __int64 v23; // rcx
  __m128i *v24; // rdx
  const __m128i *v25; // rax
  const __m128i *v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  const __m128i *v29; // rbp
  const __m128i *v30; // rdi
  char **exception; // rbx
  __m128i *v33; // [rsp+0h] [rbp-78h]
  unsigned int v34; // [rsp+14h] [rbp-64h]
  __int64 v36[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = a9;
  sub_B72D60(a1, a3, a4, a5, a6, a7);
  *(_DWORD *)(a1 + 40) = a2;
  *(_QWORD *)a1 = qword_1C6E7C8;
  *(_QWORD *)(a1 + 48) = 0;
  if ( a8 )
  {
    v11 = a9;
    v12 = (_QWORD *)sub_186B270(0x28u);
    m128i_i64 = v12 + 1;
    *v12 = 2;
    *(_QWORD *)(a1 + 48) = v12 + 1;
    while ( 1 )
    {
      v11 += 16;
      sub_15D0E50(m128i_i64, v10);
      v14 = *(_QWORD *)(a1 + 48);
      v15 = (unsigned int)(*(_DWORD *)(v14 - 4) + 1);
      *(_DWORD *)(v14 - 4) = v15;
      if ( 16LL * a8 + a9 == v11 )
        break;
      v16 = *(_DWORD *)(v14 - 8);
      v10 = v11;
      if ( v16 == (_DWORD)v15 )
      {
        v17 = (3 * v16 + 1) >> 1;
        v34 = v17;
        v18 = 16 * v17 + 8;
        if ( 16 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v36, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = sub_186B270(v18);
        v20 = *(const __m128i **)(a1 + 48);
        v21 = (_DWORD *)v19;
        v22 = (__m128i *)(v19 + 8);
        v33 = v22;
        if ( v20 )
        {
          v23 = v20[-1].m128i_u32[3];
          v24 = v22;
          v25 = *(const __m128i **)(a1 + 48);
          v21[1] = v23;
          v26 = &v20[v23];
          if ( v20 != v26 )
          {
            do
            {
              v27 = v25->m128i_i8[8] == 0;
              *v24 = _mm_loadu_si128(v25);
              v25->m128i_i32[0] = 0;
              if ( !v27 )
                v25->m128i_i8[8] = 0;
              ++v25;
              ++v24;
            }
            while ( v26 != v25 );
          }
          v28 = v20[-1].m128i_u32[3];
          v29 = &v20[v28];
          if ( (_DWORD)v28 )
          {
            do
            {
              v30 = v20++;
              sub_15D0DF0(v30);
            }
            while ( v20 != v29 );
            v20 = *(const __m128i **)(a1 + 48);
          }
          sub_186B220(&v20[-1].m128i_u64[1]);
          m128i_i64 = v33[v21[1]].m128i_i64;
          v22 = v33;
        }
        else
        {
          v21[1] = 0;
          m128i_i64 = (__int64 *)v22;
        }
        *(_QWORD *)(a1 + 48) = v22;
        *v21 = v34;
      }
      else
      {
        m128i_i64 = (__int64 *)(v14 + 16 * v15);
      }
    }
  }
  *(_QWORD *)a1 = &off_1C57990;
  return sub_B73430(a1, a3);
}

