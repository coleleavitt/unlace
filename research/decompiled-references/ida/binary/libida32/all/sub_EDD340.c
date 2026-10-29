unsigned __int64 __fastcall sub_EDD340(
        _QWORD *a1,
        const __m128i *a2,
        int a3,
        int a4,
        const void *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  __int16 v15; // dx
  bool v16; // zf
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-40h]

  v11 = 8 * ((8 * ((a7 != 0) + (unsigned __int64)(unsigned int)a6) + 15) >> 3) + 64;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
  {
    a1[294] = v11 + v13;
  }
  else
  {
    v21 = a6;
    v20 = sub_962430((__int64)(a1 + 294), v11, v11, 3, (__int64)a5, a6);
    a6 = v21;
    v13 = v20;
  }
  v14 = sub_ED15F0(v13 + 56, a5, a6, a7, 0);
  v15 = *(_WORD *)v13 & 0xFE00;
  LOBYTE(v15) = -25;
  v16 = unk_2CAD564 == 0;
  *(_WORD *)v13 = v15;
  if ( !v16 )
    sub_EC5E10(231);
  v17 = _mm_loadu_si128(a2);
  *(_DWORD *)(v13 + 8) = 11;
  *(_DWORD *)(v13 + 12) = a3;
  *(__m128i *)(v13 + 32) = v17;
  v18 = a2[1].m128i_i64[0];
  *(_DWORD *)(v13 + 16) = a4;
  *(_QWORD *)(v13 + 48) = v18;
  *(_QWORD *)(v13 + 24) = v14;
  return v13;
}

