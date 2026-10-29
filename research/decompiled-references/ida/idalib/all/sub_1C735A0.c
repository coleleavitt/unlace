__int64 __fastcall sub_1C735A0(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  int v10; // eax
  unsigned int v12; // r15d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __m128i v26; // [rsp+10h] [rbp-48h] BYREF
  __int64 v27; // [rsp+20h] [rbp-38h]

  v10 = a7 & 0x7FFFFFFF;
  if ( (a7 & 0x7FFFFFFF) == 6 )
  {
    v12 = *(_DWORD *)((a10 & 0xFFFFFFFFFFFFFFFCLL) + 16);
    v13 = *(_QWORD *)((a10 & 0xFFFFFFFFFFFFFFFCLL) + 8);
    v14 = *(_QWORD *)(a10 & 0xFFFFFFFFFFFFFFFCLL);
    sub_F22A90(&v26, a8);
    v15 = *a2;
    *(_DWORD *)a1 = 7;
    v16 = *(_QWORD **)(v15 + 248);
    v17 = v26.m128i_i64[0];
    *(_DWORD *)(a1 + 4) = a4;
    *(_QWORD *)(a1 + 8) = v17;
    sub_F1ECA0((unsigned __int64 *)(a1 + 24), v16, v14, v13, v12, a3);
    return a1;
  }
  if ( v10 != 8 )
  {
    if ( v10 == 1 )
    {
      v18 = sub_1E509C0(*a2, a10 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v18 )
      {
        v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
        sub_F1D250((__int64)&v26, *(_QWORD *)v18, 0, 0);
        v20 = v27;
        v21 = _mm_load_si128(&v26);
        *(_QWORD *)(a1 + 24) = v19 | 2;
        *(_QWORD *)(a1 + 16) = v20;
        *(__m128i *)a1 = v21;
        return a1;
      }
    }
LABEL_4:
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 &= 0xFFFFFFFE00000000LL;
    *(_QWORD *)(a1 + 24) = 0;
    return a1;
  }
  v22 = sub_1E53EF0(*a2, a10 & 0xFFFFFFFFFFFFFFFCLL);
  if ( v22 == 1 )
    goto LABEL_4;
  *(_QWORD *)a1 = *(_QWORD *)a1 & 0xFFFFFFFE00000000LL | 8;
  v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(a1 + 24) = v22 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(_QWORD *)(a1 + 8) = v23;
  return a1;
}
