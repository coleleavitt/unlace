void *__fastcall sub_21D6820(__int64 a1, int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void *v4; // rbx
  __int64 *v5; // rax
  void *v6; // rax
  unsigned __int64 v8; // rax
  int v9; // edx
  bool v10; // zf
  char v11; // [rsp+Fh] [rbp-D9h]
  __int64 v12; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-B0h]

  v11 = *(_BYTE *)(a1 + 129);
  v2 = *a2;
  ptr = &si128.m128i_u64[1];
  v15 = v2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB850);
  v3 = sub_2223360(a1 + 96, &ptr, &v12, off_2BE9FD0);
  v4 = (void *)v3;
  if ( v3 )
  {
    v4 = (void *)(v3 + 8);
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    if ( v4 )
    {
      ptr = v4;
      v5 = sub_21D4F30(a1 + 136, (__int64 *)&ptr);
      if ( v5 )
      {
        v6 = (void *)v5[1];
        if ( v6 )
          v4 = v6;
      }
      if ( *(void **)(a1 + 120) == v4 )
        *(_BYTE *)(a1 + 128) = 1;
    }
  }
  else
  {
    if ( v11 )
    {
      v8 = sub_21D40A0((__int64 *)a1, 24, 3u);
      v9 = *a2;
      *(_QWORD *)v8 = 0;
      v4 = (void *)(v8 + 8);
      v10 = v9 == 0;
      LOBYTE(v9) = *(_BYTE *)(v8 + 18);
      *(_WORD *)(v8 + 16) = 16457;
      *(_BYTE *)(v8 + 19) = !v10;
      *(_BYTE *)(v8 + 18) = v9 & 0xF0 | 5;
      *(_QWORD *)(v8 + 8) = off_2BE82E0;
      sub_2223210(a1 + 96, v8, v12, off_2BE9FD0);
    }
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    *(_QWORD *)(a1 + 112) = v4;
  }
  return v4;
}
