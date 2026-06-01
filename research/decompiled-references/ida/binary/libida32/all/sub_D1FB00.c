__int64 __fastcall sub_D1FB00(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  __m128i v5; // rax
  __m128i v6; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v7[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a3;
    v4 = sub_21D4FB0(*(unsigned int *)(a2 + 8));
    v5.m128i_i64[0] = sub_D1E4A0((_QWORD *)(a1 + 384), v4);
    v6 = v5;
    sub_CDADA0((__int64)v7, a2);
    sub_CDAFD0((__int64)&v6, v7);
    sub_971860(v7);
    *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v6);
  }
  return 1;
}

