__int64 __fastcall sub_486570(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 1LL:
      result = *(_BYTE *)(a1 + 120) >> 7;
      break;
    case 2LL:
      result = *(_BYTE *)(a1 + 121) & 1;
      break;
    case 3LL:
      result = (*(_BYTE *)(a1 + 120) & 0x10) != 0;
      break;
    case 4LL:
      result = (*(_BYTE *)(a1 + 120) & 0x20) != 0;
      break;
    case 5LL:
      result = (*(_BYTE *)(a1 + 120) & 0x40) != 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
