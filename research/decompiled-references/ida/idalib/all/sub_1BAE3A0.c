__int64 __fastcall sub_1BAE3A0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 result; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // r13
  __int32 v15; // r14d
  unsigned __int8 v16; // r15
  unsigned int v17; // [rsp+8h] [rbp-90h]
  __int64 v18; // [rsp+8h] [rbp-90h]
  __m128i v19; // [rsp+10h] [rbp-88h] BYREF
  __int64 v20; // [rsp+20h] [rbp-78h] BYREF
  __m128i v21; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v23; // [rsp+50h] [rbp-48h]

  result = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
  if ( result != 1 )
  {
    v9 = *a1;
    v10 = *(_QWORD *)(a2 + 16);
    v11 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || (result = a2, v10 != v11) )
    {
      v12 = sub_EEC140(v10);
      v13 = sub_15F0EF0(v9, v12, 0, (__m128i)a6, *(double *)a7.m128_u64);
      v14 = *(_QWORD *)(a2 + 24);
      v15 = *(_DWORD *)(a2 + 32);
      v17 = v13;
      v21 = 0;
      v16 = sub_C00400(a2);
      *(_OWORD *)ptr = 0;
      v23 = 0;
      v19.m128i_i64[0] = v14;
      v19.m128i_i32[2] = v15;
      sub_B85890(&v20, v14);
      result = (__int64)sub_19CC2F0(
                          (__m128 *)*a1,
                          (_DWORD *)v11,
                          *(_QWORD *)(v11 + 8),
                          v17,
                          v16,
                          &v21,
                          0,
                          0,
                          &v19,
                          0,
                          0,
                          nullptr);
      if ( HIDWORD(ptr[1]) )
      {
        v18 = result;
        free(ptr[0]);
        return v18;
      }
    }
  }
  return result;
}
