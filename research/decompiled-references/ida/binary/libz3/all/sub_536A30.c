_QWORD *__fastcall sub_536A30(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __m128i v5; // xmm0
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  size_t v8; // rdx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = (_QWORD *)sub_186B270(0x98u);
  *v3 = qword_1C665B0;
  v4 = v3;
  v3[1] = a1;
  v3[2] = 0;
  if ( *a2 )
  {
    v5 = _mm_loadl_epi64((const __m128i *)(*a2 - 8LL));
    v6 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v5) + 8);
    v7 = (_QWORD *)*a2;
    v4[2] = v6 + 1;
    *v6 = v5.m128i_i64[0];
    if ( v7 )
    {
      v8 = 8LL * *((unsigned int *)v7 - 1);
      if ( v8 <= 8 )
      {
        if ( v8 == 8 )
          v6[1] = *v7;
      }
      else
      {
        memmove(v6 + 1, v7, v8);
      }
    }
  }
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 24);
  v4[4] = a1;
  *((_DWORD *)v4 + 6) = v9;
  *v4 = &off_1C67178;
  v11 = sub_4D6490(v10);
  v4[5] = v11;
  sub_16669D0(v4 + 6, v11);
  v12 = v4[5];
  *((_BYTE *)v4 + 80) = 1;
  v4[8] = 0;
  v4[9] = v12;
  v4[13] = 0;
  *((_BYTE *)v4 + 112) = 0;
  v4[17] = 0;
  *((_BYTE *)v4 + 144) = 0;
  *(_OWORD *)(v4 + 11) = 0;
  *(_OWORD *)(v4 + 15) = 0;
  return v4;
}

