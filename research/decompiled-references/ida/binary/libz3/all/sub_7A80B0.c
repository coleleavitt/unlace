__int64 (__fastcall **__fastcall sub_7A80B0(__int64 a1, _QWORD *a2))()
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // r12
  unsigned int v4; // r12d
  __m128i v5; // xmm0
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v2 == sub_79EFD0 )
    v3 = a2[18];
  else
    v3 = v2((__int64)a2);
  sub_180C5A0(v8, "user_propagator");
  v7 = v8[0];
  v4 = sub_15DA4C0(v3 + 560, &v7);
  sub_180C5A0(v8, "user_propagator");
  sub_7E4DF0(a1, a2, v8, v4);
  v5 = _mm_loadl_epi64((const __m128i *)off_1C548D0);
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)a1 = &off_1C6AB08;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 48) = off_1C6ADE8;
  *(__m128i *)(a1 + 32) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)off_1C6ADC0);
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 112) = off_1C6AE40;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 484) = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 496) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 432) = 0;
  *(_OWORD *)(a1 + 448) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  return off_1C6AE40;
}

