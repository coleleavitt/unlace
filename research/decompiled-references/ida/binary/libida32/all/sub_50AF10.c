_QWORD *__fastcall sub_50AF10(__int64 *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  __m128i v4; // xmm0
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __m128i v9; // xmm0

  result = a2;
  v3 = *a1;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  v5 = a2[3];
  *result = v3;
  *(__m128i *)(result + 1) = v4;
  v6 = a1[3];
  a1[3] = v5;
  v7 = result[4];
  result[3] = v6;
  v8 = a1[4];
  a1[4] = v7;
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 5));
  a1[5] = result[5];
  a1[6] = result[6];
  LODWORD(v7) = *((_DWORD *)result + 14);
  result[4] = v8;
  *(__m128i *)(result + 5) = v9;
  LODWORD(v8) = *((_DWORD *)a1 + 14);
  *((_DWORD *)a1 + 14) = v7;
  LOBYTE(v7) = *((_BYTE *)result + 60);
  *((_DWORD *)result + 14) = v8;
  LOBYTE(v8) = *((_BYTE *)a1 + 60);
  *((_BYTE *)a1 + 60) = v7;
  *((_BYTE *)result + 60) = v8;
  return result;
}

