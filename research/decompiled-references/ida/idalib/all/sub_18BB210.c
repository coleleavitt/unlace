__int64 __fastcall sub_18BB210(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( v2 && (*(_BYTE *)(v2 + 28) & 0x7Fu) - 34 <= 5 )
    *(_BYTE *)(a1 + 24) |= sub_B7D7F0(v2);
  return 1;
}
