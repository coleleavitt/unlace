__int64 __fastcall sub_805FC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int8 v5; // al
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = a2;
  v3 = sub_B07C80(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v3 && (*(_QWORD *)(v3 + 24) & 0xFFFFFFFFFFFFFFF8LL) <= 0xF && (*(_BYTE *)(v3 + 17) & 4) == 0 )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 48);
  v4 = sub_798D40(a2);
  v5 = sub_76BFA0(a1, v4);
  *(_BYTE *)(a1 + 1) = (v5 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v5 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

