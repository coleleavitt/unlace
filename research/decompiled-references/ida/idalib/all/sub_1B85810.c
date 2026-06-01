__int64 __fastcall sub_1B85810(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 result; // rax
  __int32 v8; // r15d
  unsigned int v9; // r14d
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int8 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-90h]
  __m128i v16; // [rsp+10h] [rbp-88h] BYREF
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  __m128i v18; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+50h] [rbp-48h]

  result = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( result != 1 )
  {
    v8 = *(_DWORD *)(a2 + 24);
    v9 = *(_DWORD *)(a2 + 28);
    v10 = result & 0xFFFFFFFFFFFFFFFELL;
    v11 = *a1;
    v18 = 0;
    v12 = *(_BYTE *)(a2 + 32);
    v13 = *(_QWORD *)(v11 + 248);
    *(_OWORD *)ptr = 0;
    v20 = 0;
    v14 = sub_6F3470(*(_QWORD *)(v13 + 17504), "isa", 3u);
    v16.m128i_i32[2] = v8;
    v16.m128i_i64[0] = v14;
    sub_B85890(&v17, v14);
    result = (__int64)sub_19CC2F0(
                        (__m128 *)*a1,
                        (_DWORD *)v10,
                        *(_QWORD *)(v10 + 8),
                        v9,
                        v12,
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
  return result;
}
