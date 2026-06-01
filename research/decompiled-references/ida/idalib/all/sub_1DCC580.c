__int64 *__fastcall sub_1DCC580(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 *result; // rax
  unsigned __int16 *v11; // r12
  unsigned int v12; // r14d
  unsigned __int64 v13; // r13
  _QWORD *v14; // rsi
  __int64 v15; // r15
  unsigned __int64 v16; // rbp
  __int16 v17; // ax
  unsigned __int8 v18; // al
  __int64 v19; // rsi
  __int64 *v20; // [rsp+8h] [rbp-90h]
  __m128i v21; // [rsp+10h] [rbp-88h] BYREF
  __int64 v22; // [rsp+20h] [rbp-78h] BYREF
  __m128i v23; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v25; // [rsp+50h] [rbp-48h]

  v8 = a2;
  v9 = *(_QWORD *)(a2 + 40);
  if ( (v9 & 6) != 0 )
    return (__int64 *)v8;
  v11 = sub_1DC71F0(a1, v9 & 0xFFFFFFFFFFFFFFF8LL, a3, a4, a5, a6, a7, a8);
  result = (_QWORD *)(&dword_0 + 1);
  if ( v11 != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    if ( !*(_DWORD *)(*a1 + 12632)
      && (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8LL) == ((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL) )
    {
      return (__int64 *)v8;
    }
    v12 = *(_DWORD *)(v8 + 32);
    v13 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
    {
      v14 = *(_QWORD **)(*a1 + 248);
      v15 = v14[2390];
      v16 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v8 = sub_EEE9A0(48, v14, 8u);
      *(_WORD *)v8 = *(_WORD *)v8 & 0xFE00 | 0x20;
      if ( unk_2CD7484 )
        sub_EE9B50(32);
      v17 = *(_WORD *)(v8 + 1);
      *(_QWORD *)(v8 + 8) = v15;
      *(_QWORD *)(v8 + 16) = v13 | 4;
      *(_QWORD *)(v8 + 24) = v16;
      *(_DWORD *)(v8 + 32) = v12;
      *(_WORD *)(v8 + 1) = v17 & 0xF801 | 0x1A;
      *(_DWORD *)(v8 + 36) = 0;
      *(_QWORD *)(v8 + 40) = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFF8LL;
      v18 = sub_B63A40(v8);
      *(_BYTE *)(v8 + 1) = (v18 << 6) | *(_BYTE *)(v8 + 1) & 0x3F;
      *(_BYTE *)(v8 + 2) = *(_BYTE *)(v8 + 2) & 0xF8 | (v18 >> 2) & 7;
      return (__int64 *)v8;
    }
    v23 = 0;
    *(_OWORD *)ptr = 0;
    v25 = 0;
    v19 = *(_QWORD *)(v13 + 40);
    v21.m128i_i32[2] = v12;
    v21.m128i_i64[0] = v19;
    sub_B85890(&v22, v19);
    result = sub_19CC2F0(
               (__m128 *)*a1,
               (_DWORD *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL),
               *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL) + 8),
               v12,
               0,
               &v23,
               0,
               0,
               &v21,
               0,
               0,
               nullptr);
    if ( HIDWORD(ptr[1]) )
    {
      v20 = result;
      free(ptr[0]);
      return v20;
    }
  }
  return result;
}
