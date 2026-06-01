__int64 __fastcall sub_4DB420(_QWORD *a1, int a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  unsigned int v6; // r13d
  __int64 v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  size_t v10; // rdx
  unsigned int v12; // [rsp+Ch] [rbp-2Ch]

  v3 = sub_186B270(0x58u);
  *(_OWORD *)(v3 + 8) = 0;
  sub_6299B0(v3 + 24);
  sub_6299B0(v3 + 32);
  *(_BYTE *)(v3 + 40) = 0;
  *(_QWORD *)v3 = off_1C66400;
  v4 = (_QWORD *)sub_186B270(0xC0u);
  *v4 = 0;
  v4[3] = 0;
  v4[6] = 0;
  v4[9] = 0;
  v4[12] = 0;
  v4[15] = 0;
  v4[18] = 0;
  v4[21] = 0;
  *(_QWORD *)(v3 + 48) = v4;
  *(_QWORD *)v3 = off_1C4F9F8;
  v5 = (_QWORD *)*a1;
  *(_QWORD *)(v3 + 56) = 8;
  *(_DWORD *)(v3 + 64) = 0;
  *(_QWORD *)(v3 + 72) = 0;
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 - 1);
    v7 = *((unsigned int *)v5 - 2);
    v12 = v7;
    v8 = (_QWORD *)sub_186B270(8 * v7 + 8);
    v9 = (_QWORD *)*a1;
    *(_QWORD *)(v3 + 72) = v8 + 1;
    *v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(v6)).m128i_u64[0];
    if ( v9 )
    {
      v10 = 8LL * *((unsigned int *)v9 - 1);
      if ( v10 <= 8 )
      {
        if ( v10 == 8 )
          v8[1] = *v9;
      }
      else
      {
        memmove(v8 + 1, v9, v10);
      }
    }
  }
  *(_DWORD *)(v3 + 80) = a2;
  return v3;
}

