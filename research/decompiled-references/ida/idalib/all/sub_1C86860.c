__int64 *__fastcall sub_1C86860(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v7; // rax
  __int64 *result; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // rbp
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // r13
  __int32 v14; // r14d
  unsigned __int8 v15; // r15
  unsigned int v16; // [rsp+8h] [rbp-90h]
  __int64 *v17; // [rsp+8h] [rbp-90h]
  __m128i v18; // [rsp+10h] [rbp-88h] BYREF
  __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  __m128i v20; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+50h] [rbp-48h]

  v7 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return (_QWORD *)(&dword_0 + 1);
  v9 = *a1;
  v10 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFELL;
  v11 = sub_EEC140(*(_QWORD *)(a2 + 16));
  v12 = sub_15F0EF0(v9, v11, 0, (__m128i)a6, *(double *)a7.m128_u64);
  v13 = *(_QWORD *)(a2 + 24);
  v14 = *(_DWORD *)(a2 + 32);
  v16 = v12;
  v20 = 0;
  v15 = sub_C00400(a2);
  *(_OWORD *)ptr = 0;
  v22 = 0;
  v18.m128i_i64[0] = v13;
  v18.m128i_i32[2] = v14;
  sub_B85890(&v19, v13);
  result = sub_19CC2F0((__m128 *)*a1, (_DWORD *)v10, *(_QWORD *)(v10 + 8), v16, v15, &v20, 0, 0, &v18, 0, 0, nullptr);
  if ( HIDWORD(ptr[1]) )
  {
    v17 = result;
    free(ptr[0]);
    return v17;
  }
  return result;
}
