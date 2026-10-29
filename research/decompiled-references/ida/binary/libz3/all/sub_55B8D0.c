__int64 __fastcall sub_55B8D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i *v8; // rax
  __int64 *v9; // rsi
  const __m128i *v10; // r14
  size_t v11; // rdx
  int v12; // r15d
  __m128i v13; // xmm0
  _QWORD *v14; // rax
  size_t v15; // rdx
  int v16; // eax
  unsigned __int64 *src; // [rsp+8h] [rbp-40h]

  v2 = sub_186B270(0x30u);
  v3 = sub_186B270(0x30u);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 40LL))(*(_QWORD *)(a1 + 32), a2);
  *(_QWORD *)(v3 + 8) = a1;
  v5 = v4;
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)v3 = &off_1C675A8;
  v6 = *(_QWORD *)(v4 + 16);
  if ( v6 )
  {
    v7 = _mm_loadl_epi64((const __m128i *)(v6 - 8));
    v8 = (__m128i *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8);
    v9 = *(__int64 **)(v5 + 16);
    v10 = v8;
    src = &v8->m128i_u64[1];
    *(_QWORD *)(v3 + 16) = &v8->m128i_i64[1];
    v8->m128i_i64[0] = v7.m128i_i64[0];
    if ( v9 )
    {
      v11 = 8LL * *((unsigned int *)v9 - 1);
      if ( v11 <= 8 )
      {
        if ( v11 == 8 )
          v8->m128i_i64[1] = *v9;
      }
      else
      {
        memcpy(&v8->m128i_u64[1], v9, v11);
      }
    }
    v12 = *(_DWORD *)(v5 + 24);
    v13 = _mm_loadl_epi64(v10);
    *(_QWORD *)(v3 + 40) = v5;
    *(_QWORD *)v3 = off_1C50BA0;
    *(_QWORD *)v2 = qword_1C67518;
    *(_DWORD *)(v3 + 24) = v12;
    *(_DWORD *)(v3 + 32) = 0;
    *(_QWORD *)(v2 + 8) = a1;
    v14 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v13) + 8);
    v15 = 8LL * v10->m128i_u32[1];
    *(_QWORD *)(v2 + 16) = v14 + 1;
    *v14 = v13.m128i_i64[0];
    if ( v15 <= 8 )
    {
      if ( v15 == 8 )
        v14[1] = v10->m128i_i64[1];
    }
    else
    {
      memcpy(v14 + 1, src, v15);
    }
  }
  else
  {
    v12 = *(_DWORD *)(v5 + 24);
    *(_QWORD *)(v3 + 40) = v5;
    *(_QWORD *)v3 = off_1C50BA0;
    *(_DWORD *)(v3 + 24) = v12;
    *(_QWORD *)(v2 + 8) = a1;
    *(_QWORD *)(v2 + 16) = 0;
  }
  v16 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v2 + 24) = v12;
  *(_QWORD *)(v2 + 40) = v3;
  *(_DWORD *)(v2 + 32) = v16;
  *(_QWORD *)v2 = &off_1C675D8;
  *(_DWORD *)(v3 + 32) = 1;
  return v2;
}

