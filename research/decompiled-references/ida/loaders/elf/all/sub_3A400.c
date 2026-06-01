unsigned __int64 __fastcall sub_3A400(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  result = (unsigned __int8)v2;
  if ( *(_BYTE *)(a1 + 617) )
  {
    if ( !*(_BYTE *)(a1 + 616) && *(_WORD *)(a1 + 522) == 8 )
      return (HIDWORD(v2) >> 8) & 0xFF00 | (HIDWORD(v2) << 24) | HIBYTE(v2) | (HIDWORD(v2) << 8) & 0xFF0000;
    else
      return (unsigned int)v2;
  }
  return result;
}

