unsigned __int64 __fastcall sub_4A4CC0(__m128i *a1, __int64 a2, const __m128i *a3)
{
  const __m128i *v3; // rsi
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 i; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v14; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v15; // [rsp+8h] [rbp-E0h]
  __int64 v16; // [rsp+20h] [rbp-C8h]
  __m128i v17[2]; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-98h]
  _BYTE v19[16]; // [rsp+58h] [rbp-90h] BYREF
  __m128i v20; // [rsp+68h] [rbp-80h] BYREF
  __int64 v21; // [rsp+80h] [rbp-68h] BYREF
  __m128i v22; // [rsp+88h] [rbp-60h] BYREF
  __m128i v23; // [rsp+98h] [rbp-50h]
  unsigned __int64 v24; // [rsp+A8h] [rbp-40h]

  v3 = (const __m128i *)(a2 + 8);
  v4 = _mm_loadu_si128(a3);
  v5 = a3[1].m128i_i64[0];
  v24 = __readfsqword(0x28u);
  a3[1].m128i_i64[0] = 0;
  *a1 = v4;
  *a3 = 0;
  a1[1].m128i_i64[0] = v5;
  a1[1].m128i_i64[1] = v3[-1].m128i_i64[1];
  sub_49EAB0((__int64)a1[2].m128i_i64, v3);
  v16 = a1[1].m128i_i64[1];
  sub_49EAB0((__int64)v17, a1 + 2);
  v6 = a1->m128i_i64[1];
  v7 = a1->m128i_i64[0];
  v21 = v16;
  sub_49EAB0((__int64)&v22, v17);
  v18 = v21;
  sub_49EAB0((__int64)v19, &v22);
  if ( v23.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
  v8 = v6 - v7;
  if ( v8 > 16 )
  {
    v9 = v8 >> 4;
    for ( i = (v9 - 2) / 2; ; --i )
    {
      v11 = *(_QWORD *)(v7 + 16 * i);
      v12 = *(_QWORD *)(v7 + 16 * i + 8);
      v23 = 0u;
      v22 = 0;
      v21 = v18;
      if ( v20.m128i_i64[0] )
      {
        v15 = v12;
        v14 = v11;
        ((void (__fastcall *)(__m128i *, _BYTE *, __int64))v20.m128i_i64[0])(&v22, v19, 2);
        v12 = v15;
        v11 = v14;
        v23 = _mm_loadu_si128(&v20);
      }
      sub_4A4A50(v7, i, v9, v11, v12, (__int64)&v21);
      if ( v23.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
      if ( !i )
        break;
    }
  }
  if ( v20.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v20.m128i_i64[0])(v19, v19, 3);
  sub_377BA0((__int64)v17);
  return v24 - __readfsqword(0x28u);
}
