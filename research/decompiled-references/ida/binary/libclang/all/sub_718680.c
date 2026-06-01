unsigned __int64 __fastcall sub_718680(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  _BYTE *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  const __m128i *v14; // r15
  __m128i *v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v18; // r15
  void *ptr; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-1C0h]
  _BYTE v22[440]; // [rsp+20h] [rbp-1B8h] BYREF

  ptr = v22;
  v21 = 0x1000000000LL;
  if ( a6 )
  {
    v8 = a5;
    v9 = 16;
    v10 = a5 + 32LL * (unsigned int)(a6 - 1) + 32;
    v11 = v22;
    v12 = 0;
    while ( 1 )
    {
      v13 = v12 + 1;
      v14 = (const __m128i *)v8;
      if ( v9 < v12 + 1 )
      {
        if ( v8 < (unsigned __int64)v11 || v8 >= (unsigned __int64)&v11[24 * v12] )
        {
          sub_25D6060(&ptr, v22, v13, 24);
          v11 = ptr;
          v12 = (unsigned int)v21;
        }
        else
        {
          v18 = v8 - (_QWORD)v11;
          sub_25D6060(&ptr, v22, v13, 24);
          v11 = ptr;
          v12 = (unsigned int)v21;
          v14 = (const __m128i *)((char *)ptr + v18);
        }
      }
      v8 += 32LL;
      v15 = (__m128i *)&v11[24 * v12];
      *v15 = _mm_loadu_si128(v14);
      v11 = ptr;
      v15[1].m128i_i64[0] = v14[1].m128i_i64[0];
      v12 = (unsigned int)(v21 + 1);
      LODWORD(v21) = v21 + 1;
      if ( v10 == v8 )
        break;
      v9 = HIDWORD(v21);
    }
  }
  else
  {
    v12 = 0;
    v11 = v22;
  }
  v16 = sub_7183B0(a1, a2, a3, a4, v11, v12);
  if ( ptr != v22 )
    free(ptr);
  return v16;
}

