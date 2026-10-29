__int64 __fastcall sub_3CD360(__int64 a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  __m128 v6; // xmm0
  __int64 v7; // rsi
  __int64 result; // rax
  _QWORD v9[6]; // [rsp+0h] [rbp-30h] BYREF

  v2 = _mm_loadl_epi64(a2);
  *(_WORD *)(a1 + 32) = 27747;
  *(_BYTE *)(a1 + 34) = 112;
  *(_QWORD *)(a1 + 24) = 3;
  *(_BYTE *)(a1 + 35) = 0;
  *(_QWORD *)a1 = &off_1C4E550;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)(a1 + 32));
  v3 = sub_186B270(0x570u);
  v4 = v3 + 24;
  v5 = v3;
  v6 = _mm_loadh_ps((const double *)a2->m128i_i64);
  *(_QWORD *)(v3 + 16) = a2 + 41;
  *(__m128 *)v3 = v6;
  v9[0] = 0;
  sub_2527E0(v3 + 24, (__int64)v9);
  sub_18572D0(v9);
  v7 = *(_QWORD *)(v5 + 8);
  v9[0] = 0;
  sub_8E4C30(v5 + 784, v7, v4, v9);
  sub_18572D0(v9);
  sub_633760(v5 + 792, *(_QWORD *)(v5 + 8), 0, v5 + 1328);
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(v5 + 792) = &off_1C4CA80;
  result = *(_QWORD *)(v5 + 8);
  *(_BYTE *)(v5 + 1336) = 0;
  *(_QWORD *)(v5 + 1344) = result;
  *(_QWORD *)(v5 + 1352) = 0;
  *(_QWORD *)(v5 + 1360) = result;
  *(_QWORD *)(v5 + 1368) = 0;
  *(_QWORD *)(v5 + 1376) = 0;
  *(_DWORD *)(v5 + 1384) = 0;
  *(_BYTE *)(v5 + 239) = 0;
  return result;
}

