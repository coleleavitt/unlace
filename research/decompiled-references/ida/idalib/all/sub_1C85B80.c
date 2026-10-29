__int64 *__fastcall sub_1C85B80(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 *result; // rax
  unsigned __int16 *v10; // r12
  unsigned int v11; // r14d
  unsigned __int64 v12; // r13
  _QWORD *v13; // rsi
  unsigned __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int16 v17; // ax
  unsigned __int8 v18; // al
  __int64 v19; // rsi
  __int64 *v20; // [rsp+0h] [rbp-90h]
  __m128i v21; // [rsp+8h] [rbp-88h] BYREF
  __int64 v22; // [rsp+18h] [rbp-78h] BYREF
  __m128i v23; // [rsp+28h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+38h] [rbp-58h]
  __int128 v25; // [rsp+48h] [rbp-48h]

  v7 = *(_QWORD *)(a2 + 40);
  if ( (v7 & 6) != 0 )
    return (__int64 *)a2;
  v10 = sub_1C7CFE0(a1, v7 & 0xFFFFFFFFFFFFFFF8LL, a6, a7, a3, a4, a5);
  result = (_QWORD *)(&dword_0 + 1);
  if ( v10 != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v11 = *(_DWORD *)(a2 + 32);
    v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v13 = *(_QWORD **)(*a1 + 248);
      v14 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v15 = v13[2390];
      v16 = sub_EEE9A0(48, v13, 8u);
      *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x20;
      if ( unk_2CD7484 )
        sub_EE9B50(32);
      v17 = *(_WORD *)(v16 + 1);
      *(_QWORD *)(v16 + 8) = v15;
      *(_QWORD *)(v16 + 16) = v12 | 4;
      *(_QWORD *)(v16 + 24) = v14;
      *(_DWORD *)(v16 + 32) = v11;
      *(_WORD *)(v16 + 1) = v17 & 0xF801 | 0x1A;
      *(_DWORD *)(v16 + 36) = 0;
      *(_QWORD *)(v16 + 40) = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFF8LL;
      v18 = sub_B63A40(v16);
      *(_BYTE *)(v16 + 1) = (v18 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
      *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v18 >> 2) & 7;
      return (__int64 *)v16;
    }
    else
    {
      v23 = 0;
      *(_OWORD *)ptr = 0;
      v25 = 0;
      v19 = *(_QWORD *)(v12 + 40);
      v21.m128i_i32[2] = v11;
      v21.m128i_i64[0] = v19;
      sub_B85890(&v22, v19);
      result = sub_19CC2F0(
                 (__m128 *)*a1,
                 (_DWORD *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL),
                 *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL) + 8),
                 v11,
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
  }
  return result;
}
