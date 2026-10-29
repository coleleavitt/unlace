void __fastcall sub_22648C0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  unsigned int v5; // eax
  __int64 v6; // rax
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rsi
  int v13; // r15d
  void *v14; // rax
  __m128i *v15; // rdi
  _QWORD v16[4]; // [rsp+0h] [rbp-198h] BYREF
  __int16 v17; // [rsp+20h] [rbp-178h]
  _BYTE v18[32]; // [rsp+30h] [rbp-168h] BYREF
  __int16 v19; // [rsp+50h] [rbp-148h]
  void *v20; // [rsp+60h] [rbp-138h] BYREF
  void *v21; // [rsp+68h] [rbp-130h]
  __m128i v22; // [rsp+70h] [rbp-128h] BYREF
  __int16 v23; // [rsp+80h] [rbp-118h]
  void *v24[2]; // [rsp+90h] [rbp-108h] BYREF
  __m128i v25; // [rsp+A0h] [rbp-F8h] BYREF
  int v26; // [rsp+B0h] [rbp-E8h]
  void *ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-D0h]
  _BYTE v29[192]; // [rsp+D8h] [rbp-C0h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = *(_QWORD *)(v2 + 8);
  v5 = sub_2259FA0(v4, v3);
  v6 = sub_228AA60(v4, v3, v5);
  v7 = *(_BYTE **)(a1 + 48);
  v9 = v8;
  v10 = *(_QWORD *)(a1 + 56);
  v11 = v6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v29;
  sub_A1FE50(&ptr, v7, &v7[v10]);
  v16[0] = v11;
  v17 = 261;
  v12 = *(unsigned int *)(a1 + 80);
  v16[1] = v9;
  v19 = 257;
  v23 = 257;
  LOWORD(v26) = 257;
  ((void (__fastcall *)(void **, __int64, _QWORD *, _BYTE *, void **, void **))sub_2289D90)(
    &ptr,
    v12,
    v16,
    v18,
    &v20,
    v24);
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40LL);
  v20 = &v22;
  sub_2259A00(&v20, ptr, (__int64)ptr + si128.m128i_i64[0]);
  v24[0] = &v25;
  if ( v20 == &v22 )
  {
    v25 = _mm_load_si128(&v22);
  }
  else
  {
    v24[0] = v20;
    v25.m128i_i64[0] = v22.m128i_i64[0];
  }
  v14 = v21;
  v21 = nullptr;
  v22.m128i_i8[0] = 0;
  v24[1] = v14;
  v20 = &v22;
  v26 = v13;
  sub_A0AAD0(a1 + 8, v24);
  v15 = (__m128i *)v24[0];
  *(_DWORD *)(a1 + 40) = v26;
  if ( v15 != &v25 )
    operator delete(v15);
  if ( v20 != &v22 )
    operator delete(v20);
  if ( ptr != v29 )
    free(ptr);
}
