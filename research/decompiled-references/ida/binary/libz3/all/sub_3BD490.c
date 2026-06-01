__int64 __fastcall sub_3BD490(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __m128i v7; // xmm1
  _OWORD *v8; // rax
  __int64 v9; // rsi
  _OWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rsi
  unsigned __int64 v16; // r12
  _OWORD *v17; // rax
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v22[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = *a2;
  *a1 = qword_1C65108;
  a1[1] = v3;
  sub_3BCB70(a1 + 2, "tabulation");
  *a1 = &off_1C4E480;
  v4 = sub_186B270(0xC18u);
  v5 = *a2;
  v6 = v4;
  v7 = (__m128i)(unsigned __int64)*a2;
  *(__m128i *)v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, v7);
  *(_QWORD *)(v4 + 32) = v5;
  *(_QWORD *)(v4 + 56) = v5;
  *(_QWORD *)(v4 + 64) = 0;
  *(_QWORD *)(v4 + 72) = v5;
  *(_QWORD *)(v4 + 80) = v5;
  *(_QWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = v5;
  *(_QWORD *)(v4 + 120) = 0;
  *(__m128i *)(v4 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a2 + 82), v7);
  *(_OWORD *)(v4 + 40) = 0;
  sub_15F01E0(v4 + 128, v5);
  *(_QWORD *)(v6 + 152) = v5;
  *(_QWORD *)(v6 + 160) = 0;
  v8 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v6 + 168) = v8;
  *(_DWORD *)(v6 + 184) = 0;
  *(_QWORD *)(v6 + 176) = 8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  sub_FA3A80(v6 + 192, v5);
  v22[0] = 0;
  sub_E66730(v6 + 320, v5, v22, 1);
  sub_18572D0(v22);
  *(_QWORD *)(v6 + 328) = 0;
  v22[0] = 0;
  sub_39A6C0(v6 + 336, v5, (__int64)v22);
  sub_18572D0(v22);
  v22[0] = 0;
  sub_2527E0(v6 + 552, (__int64)v22);
  sub_18572D0(v22);
  v22[0] = 0;
  sub_8E4C30(v6 + 1312, v5, v6 + 552, v22);
  sub_18572D0(v22);
  v9 = *a2;
  *(_QWORD *)(v6 + 1320) = *a2;
  sub_15F01E0(v6 + 1328, v9);
  v10 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v6 + 1352) = v10;
  *(_QWORD *)(v6 + 1360) = 8;
  *(_DWORD *)(v6 + 1368) = 0;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  *(_OWORD *)(v6 + 1376) = 0;
  v11 = (_QWORD *)sub_186B270(0x80u);
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  v11[8] = 0;
  v11[9] = 0;
  v11[10] = 0;
  v11[11] = 0;
  v11[12] = 0;
  v11[13] = 0;
  v11[14] = 0;
  v11[15] = 0;
  *(_QWORD *)(v6 + 1400) = v11;
  v12 = *(_QWORD *)(v6 + 1320);
  *(_QWORD *)(v6 + 1408) = 8;
  *(_QWORD *)(v6 + 1424) = v12;
  *(_DWORD *)(v6 + 1416) = 0;
  *(_QWORD *)(v6 + 1440) = 0x3FF0000000000000LL;
  *(_QWORD *)(v6 + 1432) = 0;
  *(_QWORD *)(v6 + 1448) = 0x1400000014LL;
  v13 = sub_64B2C0(a2);
  sub_180C5A0(&v21, "weight");
  if ( v21 == v13 )
    *(_DWORD *)(v6 + 1392) = 0;
  sub_180C5A0(&v20, "basic-weight");
  if ( v20 == v13 )
  {
    v14 = 1;
  }
  else
  {
    sub_180C5A0(&v19, "first");
    if ( v19 == v13 )
    {
      v14 = 2;
    }
    else
    {
      sub_180C5A0(v22, "var-use");
      v14 = 3 * (v22[0] == v13);
    }
  }
  *(_DWORD *)(v6 + 1392) = v14;
  v22[0] = 0;
  sub_2527E0(v6 + 1456, (__int64)v22);
  sub_18572D0(v22);
  v15 = *(_QWORD *)(v6 + 8);
  v22[0] = 0;
  sub_8E4C30(v6 + 2216, v15, v6 + 1456, v22);
  sub_18572D0(v22);
  v16 = *(_QWORD *)(v6 + 8);
  *(_BYTE *)(v6 + 2288) = 0;
  *(_DWORD *)(v6 + 2264) = 1;
  *(_QWORD *)(v6 + 2272) = 0;
  *(_DWORD *)(v6 + 2280) = 1;
  *(__m128i *)(v6 + 2224) = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  *(_OWORD *)(v6 + 2248) = 0;
  sub_FA3A80(v6 + 2296, v16);
  sub_633760(v6 + 2424, v16, 0, v6 + 2960);
  *(_BYTE *)(v6 + 2968) = 0;
  *(_QWORD *)(v6 + 2424) = &off_1C4CA80;
  *(_QWORD *)(v6 + 2976) = v16;
  *(_QWORD *)(v6 + 2984) = 0;
  *(_QWORD *)(v6 + 2992) = v16;
  *(_QWORD *)(v6 + 3000) = 0;
  *(_QWORD *)(v6 + 3008) = v16;
  *(_QWORD *)(v6 + 3016) = 0;
  *(_QWORD *)(v6 + 3024) = 0;
  v17 = (_OWORD *)sub_186B270(0x80u);
  a1[6] = v6;
  *(_QWORD *)(v6 + 3032) = v17;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  *(_QWORD *)(v6 + 3040) = 8;
  *(_DWORD *)(v6 + 3048) = 0;
  *(_QWORD *)(v6 + 3056) = 0;
  *(_QWORD *)(v6 + 3064) = 0x100000000LL;
  *(_DWORD *)(v6 + 3072) = 0;
  *(_QWORD *)(v6 + 3076) = 0;
  *(_DWORD *)(v6 + 3084) = 0;
  *(_QWORD *)(v6 + 3088) = 0;
  *(_BYTE *)(v6 + 1671) = 0;
  return 0x100000000LL;
}

