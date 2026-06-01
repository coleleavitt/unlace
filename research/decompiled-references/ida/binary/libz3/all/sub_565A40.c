__int64 __fastcall sub_565A40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  __m128i v11; // xmm0
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  size_t v14; // rdx
  int v15; // eax
  void *v17; // [rsp+8h] [rbp-30h]

  v5 = sub_186B270(0x38u);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 40) + 128LL))(
         *(_QWORD *)(a1 + 40),
         a2,
         a3);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 48) + 128LL))(
         *(_QWORD *)(a1 + 48),
         a2,
         a3);
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v5 + 16) = 0;
  v9 = v7;
  *(_QWORD *)v5 = qword_1C67518;
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v5 + 8) = v8;
  if ( v10 )
  {
    v11 = _mm_loadl_epi64((const __m128i *)(v10 - 8));
    v17 = (void *)v11.m128i_i64[0];
    v12 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v11) + 8);
    v13 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(v5 + 16) = v12 + 1;
    *v12 = v11.m128i_i64[0];
    if ( v13 )
    {
      v14 = 8LL * *((unsigned int *)v13 - 1);
      if ( v14 <= 8 )
      {
        if ( v14 == 8 )
          v12[1] = *v13;
      }
      else
      {
        memmove(v12 + 1, v13, v14);
      }
    }
  }
  v15 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(v5 + 40) = v6;
  *(_QWORD *)(v5 + 48) = v9;
  *(_DWORD *)(v5 + 24) = v15;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v8 + 8);
  *(_QWORD *)v5 = &off_1C67810;
  sub_565150((_QWORD *)v5);
  return v5;
}

