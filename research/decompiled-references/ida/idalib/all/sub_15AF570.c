__int64 __fastcall sub_15AF570(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a1 + 3) & 0x83 | (4 * ((a2 | (*(_BYTE *)(a1 + 3) >> 2)) & 0x1F));
  switch ( a2 )
  {
    case 0:
    case 3:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      *(_DWORD *)(a1 + 232) = a3;
      result = 0;
      break;
    case 1:
      *(_DWORD *)(a1 + 220) = a3;
      result = 0;
      break;
    case 2:
      *(_DWORD *)(a1 + 224) = a3;
      result = 0;
      break;
    case 4:
      *(_DWORD *)(a1 + 228) = a3;
      result = 0;
      break;
    case 8:
      *(_DWORD *)(a1 + 236) = a3;
      result = 0;
      break;
  }
  return result;
}
