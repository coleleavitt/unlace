void *__fastcall sub_21D6680(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  void *v7; // rbx
  __int64 *v8; // rax
  void *v9; // rax
  unsigned __int64 v11; // rax
  int v12; // edi
  __int16 v13; // dx
  char v14; // cl
  char v15; // [rsp+7h] [rbp-E1h]
  __int64 v16; // [rsp+8h] [rbp-E0h]
  __int64 v17; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-B0h]
  __int64 v21; // [rsp+40h] [rbp-A8h]

  v15 = *(_BYTE *)(a1 + 129);
  v5 = *a2;
  LODWORD(v21) = *a3;
  v20 = v5;
  ptr = &si128.m128i_u64[1];
  v21 = (int)v21;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB840);
  v16 = a1 + 96;
  v6 = sub_2223360(a1 + 96, &ptr, &v17, off_2BE9FD0);
  v7 = (void *)v6;
  if ( v6 )
  {
    v7 = (void *)(v6 + 8);
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    if ( v7 )
    {
      ptr = v7;
      v8 = sub_21D4F30(a1 + 136, (__int64 *)&ptr);
      if ( v8 )
      {
        v9 = (void *)v8[1];
        if ( v9 )
          v7 = v9;
      }
      if ( *(void **)(a1 + 120) == v7 )
        *(_BYTE *)(a1 + 128) = 1;
    }
  }
  else
  {
    if ( v15 )
    {
      v11 = sub_21D40A0((__int64 *)a1, 40, 3u);
      v12 = *a3;
      v13 = *(_WORD *)(v11 + 16);
      *(_QWORD *)v11 = 0;
      v7 = (void *)(v11 + 8);
      v14 = *(_BYTE *)(*a2 + 9);
      *(_QWORD *)(v11 + 24) = *a2;
      *(_WORD *)(v11 + 16) = v13 & 0xC000 | 0xD;
      LOBYTE(v13) = *(_BYTE *)(v11 + 18);
      *(_DWORD *)(v11 + 32) = v12;
      *(_BYTE *)(v11 + 17) = v14 & 0xC0;
      *(_BYTE *)(v11 + 36) = 0;
      *(_BYTE *)(v11 + 18) = v13 & 0xF0 | 5;
      *(_QWORD *)(v11 + 8) = off_2BE6BA0;
      sub_2223210(v16, v11, v17, off_2BE9FD0);
    }
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    *(_QWORD *)(a1 + 112) = v7;
  }
  return v7;
}
