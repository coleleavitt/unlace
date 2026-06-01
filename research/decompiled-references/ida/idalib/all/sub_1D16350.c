__int64 *__fastcall sub_1D16350(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 *result; // rax
  __int64 v10; // r12
  unsigned int v11; // r14d
  unsigned __int64 v12; // r13
  _QWORD *v13; // rsi
  __int64 v14; // r15
  unsigned __int64 v15; // rbp
  __int16 v16; // ax
  unsigned __int8 v17; // al
  __int64 v18; // rsi
  __int64 *v19; // [rsp+8h] [rbp-90h]
  __m128i v20; // [rsp+10h] [rbp-88h] BYREF
  __int64 v21; // [rsp+20h] [rbp-78h] BYREF
  __m128i v22; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v24; // [rsp+50h] [rbp-48h]

  v7 = a2;
  v8 = *(_QWORD *)(a2 + 40);
  if ( (v8 & 6) != 0 )
    return (__int64 *)v7;
  v10 = sub_1D11200(a1, (unsigned __int16 *)(v8 & 0xFFFFFFFFFFFFFFF8LL), a6, a7, a3, a4, a5);
  result = (_QWORD *)(&dword_0 + 1);
  if ( v10 != 1 )
  {
    if ( !*(_DWORD *)(*a1 + 12632) && (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF8LL) == (v10 & 0xFFFFFFFFFFFFFFFELL) )
      return (__int64 *)v7;
    v11 = *(_DWORD *)(v7 + 32);
    v12 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
    {
      v13 = *(_QWORD **)(*a1 + 248);
      v14 = v13[2390];
      v15 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v7 = sub_EEE9A0(48, v13, 8u);
      *(_WORD *)v7 = *(_WORD *)v7 & 0xFE00 | 0x20;
      if ( unk_2CD7484 )
        sub_EE9B50(32);
      v16 = *(_WORD *)(v7 + 1);
      *(_QWORD *)(v7 + 8) = v14;
      *(_QWORD *)(v7 + 16) = v12 | 4;
      *(_QWORD *)(v7 + 24) = v15;
      *(_DWORD *)(v7 + 32) = v11;
      *(_WORD *)(v7 + 1) = v16 & 0xF801 | 0x1A;
      *(_DWORD *)(v7 + 36) = 0;
      *(_QWORD *)(v7 + 40) = v10 & 0xFFFFFFFFFFFFFFF8LL;
      v17 = sub_B63A40(v7);
      *(_BYTE *)(v7 + 1) = (v17 << 6) | *(_BYTE *)(v7 + 1) & 0x3F;
      *(_BYTE *)(v7 + 2) = *(_BYTE *)(v7 + 2) & 0xF8 | (v17 >> 2) & 7;
      return (__int64 *)v7;
    }
    v22 = 0;
    *(_OWORD *)ptr = 0;
    v24 = 0;
    v18 = *(_QWORD *)(v12 + 40);
    v20.m128i_i32[2] = v11;
    v20.m128i_i64[0] = v18;
    sub_B85890(&v21, v18);
    result = sub_19CC2F0(
               (__m128 *)*a1,
               (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL),
               *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFFELL) + 8),
               v11,
               0,
               &v22,
               0,
               0,
               &v20,
               0,
               0,
               nullptr);
    if ( HIDWORD(ptr[1]) )
    {
      v19 = result;
      free(ptr[0]);
      return v19;
    }
  }
  return result;
}
