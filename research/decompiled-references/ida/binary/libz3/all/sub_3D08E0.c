__int64 __fastcall sub_3D08E0(__int64 a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  _OWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 result; // rax

  v2 = _mm_loadl_epi64(a2);
  strcpy((char *)(a1 + 32), "spacer");
  *(_QWORD *)(a1 + 24) = 6;
  *(_QWORD *)a1 = &off_1C4E620;
  *(_QWORD *)(a1 + 48) = a2;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)(a1 + 32));
  sub_63D370(a1 + 56, a2);
  sub_63D370(a1 + 304, a2);
  *(_QWORD *)(a1 + 552) = 0;
  v3 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 560) = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v4 = a2->m128i_i64[0];
  *(_QWORD *)(a1 + 568) = 8;
  *(_DWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = v4;
  *(_QWORD *)(a1 + 592) = 0;
  v5 = sub_186B270(0x2C8u);
  result = sub_406480(v5, a2[2].m128i_i64[0], a2->m128i_i64[0], v6, v7, v8);
  *(_QWORD *)(a1 + 552) = v5;
  return result;
}

