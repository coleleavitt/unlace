__int64 *__fastcall sub_4716D0(const __m128i **a1, __int64 a2)
{
  char **exception; // rbx
  const __m128i *v5; // r14
  __int64 v6; // rax
  __int64 *result; // rax
  char v8; // cl
  __int64 v9; // rdx
  char v10; // cl
  __m128i v11; // xmm0
  unsigned int v12; // ebp
  size_t v13; // rdi
  __int64 v14; // rax
  const __m128i *v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rax
  __m128i *v18; // rdx
  const __m128i *v19; // rdi
  const __m128i *i; // rax
  __int32 v21; // ecx
  char v22; // si
  __int64 v23; // rcx
  char v24; // si
  __m128i v25; // xmm0
  __int64 v26; // rax
  void *v27; // r12
  const __m128i *v28; // rsi
  _QWORD *v29; // rax
  const __m128i *v30; // [rsp+0h] [rbp-78h]
  _DWORD *v31; // [rsp+8h] [rbp-70h]
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *a1;
  if ( *a1 )
  {
    v6 = v5[-1].m128i_u32[3];
    if ( (_DWORD)v6 == v5[-1].m128i_i32[2] )
    {
      v12 = (unsigned int)(3 * v6 + 1) >> 1;
      v13 = 40 * v12 + 8;
      if ( 40 * (int)v6 + 8 >= (unsigned int)v13 || (unsigned int)v6 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = sub_186B270(v13);
      v15 = *a1;
      v31 = (_DWORD *)v14;
      v5 = (const __m128i *)(v14 + 8);
      if ( *a1 )
      {
        v16 = v14;
        v17 = v15[-1].m128i_u32[3];
        v18 = (__m128i *)v5;
        *(_DWORD *)(v16 + 4) = v17;
        v19 = (const __m128i *)((char *)v15 + 40 * v17);
        for ( i = v15; v19 != i; v18[-2].m128i_i8[12] = v24 & 0xFC | v23 & 3 )
        {
          v21 = i->m128i_i32[0];
          v22 = v18->m128i_i8[4];
          i = (const __m128i *)((char *)i + 40);
          v18 = (__m128i *)((char *)v18 + 40);
          v18[-3].m128i_i32[2] = v21;
          v18[-3].m128i_i8[12] = v22 & 0xFC | i[-3].m128i_i8[12] & 3;
          v23 = i[-2].m128i_i64[0];
          i[-2].m128i_i64[0] = 0;
          v24 = v18[-2].m128i_i8[12];
          v18[-2].m128i_i64[0] = v23;
          LODWORD(v23) = i[-2].m128i_i32[2];
          v25 = _mm_loadu_si128(i - 1);
          i[-1].m128i_i64[0] = 0;
          v18[-2].m128i_i32[2] = v23;
          LOBYTE(v23) = i[-2].m128i_i8[12];
          v18[-1] = v25;
        }
        v26 = v15[-1].m128i_u32[3];
        if ( (_DWORD)v26 )
        {
          v30 = (const __m128i *)((char *)v15 + 40 * v26);
          do
          {
            v27 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v15);
            v28 = v15 + 1;
            v15 = (const __m128i *)((char *)v15 + 40);
            sub_182CBA0(v27, v28);
          }
          while ( v30 != v15 );
          v15 = *a1;
        }
        sub_186B220(&v15[-1].m128i_u64[1]);
        result = &v5->m128i_i64[5 * (unsigned int)v31[1]];
      }
      else
      {
        *(_DWORD *)(v14 + 4) = 0;
        result = (__int64 *)(v14 + 8);
      }
      *a1 = v5;
      *v31 = v12;
    }
    else
    {
      result = &v5->m128i_i64[5 * v6];
    }
  }
  else
  {
    v29 = (_QWORD *)sub_186B270(0x58u);
    v5 = (const __m128i *)(v29 + 1);
    *v29 = 2;
    *a1 = (const __m128i *)(v29 + 1);
    result = v29 + 1;
  }
  v8 = *(_BYTE *)(a2 + 4);
  *(_DWORD *)result = *(_DWORD *)a2;
  *((_BYTE *)result + 4) = v8 & 3 | *((_BYTE *)result + 4) & 0xFC;
  v9 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0;
  result[1] = v9;
  LODWORD(v9) = *(_DWORD *)(a2 + 16);
  v10 = *(_BYTE *)(a2 + 20);
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 24) = 0;
  *((_DWORD *)result + 4) = v9;
  LOBYTE(v9) = *((_BYTE *)result + 20);
  *(__m128i *)(result + 3) = v11;
  *((_BYTE *)result + 20) = v10 & 3 | v9 & 0xFC;
  ++v5[-1].m128i_i32[3];
  return result;
}

