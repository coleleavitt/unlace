__int64 __fastcall sub_24D0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[3] = __readfsqword(0x28u);
  v4 = qlread(a3, v11, 24);
  result = 0;
  if ( v4 == 24 )
  {
    if ( v11[1] ^ 0x656C626164616F4CLL | v11[0] ^ 0x206572615774654ELL || v11[2] != 0x1A656C75646F4D20LL )
    {
      return 0;
    }
    else
    {
      v6 = *a1;
      if ( (unsigned __int64)a1[2] <= 0x1D )
      {
        v9 = qvector_reserve(a1, v6, 30, 1);
        *a1 = v9;
        v6 = v9;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_67E0);
      a1[1] = 30;
      *(__m128i *)v6 = si128;
      *(__m128i *)(v6 + 13) = _mm_load_si128((const __m128i *)&xmmword_67F0);
      *(_BYTE *)(*a1 + 29) = 0;
      v8 = *a2;
      if ( (unsigned __int64)a2[2] <= 6 )
      {
        v10 = qvector_reserve(a2, v8, 7, 1);
        *a2 = v10;
        v8 = v10;
      }
      a2[1] = 7;
      *(_DWORD *)v8 = 1635018093;
      *(_WORD *)(v8 + 4) = 25456;
      *(_BYTE *)(*a2 + 6) = 0;
      return 9;
    }
  }
  return result;
}
