__int64 __fastcall sub_90E680(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  const __m128i *v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int v10; // ebx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // [rsp+0h] [rbp-88h] BYREF
  __int64 v16; // [rsp+10h] [rbp-78h]
  _QWORD v17[4]; // [rsp+20h] [rbp-68h] BYREF
  int v18; // [rsp+40h] [rbp-48h]
  int v19; // [rsp+50h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = (const __m128i *)sub_A1A5A0(v4, 24);
  v6 = _mm_loadu_si128(v5);
  v7 = v5[1].m128i_i64[0];
  v15 = v6;
  v16 = v7;
  sub_A1A5E0(v4, 24);
  v8 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !(unsigned __int8)sub_9D4FE0(a1, a2, v8, 2) || !(unsigned __int8)sub_9D7120(a1, a2, v8, 2) )
    return 0;
  sub_A1C030(v17, *(_QWORD *)(v8 + 24), (unsigned int)(a3 + *(_DWORD *)v8), (unsigned int)(a3 + *(_DWORD *)v8));
  v10 = sub_9E26A0(a1, a2, v17);
  if ( (_BYTE)v10 )
  {
    sub_A1DB00(v17);
    v11 = v17[3];
    v12 = v17[0];
    if ( !v19 && *(_BYTE *)(sub_8E5480((__int64)v17) + 51) && v12 == v18 )
      v13 = v11 + v12 + 72;
    else
      v13 = v11 + v12 + 40;
    v14 = _mm_load_si128(&v15);
    *(_BYTE *)(v13 + 16) = v16;
    *(__m128i *)v13 = v14;
    sub_A1C0C0(v17);
  }
  else
  {
    sub_A1C0C0(v17);
  }
  return v10;
}

