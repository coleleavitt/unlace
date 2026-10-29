void __fastcall sub_1371C80(__int64 a1, __m128i *a2, size_t a3, char a4, int a5, char a6)
{
  __m128i *v6; // r10
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  int v14; // ebx
  char v15; // r9
  size_t v16; // rbx
  void *v17; // r14
  size_t v18; // rdi
  void *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rdi
  __m128i *p_si128; // [rsp+0h] [rbp-388h]
  char v26; // [rsp+Fh] [rbp-379h]
  void *ptr; // [rsp+10h] [rbp-378h] BYREF
  __m128i v28; // [rsp+18h] [rbp-370h]
  __m128i si128; // [rsp+28h] [rbp-360h] BYREF
  _BYTE v30[5]; // [rsp+38h] [rbp-350h] BYREF
  void *src; // [rsp+130h] [rbp-258h] BYREF
  size_t n[2]; // [rsp+138h] [rbp-250h]
  _BYTE v33[576]; // [rsp+148h] [rbp-240h] BYREF

  v6 = a2;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8EA0);
  src = v33;
  if ( a3 > 0x200 )
  {
    p_si128 = a2;
    sub_2236E10(&src, v33, a3, 1);
    v6 = a2;
    v24 = (char *)src + n[0];
LABEL_26:
    memcpy(v24, v6, a3);
    n[0] += a3;
    if ( a6 )
      goto LABEL_4;
    goto LABEL_27;
  }
  if ( a3 )
  {
    v24 = v33;
    goto LABEL_26;
  }
  n[0] = 0;
  if ( a6 )
  {
LABEL_4:
    v12 = 21;
    v28.m128i_i64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0).m128i_i64[1];
    ptr = &si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA110);
    v28.m128i_i64[0] = 21;
    qmemcpy(v30, "file:", sizeof(v30));
    goto LABEL_5;
  }
LABEL_27:
  sub_13D11F0(&src);
  v12 = 0;
  ptr = &si128;
  v28 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
LABEL_5:
  v13 = 256;
  if ( !a4 )
    goto LABEL_12;
  if ( a5 == 1 )
  {
    if ( a6 )
      goto LABEL_12;
LABEL_32:
    *((_BYTE *)ptr + v12) = 32;
    v12 = v28.m128i_i64[0] + 1;
    v13 = v28.m128i_u64[1];
    ++v28.m128i_i64[0];
    goto LABEL_12;
  }
  v14 = 1;
  p_si128 = &si128;
  v15 = a6 == 0 ? 46 : 32;
  do
  {
    if ( v13 < v12 + 1 )
    {
      v26 = v15;
      sub_2236E10(&ptr, &si128, v12 + 1, 1);
      v15 = v26;
      *((_BYTE *)ptr + v28.m128i_i64[0]) = v26;
    }
    else
    {
      *((_BYTE *)ptr + v12) = v15;
    }
    ++v14;
    v12 = v28.m128i_i64[0] + 1;
    v13 = v28.m128i_u64[1];
    ++v28.m128i_i64[0];
  }
  while ( a5 != v14 );
  if ( !a6 )
  {
    if ( (unsigned __int64)(v12 + 1) > v28.m128i_i64[1] )
    {
      sub_2236E10(&ptr, &si128, v12 + 1, 1);
      v12 = v28.m128i_i64[0];
    }
    goto LABEL_32;
  }
LABEL_12:
  v16 = n[0];
  v17 = src;
  if ( v13 < n[0] + v12 )
  {
    sub_2236E10(&ptr, &si128, n[0] + v12, 1);
    v12 = v28.m128i_i64[0];
  }
  if ( v16 )
  {
    memcpy((char *)ptr + v12, v17, v16);
    v12 = v28.m128i_i64[0];
  }
  v18 = v16 + v12;
  v28.m128i_i64[0] = v18;
  if ( v18 + 1 > v28.m128i_i64[1] )
  {
    sub_2236E10(&ptr, &si128, v18 + 1, 1);
    v18 = v28.m128i_i64[0];
  }
  *((_BYTE *)ptr + v18) = 10;
  v19 = ptr;
  sub_227BF10(a1, ptr, ++v28.m128i_i64[0]);
  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 16) )
    sub_227B9F0(a1, v19, v20, v21, v22, v23, p_si128);
  if ( ptr != &si128 )
    free(ptr);
  if ( src != v33 )
    free(src);
}
