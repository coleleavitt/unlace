unsigned __int64 __fastcall sub_1DCCEF0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 result; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r13
  __int32 v16; // r14d
  unsigned __int8 v17; // r15
  unsigned int v18; // [rsp+8h] [rbp-90h]
  unsigned __int64 v19; // [rsp+8h] [rbp-90h]
  __m128i v20; // [rsp+10h] [rbp-88h] BYREF
  __int64 v21; // [rsp+20h] [rbp-78h] BYREF
  __m128i v22; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v24; // [rsp+50h] [rbp-48h]

  result = (unsigned __int64)sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( result != 1 )
  {
    v10 = *a1;
    v11 = *(_QWORD *)(a2 + 16);
    v12 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || (result = a2, v11 != v12) )
    {
      v13 = sub_EEC140(v11);
      v14 = sub_15F0EF0(v10, v13, 0, (__m128i)a7, *(double *)a8.m128_u64);
      v15 = *(_QWORD *)(a2 + 24);
      v16 = *(_DWORD *)(a2 + 32);
      v18 = v14;
      v22 = 0;
      v17 = sub_C00400(a2);
      *(_OWORD *)ptr = 0;
      v24 = 0;
      v20.m128i_i64[0] = v15;
      v20.m128i_i32[2] = v16;
      sub_B85890(&v21, v15);
      result = (unsigned __int64)sub_19CC2F0(
                                   (__m128 *)*a1,
                                   (_DWORD *)v12,
                                   *(_QWORD *)(v12 + 8),
                                   v18,
                                   v17,
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
  }
  return result;
}
