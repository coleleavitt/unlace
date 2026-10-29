_OWORD *__fastcall sub_81BC00(__int64 a1, _QWORD *a2, int a3)
{
  int v3; // ecx
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rsi
  __m128i v9; // xmm0
  __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rax
  __m128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD *result; // rax
  _BYTE v18[48]; // [rsp+28h] [rbp-30h] BYREF

  v3 = a3;
  v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v4 == sub_79EFD0 )
  {
    v5 = a2[18];
  }
  else
  {
    v5 = v4((__int64)a2);
    v3 = a3;
  }
  if ( v3 >= 0 && (v6 = *(_QWORD *)(v5 + 608)) != 0 && v3 < *(_DWORD *)(v6 - 4) )
    v7 = (__int64 *)(v6 + 8LL * v3);
  else
    v7 = (__int64 *)&qword_18D6CD0;
  sub_7E4DF0(a1, a2, v7, v3);
  v8 = *(_QWORD *)(a1 + 72);
  v9 = _mm_loadl_epi64((const __m128i *)&off_1C550A8);
  *(_QWORD *)a1 = &off_1C6CF28;
  *(_QWORD *)(a1 + 48) = off_1C6D210;
  *(__m128i *)(a1 + 32) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)off_1C6D1E8);
  sub_15F01E0(a1 + 112, v8);
  sub_1684300(a1 + 136, *(_QWORD *)(a1 + 72));
  v10 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 152) = v10;
  sub_180C5A0(v18, "seq");
  v11 = sub_15DA4C0(v10 + 560, v18);
  v12 = sub_15D2690(v10, v11);
  *(__m128 *)(a1 + 160) = _mm_loadh_ps((const double *)(v12 + 88));
  LODWORD(v12) = *(_DWORD *)(v12 + 16);
  v13 = _mm_loadh_ps((const double *)(a1 + 152));
  *(_QWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 176) = v12;
  *(_DWORD *)(a1 + 200) = v12;
  *(_DWORD *)(a1 + 224) = v12;
  v14 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 240) = v14;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = a1;
  *(__m128 *)(a1 + 184) = v13;
  *(__m128 *)(a1 + 208) = v13;
  *(_OWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 328) = sub_7E4EF0(a1);
  *(_QWORD *)(a1 + 360) = off_1C55018;
  v15 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 368) = a1 + 320;
  *(_QWORD *)(a1 + 376) = v15;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  result = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 416) = result;
  *(_QWORD *)(a1 + 424) = 8;
  *(_DWORD *)(a1 + 432) = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  *(_OWORD *)(a1 + 440) = 0;
  *(_OWORD *)(a1 + 456) = 0;
  return result;
}

