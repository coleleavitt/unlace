__int64 __fastcall sub_C019A0(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // rsi
  unsigned int v7; // ecx
  bool v8; // dl
  bool v9; // di
  bool v10; // r8
  char v11; // r9
  __int64 v12; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // [rsp+0h] [rbp-98h] BYREF
  __m128i v20; // [rsp+10h] [rbp-88h] BYREF
  __int64 v21; // [rsp+20h] [rbp-78h]
  void *ptr[2]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v23[96]; // [rsp+38h] [rbp-60h] BYREF

  sub_A2B590((__int64)&v19, a2, 0, 0);
  *(_BYTE *)(a1 + 128) &= ~2u;
  v3 = _mm_load_si128(&v19);
  *(_QWORD *)(a1 + 16) = 0;
  *(__m128i *)a1 = v3;
  v20 = v3;
  v4 = sub_A2B5D0(&v20);
  v20.m128i_i32[0] = 0;
  v20.m128i_i64[1] = 0;
  v6 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v21 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    goto LABEL_3;
  }
  v14 = v4;
  v15 = *v6;
  if ( (unsigned int)*(unsigned __int8 *)(*v6 + 16) - 43 <= 1 )
    goto LABEL_18;
  v18 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v18 > 1 )
  {
    v6 = nullptr;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    goto LABEL_11;
  }
  v15 = sub_F3F310(*v6, v6, v18, v5);
  if ( v15 )
  {
LABEL_18:
    while ( 1 )
    {
      v14 = *(_QWORD *)(v15 + 32);
      if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
        v16 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43;
        if ( (unsigned int)v16 <= 1 )
          break;
        v17 = sub_F3F310(v15, v6, v16, v5);
        v14 = *(_QWORD *)(v17 + 32);
        if ( (*(_BYTE *)(v17 + 18) & 0x10) == 0 )
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  v6 = (__int64 *)v20.m128i_i64[1];
  v11 = v20.m128i_i8[0] & 1;
  v8 = (v20.m128i_i8[0] & 8) != 0;
  v10 = (v20.m128i_i8[0] & 2) != 0;
  v9 = (v20.m128i_i8[0] & 4) != 0;
  v7 = (unsigned __int32)v20.m128i_i32[0] >> 4;
LABEL_11:
  v21 = v14;
LABEL_3:
  *(_QWORD *)(a1 + 32) = v6;
  ptr[0] = v23;
  ptr[1] = (void *)0x800000000LL;
  *(_BYTE *)(a1 + 24) = (8 * v8) | (4 * v9) | (2 * v10) & 0xF3 | v11 & 0xF3 | *(_BYTE *)(a1 + 24) & 0xF0;
  v12 = v21;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xF | (16 * v7);
  *(_QWORD *)(a1 + 40) = v12;
  sub_C00390((char ***)(a1 + 48), (char ***)ptr);
  if ( ptr[0] != v23 )
    free(ptr[0]);
  *(_WORD *)(a1 + 128) &= 0xFEu;
  return 1;
}

