__m128i *__fastcall sub_851830(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // ecx
  __m128i *v4; // rbp
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rsi
  int v17; // [rsp+Ch] [rbp-2Ch]

  v2 = sub_186B270(0x80u);
  v3 = *(_DWORD *)(a1 + 12);
  v4 = (__m128i *)v2;
  v5 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v5 == sub_79EFD0 )
  {
    v6 = a2[18];
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 12);
    v6 = v5((__int64)a2);
    v3 = v17;
  }
  if ( v3 >= 0 && (v7 = *(_QWORD *)(v6 + 608)) != 0 && v3 < *(_DWORD *)(v7 - 4) )
    v8 = (__int64 *)(v7 + 8LL * v3);
  else
    v8 = (__int64 *)&qword_18D6CD0;
  sub_7E4DF0((__int64)v4, a2, v8, v3);
  v9 = _mm_loadl_epi64((const __m128i *)&off_1C55438);
  v4[7].m128i_i32[2] = -1;
  v4->m128i_i64[0] = (__int64)&off_1C6D7B0;
  v4[3].m128i_i64[0] = (__int64)off_1C6DA98;
  v10 = v4[4].m128i_i64[1];
  v4[2] = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)off_1C6DA70);
  v4[7].m128i_i64[0] = v10;
  v11 = *(__int64 (__fastcall **)(__int64))(*a2 + 440LL);
  if ( v11 == sub_79F010 )
    v12 = (__int64)(a2 + 199);
  else
    v12 = v11((__int64)a2);
  v13 = sub_186B270(0x48u);
  v14 = *(__int64 (__fastcall **)(__int64))(*a2 + 440LL);
  if ( v14 == sub_79F010 )
    v15 = (__int64)(a2 + 199);
  else
    v15 = v14((__int64)a2);
  sub_13C3650(v13, v15);
  sub_13D5970(v12, v13);
  return v4;
}

