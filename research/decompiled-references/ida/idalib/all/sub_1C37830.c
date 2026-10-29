__int64 __fastcall sub_1C37830(
        __int64 a1,
        int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  _QWORD *v12; // rsi
  __int64 result; // rax
  __m128i v14; // xmm2
  __int16 v15; // dx
  __m128i v16; // xmm3
  __int64 v17; // rdx
  __m128 v18; // xmm0
  __int64 v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+8h] [rbp-70h]
  __m128i v21; // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+20h] [rbp-58h]
  __m128i v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h]

  v12 = *(_QWORD **)(a1 + 248);
  v19 = a5;
  v21 = _mm_loadu_si128((const __m128i *)&a7);
  v22 = a8;
  result = sub_EEE9A0(64, v12, 8u);
  v14 = _mm_load_si128(&v21);
  v24 = v22;
  v15 = *(_WORD *)result;
  v23 = v14;
  v15 &= 0xFE00u;
  LOBYTE(v15) = v15 | 0xEF;
  *(_WORD *)result = v15;
  if ( unk_2CD7484 )
  {
    v20 = result;
    sub_EE9B50(239);
    result = v20;
  }
  v16 = _mm_load_si128(&v23);
  v17 = v24;
  v20 = a4;
  *(_DWORD *)(result + 8) = a2;
  *(_BYTE *)(result + 12) = a3;
  v18 = _mm_loadh_ps((const double *)&v19);
  *(__m128i *)(result + 32) = v16;
  *(__m128 *)(result + 16) = v18;
  *(_QWORD *)(result + 48) = v17;
  *(_QWORD *)(result + 56) = a6;
  return result;
}
