__int64 __fastcall sub_C01B70(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rsi
  unsigned __int32 v15; // ecx
  bool v16; // dl
  bool v17; // di
  bool v18; // r8
  char v19; // r9
  char v20; // al
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // [rsp+0h] [rbp-98h] BYREF
  __int64 v28; // [rsp+10h] [rbp-88h]
  void *ptr[2]; // [rsp+18h] [rbp-80h] BYREF
  _BYTE v30[112]; // [rsp+28h] [rbp-70h] BYREF

  v2 = a1[1];
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(*a1 + 16LL);
  sub_A2B560((__int64)&v27, 0, 0, 0);
  *(__m128i *)v2 = _mm_load_si128(&v27);
  v8 = sub_A444C0(v4, v3, v5, v6, v7);
  *(_BYTE *)(v2 + 128) &= ~2u;
  *(_QWORD *)(v2 + 16) = v8;
  v12 = sub_F44710(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL), v3, v9, v10, v11);
  v27.m128i_i32[0] = 0;
  v27.m128i_i64[1] = 0;
  v14 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v28 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    goto LABEL_3;
  }
  v22 = v12;
  v23 = *v14;
  if ( (unsigned int)*(unsigned __int8 *)(*v14 + 16) - 43 <= 1 )
    goto LABEL_18;
  v26 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v26 > 1 )
  {
    v14 = nullptr;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    goto LABEL_11;
  }
  v23 = sub_F3F310(*v14, v14, v26, v13);
  if ( v23 )
  {
LABEL_18:
    while ( 1 )
    {
      v22 = *(_QWORD *)(v23 + 32);
      if ( (*(_BYTE *)(v23 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
        v24 = (unsigned int)*(unsigned __int8 *)(v23 + 16) - 43;
        if ( (unsigned int)v24 <= 1 )
          break;
        v25 = sub_F3F310(v23, v14, v24, v13);
        v22 = *(_QWORD *)(v25 + 32);
        if ( (*(_BYTE *)(v25 + 18) & 0x10) == 0 )
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  v14 = (__int64 *)v27.m128i_i64[1];
  v19 = v27.m128i_i8[0] & 1;
  v16 = (v27.m128i_i8[0] & 8) != 0;
  v18 = (v27.m128i_i8[0] & 2) != 0;
  v17 = (v27.m128i_i8[0] & 4) != 0;
  v15 = (unsigned __int32)v27.m128i_i32[0] >> 4;
LABEL_11:
  v28 = v22;
LABEL_3:
  ptr[0] = v30;
  ptr[1] = (void *)0x800000000LL;
  v20 = *(_BYTE *)(v2 + 24);
  *(_QWORD *)(v2 + 32) = v14;
  *(_BYTE *)(v2 + 24) = (8 * v16) | (4 * v17) | (2 * v18) & 0xF3 | v19 & 0xF3 | v20 & 0xF0;
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(v2 + 24) & 0xF | (16 * v15);
  *(_QWORD *)(v2 + 40) = v28;
  sub_C00390((char ***)(v2 + 48), (char ***)ptr);
  if ( ptr[0] != v30 )
    free(ptr[0]);
  *(_WORD *)(v2 + 128) = *(_WORD *)(v2 + 128) & 0xFE | 1;
  return 1;
}

