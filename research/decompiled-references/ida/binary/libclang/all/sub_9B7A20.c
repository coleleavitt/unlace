__int64 __fastcall sub_9B7A20(__int64 a1, int a2)
{
  __int64 v2; // r12
  const __m128i *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i v11; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+10h] [rbp-68h]
  _QWORD v13[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h]
  unsigned int v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+50h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (const __m128i *)sub_A1A5A0(v2, 24);
  v4 = _mm_loadu_si128(v3);
  v5 = v3[1].m128i_i64[0];
  v11 = v4;
  v12 = v5;
  sub_A1A5E0(v2, 24);
  v6 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_A1C030(v13, *(_QWORD *)(v6 + 24), (unsigned int)(*(_DWORD *)v6 + a2), (unsigned int)(*(_DWORD *)v6 + a2));
  if ( v16 )
    goto LABEL_6;
  v7 = *(_QWORD *)(v14 + 32);
  if ( *(_DWORD *)(v7 + 16) != v15 && v15 )
    v7 = *(_QWORD *)(v14 + v15 + 32);
  if ( !*(_BYTE *)(v7 + 51) || (v8 = v14 + v13[0] + 72, v15 != v13[0]) )
LABEL_6:
    v8 = v14 + v13[0] + 40;
  v9 = _mm_load_si128(&v11);
  *(_BYTE *)(v8 + 16) = v12;
  *(__m128i *)v8 = v9;
  sub_A1C490(v13);
  sub_A1DB00(v13);
  return sub_A1C0C0(v13);
}

