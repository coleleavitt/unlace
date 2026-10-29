__int64 __fastcall sub_14C4C60(const __m128i *a1, unsigned int a2, __m128i a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = a1[6].m128i_i64[1];
  ++*(_BYTE *)(v3 + 4);
  v4 = sub_14BDA20((__int64)a1, 0, 0, 0, 0, nullptr, a3);
  --*(_BYTE *)(v3 + 4);
  if ( v4 != 1 )
    v4 = sub_19258C0(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2, 201, v4 & 0xFFFFFFFFFFFFFFFELL, 0);
  return sub_14BE680(a1, v4, 1, a3);
}
