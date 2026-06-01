char *__fastcall sub_21D6990(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  char v4; // r14
  __int64 v5; // rsi
  char *v6; // rbx
  __int64 *v7; // rax
  char *v8; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  char v13; // dl
  __int64 v14; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-C0h] BYREF

  v3 = *a2;
  v4 = *(_BYTE *)(a1 + 129);
  v5 = a2[1];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB860);
  ptr = &si128.m128i_u64[1];
  if ( v3 )
    sub_2222BB0(&ptr, v5, v3);
  else
    sub_2222BB0(&ptr, 0, 0);
  v6 = (char *)sub_2223360(a1 + 96, &ptr, &v14, off_2BE9FD0);
  if ( v6 )
  {
    v6 += 8;
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    if ( v6 )
    {
      ptr = v6;
      v7 = sub_21D4F30(a1 + 136, (__int64 *)&ptr);
      if ( v7 )
      {
        v8 = (char *)v7[1];
        if ( v8 )
          v6 = v8;
      }
      if ( *(char **)(a1 + 120) == v6 )
        *(_BYTE *)(a1 + 128) = 1;
    }
  }
  else
  {
    if ( v4 )
    {
      v10 = sub_21D40A0((__int64 *)a1, 40, 3u);
      v11 = *a2;
      v12 = a2[1];
      *(_QWORD *)v10 = 0;
      v6 = (char *)(v10 + 8);
      *(_WORD *)(v10 + 16) = 16451;
      v13 = *(_BYTE *)(v10 + 18);
      *(_QWORD *)(v10 + 24) = v11;
      *(_QWORD *)(v10 + 32) = v12;
      *(_BYTE *)(v10 + 18) = v13 & 0xF0 | 5;
      *(_QWORD *)(v10 + 8) = off_2BE7FE0;
      sub_2223210(a1 + 96, v10, v14, off_2BE9FD0);
    }
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    *(_QWORD *)(a1 + 112) = v6;
  }
  return v6;
}
