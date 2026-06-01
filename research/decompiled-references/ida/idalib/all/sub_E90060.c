__int64 __fastcall sub_E90060(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( ((*(__int64 *)(a1 + 8) >> 1) & 3) == 1 )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(result + 28) & 0x7F) != 0x18 )
      return 0;
  }
  return result;
}
