__int64 __fastcall sub_7DBD80(__m128i *a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // r13
  unsigned int v4; // r13d
  __int64 v5; // r13
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  _OWORD *v16; // rax
  __int64 v17; // rax
  __int64 result; // rax
  _BYTE v19[64]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v2 == sub_79EFD0 )
    v3 = a2[18];
  else
    v3 = v2((__int64)a2);
  sub_180C5A0(v19, "recfun");
  v4 = sub_15DA4C0(v3 + 560, v19);
  sub_180C5A0(v19, "recfun");
  sub_7E4DF0(a1, a2, v19, v4);
  v5 = a1[4].m128i_i64[1];
  v6 = _mm_loadl_epi64((const __m128i *)&off_1C54A78);
  a1->m128i_i64[0] = (__int64)&off_1C6BB90;
  a1[3].m128i_i64[0] = (__int64)off_1C6BE68;
  v7 = *a2;
  a1[2] = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)off_1C6BE40);
  v8 = *(__int64 (__fastcall **)(__int64))(v7 + 424);
  if ( v8 == sub_79EFD0 )
    v9 = a2[18];
  else
    v9 = v8((__int64)a2);
  sub_180C5A0(v19, "recfun");
  v10 = (unsigned int)sub_15DA4C0(v9 + 560, v19);
  v11 = sub_15D2690(v5, v10);
  a1[7].m128i_i64[0] = v11;
  a1[7].m128i_i64[1] = sub_162A780(v11, v10, v12, v13, v14);
  v15 = a1[4].m128i_i64[1];
  a1[8].m128i_i64[0] = 0;
  a1[8].m128i_i32[2] = 0;
  a1[9].m128i_i64[0] = v15;
  a1[9].m128i_i64[1] = 0;
  a1[10].m128i_i64[0] = v15;
  a1[10].m128i_i64[1] = 0;
  v16 = (_OWORD *)sub_186B270(0x80u);
  a1[11].m128i_i64[0] = (__int64)v16;
  a1[12].m128i_i32[0] = 0;
  a1[11].m128i_i64[1] = 8;
  *v16 = 0;
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = 0;
  v16[4] = 0;
  v16[5] = 0;
  v16[6] = 0;
  v16[7] = 0;
  v17 = sub_186B270(0x80u);
  *(_QWORD *)v17 = 0;
  *(_DWORD *)(v17 + 8) = 0;
  *(_QWORD *)(v17 + 16) = 0;
  *(_DWORD *)(v17 + 24) = 0;
  *(_QWORD *)(v17 + 32) = 0;
  *(_DWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 48) = 0;
  *(_DWORD *)(v17 + 56) = 0;
  *(_QWORD *)(v17 + 64) = 0;
  *(_DWORD *)(v17 + 72) = 0;
  *(_QWORD *)(v17 + 80) = 0;
  *(_DWORD *)(v17 + 88) = 0;
  *(_QWORD *)(v17 + 96) = 0;
  *(_DWORD *)(v17 + 104) = 0;
  *(_QWORD *)(v17 + 112) = 0;
  *(_DWORD *)(v17 + 120) = 0;
  a1[12].m128i_i64[1] = v17;
  result = a1[4].m128i_i64[1];
  a1[13].m128i_i64[0] = 8;
  a1[13].m128i_i32[2] = 0;
  a1[14].m128i_i64[0] = result;
  a1[14].m128i_i64[1] = 0;
  a1[15].m128i_i64[0] = 0;
  a1[15].m128i_i32[2] = 0;
  a1[16].m128i_i64[0] = 0;
  a1[16].m128i_i32[2] = 0;
  return result;
}

