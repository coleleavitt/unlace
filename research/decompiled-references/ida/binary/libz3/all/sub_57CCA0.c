__int64 __fastcall sub_57CCA0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __m128i v6; // xmm0
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  size_t v9; // rdx
  int v10; // eax

  v4 = sub_186B270(0x30u);
  *(_QWORD *)v4 = qword_1C665B0;
  v5 = (_QWORD *)*a3;
  *(_QWORD *)(v4 + 8) = a1;
  *(_QWORD *)(v4 + 16) = 0;
  if ( v5 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)(v5 - 1));
    v7 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v6) + 8);
    v8 = (_QWORD *)*a3;
    *(_QWORD *)(v4 + 16) = v7 + 1;
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
  v10 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)(v4 + 28) = 1;
  *(_OWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 24) = v10;
  *(_QWORD *)v4 = &off_1C67CA0;
  sub_57B9A0(v4);
  return v4;
}

