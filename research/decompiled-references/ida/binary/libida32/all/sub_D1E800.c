__int64 __fastcall sub_D1E800(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rsi
  __m128i v6; // rax
  __m128i *v7; // rax
  bool v8; // cc
  __m128i v9; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v10[4]; // [rsp+10h] [rbp-68h] BYREF
  void *v11; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v5 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a3;
  sub_CE7240((__int64)&v11, v5);
  v6.m128i_i64[0] = sub_D1E4A0((_QWORD *)(a1 + 384), a2);
  v9 = v6;
  sub_21D2F70(v10, &v11, a2);
  sub_CDAFD0((__int64)&v9, v10);
  sub_971860(v10);
  v7 = (__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16);
  v8 = v12 <= 0x40;
  *v7 = _mm_load_si128(&v9);
  if ( !v8 )
  {
    if ( v11 )
      operator delete[](v11);
  }
  return 1;
}

