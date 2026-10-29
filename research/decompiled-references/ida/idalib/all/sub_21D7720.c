char *__fastcall sub_21D7720(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r14
  char v3; // r13
  size_t v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  char *v9; // r14
  __int64 *v10; // rax
  char *v11; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  size_t v15; // rax
  unsigned __int64 v16; // rcx
  char v17; // dl
  __int64 v18; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-C0h] BYREF

  v2 = *a2;
  v3 = *(_BYTE *)(a1 + 129);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB880);
  ptr = &si128.m128i_u64[1];
  v4 = j__strlen("sizeof... ");
  if ( v4 )
    sub_2222BB0(&ptr, "sizeof... ", v4);
  else
    sub_2222BB0(&ptr, 0, 0);
  v5 = si128.m128i_u32[0];
  v6 = si128.m128i_u32[0] + 1LL;
  if ( v6 > si128.m128i_u32[1] )
  {
    sub_2237220(&ptr, &si128.m128i_u64[1], v6, 4);
    v5 = si128.m128i_u32[0];
  }
  *((_DWORD *)ptr + v5) = v2;
  v7 = HIDWORD(v2);
  ++si128.m128i_i32[0];
  v8 = si128.m128i_u32[0];
  if ( (unsigned __int64)si128.m128i_u32[0] + 1 > si128.m128i_u32[1] )
  {
    sub_2237220(&ptr, &si128.m128i_u64[1], si128.m128i_u32[0] + 1LL, 4);
    v8 = si128.m128i_u32[0];
  }
  *((_DWORD *)ptr + v8) = v7;
  ++si128.m128i_i32[0];
  v9 = (char *)sub_2223360(a1 + 96, &ptr, &v18, off_2BE9FD0);
  if ( v9 )
  {
    v9 += 8;
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    if ( v9 )
    {
      ptr = v9;
      v10 = sub_21D4F30(a1 + 136, (__int64 *)&ptr);
      if ( v10 )
      {
        v11 = (char *)v10[1];
        if ( v11 )
          v9 = v11;
      }
      if ( *(char **)(a1 + 120) == v9 )
        *(_BYTE *)(a1 + 128) = 1;
    }
  }
  else
  {
    if ( v3 )
    {
      v13 = (_QWORD *)sub_21D40A0((__int64 *)a1, 64, 3u);
      *v13 = 0;
      v14 = v13;
      v9 = (char *)(v13 + 1);
      v15 = j__strlen("sizeof... ");
      v16 = *a2;
      *((_WORD *)v14 + 8) = 16444;
      v17 = *((_BYTE *)v14 + 18);
      v14[3] = v15;
      v14[5] = v16;
      v14[4] = "sizeof... ";
      v14[6] = 0;
      *((_BYTE *)v14 + 18) = v17 & 0xF0 | 5;
      v14[7] = 0;
      v14[1] = off_2BE7D40;
      sub_2223210(a1 + 96, v14, v18, off_2BE9FD0);
    }
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    *(_QWORD *)(a1 + 112) = v9;
  }
  return v9;
}
