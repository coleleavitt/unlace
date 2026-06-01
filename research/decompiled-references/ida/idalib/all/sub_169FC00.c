bool __fastcall sub_169FC00(__int64 a1, __int64 a2, _DWORD *a3, __int32 a4, __int64 a5)
{
  bool result; // al
  __m128 si128; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rdx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  size_t v21; // r14
  char *v22; // rcx
  void *v23; // rax
  __int64 v24; // rax
  void *v25; // [rsp+0h] [rbp-78h] BYREF
  __m128 v26; // [rsp+8h] [rbp-70h]
  _DWORD v27[9]; // [rsp+18h] [rbp-60h] BYREF
  char v28; // [rsp+3Ch] [rbp-3Ch]

  if ( !*(_DWORD *)a2 || !*(_DWORD *)(a2 + 4) || (result = 1, *(_QWORD *)(a2 + 8)) )
  {
    result = 1;
    if ( ((*a3 >> 12) & 0x7F) != 0x45 && (a5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v12 = (unsigned int)a3[40];
      v13 = *(_QWORD *)(a1 + 248);
      v28 = 0;
      v27[8] = 0;
      v25 = v27;
      v14 = *(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL);
      v26 = si128;
      sub_1EA6B50(&v25, v13, *(_QWORD *)(v14 + 32), v12);
      sub_1EA6140(&v25, a5, 4, 4);
      *v17 = a3[51];
      v18 = *(_QWORD **)(a1 + 248);
      v19 = v26.m128_u64[1];
      v20 = v18[294];
      v21 = v26.m128_u64[0] - v26.m128_u64[1];
      v18[304] += v26.m128_u64[0] - v26.m128_u64[1];
      v22 = (char *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18[295] >= (unsigned __int64)&v22[v21] && v20 )
      {
        v18[294] = &v22[v21];
      }
      else
      {
        v24 = sub_986170((__int64)(v18 + 294), v21, v21, 3, v15, v16);
        v19 = v26.m128_u64[1];
        v22 = (char *)v24;
      }
      v23 = memcpy(v22, (char *)v25 + v19, v21);
      sub_15AB760((__m128i **)a2, *(_QWORD **)(a1 + 248), a5, (__int64)v23, a4, si128);
      result = v25 != v27 && v25 != nullptr;
      if ( result )
      {
        operator delete[](v25);
        return 0;
      }
    }
  }
  return result;
}
