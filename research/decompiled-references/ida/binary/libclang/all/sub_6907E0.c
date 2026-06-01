__int64 __fastcall sub_6907E0(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 result; // rax
  __m128i si128; // xmm0

  v1 = *(_QWORD **)(a1 + 16);
  v2 = v1[1];
  if ( v2 == *v1 )
  {
    result = operator new(0xA0u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
    *(_QWORD *)(result + 152) = a1;
    *(_QWORD *)result = result + 24;
    *(__m128i *)(result + 8) = si128;
  }
  else
  {
    result = *(_QWORD *)(v2 - 8);
    *(_QWORD *)(result + 8) = 0;
    v1[1] -= 8LL;
  }
  return result;
}

