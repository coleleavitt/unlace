unsigned __int64 __fastcall sub_6E8EE0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  int v4; // eax

  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
    return v2 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v4 - 62) <= 2 )
    return sub_6DE140(a1, a2, 0);
  if ( (unsigned int)(v4 - 56) <= 3 )
    return sub_6E8B00(a1, a2);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x3C )
    return sub_6E8C30(a1, a2);
  return sub_6C7D80(a1, a2);
}

