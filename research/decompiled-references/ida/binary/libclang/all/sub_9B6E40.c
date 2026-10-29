__int64 __fastcall sub_9B6E40(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  const __m128i *v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  __m128i v10; // xmm0
  __int64 result; // rax
  __m128i v12; // [rsp+0h] [rbp-88h] BYREF
  __int64 v13; // [rsp+10h] [rbp-78h]
  _QWORD v14[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h]
  unsigned int v16; // [rsp+40h] [rbp-48h]
  int v17; // [rsp+50h] [rbp-38h]

  v4 = a3;
  v5 = (const __m128i *)sub_A1A5A0(a1, 24);
  v6 = _mm_loadu_si128(v5);
  v7 = v5[1].m128i_i64[0];
  v12 = v6;
  v13 = v7;
  sub_A1A5E0(a1, 24);
  sub_A176A0(v14, a2, (unsigned int)v4);
  if ( v17 )
    goto LABEL_6;
  v8 = *(_QWORD *)(v15 + 32);
  if ( *(_DWORD *)(v8 + 16) != v16 && v16 )
    v8 = *(_QWORD *)(v15 + v16 + 32);
  if ( !*(_BYTE *)(v8 + 51) || (v9 = v15 + v14[0] + 72, v16 != v14[0]) )
LABEL_6:
    v9 = v15 + v14[0] + 40;
  sub_A1C0C0(v14);
  v10 = _mm_load_si128(&v12);
  *(_BYTE *)(v9 + 16) = v13;
  *(__m128i *)v9 = v10;
  result = *(_QWORD *)(a2 + 176);
  *(_BYTE *)(result + v4 + 4) |= 2u;
  return result;
}

