__int64 __fastcall sub_7D080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rbp
  __int64 result; // rax
  __int128 v12; // [rsp+0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+10h] [rbp-48h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v12 = 0;
  v8 = (_QWORD *)operator new(0x18u);
  v8[1] = a5;
  *v8 = a2;
  v9 = _mm_loadl_epi64((const __m128i *)&off_163D18);
  v8[2] = a4;
  *(_QWORD *)&v12 = v8;
  v13 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)sub_7D1A0);
  v10 = sub_928E0(a1, a3, &v12, &loc_40000);
  if ( v13.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v13.m128i_i64[0])(&v12, &v12, 3);
  result = 1;
  if ( v10 == -1 )
  {
    if ( *(_QWORD *)(a4 + 8) <= 1u )
    {
      sub_978C0(0xFFFFFFFFLL);
      sub_17D80((char **)a4);
    }
    return 0;
  }
  return result;
}

