__int64 __fastcall sub_8062E0(__int64 a1, double *a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // r13
  int v5; // r13d
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 424LL);
  if ( v3 == sub_79EFD0 )
    v4 = *((_QWORD *)a2 + 18);
  else
    v4 = v3((__int64)a2);
  sub_180C5A0(v12, "bv");
  v5 = sub_15D1320(v4 + 560, v12);
  sub_180C5A0(v12, "intblast");
  sub_7E4DF0(a1, a2, v12, v5);
  v6 = _mm_loadl_epi64((const __m128i *)&off_1C54E08);
  *(_QWORD *)a1 = &off_1C6CA88;
  *(_QWORD *)(a1 + 48) = off_1C6CD70;
  v7 = *(_QWORD *)a2;
  *(__m128i *)(a1 + 32) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)off_1C6CD48);
  *(__m128 *)(a1 + 112) = _mm_loadh_ps(a2 + 3);
  v8 = *(__int64 (__fastcall **)(__int64))(v7 + 424);
  if ( v8 == sub_79EFD0 )
    v9 = *((_QWORD *)a2 + 18);
  else
    v9 = v8((__int64)a2);
  *(_QWORD *)(a1 + 128) = v9;
  sub_16744A0(a1 + 136, v9);
  sub_16669D0(a1 + 160, *(_QWORD *)(a1 + 128));
  *(_QWORD *)(a1 + 184) = a2;
  v10 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 176) = off_1C54DB8;
  result = sub_14C29C0(a1 + 192, v10, a1 + 176);
  *(_BYTE *)(a1 + 408) = 1;
  *(_QWORD *)(a1 + 412) = 0;
  *(_OWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  return result;
}

