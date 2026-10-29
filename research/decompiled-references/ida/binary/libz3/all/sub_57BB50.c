__int64 __fastcall sub_57BB50(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rax
  __m128i v5; // xmm0
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  size_t v9; // rdx
  int v10; // eax

  v4 = (_QWORD *)*a3;
  *(_QWORD *)a1 = qword_1C665B0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v4 )
  {
    v5 = _mm_loadl_epi64((const __m128i *)(v4 - 1));
    v7 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v5) + 8);
    v8 = (_QWORD *)*a3;
    *(_QWORD *)(a1 + 16) = v7 + 1;
    *v7 = v5.m128i_i64[0];
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
  v10 = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 28) = 1;
  *(_OWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = v10;
  *(_QWORD *)a1 = &off_1C67CA0;
  return sub_57B9A0(a1);
}

