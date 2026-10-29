unsigned __int16 *__fastcall sub_1DCC760(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 *v8; // rbx
  unsigned __int16 *result; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  char v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // rsi
  __int64 *v15; // rax
  __m128i v16; // [rsp+0h] [rbp-88h] BYREF
  __int64 v17; // [rsp+10h] [rbp-78h] BYREF
  __m128i v18; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h]
  __int128 v20; // [rsp+40h] [rbp-48h]

  v8 = (__int64 *)a2;
  result = sub_1DC71F0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6, a7, a8);
  if ( result != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v10 = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || v10 != *(_QWORD *)(a2 + 24) )
    {
      v11 = *(_QWORD *)(a2 + 16);
      v12 = *(_BYTE *)(a2 + 40);
      v18 = 0;
      v13 = *(_DWORD *)(a2 + 32);
      *(_OWORD *)ptr = 0;
      v20 = 0;
      v14 = *(_QWORD *)(v11 + 40);
      v16.m128i_i32[2] = v13;
      v16.m128i_i64[0] = v14;
      sub_B85890(&v17, v14);
      v15 = sub_19CC2F0(
              (__m128 *)*a1,
              (_DWORD *)v10,
              *(_QWORD *)(v10 + 8),
              v13,
              v12 & 1,
              &v18,
              0,
              0,
              &v16,
              0,
              0,
              nullptr);
      v8 = v15;
      if ( (unsigned __int64)v15 > 1 && (v12 & 2) != 0 )
        *(_BYTE *)(((unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL) + 40) |= 2u;
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
    }
    return (unsigned __int16 *)v8;
  }
  return result;
}
