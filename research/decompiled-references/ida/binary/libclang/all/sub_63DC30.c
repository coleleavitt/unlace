__int64 __fastcall sub_63DC30(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  char v4; // al

  result = sub_6B37C0(*a1);
  if ( !result )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 > 0x11 )
      return sub_6F4910(*a1, a2, 0);
    v3 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v3 )
      return sub_6F4910(*a1, a2, 0);
    v4 = *(_BYTE *)(v3 + 74);
    if ( (v4 & 4) == 0 )
      return sub_6F4910(*a1, a2, 0);
    if ( (v4 & 1) == 0 )
      return sub_6F4910(*a1, a2, 0);
    result = sub_6B37C0(*a1);
    if ( !result )
      return sub_6F4910(*a1, a2, 0);
  }
  return result;
}

