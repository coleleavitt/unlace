__int64 __fastcall sub_5656E0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  __m128i v6; // xmm0
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  size_t v9; // rdx
  void *v11; // [rsp+8h] [rbp-30h]

  v5 = *(_QWORD **)a3;
  *(_QWORD *)a1 = qword_1C67518;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v5 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)(v5 - 1));
    v11 = (void *)v6.m128i_i64[0];
    v7 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v6) + 8);
    v8 = *(_QWORD **)a3;
    *(_QWORD *)(a1 + 16) = v7 + 1;
    *v7 = v6.m128i_i64[0];
    if ( v8 )
    {
      v9 = 8LL * *((unsigned int *)v8 - 1);
      if ( v9 <= 8 )
      {
        if ( v9 == 8 )
          v7[1] = *v8;
      }
      else
      {
        memmove(v7 + 1, v8, v9);
      }
    }
  }
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a1 = &off_1C67810;
  return sub_565150((_QWORD *)a1);
}

