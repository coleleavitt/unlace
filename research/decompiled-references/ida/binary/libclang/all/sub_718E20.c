unsigned __int64 __fastcall sub_718E20(__int64 a1, void *a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  _BYTE *v10; // rcx
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  __int64 v13; // rdx
  const __m128i *v14; // r15
  __m128i *v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v18; // r15
  void *ptr; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-A0h]
  _BYTE v21[152]; // [rsp+20h] [rbp-98h] BYREF

  ptr = v21;
  v20 = 0x400000000LL;
  if ( a4 > 4 )
  {
    sub_25D6060(&ptr, v21, a4, 24);
    v8 = (unsigned int)v20;
    v10 = ptr;
    v9 = (unsigned int)v20;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    v10 = v21;
  }
  v11 = 32 * a4;
  v12 = a3 + v11;
  if ( a3 + v11 != a3 )
  {
    do
    {
      v13 = v9 + 1;
      v14 = (const __m128i *)a3;
      if ( HIDWORD(v20) < (unsigned __int64)(v9 + 1) )
      {
        if ( a3 < (unsigned __int64)v10 || a3 >= (unsigned __int64)&v10[24 * v9] )
        {
          sub_25D6060(&ptr, v21, v13, 24);
          v10 = ptr;
          v9 = (unsigned int)v20;
        }
        else
        {
          v18 = a3 - (_QWORD)v10;
          sub_25D6060(&ptr, v21, v13, 24);
          v10 = ptr;
          v9 = (unsigned int)v20;
          v14 = (const __m128i *)((char *)ptr + v18);
        }
      }
      a3 += 32LL;
      v15 = (__m128i *)&v10[24 * v9];
      *v15 = _mm_loadu_si128(v14);
      v10 = ptr;
      v15[1].m128i_i64[0] = v14[1].m128i_i64[0];
      v9 = (unsigned int)(v20 + 1);
      LODWORD(v20) = v20 + 1;
    }
    while ( v12 != a3 );
    v8 = (unsigned int)v9;
  }
  v16 = sub_718CB0(a1, a2, v10, v8, a5);
  if ( ptr != v21 )
    free(ptr);
  return v16;
}

