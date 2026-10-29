__int64 __fastcall sub_592DC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __m128i v5; // xmm0
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  size_t v8; // rdx
  _QWORD *v9; // rax
  __int64 v11; // [rsp+8h] [rbp-20h]

  v3 = sub_186B270(0x40u);
  *(_QWORD *)v3 = qword_1C67518;
  v4 = *(_QWORD **)a2;
  *(_QWORD *)(v3 + 8) = a1;
  *(_QWORD *)(v3 + 16) = 0;
  if ( v4 )
  {
    v5 = _mm_loadl_epi64((const __m128i *)(v4 - 1));
    v11 = v5.m128i_i64[0];
    v6 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v5) + 8);
    v7 = *(_QWORD **)a2;
    *(_QWORD *)(v3 + 16) = v6 + 1;
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
  *(_DWORD *)(v3 + 24) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)v3 = &off_1C67FF0;
  v9 = (_QWORD *)sub_186B270(0x80u);
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 0;
  v9[11] = 0;
  v9[12] = 0;
  v9[13] = 0;
  v9[14] = 0;
  v9[15] = 0;
  *(_QWORD *)(v3 + 40) = v9;
  *(_QWORD *)(v3 + 48) = 8;
  *(_DWORD *)(v3 + 56) = 0;
  return v3;
}

