unsigned __int64 __fastcall sub_6E8F50(_QWORD *a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rax
  int v4; // eax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v1 = a1[176];
  if ( !v1 )
  {
    v5 = sub_6DE400(a1, a1[2372], nullptr, nullptr, nullptr, 0, 0);
    v6 = sub_6C94F0((__int64)a1, v5);
    v7 = sub_6BAD90(a1, v6, "id", 2u);
    a1[176] = v7;
    v1 = v7;
  }
  v2 = *(_QWORD *)(v1 + 48);
  if ( v2 )
    return v2 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_BYTE *)(v1 + 28) & 0x7F;
  if ( (unsigned int)(v4 - 62) <= 2 )
    return sub_6DE140((__int64)a1, v1, 0);
  if ( (unsigned int)(v4 - 56) <= 3 )
    return sub_6E8B00((__int64)a1, v1);
  if ( (*(_BYTE *)(v1 + 28) & 0x7F) == 0x3C )
    return sub_6E8C30((__int64)a1, v1);
  return sub_6C7D80((__int64)a1, v1);
}

