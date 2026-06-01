__int64 __fastcall sub_DD7970(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r12d
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbp
  const __m128i *v7; // rbp
  _QWORD v8[3]; // [rsp+0h] [rbp-58h] BYREF
  int v9; // [rsp+18h] [rbp-40h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  unsigned int v11; // [rsp+28h] [rbp-30h]

  sub_E1EE80(v8);
  v2 = sub_DCC160(a1, a2, (__int64)v8, 0);
  if ( (_BYTE)v2 )
  {
    v4 = *(_QWORD *)(a1 + 176);
    v5 = v10;
    v6 = v8[0];
    if ( !v9 && *(_BYTE *)(sub_CFDF60((__int64)v8) + 60) && v11 == v6 )
      v7 = (const __m128i *)(v5 + v11 + 72);
    else
      v7 = (const __m128i *)(v5 + v6 + 40);
    *(__m128i *)sub_E216C0(v4, 16) = _mm_loadu_si128(v7);
  }
  sub_E232A0(v8);
  return v2;
}
