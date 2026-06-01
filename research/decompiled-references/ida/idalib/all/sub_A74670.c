unsigned __int64 __fastcall sub_A74670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __m128i v7[4]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v8; // [rsp+58h] [rbp-50h]

  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      return a2;
    v5 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
    if ( !v5 )
      return a2;
  }
  sub_A5E110((__m128 *)v7, v5);
  v8 = 0;
  return sub_A73610(a1, *(_QWORD *)(v5 + 24), (__int64 *)(v5 + 48), *(unsigned __int16 *)(v5 + 22), v7, 0);
}
