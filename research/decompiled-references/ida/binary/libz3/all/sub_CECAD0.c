__int64 __fastcall sub_CECAD0(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  _OWORD *v4; // rax
  __m128 *v5; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // r14

  v2 = sub_186B270(0x38u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = off_1C59CD8;
  sub_1858590(v2 + 40, a2);
  *(_QWORD *)(v2 + 48) = a1;
  v3 = sub_186B270(0x20u);
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)v3 = v4;
  *(_QWORD *)(v3 + 8) = 8;
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 24) = a1;
  *(_QWORD *)(v2 + 32) = v3;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = (__m128 *)sub_186B270(0x10u);
  *(_QWORD *)(v2 + 16) = v5;
  *v5 = _mm_loadh_ps((const double *)(v2 + 32));
  v6 = sub_186B270(0x228u);
  v7 = *(_QWORD *)(v2 + 32);
  sub_CED450(v6, a1, *(_DWORD *)(a1 + 712) != 0, v6 + 536);
  *(_QWORD *)(v2 + 24) = v6;
  *(_QWORD *)v6 = &off_1C59CB8;
  *(__m128i *)(v6 + 536) = _mm_unpacklo_epi64((__m128i)a1, (__m128i)v7);
  return v2;
}

