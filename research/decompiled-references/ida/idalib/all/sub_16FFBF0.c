char __fastcall sub_16FFBF0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // dl
  __int64 v3; // rax
  __int16 v4; // dx
  char result; // al

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v2 - 53 <= 1 || ((v2 + 52) & 0x7Fu) <= 1 )
    a2 = sub_B72ED0(a2);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 232LL);
  if ( (*(_BYTE *)(v3 + 1) & 8) != 0 )
  {
    v4 = 2106;
    return (unsigned __int16)(*(_WORD *)(a2 + 30) & v4) != 0;
  }
  if ( (*(_BYTE *)(v3 + 2) & 4) == 0 || (result = 1, (*(_BYTE *)(a2 + 28) & 0x7F) != 0x32) )
  {
    v4 = 2080;
    return (unsigned __int16)(*(_WORD *)(a2 + 30) & v4) != 0;
  }
  return result;
}
