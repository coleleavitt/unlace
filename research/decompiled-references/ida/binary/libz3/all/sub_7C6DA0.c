__int64 __fastcall sub_7C6DA0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // r13
  unsigned int v5; // r13d
  __m128i v6; // xmm0
  _BYTE v8[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_186B270(0xA0u);
  v3 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v3 == sub_79EFD0 )
    v4 = a2[18];
  else
    v4 = v3((__int64)a2);
  sub_180C5A0(v8, "sls");
  v5 = sub_15DA4C0(v4 + 560, v8);
  sub_180C5A0(v8, "sls");
  sub_7E4DF0(v2, a2, v8, v5);
  v6 = _mm_loadl_epi64((const __m128i *)&off_1C548E0);
  *(_QWORD *)(v2 + 120) = 0;
  *(_QWORD *)v2 = &off_1C6B2F0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 48) = off_1C6B600;
  *(__m128i *)(v2 + 32) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)off_1C6B5D8);
  *(_QWORD *)(v2 + 112) = off_1C6B658;
  *(_DWORD *)(v2 + 136) = 0;
  *(_BYTE *)(v2 + 140) = 0;
  *(_OWORD *)(v2 + 144) = 0;
  return v2;
}

