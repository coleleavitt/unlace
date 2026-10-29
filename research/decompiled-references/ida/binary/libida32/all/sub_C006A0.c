__int64 __fastcall sub_C006A0(__int64 a1, __int64 a2, __int64 a3)
{
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
  __int64 v20; // rax
  int v21; // eax
  __int64 result; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __m128i v28; // [rsp+0h] [rbp-98h] BYREF
  __int64 v29; // [rsp+10h] [rbp-88h]
  void *ptr[2]; // [rsp+18h] [rbp-80h] BYREF
  _BYTE v31[112]; // [rsp+28h] [rbp-70h] BYREF

  sub_A2B560((__int64)&v28, 0, 0, 0);
  *(__m128i *)a1 = _mm_load_si128(&v28);
  v8 = sub_A444C0(a2, a3, v5, v6, v7);
  *(_BYTE *)(a1 + 128) &= ~2u;
  *(_QWORD *)(a1 + 16) = v8;
  v12 = sub_F44710(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a3, v9, v10, v11);
  v28.m128i_i32[0] = 0;
  v28.m128i_i64[1] = 0;
  v14 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v29 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    goto LABEL_3;
  }
  v23 = v12;
  v24 = *v14;
  if ( (unsigned int)*(unsigned __int8 *)(*v14 + 16) - 43 <= 1 )
    goto LABEL_18;
  v27 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v27 > 1 )
  {
    v14 = nullptr;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    goto LABEL_11;
  }
  v24 = sub_F3F310(*v14, v14, v27, v13);
  if ( v24 )
  {
LABEL_18:
    while ( 1 )
    {
      v23 = *(_QWORD *)(v24 + 32);
      if ( (*(_BYTE *)(v24 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v25 = (unsigned int)*(unsigned __int8 *)(v24 + 16) - 43;
        if ( (unsigned int)v25 <= 1 )
          break;
        v26 = sub_F3F310(v24, v14, v25, v13);
        v23 = *(_QWORD *)(v26 + 32);
        if ( (*(_BYTE *)(v26 + 18) & 0x10) == 0 )
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  v14 = (__int64 *)v28.m128i_i64[1];
  v19 = v28.m128i_i8[0] & 1;
  v16 = (v28.m128i_i8[0] & 8) != 0;
  v18 = (v28.m128i_i8[0] & 2) != 0;
  v17 = (v28.m128i_i8[0] & 4) != 0;
  v15 = (unsigned __int32)v28.m128i_i32[0] >> 4;
LABEL_11:
  v29 = v23;
LABEL_3:
  *(_QWORD *)(a1 + 32) = v14;
  ptr[0] = v31;
  ptr[1] = (void *)0x800000000LL;
  *(_BYTE *)(a1 + 24) = (8 * v16) | (4 * v17) | (2 * v18) & 0xF3 | v19 & 0xF3 | *(_BYTE *)(a1 + 24) & 0xF0;
  v20 = v29;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xF | (16 * v15);
  *(_QWORD *)(a1 + 40) = v20;
  sub_C00390((char ***)(a1 + 48), (char ***)ptr);
  if ( ptr[0] != v31 )
    free(ptr[0]);
  v21 = *(unsigned __int16 *)(a1 + 128);
  LOWORD(v21) = *(_WORD *)(a1 + 128) & 0xFE;
  result = v21 | 1u;
  *(_WORD *)(a1 + 128) = result;
  return result;
}

