__int64 __fastcall sub_D43840(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  __m128i v5; // rax
  __m128i v6; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v7[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a3;
    v4 = sub_21F8CF0(*(unsigned int *)(a2 + 8));
    v5.m128i_i64[0] = sub_D421E0((_QWORD *)(a1 + 384), v4);
    v6 = v5;
    sub_CFEAE0((__int64)v7, a2);
    sub_CFED10((__int64)&v6, v7);
    sub_9955A0(v7);
    *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v6);
  }
  return 1;
}
