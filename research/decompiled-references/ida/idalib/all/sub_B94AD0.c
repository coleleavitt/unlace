char __fastcall sub_B94AD0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // rdi
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v14; // [rsp+8h] [rbp-10h] BYREF

  if ( a1[1].m128i_i64[0] )
  {
    a3 = a1[1].m128i_i64[1];
    *(_QWORD *)(a3 + 8) = a2 | *(_QWORD *)(a3 + 8) & 7LL;
    a1[1].m128i_i64[1] = a2;
  }
  else
  {
    v14.m128i_i64[0] = a2;
    v12 = _mm_loadl_epi64(&v14);
    a1[1] = _mm_unpacklo_epi64(v12, v12);
  }
  if ( (a1->m128i_i8[8] & 0x7Fu) - 59 <= 2 )
  {
    v6 = a1 - 4;
    if ( v6 )
      sub_BA1B60(v6, a2);
  }
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( *(char *)(a2 + 29) >= 0 && v7 == 83 )
  {
    v8 = sub_B8C2C0(a2);
    sub_A62CD0(*(_QWORD *)(v8 + 88), a2);
    v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  v9 = v7 - 18;
  if ( v9 <= 0x3F )
  {
    v10 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v10 = (_QWORD *)*v10;
    v11 = sub_B91570((__int64)v10, a2, a3, a4, a5, a6);
    LOBYTE(v9) = sub_B94840(v11, a2, 0, 1u);
  }
  return v9;
}
