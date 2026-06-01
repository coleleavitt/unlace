const __m128i *__fastcall sub_93CB40(const __m128i **a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  size_t v4; // rdi
  __int64 v5; // rax
  const __m128i *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  const __m128i *v11; // rax
  const __m128i *v12; // rsi
  __int32 v13; // ecx
  char v14; // di
  __int64 v15; // rcx
  char v16; // di
  __int64 v17; // rcx
  char v18; // di
  __int64 v19; // rcx
  char v20; // di
  __m128i v21; // xmm0
  __int64 v22; // rax
  const __m128i *v23; // r15
  __int64 v24; // rdi
  void *v25; // r12
  void *v26; // r12
  __int64 *v27; // rsi
  const __m128i *result; // rax
  _QWORD *v29; // rax
  char **exception; // rbx
  _DWORD *v31; // [rsp+0h] [rbp-68h]
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = (*a1)[-1].m128i_u32[2];
    v3 = (3 * v2 + 1) >> 1;
    v4 = 80 * v3 + 8;
    if ( 80 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_91CD50(v33, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v33);
      sub_233E40((__int64)v33);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v5 = sub_186B270(v4);
    v6 = *a1;
    v31 = (_DWORD *)v5;
    v7 = v5 + 8;
    v32 = v7;
    if ( *a1 )
    {
      v8 = v7;
      v9 = v6[-1].m128i_u32[3];
      v31[1] = v9;
      v10 = 5 * v9;
      v11 = v6;
      v12 = &v6[v10];
      if ( v6 != v12 )
      {
        do
        {
          v13 = v11->m128i_i32[0];
          v14 = *(_BYTE *)(v8 + 12);
          v11 += 5;
          v8 += 80;
          *(_DWORD *)(v8 - 80) = v13;
          *(_DWORD *)(v8 - 72) = v11[-5].m128i_i32[2];
          *(_BYTE *)(v8 - 68) = v14 & 0xFC | v11[-5].m128i_i8[12] & 3;
          v15 = v11[-4].m128i_i64[0];
          v11[-4].m128i_i64[0] = 0;
          v16 = *(_BYTE *)(v8 - 52);
          *(_QWORD *)(v8 - 64) = v15;
          *(_DWORD *)(v8 - 56) = v11[-4].m128i_i32[2];
          *(_BYTE *)(v8 - 52) = v16 & 0xFC | v11[-4].m128i_i8[12] & 3;
          v17 = v11[-3].m128i_i64[0];
          v11[-3].m128i_i64[0] = 0;
          v18 = *(_BYTE *)(v8 - 36);
          *(_QWORD *)(v8 - 48) = v17;
          *(_DWORD *)(v8 - 40) = v11[-3].m128i_i32[2];
          *(_BYTE *)(v8 - 36) = v18 & 0xFC | v11[-3].m128i_i8[12] & 3;
          v19 = v11[-2].m128i_i64[0];
          v11[-2].m128i_i64[0] = 0;
          v20 = *(_BYTE *)(v8 - 20);
          *(_QWORD *)(v8 - 32) = v19;
          v21 = _mm_loadu_si128(v11 - 1);
          *(_DWORD *)(v8 - 24) = v11[-2].m128i_i32[2];
          *(_BYTE *)(v8 - 20) = v20 & 0xFC | v11[-2].m128i_i8[12] & 3;
          v11[-1].m128i_i64[0] = 0;
          *(__m128i *)(v8 - 16) = v21;
          v11[-1].m128i_i64[1] = 0;
        }
        while ( v12 != v11 );
      }
      v22 = v6[-1].m128i_u32[3];
      if ( (_DWORD)v22 )
      {
        v23 = &v6[5 * v22];
        do
        {
          v24 = v6[4].m128i_i64[1];
          if ( v24 )
            sub_186B220((void *)(v24 - 8));
          v25 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v6[2].m128i_u64[1]);
          sub_182CBA0(v25, &v6[3].m128i_u64[1]);
          v26 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v6->m128i_u64[1]);
          v27 = &v6[1].m128i_i64[1];
          v6 += 5;
          sub_182CBA0(v26, v27);
        }
        while ( v6 != v23 );
        v6 = *a1;
      }
      sub_186B220(&v6[-1].m128i_u64[1]);
    }
    else
    {
      v31[1] = 0;
    }
    *a1 = (const __m128i *)v32;
    *v31 = v3;
    return (const __m128i *)v31;
  }
  else
  {
    v29 = (_QWORD *)sub_186B270(0xA8u);
    *v29 = 2;
    result = (const __m128i *)(v29 + 1);
    *a1 = result;
  }
  return result;
}

