__int64 __fastcall sub_5CB530(_QWORD *a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4)
{
  unsigned __int64 *v5; // rsi
  __m128i si128; // xmm0
  unsigned int v9; // r14d
  unsigned __int64 *v10; // rax
  const __m128i *v12; // rax

  if ( !a2 )
    return 0;
  v5 = *(unsigned __int64 **)a2;
  if ( v5 )
    sub_503E30((__int64)(a1 + 213), v5);
  *(_QWORD *)a2 = a3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  *(_DWORD *)(a2 + 8) = -1;
  *(__m128i *)(a2 + 16) = si128;
  v9 = sub_5C7820(a1, (__int64)a3, 1);
  if ( !(_BYTE)v9 )
  {
    *(_QWORD *)a2 = 0;
    v12 = (const __m128i *)sub_505D70((__int64)(a1 + 203), a4);
    if ( v12 )
      *(__m128i *)(a2 + 16) = _mm_loadu_si128(v12);
    goto LABEL_17;
  }
  if ( a4 == -1 )
  {
    a4 = *a3;
  }
  else if ( a4 < *a3 )
  {
    goto LABEL_7;
  }
  if ( a4 < a3[1] )
    goto LABEL_9;
LABEL_7:
  v10 = sub_5C93A0(a1, (__int64)a3, a4);
  if ( !v10 )
  {
LABEL_17:
    v9 = 0;
    goto LABEL_9;
  }
  *(_DWORD *)(a2 + 8) = (__int64)((__int64)v10 - a3[17]) >> 4;
LABEL_9:
  if ( *(_QWORD *)a2 )
    sub_505D00((__int64)(a1 + 213), *(unsigned __int64 **)a2);
  return v9;
}
