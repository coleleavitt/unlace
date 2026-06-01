__int64 __fastcall sub_11BB8D0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  char *v3; // r12
  _QWORD *v4; // rbp
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  char **v7; // rbx
  char *v8; // rdi
  __int64 v9; // rax
  size_t v10; // r15
  __int64 v11; // rdi
  void *v12; // rax
  __int64 v13; // rbx
  char **v15; // [rsp+10h] [rbp-298h]
  void *v16; // [rsp+18h] [rbp-290h]
  void *v17; // [rsp+20h] [rbp-288h] BYREF
  __int64 v18; // [rsp+28h] [rbp-280h]
  _BYTE v19[128]; // [rsp+30h] [rbp-278h] BYREF
  void *src; // [rsp+B0h] [rbp-1F8h] BYREF
  size_t n[2]; // [rsp+B8h] [rbp-1F0h]
  char v22; // [rsp+C8h] [rbp-1E0h] BYREF
  __int16 v23; // [rsp+D0h] [rbp-1D8h]
  void *ptr; // [rsp+150h] [rbp-158h] BYREF
  __m128i si128; // [rsp+158h] [rbp-150h]
  _BYTE v26[320]; // [rsp+168h] [rbp-140h] BYREF

  v2 = *(_QWORD **)(a2 + 8);
  v3 = *(char **)(*(_QWORD *)(a1 + 8) + 136LL);
  v17 = v19;
  v18 = 0x1000000000LL;
  v4 = &v2[*(unsigned int *)(a2 + 16)];
  if ( v2 != v4 )
  {
    while ( !*v2 )
    {
      if ( v4 == ++v2 )
        goto LABEL_12;
    }
    while ( 1 )
    {
      sub_21B5A40(*v2, a2, &v17);
      v5 = v2 + 1;
      if ( v4 == v2 + 1 )
        break;
      if ( !v2[1] )
      {
        v6 = v2 + 2;
        do
        {
          v5 = v6;
          if ( v4 == v6 )
            goto LABEL_12;
          ++v6;
        }
        while ( !*(v6 - 1) );
      }
      v2 = v5;
    }
  }
LABEL_12:
  ptr = v26;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  sub_11BB7F0(v3, (__int64 *)&ptr);
  v7 = (char **)v17;
  v15 = (char **)((char *)v17 + 8 * (unsigned int)v18);
  if ( v17 != v15 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *v7;
        src = &v22;
        *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        sub_11BB7F0(v8, (__int64 *)&src);
        v9 = si128.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        {
          sub_2236E10(&ptr, v26, si128.m128i_i64[0] + 1, 1);
          v9 = si128.m128i_i64[0];
        }
        *((_BYTE *)ptr + v9) = 32;
        v10 = n[0];
        v11 = si128.m128i_i64[0] + 1;
        v12 = src;
        si128.m128i_i64[0] = v11;
        if ( n[0] + v11 > si128.m128i_i64[1] )
        {
          v16 = src;
          sub_2236E10(&ptr, v26, n[0] + v11, 1);
          v11 = si128.m128i_i64[0];
          v12 = v16;
        }
        if ( v10 )
        {
          memcpy((char *)ptr + v11, v12, v10);
          v11 = si128.m128i_i64[0];
        }
        si128.m128i_i64[0] = v10 + v11;
        if ( src == &v22 )
          break;
        free(src);
        if ( v15 == ++v7 )
          goto LABEL_21;
      }
      ++v7;
    }
    while ( v15 != v7 );
  }
LABEL_21:
  v23 = 261;
  src = ptr;
  n[0] = si128.m128i_i64[0];
  v13 = sub_10DA6C0(a2, (__int64)&src);
  if ( ptr != v26 )
    free(ptr);
  if ( v17 != v19 )
    free(v17);
  return v13;
}
