__int64 __fastcall sub_99A310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rdx

  v6 = sub_9996F0(*(__m128i **)(a1 + 8), a2, a3, a4, a5, a6);
  *(_BYTE *)(v6 + 104) |= 1u;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = v6;
  v11 = *(_QWORD *)(v9 + 8);
  v12 = (_QWORD *)(v9 + 32);
  v13 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF9LL;
  if ( *(_QWORD *)(a1 + 24) == v11 )
    v13 = 4;
  sub_999860(v6, v11, v13, v12, v7, v8);
  return v10;
}
