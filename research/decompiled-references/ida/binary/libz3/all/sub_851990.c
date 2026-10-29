__int64 __fastcall sub_851990(__m128i *a1, _QWORD *a2, int a3)
{
  int v3; // ecx
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rsi

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
  sub_7E4DF0((__int64)a1, a2, v7, v3);
  v8 = _mm_loadl_epi64((const __m128i *)&off_1C55438);
  a1[7].m128i_i32[2] = -1;
  a1->m128i_i64[0] = (__int64)&off_1C6D7B0;
  a1[3].m128i_i64[0] = (__int64)off_1C6DA98;
  v9 = a1[4].m128i_i64[1];
  a1[2] = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)off_1C6DA70);
  a1[7].m128i_i64[0] = v9;
  v10 = *(__int64 (__fastcall **)(__int64))(*a2 + 440LL);
  if ( v10 == sub_79F010 )
    v11 = (__int64)(a2 + 199);
  else
    v11 = v10((__int64)a2);
  v12 = sub_186B270(0x48u);
  v13 = *(__int64 (__fastcall **)(__int64))(*a2 + 440LL);
  if ( v13 == sub_79F010 )
    v14 = (__int64)(a2 + 199);
  else
    v14 = v13((__int64)a2);
  sub_13C3650(v12, v14);
  return sub_13D5970(v11, v12);
}

