void __fastcall sub_1F4DD00(__int64 *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // r15d
  __int64 v5; // r14
  __m128i v6; // xmm0
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char *v9; // rcx
  __m128i *v10; // rdx
  __m128i *v11; // rax
  __int64 v12; // rdx
  const __m128i *v13; // rsi
  _BYTE *v14; // [rsp+18h] [rbp-F0h]
  __m128i v15; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D8h]
  __m128i v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h]
  void *ptr; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h]
  _BYTE v21[152]; // [rsp+70h] [rbp-98h] BYREF

  sub_1F43F90(a1, a2);
  v20 = 0x400000000LL;
  v3 = *(_DWORD *)(a2 + 36);
  ptr = v21;
  if ( v3 )
  {
    v4 = 0;
    do
    {
      v5 = a1[2];
      sub_1F0B900((__int64)&v17, v5);
      sub_AB6BB0(&v15, *(_QWORD **)(*(_QWORD *)(v5 + 8) + 144LL), &v17);
      v6 = _mm_loadu_si128(&v15);
      v18 = v16;
      v7 = (unsigned int)v20;
      v17 = v6;
      v8 = (unsigned int)v20 + 1LL;
      if ( v8 > HIDWORD(v20) )
      {
        if ( ptr > &v17 || &v17 >= (__m128i *)((char *)ptr + 24 * (unsigned int)v20) )
        {
          sub_2237220(&ptr, v21, v8, 24);
          v9 = (char *)ptr;
          v7 = (unsigned int)v20;
          v10 = &v17;
        }
        else
        {
          v14 = ptr;
          sub_2237220(&ptr, v21, v8, 24);
          v7 = (unsigned int)v20;
          v9 = (char *)ptr;
          v10 = (__m128i *)((char *)ptr + (char *)&v17 - v14);
        }
      }
      else
      {
        v9 = (char *)ptr;
        v10 = &v17;
      }
      ++v4;
      v11 = (__m128i *)&v9[24 * v7];
      *v11 = _mm_loadu_si128(v10);
      v11[1].m128i_i64[0] = v10[1].m128i_i64[0];
      v12 = (unsigned int)(v20 + 1);
      LODWORD(v20) = v20 + 1;
    }
    while ( *(_DWORD *)(a2 + 36) > v4 );
    v13 = (const __m128i *)ptr;
  }
  else
  {
    v12 = 0;
    v13 = (const __m128i *)v21;
  }
  sub_BBF6F0(a2, v13, v12);
  if ( ptr != v21 )
    free(ptr);
}
