__int64 __fastcall sub_9B6CA0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  const __m128i *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v10; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  _QWORD v12[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  unsigned int v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-28h]

  sub_A1BF70(v12, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 184);
  v3 = (const __m128i *)sub_A1A5A0(v2, 24);
  v4 = _mm_loadu_si128(v3);
  v5 = v3[1].m128i_i64[0];
  v10 = v4;
  v11 = v5;
  sub_A1A5E0(v2, 24);
  if ( v15 )
    goto LABEL_6;
  v6 = *(_QWORD *)(v13 + 32);
  if ( *(_DWORD *)(v6 + 16) != v14 && v14 )
    v6 = *(_QWORD *)(v13 + v14 + 32);
  if ( !*(_BYTE *)(v6 + 51) || (v7 = v13 + v12[0] + 72, v14 != v12[0]) )
LABEL_6:
    v7 = v13 + v12[0] + 40;
  v8 = _mm_load_si128(&v10);
  *(_BYTE *)(v7 + 16) = v11;
  *(__m128i *)v7 = v8;
  sub_A1DB00(v12);
  return sub_A1C0C0(v12);
}

