__int64 __fastcall sub_178D8A0(__int64 *a1, __int64 a2, unsigned __int32 a3, unsigned __int64 a4, __m128i a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  if ( !(unsigned __int8)sub_1789140((__int64)a1, a3, "co_await", 8)
    || !(unsigned __int8)sub_178C980((__int64)a1, a2, a3, "co_await", 8, a5) )
  {
    return 1;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 13 && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v10 = sub_1907C70(a1, a4);
    if ( v10 == 1 )
      return 1;
    a4 = v10 & 0xFFFFFFFFFFFFFFFELL;
  }
  v9 = sub_1783A50(a1, a2, a3);
  if ( v9 == 1 )
    return 1;
  return sub_178D010(a1, a3, a4, v9 & 0xFFFFFFFFFFFFFFFELL, a5);
}
