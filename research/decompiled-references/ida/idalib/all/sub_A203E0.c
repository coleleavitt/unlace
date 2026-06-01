void __fastcall sub_A203E0(__int64 a1, char a2, const void *a3, size_t a4)
{
  _BYTE *v8; // rsi
  unsigned __int64 v9; // r14
  char *v10; // rdi
  const void *v11; // rsi
  __int64 v12; // r12
  unsigned int v13; // r13d
  void *ptr; // [rsp+0h] [rbp-98h] BYREF
  __m128i si128; // [rsp+8h] [rbp-90h]
  _BYTE v16[128]; // [rsp+18h] [rbp-80h] BYREF

  v8 = v16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  ptr = v16;
  v9 = a4 + 1;
  if ( a4 != -1 )
  {
    v10 = v16;
    if ( v9 > 0x40 )
    {
      sub_2236E10(&ptr, v16, v9, 1);
      v8 = ptr;
      v10 = (char *)ptr + si128.m128i_i64[0];
    }
    if ( &v8[v9] != v10 )
    {
      memset(v10, 0, &v8[v9] - v10);
      v8 = ptr;
    }
    si128.m128i_i64[0] = v9;
  }
  *v8 = a2;
  v11 = a3;
  v12 = 0;
  memcpy((char *)ptr + 1, v11, a4);
  v13 = si128.m128i_i32[0];
  sub_A1FEC0(a1, 3u, *(_DWORD *)(a1 + 56));
  sub_A202E0(a1, 3u);
  sub_A202E0(a1, v13);
  if ( v13 )
  {
    while ( 1 )
    {
      sub_A202E0(a1, *((unsigned __int8 *)ptr + v12));
      if ( v12 == v13 - 1 )
        break;
      ++v12;
    }
  }
  if ( ptr != v16 )
    free(ptr);
}
