__int64 __fastcall sub_8CBC10(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  unsigned int *v4; // r12
  __m128i v6; // xmm1
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // r13d
  unsigned int v10; // [rsp+Ch] [rbp-4Ch] BYREF
  char v11[72]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v10 = a2;
  v4 = (unsigned int *)(v3 + 56LL * a2);
  if ( *((_BYTE *)v4 + 48) )
    return *((unsigned __int8 *)v4 + 48);
  v6 = _mm_cvtsi32_si128(a2);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 128);
  *((_BYTE *)v4 + 48) = 1;
  v4[10] = v8;
  *(_QWORD *)(a1 + 128) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8 + 1), v6).m128i_u64[0];
  sub_3EBB80((__int64)v11, 32LL * v4[1] + v7, v7 + 32LL * *v4);
  if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v4 + 2), (__int64)v11) )
  {
    sub_25A130(v11);
    v9 = sub_8CAC00(a1, a2);
  }
  else
  {
    sub_25A130(v11);
    v9 = 1;
  }
  sub_893BD0((unsigned int **)(a1 + 136), &v10);
  return v9;
}

