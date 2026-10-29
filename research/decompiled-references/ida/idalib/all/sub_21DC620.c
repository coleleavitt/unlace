char *__fastcall sub_21DC620(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  char *v5; // rax
  char *v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // r8
  __int64 *v13; // rax
  char *v14; // rax
  unsigned __int64 v16; // rax
  char v17; // dl
  char *v19; // [rsp+0h] [rbp-E8h]
  char *v20; // [rsp+0h] [rbp-E8h]
  char *v21; // [rsp+0h] [rbp-E8h]
  char v22; // [rsp+8h] [rbp-E0h]
  char *v23; // [rsp+8h] [rbp-E0h]
  __int64 v24; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-C0h] BYREF

  v5 = sub_21D94E0(a1);
  if ( !v5 )
    return nullptr;
  v6 = v5;
  v22 = *(_BYTE *)(a1 + 937);
  ptr = &si128.m128i_u64[1];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB890);
  if ( a2 )
    sub_2222BB0(&ptr, a3, a2);
  else
    sub_2222BB0(&ptr, 0, 0);
  v7 = si128.m128i_u32[0];
  v8 = si128.m128i_u32[0] + 1LL;
  if ( v8 > si128.m128i_u32[1] )
  {
    sub_2237220(&ptr, &si128.m128i_u64[1], v8, 4);
    v7 = si128.m128i_u32[0];
  }
  *((_DWORD *)ptr + v7) = (_DWORD)v6;
  ++si128.m128i_i32[0];
  v9 = si128.m128i_u32[0];
  if ( (unsigned __int64)si128.m128i_u32[0] + 1 > si128.m128i_u32[1] )
  {
    sub_2237220(&ptr, &si128.m128i_u64[1], si128.m128i_u32[0] + 1LL, 4);
    v9 = si128.m128i_u32[0];
  }
  *((_DWORD *)ptr + v9) = HIDWORD(v6);
  ++si128.m128i_i32[0];
  v10 = si128.m128i_u32[0];
  if ( (unsigned __int64)si128.m128i_u32[0] + 1 > si128.m128i_u32[1] )
  {
    sub_2237220(&ptr, &si128.m128i_u64[1], si128.m128i_u32[0] + 1LL, 4);
    v10 = si128.m128i_u32[0];
  }
  *((_DWORD *)ptr + v10) = a4;
  ++si128.m128i_i32[0];
  v11 = si128.m128i_u32[0];
  if ( (unsigned __int64)si128.m128i_u32[0] + 1 > si128.m128i_u32[1] )
  {
    sub_2237220(&ptr, &si128.m128i_u64[1], si128.m128i_u32[0] + 1LL, 4);
    v11 = si128.m128i_u32[0];
  }
  *((_DWORD *)ptr + v11) = 0;
  ++si128.m128i_i32[0];
  v12 = (char *)sub_2223360(a1 + 904, &ptr, &v24, off_2BE9FD0);
  if ( v12 )
  {
    v12 += 8;
    if ( ptr != &si128.m128i_u64[1] )
    {
      v19 = v12;
      free(ptr);
      v12 = v19;
    }
    if ( v12 )
    {
      ptr = v12;
      v20 = v12;
      v13 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
      v12 = v20;
      if ( v13 )
      {
        v14 = (char *)v13[1];
        if ( v14 )
          v12 = v14;
      }
      if ( *(char **)(a1 + 928) == v12 )
        *(_BYTE *)(a1 + 936) = 1;
    }
  }
  else
  {
    if ( v22 )
    {
      v16 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
      v17 = *(_BYTE *)(v16 + 17);
      *(_QWORD *)v16 = 0;
      *(_QWORD *)(v16 + 32) = a3;
      *(_QWORD *)(v16 + 24) = a2;
      *(_QWORD *)(v16 + 40) = v6;
      *(_BYTE *)(v16 + 17) = v17 & 0xC0 | a4 & 0x3F;
      v23 = (char *)(v16 + 8);
      *(_WORD *)(v16 + 16) = *(_WORD *)(v16 + 16) & 0x3F00 | 0x4042;
      *(_BYTE *)(v16 + 18) = *(_BYTE *)(v16 + 18) & 0xF0 | 5;
      *(_QWORD *)(v16 + 8) = off_2BE7F80;
      sub_2223210(a1 + 904, v16, v24, off_2BE9FD0);
      v12 = v23;
    }
    if ( ptr != &si128.m128i_u64[1] )
    {
      v21 = v12;
      free(ptr);
      v12 = v21;
    }
    *(_QWORD *)(a1 + 920) = v12;
  }
  return v12;
}
