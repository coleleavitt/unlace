__int64 __fastcall sub_5657A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v9; // rax
  __m128i v10; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  size_t v13; // rdx
  int v14; // eax
  void *v16; // [rsp+8h] [rbp-40h]

  v9 = *(_QWORD **)a3;
  *(_QWORD *)a1 = qword_1C67518;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v9 )
  {
    v10 = _mm_loadl_epi64((const __m128i *)(v9 - 1));
    v16 = (void *)v10.m128i_i64[0];
    v11 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v10) + 8);
    v12 = *(_QWORD **)a3;
    *(_QWORD *)(a1 + 16) = v11 + 1;
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
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 8);
  v14 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 40) = a5;
  *(_DWORD *)(a1 + 32) = v14;
  *(_QWORD *)a1 = &off_1C67810;
  *(_QWORD *)(a1 + 48) = a4;
  return sub_565150((_QWORD *)a1);
}

