_QWORD *__fastcall sub_2FDD40(__int64 *a1)
{
  unsigned int v2; // eax
  size_t v3; // rdi
  __int64 v4; // rax
  const __m128i *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  const __m128i *v8; // rdi
  const __m128i *i; // rax
  __int32 v10; // ecx
  char v11; // si
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int32 v14; // ecx
  __int64 v15; // rcx
  char v16; // si
  __int64 v17; // rcx
  __int64 v18; // rax
  void *v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rbp
  void *v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rdi
  _QWORD *result; // rax
  _QWORD *v29; // rax
  char **exception; // rbx
  const __m128i *v31; // [rsp+0h] [rbp-78h]
  _DWORD *v32; // [rsp+8h] [rbp-70h]
  __int64 v33; // [rsp+10h] [rbp-68h]
  unsigned int v34; // [rsp+1Ch] [rbp-5Ch]
  __int64 v35[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = *(_DWORD *)(*a1 - 8);
    v34 = (3 * v2 + 1) >> 1;
    v3 = 104 * v34 + 8;
    if ( 104 * v2 + 8 >= (unsigned int)v3 || v2 >= (3 * v2 + 1) >> 1 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_2EB560(v35, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v35);
      sub_233E40((__int64)v35);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v4 = sub_186B270(v3);
    v5 = (const __m128i *)*a1;
    v32 = (_DWORD *)v4;
    v33 = v4 + 8;
    if ( *a1 )
    {
      v6 = v5[-1].m128i_u32[3];
      v32[1] = v6;
      v7 = v33;
      v8 = (const __m128i *)((char *)v5 + 104 * v6);
      for ( i = v5; v8 != i; *(_DWORD *)(v7 - 8) = i[-1].m128i_i32[2] )
      {
        v10 = i->m128i_i32[0];
        v11 = *(_BYTE *)(v7 + 52);
        i = (const __m128i *)((char *)i + 104);
        v7 += 104;
        *(_DWORD *)(v7 - 104) = v10;
        v12 = _mm_loadu_si128(i - 6);
        i[-6].m128i_i64[0] = 0;
        *(__m128i *)(v7 - 96) = v12;
        *(_QWORD *)(v7 - 80) = i[-5].m128i_i64[0];
        v13 = _mm_loadu_si128((const __m128i *)((char *)i - 72));
        i[-5].m128i_i64[1] = 0;
        *(__m128i *)(v7 - 72) = v13;
        v14 = i[-4].m128i_i32[2];
        i[-4].m128i_i64[0] = 0;
        *(_DWORD *)(v7 - 56) = v14;
        *(_BYTE *)(v7 - 52) = v11 & 0xFC | i[-4].m128i_i8[12] & 3;
        v15 = i[-3].m128i_i64[0];
        i[-3].m128i_i64[0] = 0;
        v16 = *(_BYTE *)(v7 - 36);
        *(_QWORD *)(v7 - 48) = v15;
        *(_DWORD *)(v7 - 40) = i[-3].m128i_i32[2];
        *(_BYTE *)(v7 - 36) = v16 & 0xFC | i[-3].m128i_i8[12] & 3;
        v17 = i[-2].m128i_i64[0];
        i[-2].m128i_i64[0] = 0;
        *(_QWORD *)(v7 - 32) = v17;
        *(_BYTE *)(v7 - 24) = i[-2].m128i_i8[8];
        *(_QWORD *)(v7 - 16) = i[-1].m128i_i64[0];
      }
      v18 = v5[-1].m128i_u32[3];
      if ( (_DWORD)v18 )
      {
        v31 = (const __m128i *)((char *)v5 + 104 * v18);
        do
        {
          v19 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v5[3]);
          sub_182CBA0(v19, &v5[4]);
          v20 = v5[2].m128i_i64[1];
          if ( v20 )
          {
            v21 = *(unsigned int *)(v20 - 4);
            if ( (_DWORD)v21 )
            {
              v22 = v20 + 32 * v21;
              do
              {
                v23 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v20);
                v24 = v20 + 16;
                v20 += 32;
                sub_182CBA0(v23, v24);
              }
              while ( v22 != v20 );
              v20 = v5[2].m128i_i64[1];
            }
            sub_186B220((void *)(v20 - 8));
          }
          sub_2334C0(&v5[1].m128i_i64[1]);
          v25 = v5->m128i_i64[1];
          if ( v25 )
          {
            v26 = v5[1].m128i_i64[0];
            if ( (*(_DWORD *)(v25 + 8))-- == 1 )
              sub_15D7BC0(v26, v25);
          }
          v5 = (const __m128i *)((char *)v5 + 104);
        }
        while ( v31 != v5 );
        v5 = (const __m128i *)*a1;
      }
      sub_186B220(&v5[-1].m128i_u64[1]);
    }
    else
    {
      *(_DWORD *)(v4 + 4) = 0;
    }
    *a1 = v33;
    *v32 = v34;
    return v32;
  }
  else
  {
    v29 = (_QWORD *)sub_186B270(0xD8u);
    *v29 = 2;
    result = v29 + 1;
    *a1 = (__int64)result;
  }
  return result;
}

