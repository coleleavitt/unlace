char __fastcall sub_7A0AA0(__m128i *a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rax
  unsigned int v4; // eax
  _QWORD *v5; // rdi
  _BYTE *v6; // rax

  if ( a1[1].m128i_i64[0] )
  {
    *(_QWORD *)(a1[1].m128i_i64[1] + 8) = a2 | *(_QWORD *)(a1[1].m128i_i64[1] + 8) & 7LL;
    a1[1].m128i_i64[1] = a2;
  }
  else
  {
    a1[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  }
  if ( (a1->m128i_i8[8] & 0x7Fu) - 57 <= 2 )
    sub_7AF7A0(&a1[-4], a2);
  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( *(char *)(a2 + 29) >= 0 && v2 == 80 )
  {
    v3 = sub_793320(a2);
    sub_6BF020(*(_QWORD *)(v3 + 88), a2);
    v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  v4 = v2 - 16;
  if ( v4 <= 0x3E )
  {
    v5 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v5 = (_QWORD *)*v5;
    v6 = (_BYTE *)sub_79CC40((__int64)v5);
    LOBYTE(v4) = sub_7A07F0(v6, a2, 0, 1u);
  }
  return v4;
}

