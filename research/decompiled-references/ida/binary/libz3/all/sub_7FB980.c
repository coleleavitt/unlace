__int64 *__fastcall sub_7FB980(const __m128i **a1, __int64 a2)
{
  const __m128i *v4; // r14
  __int64 v5; // rax
  __int64 *result; // rax
  char v7; // cl
  __int64 v8; // rdx
  char v9; // cl
  __m128i v10; // xmm0
  unsigned int v11; // ebp
  size_t v12; // rdi
  __int64 v13; // rax
  const __m128i *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128i *v17; // rdx
  const __m128i *v18; // rdi
  const __m128i *i; // rax
  __int32 v20; // ecx
  char v21; // si
  __int64 v22; // rcx
  char v23; // si
  __m128i v24; // xmm0
  __int64 v25; // rax
  void *v26; // r12
  const __m128i *v27; // rsi
  _QWORD *v28; // rax
  char **exception; // rbx
  const __m128i *v30; // [rsp+0h] [rbp-78h]
  _DWORD *v31; // [rsp+8h] [rbp-70h]
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v5 = v4[-1].m128i_u32[3];
    if ( (_DWORD)v5 == v4[-1].m128i_i32[2] )
    {
      v11 = (unsigned int)(3 * v5 + 1) >> 1;
      v12 = 40 * v11 + 8;
      if ( 40 * (int)v5 + 8 >= (unsigned int)v12 || (unsigned int)v5 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = sub_186B270(v12);
      v14 = *a1;
      v31 = (_DWORD *)v13;
      v4 = (const __m128i *)(v13 + 8);
      if ( *a1 )
      {
        v15 = v13;
        v16 = v14[-1].m128i_u32[3];
        v17 = (__m128i *)v4;
        *(_DWORD *)(v15 + 4) = v16;
        v18 = (const __m128i *)((char *)v14 + 40 * v16);
        for ( i = v14; v18 != i; v17[-2].m128i_i8[12] = v23 & 0xFC | v22 & 3 )
        {
          v20 = i->m128i_i32[0];
          v21 = v17->m128i_i8[4];
          i = (const __m128i *)((char *)i + 40);
          v17 = (__m128i *)((char *)v17 + 40);
          v17[-3].m128i_i32[2] = v20;
          v17[-3].m128i_i8[12] = v21 & 0xFC | i[-3].m128i_i8[12] & 3;
          v22 = i[-2].m128i_i64[0];
          i[-2].m128i_i64[0] = 0;
          v23 = v17[-2].m128i_i8[12];
          v17[-2].m128i_i64[0] = v22;
          LODWORD(v22) = i[-2].m128i_i32[2];
          v24 = _mm_loadu_si128(i - 1);
          i[-1].m128i_i64[0] = 0;
          v17[-2].m128i_i32[2] = v22;
          LOBYTE(v22) = i[-2].m128i_i8[12];
          v17[-1] = v24;
        }
        v25 = v14[-1].m128i_u32[3];
        if ( (_DWORD)v25 )
        {
          v30 = (const __m128i *)((char *)v14 + 40 * v25);
          do
          {
            v26 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v14);
            v27 = v14 + 1;
            v14 = (const __m128i *)((char *)v14 + 40);
            sub_182CBA0(v26, v27);
          }
          while ( v30 != v14 );
          v14 = *a1;
        }
        sub_186B220(&v14[-1].m128i_u64[1]);
        result = &v4->m128i_i64[5 * (unsigned int)v31[1]];
      }
      else
      {
        *(_DWORD *)(v13 + 4) = 0;
        result = (__int64 *)(v13 + 8);
      }
      *a1 = v4;
      *v31 = v11;
    }
    else
    {
      result = &v4->m128i_i64[5 * v5];
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x58u);
    v4 = (const __m128i *)(v28 + 1);
    *v28 = 2;
    *a1 = (const __m128i *)(v28 + 1);
    result = v28 + 1;
  }
  v7 = *(_BYTE *)(a2 + 4);
  *(_DWORD *)result = *(_DWORD *)a2;
  *((_BYTE *)result + 4) = v7 & 3 | *((_BYTE *)result + 4) & 0xFC;
  v8 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0;
  result[1] = v8;
  LODWORD(v8) = *(_DWORD *)(a2 + 16);
  v9 = *(_BYTE *)(a2 + 20);
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 24) = 0;
  *((_DWORD *)result + 4) = v8;
  LOBYTE(v8) = *((_BYTE *)result + 20);
  *(__m128i *)(result + 3) = v10;
  *((_BYTE *)result + 20) = v9 & 3 | v8 & 0xFC;
  ++v4[-1].m128i_i32[3];
  return result;
}

