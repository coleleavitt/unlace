void __fastcall sub_111F510(__int64 *a1, __int64 a2, const char *a3, __int64 *a4)
{
  __int64 v4; // rbp
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // rdi
  char *v11; // rdi
  unsigned __int64 v12; // rcx
  size_t v13; // r15
  const void *v14; // rax
  void *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  _BYTE *v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-B0h]
  const void *v21; // [rsp+18h] [rbp-A0h]
  __int64 v22; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __m128i si128; // [rsp+28h] [rbp-90h]
  _BYTE v25[128]; // [rsp+38h] [rbp-80h] BYREF

  v4 = *a4;
  v20 = a4[1];
  if ( v20 != *a4 )
  {
    while ( 1 )
    {
      v8 = strlen(a3);
      ptr = v25;
      v9 = v8;
      v10 = v8;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
      if ( v8 <= 0x40 )
      {
        v12 = 64;
        if ( !v8 )
          goto LABEL_5;
        v11 = v25;
      }
      else
      {
        sub_2236E10(&ptr, v25, v8, 1);
        v11 = (char *)ptr + si128.m128i_i64[0];
      }
      memcpy(v11, a3, v9);
      v12 = si128.m128i_u64[1];
      v10 = v9 + si128.m128i_i64[0];
LABEL_5:
      si128.m128i_i64[0] = v10;
      v13 = *(_QWORD *)(v4 + 8);
      v14 = *(const void **)v4;
      if ( v13 + v10 > v12 )
      {
        v21 = *(const void **)v4;
        sub_2236E10(&ptr, v25, v13 + v10, 1);
        v10 = si128.m128i_i64[0];
        v14 = v21;
      }
      v15 = ptr;
      if ( v13 )
      {
        memcpy((char *)ptr + v10, v14, v13);
        v15 = ptr;
        v10 = si128.m128i_i64[0];
      }
      v16 = *a1;
      si128.m128i_i64[0] = v13 + v10;
      v17 = (*(__int64 (__fastcall **)(__int64 *, void *))(v16 + 16))(a1, v15);
      v18 = *(unsigned int *)(a2 + 8);
      if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        v22 = v17;
        sub_2237220(a2, a2 + 16, v18 + 1, 8);
        v18 = *(unsigned int *)(a2 + 8);
        v17 = v22;
      }
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v18) = v17;
      v19 = ptr;
      ++*(_DWORD *)(a2 + 8);
      if ( v19 == v25 )
      {
        v4 += 32;
        if ( v20 == v4 )
          return;
      }
      else
      {
        free(v19);
        v4 += 32;
        if ( v20 == v4 )
          return;
      }
    }
  }
}
