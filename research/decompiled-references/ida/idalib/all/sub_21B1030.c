__int64 __fastcall sub_21B1030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  _QWORD *v8; // rbp
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  __m128i v16; // [rsp+10h] [rbp-38h]
  __m128i v17; // [rsp+20h] [rbp-28h]

  v15 = 0;
  v16 = _mm_loadu_si128((const __m128i *)&a7);
  v17 = _mm_loadu_si128((const __m128i *)&a8);
  v8 = (_QWORD *)operator new(0x2C8u);
  sub_21B05A0(
    (__int64)v8,
    &v15,
    v9,
    v10,
    v11,
    v12,
    v16.m128i_i64[0],
    v16.m128i_i64[1],
    v17.m128i_i64[0],
    v17.m128i_i64[1]);
  v13 = v15;
  if ( v15 )
  {
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v13;
    v15 = 0;
    sub_21A3140(v8);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = v8;
    *(_BYTE *)(a1 + 8) &= ~1u;
    return a1;
  }
}
