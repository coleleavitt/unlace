_QWORD *__fastcall sub_536B50(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  size_t v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rax

  v6 = (_QWORD *)sub_186B270(0x98u);
  *v6 = qword_1C665B0;
  v7 = v6;
  v6[1] = a1;
  v6[2] = 0;
  if ( *a3 )
  {
    v8 = _mm_loadl_epi64((const __m128i *)(*a3 - 8LL));
    v9 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
    v10 = (_QWORD *)*a3;
    v7[2] = v9 + 1;
    *v9 = v8.m128i_i64[0];
    if ( v10 )
    {
      v11 = 8LL * *((unsigned int *)v10 - 1);
      if ( v11 <= 8 )
      {
        if ( v11 == 8 )
          v9[1] = *v10;
      }
      else
      {
        memmove(v9 + 1, v10, v11);
      }
    }
  }
  v12 = *(_DWORD *)(a1 + 8);
  v13 = *(_QWORD *)(a1 + 24);
  v7[4] = a1;
  *((_DWORD *)v7 + 6) = v12;
  *v7 = &off_1C67178;
  v14 = sub_4D6490(v13);
  v7[5] = v14;
  sub_16669D0(v7 + 6, v14);
  *((__m128 *)v7 + 4) = _mm_loadh_ps((const double *)v7 + 5);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  *((_BYTE *)v7 + 80) = 0;
  v7[13] = 0;
  *((_BYTE *)v7 + 112) = 1;
  v7[17] = 0;
  *((_BYTE *)v7 + 144) = 0;
  *(_OWORD *)(v7 + 11) = 0;
  *(_OWORD *)(v7 + 15) = 0;
  return v7;
}

