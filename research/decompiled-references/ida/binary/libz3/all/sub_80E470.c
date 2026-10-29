__int64 __fastcall sub_80E470(__int64 a1, double *a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // r13
  int v6; // r13d
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = sub_186B270(0x1A8u);
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 424LL);
  if ( v4 == sub_79EFD0 )
    v5 = *((_QWORD *)a2 + 18);
  else
    v5 = v4((__int64)a2);
  sub_180C5A0(v13, "bv");
  v6 = sub_15D1320(v5 + 560, v13);
  sub_180C5A0(v13, "intblast");
  sub_7E4DF0(v3, a2, v13, v6);
  v7 = _mm_loadl_epi64((const __m128i *)&off_1C54E08);
  *(_QWORD *)v3 = &off_1C6CA88;
  *(_QWORD *)(v3 + 48) = off_1C6CD70;
  v8 = *(_QWORD *)a2;
  *(__m128i *)(v3 + 32) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)off_1C6CD48);
  *(__m128 *)(v3 + 112) = _mm_loadh_ps(a2 + 3);
  v9 = *(__int64 (__fastcall **)(__int64))(v8 + 424);
  if ( v9 == sub_79EFD0 )
    v10 = *((_QWORD *)a2 + 18);
  else
    v10 = v9((__int64)a2);
  *(_QWORD *)(v3 + 128) = v10;
  sub_16744A0(v3 + 136, v10);
  sub_16669D0(v3 + 160, *(_QWORD *)(v3 + 128));
  *(_QWORD *)(v3 + 184) = a2;
  v11 = *(_QWORD *)(v3 + 128);
  *(_QWORD *)(v3 + 176) = off_1C54DB8;
  sub_14C29C0(v3 + 192, v11, v3 + 176);
  *(_BYTE *)(v3 + 408) = 1;
  *(_QWORD *)(v3 + 412) = 0;
  *(_OWORD *)(v3 + 376) = 0;
  *(_OWORD *)(v3 + 392) = 0;
  return v3;
}

