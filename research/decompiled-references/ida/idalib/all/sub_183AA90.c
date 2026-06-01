__int64 __fastcall sub_183AA90(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // dl

  if ( !*(_DWORD *)(a1 + 24) )
    return 0;
  result = **(_QWORD **)(a1 + 16);
  if ( result )
  {
    v2 = *(_BYTE *)(result + 28) & 0x7F;
    if ( ((v2 + 52) & 0x7Fu) <= 1 || (unsigned int)v2 - 53 <= 1 )
      return sub_B72ED0(**(_QWORD **)(a1 + 16));
  }
  return result;
}
