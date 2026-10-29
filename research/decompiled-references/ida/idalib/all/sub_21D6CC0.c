void *__fastcall sub_21D6CC0(__int64 a1, __int64 *a2, __int64 *a3, char *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  void *v10; // rbx
  __int64 *v11; // rax
  void *v12; // rax
  unsigned __int64 v14; // rax
  char v15; // cl
  __int64 v16; // rsi
  __int64 v17; // rdi
  char v18; // dl
  char v20; // [rsp+17h] [rbp-E1h]
  __int64 v21; // [rsp+18h] [rbp-E0h]
  __int64 v22; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B0h]
  __int64 v26; // [rsp+50h] [rbp-A8h]
  int v27; // [rsp+58h] [rbp-A0h]
  int v28; // [rsp+5Ch] [rbp-9Ch]

  v20 = *(_BYTE *)(a1 + 129);
  v7 = *a3;
  v8 = *a2;
  ptr = &si128.m128i_u64[1];
  v26 = v7;
  LODWORD(v7) = (unsigned __int8)*a4;
  v25 = v8;
  v27 = v7;
  v28 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB870);
  v21 = a1 + 96;
  v9 = sub_2223360(a1 + 96, &ptr, &v22, off_2BE9FD0);
  v10 = (void *)v9;
  if ( v9 )
  {
    v10 = (void *)(v9 + 8);
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    if ( v10 )
    {
      ptr = v10;
      v11 = sub_21D4F30(a1 + 136, (__int64 *)&ptr);
      if ( v11 )
      {
        v12 = (void *)v11[1];
        if ( v12 )
          v10 = v12;
      }
      if ( *(void **)(a1 + 120) == v10 )
        *(_BYTE *)(a1 + 128) = 1;
    }
  }
  else
  {
    if ( v20 )
    {
      v14 = sub_21D40A0((__int64 *)a1, 48, 3u);
      v15 = *a4;
      *(_QWORD *)v14 = 0;
      v16 = *a3;
      v10 = (void *)(v14 + 8);
      v17 = *a2;
      *(_WORD *)(v14 + 16) = 16465;
      v18 = *(_BYTE *)(v14 + 18);
      *(_QWORD *)(v14 + 32) = v16;
      *(_QWORD *)(v14 + 24) = v17;
      *(_BYTE *)(v14 + 40) = v15;
      *(_BYTE *)(v14 + 18) = v18 & 0xF0 | 5;
      *(_QWORD *)(v14 + 8) = off_2BE8160;
      sub_2223210(v21, v14, v22, off_2BE9FD0);
    }
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    *(_QWORD *)(a1 + 112) = v10;
  }
  return v10;
}
