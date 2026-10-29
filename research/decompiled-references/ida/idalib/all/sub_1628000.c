void __fastcall sub_1628000(_QWORD *a1, __int64 a2, const __m128i *a3)
{
  unsigned int v3; // eax
  __m128 *v4; // rcx
  _DWORD *v5; // r8
  __m128i *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v3 = a3[3].m128i_u16[4];
  if ( v3 <= 1 )
  {
    v4 = nullptr;
    v5 = nullptr;
  }
  else
  {
    v4 = (__m128 *)(a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
    if ( v3 == 2 )
      v5 = nullptr;
    else
      v5 = (_DWORD *)(a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
  }
  v6 = sub_1627AA0(a1, a3, (_DWORD *)(a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL), v4, v5);
  if ( v6 )
    sub_B8CC60(a2, (__int64)v6, v7, v8, v9, v10);
}
