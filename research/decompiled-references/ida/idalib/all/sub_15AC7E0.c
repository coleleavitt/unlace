__int64 __fastcall sub_15AC7E0(__int64 a1)
{
  __int64 result; // rax

  result = (*(_BYTE *)a1 & 0x1F) != 0;
  if ( (*(_BYTE *)(a1 + 3) & 0x7C) != 0 )
    result = ((*(_BYTE *)a1 & 0x1F) != 0) | 4u;
  if ( (*(_DWORD *)a1 & 0x7F000) != 0
    || *(_BYTE *)a1 >> 6
    || (*(_BYTE *)(a1 + 1) & 3) != 0
    || (*(_BYTE *)(a1 + 1) & 0xC) != 0 )
  {
    result = (unsigned int)result | 2;
  }
  if ( (*(_QWORD *)a1 & 0x280000000LL) != 0 || *(_QWORD *)(a1 + 24) || (*(_BYTE *)(a1 + 4) & 5) != 0 )
    return (unsigned int)result | 8;
  return result;
}
