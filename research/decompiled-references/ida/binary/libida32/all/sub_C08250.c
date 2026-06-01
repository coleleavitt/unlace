__int64 __fastcall sub_C08250(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 *v11; // rcx
  unsigned int v12; // edx
  bool v13; // di
  bool v14; // r8
  bool v15; // r9
  char v16; // r10
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i v27; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v28; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+30h] [rbp-98h]
  void *ptr[2]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v31[128]; // [rsp+48h] [rbp-80h] BYREF

  sub_A2B590(
    (__int64)&v27,
    a2,
    *(_DWORD *)(a1 + 128),
    *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4LL * *(unsigned int *)(a1 + 144) - 4));
  *(_BYTE *)(a5 + 128) &= ~2u;
  v9 = _mm_load_si128(&v27);
  *(_QWORD *)(a5 + 16) = 0;
  *(__m128i *)a5 = v9;
  v28 = v9;
  v10 = sub_A2B5D0(&v28);
  v28.m128i_i32[0] = 0;
  v28.m128i_i64[1] = 0;
  v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v29 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    goto LABEL_3;
  }
  v20 = v10;
  v21 = *v11;
  if ( (unsigned int)*(unsigned __int8 *)(*v11 + 16) - 43 <= 1 )
    goto LABEL_18;
  v25 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v25 > 1 )
  {
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    goto LABEL_11;
  }
  v21 = sub_F3F310(*v11, a2, v25, v11);
  if ( v21 )
  {
LABEL_18:
    while ( 1 )
    {
      v20 = *(_QWORD *)(v21 + 32);
      if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v22 = v20 & 0xFFFFFFFFFFFFFFF0LL;
        v21 = *(_QWORD *)v22;
        v23 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v22 + 16LL) - 43;
        if ( (unsigned int)v23 <= 1 )
          break;
        v24 = sub_F3F310(v21, a2, v23, v11);
        v20 = *(_QWORD *)(v24 + 32);
        if ( (*(_BYTE *)(v24 + 18) & 0x10) == 0 )
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  v11 = (__int64 *)v28.m128i_i64[1];
  v16 = v28.m128i_i8[0] & 1;
  v13 = (v28.m128i_i8[0] & 8) != 0;
  v15 = (v28.m128i_i8[0] & 2) != 0;
  v14 = (v28.m128i_i8[0] & 4) != 0;
  v12 = (unsigned __int32)v28.m128i_i32[0] >> 4;
LABEL_11:
  v29 = v20;
LABEL_3:
  *(_QWORD *)(a5 + 32) = v11;
  ptr[0] = v31;
  ptr[1] = (void *)0x800000000LL;
  *(_BYTE *)(a5 + 24) = (8 * v13) | (4 * v14) | (2 * v15) & 0xF3 | v16 & 0xF3 | *(_BYTE *)(a5 + 24) & 0xF0;
  v17 = v29;
  *(_DWORD *)(a5 + 24) = *(_DWORD *)(a5 + 24) & 0xF | (16 * v12);
  *(_QWORD *)(a5 + 40) = v17;
  sub_C00390((char ***)(a5 + 48), (char ***)ptr);
  if ( ptr[0] != v31 )
    free(ptr[0]);
  v18 = v27.m128i_i64[0];
  *(_WORD *)(a5 + 128) &= 0xFEu;
  return sub_C07FE0(a1, v18, v27.m128i_i64[1], a2, a3, a4);
}

