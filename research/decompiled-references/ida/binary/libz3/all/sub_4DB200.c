__int64 __fastcall sub_4DB200(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  unsigned int v14; // [rsp+Ch] [rbp-2Ch]

  v5 = sub_186B270(0x60u);
  *(_OWORD *)(v5 + 8) = 0;
  sub_6299B0(v5 + 24);
  sub_6299B0(v5 + 32);
  *(_BYTE *)(v5 + 40) = 0;
  *(_QWORD *)v5 = off_1C66400;
  v6 = (_QWORD *)sub_186B270(0xC0u);
  *v6 = 0;
  v6[3] = 0;
  v6[6] = 0;
  v6[9] = 0;
  v6[12] = 0;
  v6[15] = 0;
  v6[18] = 0;
  v6[21] = 0;
  *(_QWORD *)(v5 + 48) = v6;
  *(_QWORD *)v5 = off_1C4F968;
  v7 = (_QWORD *)*a1;
  *(_QWORD *)(v5 + 56) = 8;
  *(_DWORD *)(v5 + 64) = 0;
  *(_QWORD *)(v5 + 72) = 0;
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 - 1);
    v9 = *((unsigned int *)v7 - 2);
    v14 = v9;
    v10 = (_QWORD *)sub_186B270(8 * v9 + 8);
    v11 = (_QWORD *)*a1;
    *(_QWORD *)(v5 + 72) = v10 + 1;
    *v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(v8)).m128i_u64[0];
    if ( v11 )
    {
      v12 = 8LL * *((unsigned int *)v11 - 1);
      if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          v10[1] = *v11;
      }
      else
      {
        memmove(v10 + 1, v11, v12);
      }
    }
  }
  *(_QWORD *)(v5 + 80) = a2;
  *(_DWORD *)(v5 + 88) = a3;
  return v5;
}

