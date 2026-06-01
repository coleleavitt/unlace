void __fastcall sub_1627A20(__int64 *a1, __int64 a2, const __m128i *a3)
{
  _DWORD *v4; // rcx
  __m128i *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( (unsigned __int8)sub_15EAA10((__int64)a3, *a1, 1u) && (unsigned __int8)sub_15EB980((__int64)a3, *a1, 2u) )
  {
    v4 = nullptr;
    if ( a3[3].m128i_i16[4] > 1u )
      v4 = (_DWORD *)(a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
    v5 = sub_1626710(a1, a3, (_DWORD *)(a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL), v4);
    if ( v5 )
      sub_B8CC60(a2, (__int64)v5, v6, v7, v8, v9);
  }
}
