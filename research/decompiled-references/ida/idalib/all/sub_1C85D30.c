unsigned __int64 __fastcall sub_1C85D30(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // r14d
  char v10; // r12
  unsigned __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // [rsp+8h] [rbp-90h]
  __m128i v14; // [rsp+10h] [rbp-88h] BYREF
  __int64 v15; // [rsp+20h] [rbp-78h] BYREF
  __m128i v16; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+50h] [rbp-48h]

  result = (unsigned __int64)sub_1C7CFE0(a1, *(_QWORD *)(a2 + 24), a6, a7, a3, a4, a5);
  if ( result != 1 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(_DWORD *)(a2 + 32);
    v16 = 0;
    v10 = *(_BYTE *)(a2 + 40);
    *(_OWORD *)ptr = 0;
    v11 = result & 0xFFFFFFFFFFFFFFFELL;
    v18 = 0;
    v12 = *(_QWORD *)(v8 + 40);
    v14.m128i_i32[2] = v9;
    v14.m128i_i64[0] = v12;
    sub_B85890(&v15, v12);
    result = (unsigned __int64)sub_19CC2F0(
                                 (__m128 *)*a1,
                                 (_DWORD *)v11,
                                 *(_QWORD *)(v11 + 8),
                                 v9,
                                 v10 & 1,
                                 &v16,
                                 0,
                                 0,
                                 &v14,
                                 0,
                                 0,
                                 nullptr);
    if ( result > 1 && (v10 & 2) != 0 )
      *(_BYTE *)((result & 0xFFFFFFFFFFFFFFFELL) + 40) |= 2u;
    if ( HIDWORD(ptr[1]) )
    {
      v13 = result;
      free(ptr[0]);
      return v13;
    }
  }
  return result;
}
