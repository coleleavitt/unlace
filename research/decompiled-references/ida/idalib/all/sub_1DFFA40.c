unsigned __int64 __fastcall sub_1DFFA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __m128i v12[10]; // [rsp+0h] [rbp-A8h] BYREF

  v5 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v5;
  if ( *(_BYTE *)(*v5 + 16) != 26 )
    v6 = sub_F63050(*v5, a2, a3, a4);
  v7 = (__int64 *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *v7;
  if ( *(_BYTE *)(*v7 + 16) != 26 )
    v8 = sub_F63050(*v7, a2, a3, a4);
  if ( *(_WORD *)(v6 + 20) >> 2 == *(_WORD *)(v8 + 20) >> 2 )
    return *(_QWORD *)a3;
  sub_A5E110((__m128 *)v12, v8);
  v10 = *(unsigned __int16 *)(v8 + 22);
  v11 = *(_QWORD *)(v8 + 24);
  v12[0].m128i_i16[0] = *(_WORD *)(v6 + 20) >> 2;
  return sub_A73610(a1, v11, (__int64 *)(v8 + 48), v10, v12, 0);
}
