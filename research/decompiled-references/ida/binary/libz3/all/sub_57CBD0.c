__int64 __fastcall sub_57CBD0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __m128i v4; // xmm0
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  size_t v7; // rdx
  int v8; // eax

  v2 = sub_186B270(0x30u);
  *(_QWORD *)v2 = qword_1C665B0;
  v3 = (_QWORD *)*a2;
  *(_QWORD *)(v2 + 8) = a1;
  *(_QWORD *)(v2 + 16) = 0;
  if ( v3 )
  {
    v4 = _mm_loadl_epi64((const __m128i *)(v3 - 1));
    v5 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v4) + 8);
    v6 = (_QWORD *)*a2;
    *(_QWORD *)(v2 + 16) = v5 + 1;
    *v5 = v4.m128i_i64[0];
    if ( v6 )
    {
      v7 = 8LL * *((unsigned int *)v6 - 1);
      if ( v7 <= 8 )
      {
        if ( v7 == 8 )
          v5[1] = *v6;
      }
      else
      {
        memmove(v5 + 1, v6, v7);
      }
    }
  }
  v8 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)(v2 + 28) = 1;
  *(_OWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 24) = v8;
  *(_QWORD *)v2 = &off_1C67CA0;
  sub_57B9A0(v2);
  return v2;
}

