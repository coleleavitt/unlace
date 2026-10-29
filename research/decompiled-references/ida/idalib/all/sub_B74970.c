__int64 __fastcall sub_B74970(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rdi

  result = (8 * (a2 & 1)) | *(_BYTE *)(a1 + 82) & 0xF7u;
  *(_BYTE *)(a1 + 82) = (8 * (a2 & 1)) | *(_BYTE *)(a1 + 82) & 0xF7;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 4) != 0 )
      v4 = *(_QWORD *)v4;
    result = (*(_BYTE *)(v4 + 8) & 0x7Fu) - 59;
    if ( (unsigned int)result <= 2 && v4 != 64 )
      return sub_B9C2B0();
  }
  return result;
}
