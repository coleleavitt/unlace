__int64 (__fastcall **__fastcall sub_7C6A80(__int64 a1, _QWORD *a2))()
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // r13
  unsigned int v4; // r13d
  __m128i v5; // xmm0
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v2 == sub_79EFD0 )
    v3 = a2[18];
  else
    v3 = v2((__int64)a2);
  sub_180C5A0(v7, "sls");
  v4 = sub_15DA4C0(v3 + 560, v7);
  sub_180C5A0(v7, "sls");
  sub_7E4DF0(a1, a2, v7, v4);
  v5 = _mm_loadl_epi64((const __m128i *)&off_1C548E0);
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &off_1C6B2F0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 48) = off_1C6B600;
  *(__m128i *)(a1 + 32) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)off_1C6B5D8);
  *(_QWORD *)(a1 + 112) = off_1C6B658;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  return off_1C6B658;
}

