void *__fastcall sub_EAEB40(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  size_t v12; // r8
  __int64 v13; // rax
  void *v14; // r12
  __int64 *v15; // rdi
  char *v16; // rbx
  char *v17; // rbp
  __m128i *v18; // rbx
  __m128i *v19; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // [rsp+0h] [rbp-168h]
  size_t v25; // [rsp+0h] [rbp-168h]
  __int64 v26; // [rsp+8h] [rbp-160h]
  __m128i src; // [rsp+10h] [rbp-158h] BYREF
  __int64 v28; // [rsp+20h] [rbp-148h] BYREF
  __m128 v29[3]; // [rsp+30h] [rbp-138h] BYREF
  __int128 v30; // [rsp+60h] [rbp-108h] BYREF
  void *v31; // [rsp+70h] [rbp-F8h]
  __int64 v32; // [rsp+78h] [rbp-F0h]
  _BYTE v33[32]; // [rsp+80h] [rbp-E8h] BYREF
  __m128i *p_si128; // [rsp+A0h] [rbp-C8h]
  __int64 v35; // [rsp+A8h] [rbp-C0h]
  __m128i si128; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v37[64]; // [rsp+C0h] [rbp-A8h] BYREF
  void *ptr; // [rsp+100h] [rbp-68h]
  __int64 v39; // [rsp+118h] [rbp-50h] BYREF

  if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
  {
    v21 = sub_EAE110((_DWORD *)a1, a2[289], a3, a4, a5, a6);
    *(_BYTE *)(a1 + 32) |= 1u;
    *(_QWORD *)(a1 + 8) = v21;
    *(_QWORD *)(a1 + 16) = v22;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_DWORD *)a1;
  v9 = *(_QWORD *)(a1 + 16);
  v30 = 0;
  v31 = v33;
  v32 = 0x400000000LL;
  si128 = _mm_load_si128((const __m128i *)&unk_2383B90);
  v26 = v7 + v9;
  v24 = v8;
  p_si128 = &si128;
  v35 = 0;
  v10 = sub_A3ED80((__int64)a2);
  sub_B1D740((__int64)v37, (__int64)&v30, v10, (__int64)(a2 + 2321), v24, v7, v26, 1);
  sub_B176C0(v29, (__int64)v37, (__int64)(a2 + 2321));
  sub_B17860(&src, v29);
  v12 = (unsigned int)(src.m128i_i32[2] + 1);
  v13 = a2[294];
  a2[304] += v12;
  v14 = (void *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)v14 + v12 && v13 )
  {
    a2[294] = (__int64)v14 + v12;
  }
  else
  {
    v25 = v12;
    v23 = sub_962430((__int64)(a2 + 294), v12, v12, 3, v12, v11);
    v12 = v25;
    v14 = (void *)v23;
  }
  memcpy(v14, (const void *)src.m128i_i64[0], v12);
  v15 = (__int64 *)src.m128i_i64[0];
  *(_QWORD *)(a1 + 24) = v14;
  *(_BYTE *)(a1 + 32) |= 2u;
  if ( v15 != &v28 )
    operator delete(v15);
  if ( ptr != &v39 )
    free(ptr);
  v16 = (char *)v31;
  v17 = (char *)v31 + 8 * (unsigned int)v32;
  if ( v31 != v17 )
  {
    do
    {
      v16 += 8;
      operator delete();
    }
    while ( v17 != v16 );
  }
  v18 = p_si128;
  v19 = &p_si128[(unsigned int)v35];
  if ( p_si128 != v19 )
  {
    do
    {
      ++v18;
      operator delete();
    }
    while ( v19 != v18 );
    v19 = p_si128;
  }
  if ( v19 != &si128 )
    free(v19);
  if ( v31 != v33 )
    free(v31);
  return v14;
}

