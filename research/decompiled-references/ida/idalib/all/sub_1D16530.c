__int64 __fastcall sub_1D16530(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 *v7; // rbx
  __int64 result; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  char v11; // r13
  unsigned int v12; // r15d
  __int64 v13; // rsi
  __int64 *v14; // rax
  __m128i v15; // [rsp+0h] [rbp-88h] BYREF
  __int64 v16; // [rsp+10h] [rbp-78h] BYREF
  __m128i v17; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+40h] [rbp-48h]

  v7 = (__int64 *)a2;
  result = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 24), a6, a7, a3, a4, a5);
  if ( result != 1 )
  {
    v9 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || v9 != *(_QWORD *)(a2 + 24) )
    {
      v10 = *(_QWORD *)(a2 + 16);
      v11 = *(_BYTE *)(a2 + 40);
      v17 = 0;
      v12 = *(_DWORD *)(a2 + 32);
      *(_OWORD *)ptr = 0;
      v19 = 0;
      v13 = *(_QWORD *)(v10 + 40);
      v15.m128i_i32[2] = v12;
      v15.m128i_i64[0] = v13;
      sub_B85890(&v16, v13);
      v14 = sub_19CC2F0((__m128 *)*a1, (_DWORD *)v9, *(_QWORD *)(v9 + 8), v12, v11 & 1, &v17, 0, 0, &v15, 0, 0, nullptr);
      v7 = v14;
      if ( (unsigned __int64)v14 > 1 && (v11 & 2) != 0 )
        *(_BYTE *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL) + 40) |= 2u;
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
    }
    return (__int64)v7;
  }
  return result;
}
