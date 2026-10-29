__int64 __fastcall sub_55BCB0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r13
  _DWORD *v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // rax
  unsigned int *v12; // rax
  _QWORD *v13; // rsi
  unsigned int *v14; // r15
  size_t v15; // rdx
  int v16; // r8d
  __int64 v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  int v21; // r8d
  size_t v22; // rdx
  int v23; // eax
  __int64 v25; // rax
  void *v26; // rdi
  unsigned int v27; // [rsp+4h] [rbp-54h]
  int v28; // [rsp+4h] [rbp-54h]
  void *src; // [rsp+8h] [rbp-50h]
  _BYTE v30[72]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v25 = (**(__int64 (__fastcall ***)(_QWORD))v2)(*(_QWORD *)(a1 + 40));
    v26 = *(void **)(v2 + 40);
    v3 = v25;
    if ( (void *)v25 != v26 && v26 )
      sub_4D63E0(v26);
    *(_QWORD *)(v2 + 40) = v3;
  }
  sub_644D80(v30, "clone", 11);
  v4 = sub_186B270(0x30u);
  v5 = sub_186B270(0x30u);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 72LL))(v3);
  v7 = __dynamic_cast(
         *(const void **)(a1 + 8),
         (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
         (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
         0);
  v8 = v7;
  if ( !v7 )
    __cxa_bad_cast();
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)v5 = &off_1C675A8;
  v9 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v5 + 16) = 0;
  if ( v9 )
  {
    v10 = _mm_cvtsi32_si128(*(_DWORD *)(v9 - 4));
    v11 = *(unsigned int *)(v9 - 8);
    v27 = v11;
    v12 = (unsigned int *)sub_186B270(8 * v11 + 8);
    v13 = *(_QWORD **)(v6 + 16);
    v14 = v12;
    src = v12 + 2;
    *(_QWORD *)(v5 + 16) = v12 + 2;
    *(_QWORD *)v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v10))).m128i_u64[0];
    if ( v13 )
    {
      v15 = 8LL * *((unsigned int *)v13 - 1);
      if ( v15 <= 8 )
      {
        if ( v15 == 8 )
          *((_QWORD *)v12 + 1) = *v13;
      }
      else
      {
        memcpy(v12 + 2, v13, v15);
      }
    }
    v16 = *(_DWORD *)(v6 + 24);
    *(_QWORD *)(v5 + 40) = v6;
    *(_QWORD *)v5 = off_1C50BA0;
    v17 = *(_QWORD *)v14;
    *(_QWORD *)v4 = qword_1C67518;
    v18 = *v14;
    *(_DWORD *)(v5 + 24) = v16;
    *(_DWORD *)(v5 + 32) = 0;
    *(_QWORD *)(v4 + 8) = v8;
    *(_QWORD *)(v4 + 16) = 0;
    v28 = v16;
    v19 = (_QWORD *)sub_186B270(8 * v18 + 8);
    v20 = v14[1];
    v21 = v28;
    *v19 = v17;
    *(_QWORD *)(v4 + 16) = v19 + 1;
    v22 = 8 * v20;
    if ( v22 <= 8 )
    {
      if ( v22 == 8 )
        v19[1] = *((_QWORD *)v14 + 1);
    }
    else
    {
      memcpy(v19 + 1, src, v22);
      v21 = v28;
    }
  }
  else
  {
    v21 = *(_DWORD *)(v6 + 24);
    *(_QWORD *)(v5 + 40) = v6;
    *(_QWORD *)v5 = off_1C50BA0;
    *(_DWORD *)(v5 + 24) = v21;
    *(_QWORD *)(v4 + 8) = v8;
    *(_QWORD *)(v4 + 16) = 0;
  }
  v23 = v8[2];
  *(_QWORD *)(v4 + 40) = v5;
  *(_DWORD *)(v4 + 24) = v21;
  *(_DWORD *)(v4 + 32) = v23;
  *(_QWORD *)v4 = &off_1C675D8;
  *(_DWORD *)(v5 + 32) = 1;
  sub_644EE0(v30);
  return v4;
}

