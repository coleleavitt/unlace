_QWORD *__fastcall sub_567170(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  _QWORD *v6; // rax
  __int64 v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __m128i v10; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  size_t v13; // rdx
  int v14; // eax
  void *v16; // [rsp+8h] [rbp-30h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
         *(_QWORD *)(a1 + 8),
         a2[6],
         *(_QWORD *)(a3 + 48));
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(
         *(_QWORD *)(a1 + 16),
         a2[5],
         *(_QWORD *)(a3 + 40));
  v6 = (_QWORD *)sub_186B270(0x38u);
  v7 = a2[1];
  v8 = v6;
  *v6 = qword_1C67518;
  v9 = *(_QWORD *)(v4 + 16);
  v8[1] = v7;
  v8[2] = 0;
  if ( v9 )
  {
    v10 = _mm_loadl_epi64((const __m128i *)(v9 - 8));
    v16 = (void *)v10.m128i_i64[0];
    v11 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v10) + 8);
    v12 = *(_QWORD **)(v4 + 16);
    v8[2] = v11 + 1;
    *v11 = v10.m128i_i64[0];
    if ( v12 )
    {
      v13 = 8LL * *((unsigned int *)v12 - 1);
      if ( v13 <= 8 )
      {
        if ( v13 == 8 )
          v11[1] = *v12;
      }
      else
      {
        memmove(v11 + 1, v12, v13);
      }
    }
  }
  v14 = *(_DWORD *)(v4 + 24);
  v8[5] = v5;
  v8[6] = v4;
  *((_DWORD *)v8 + 6) = v14;
  *((_DWORD *)v8 + 8) = *(_DWORD *)(v7 + 8);
  *v8 = &off_1C67810;
  sub_565150(v8);
  return v8;
}

