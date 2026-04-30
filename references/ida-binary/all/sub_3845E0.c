__int64 __fastcall sub_3845E0(__int64 *a1, __int64 a2, __int64 *a3, const char *a4, __int64 *a5, char a6)
{
  __int64 v9; // rax
  size_t v10; // rax
  size_t v11; // r15
  size_t v12; // r14
  void *v13; // rax
  __int64 *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 result; // rax
  __int64 v20; // rsi

  *a1 = 0;
  a1[5] = a2;
  *(_OWORD *)(a1 + 1) = 0;
  *(_OWORD *)(a1 + 3) = 0;
  v9 = *a3;
  a1[6] = *a3;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  a1[7] = 0;
  *((_OWORD *)a1 + 4) = 0;
  if ( a4 )
  {
    v10 = strlen(a4);
    v11 = v10 + 1;
    v12 = v10;
    v13 = (void *)qvector_reserve(a1 + 7, 0, v10 + 1, 1);
    a1[7] = (__int64)v13;
    a1[8] = v11;
    memmove(v13, a4, v12);
    *(_BYTE *)(a1[7] + v12) = 0;
  }
  v14 = a1;
  *((_DWORD *)a1 + 24) = 0;
  if ( a6 )
    v14 = a5;
  a1[13] = 0;
  a1[16] = 0;
  a1[10] = (__int64)v14;
  a1[14] = (__int64)(a1 + 12);
  a1[15] = (__int64)(a1 + 12);
  a1[20] = (__int64)(a1 + 18);
  a1[21] = (__int64)(a1 + 18);
  *((_DWORD *)a1 + 36) = 0;
  a1[19] = 0;
  v15 = unk_8BA540;
  a1[22] = 0;
  *((_DWORD *)a1 + 46) = v15;
  if ( !a6 )
  {
    v16 = *a1;
    v17 = _mm_loadu_si128((const __m128i *)(a1 + 1));
    v18 = _mm_loadu_si128((const __m128i *)(a5 + 1));
    *a1 = *a5;
    *a5 = v16;
    *(__m128i *)(a1 + 1) = v18;
    *(__m128i *)(a5 + 1) = v17;
  }
  result = xmmword_8CF2A8;
  v20 = qword_8CF2A0;
  if ( *((_QWORD *)&xmmword_8CF2A8 + 1) < (unsigned __int64)(xmmword_8CF2A8 + 1) )
  {
    qword_8CF2A0 = qvector_reserve(&qword_8CF2A0, qword_8CF2A0, xmmword_8CF2A8 + 1, 8);
    v20 = qword_8CF2A0;
    result = xmmword_8CF2A8;
  }
  *(_QWORD *)(v20 + 8 * result) = a1;
  *(_QWORD *)&xmmword_8CF2A8 = xmmword_8CF2A8 + 1;
  return result;
}
