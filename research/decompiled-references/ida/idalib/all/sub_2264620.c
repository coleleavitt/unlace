__int64 __fastcall sub_2264620(__int64 a1, char a2)
{
  __int64 v3; // rax
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  int v6; // r15d
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // eax
  void *v12; // rax
  __m128i *v13; // rdi
  unsigned __int64 *v14; // rdi
  _QWORD v16[4]; // [rsp+10h] [rbp-198h] BYREF
  __int16 v17; // [rsp+30h] [rbp-178h]
  _BYTE v18[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v19; // [rsp+60h] [rbp-148h]
  void *v20; // [rsp+70h] [rbp-138h] BYREF
  void *v21; // [rsp+78h] [rbp-130h]
  __m128i v22; // [rsp+80h] [rbp-128h] BYREF
  __int16 v23; // [rsp+90h] [rbp-118h]
  void *v24[2]; // [rsp+A0h] [rbp-108h] BYREF
  __m128i v25; // [rsp+B0h] [rbp-F8h] BYREF
  int v26; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-C0h] BYREF
  int v30; // [rsp+F0h] [rbp-B8h]
  int v31; // [rsp+F4h] [rbp-B4h]

  v3 = *(_QWORD *)(a1 + 80);
  if ( !a2 )
  {
    v3 += 8;
    *(_QWORD *)(a1 + 80) = v3;
  }
  if ( *(_QWORD *)(a1 + 88) == v3 )
  {
    v31 = 0;
    si128.m128i_i64[0] = 0;
    ptr = &si128.m128i_u64[1];
    si128.m128i_i8[8] = 0;
    v30 = 9;
    sub_A0AAD0(a1 + 8, &ptr);
    v14 = (unsigned __int64 *)ptr;
    *(_DWORD *)(a1 + 40) = v30;
    if ( v14 != &si128.m128i_u64[1] )
      operator delete(v14);
  }
  else
  {
    v4 = *(_BYTE **)(a1 + 48);
    v5 = *(_QWORD *)(a1 + 56);
    ptr = &v29;
    v6 = 3;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(&ptr, v4, &v4[v5]);
    LOWORD(v26) = 257;
    v7 = *(__int64 **)(a1 + 80);
    v19 = 257;
    v23 = 257;
    v8 = *v7;
    v9 = *(_QWORD *)(v8 + 16);
    v10 = *(_QWORD *)(v8 + 24);
    v17 = 261;
    v16[0] = v9;
    v16[1] = v10;
    sub_228A3B0(&ptr, v16, v18, &v20, v24);
    v11 = *(_DWORD *)(**(_QWORD **)(a1 + 80) + 8LL);
    if ( v11 > 1 )
    {
      v6 = 2;
      if ( v11 != 2 )
        v6 = 9;
    }
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
    v12 = v21;
    v21 = nullptr;
    v22.m128i_i8[0] = 0;
    v24[1] = v12;
    v20 = &v22;
    v26 = v6;
    sub_A0AAD0(a1 + 8, v24);
    v13 = (__m128i *)v24[0];
    *(_DWORD *)(a1 + 40) = v26;
    if ( v13 != &v25 )
      operator delete(v13);
    if ( v20 != &v22 )
      operator delete(v20);
    v14 = (unsigned __int64 *)ptr;
    if ( ptr != &v29 )
      free(ptr);
  }
  std::_V2::system_category((std::_V2 *)v14);
  return 0;
}
