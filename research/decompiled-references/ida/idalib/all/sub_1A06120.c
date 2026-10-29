void __fastcall sub_1A06120(__int64 *a1, int a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r9
  unsigned __int64 v9; // r14
  const __m128i *v10; // r15
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r14
  _BYTE *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i *v16; // rax
  const __m128i *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r15
  unsigned __int64 v23; // [rsp+8h] [rbp-90h]
  unsigned __int64 v24; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v26; // [rsp+18h] [rbp-80h]
  _BYTE v27[120]; // [rsp+20h] [rbp-78h] BYREF

  if ( !(unsigned __int8)sub_1A04610(a1, a4, a5, a4, a5, a6) )
  {
    v26 = 0x100000000LL;
    v9 = a4 + (a5 << 6);
    ptr = v27;
    if ( a4 == v9 )
    {
      v14 = 0;
      v17 = (const __m128i *)v27;
    }
    else
    {
      v10 = (const __m128i *)(a4 + 4);
      v11 = a4 + 68;
      v12 = v9 + 4;
      v13 = v27;
      v14 = 0;
      while ( 1 )
      {
        v16 = (__m128i *)&v13[60 * v14];
        *v16 = _mm_loadu_si128(v10);
        v16[1] = _mm_loadu_si128(v10 + 1);
        v16[2] = _mm_loadu_si128(v10 + 2);
        v16[3].m128i_i64[0] = v10[3].m128i_i64[0];
        v16[3].m128i_i32[2] = v10[3].m128i_i32[2];
        v14 = (unsigned int)(v26 + 1);
        LODWORD(v26) = v26 + 1;
        if ( v12 == v11 )
          break;
        v15 = v14 + 1;
        v10 = (const __m128i *)v11;
        v13 = ptr;
        if ( v14 + 1 > (unsigned __int64)HIDWORD(v26) )
        {
          if ( (unsigned __int64)ptr > v11 || (unsigned __int64)ptr + 60 * v14 <= v11 )
          {
            v24 = v11;
            sub_2237220(&ptr, v27, v15, 60);
            v13 = ptr;
            v14 = (unsigned int)v26;
            v11 = v24;
          }
          else
          {
            v21 = v11 - (_QWORD)ptr;
            v23 = v11;
            sub_2237220(&ptr, v27, v15, 60);
            v13 = ptr;
            v14 = (unsigned int)v26;
            v11 = v23;
            v10 = (const __m128i *)((char *)ptr + v21);
          }
        }
        v11 += 64LL;
      }
      v17 = (const __m128i *)ptr;
    }
    v18 = sub_B7AE20(
            *(_QWORD *)(*a1 + 248),
            *(_QWORD *)(*a1 + 544),
            a2,
            a3,
            *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 856LL),
            v8,
            v17,
            v14);
    *(_BYTE *)(v18 + 29) |= 2u;
    sub_17B7670(*a1, v18, *(_QWORD *)(*a1 + 608), 1, v19, v20);
    if ( ptr != v27 )
      free(ptr);
  }
}
