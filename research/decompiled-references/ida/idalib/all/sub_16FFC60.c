__int64 __fastcall sub_16FFC60(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // dl
  __int64 result; // rax
  int v4; // edx
  int v5; // eax
  unsigned int v6; // edx

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v2 - 53 <= 1 || ((v2 + 52) & 0x7Fu) <= 1 )
    a2 = sub_B72ED0(a2);
  result = 0;
  if ( (((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 232LL) + 1LL) & 8) == 0 ? 2080 : 2098)
      & *(_WORD *)(a2 + 30)
      & 0x3FFF) != 0 )
  {
    v4 = *(_BYTE *)(a2 + 28) & 0x7F;
    v5 = v4 + 57;
    LOBYTE(v5) = (((_BYTE)v4 + 57) & 0x7B) != 0;
    v6 = (unsigned __int8)v4 - 26;
    LOBYTE(v6) = v6 > 0x1A;
    return v6 & v5;
  }
  return result;
}
