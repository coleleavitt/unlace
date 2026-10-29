__int64 __fastcall sub_1BADA50(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int8 v11; // r13
  __int32 v12; // r15d
  __int64 v13; // rdi
  unsigned int v14; // r14d
  __int64 v15; // [rsp+8h] [rbp-90h]
  __m128i v16; // [rsp+10h] [rbp-88h] BYREF
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  __m128i v18; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+50h] [rbp-48h]

  result = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
  if ( result != 1 )
  {
    v9 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || (result = a2, *(_QWORD *)(a2 + 16) != v9) )
    {
      v10 = *(_QWORD *)(*a1 + 248);
      v18 = 0;
      v11 = *(_BYTE *)(a2 + 32);
      v12 = *(_DWORD *)(a2 + 24);
      v13 = *(_QWORD *)(v10 + 17504);
      *(_OWORD *)ptr = 0;
      v14 = *(_DWORD *)(a2 + 28);
      v20 = 0;
      v16.m128i_i32[2] = v12;
      v16.m128i_i64[0] = sub_6F3470(v13, "isa", 3u);
      sub_B85890(&v17, v16.m128i_i64[0]);
      result = (__int64)sub_19CC2F0(
                          (__m128 *)*a1,
                          (_DWORD *)v9,
                          *(_QWORD *)(v9 + 8),
                          v14,
                          v11,
                          &v18,
                          0,
                          0,
                          &v16,
                          0,
                          0,
                          nullptr);
      if ( HIDWORD(ptr[1]) )
      {
        v15 = result;
        free(ptr[0]);
        return v15;
      }
    }
  }
  return result;
}
