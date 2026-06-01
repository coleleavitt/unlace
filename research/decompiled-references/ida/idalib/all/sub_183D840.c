unsigned __int64 __fastcall sub_183D840(__int64 a1, __int64 a2, const void *a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v5 = sub_B9A660(*(_QWORD **)(a1 + 248), *(_QWORD *)(a1 + 544), a2, a3, a4);
  v6 = *(_BYTE *)(a2 + 29) & 0x60;
  v7 = v6 | *(_BYTE *)(v5 + 29) & 0x9Fu;
  *(_BYTE *)(v5 + 29) = v6 | *(_BYTE *)(v5 + 29) & 0x9F;
  sub_B94AD0(*(__m128i **)(a1 + 544), v5, v7, v8, v9, v10);
  return v5;
}
