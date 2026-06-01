__int64 __fastcall sub_2123760(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      goto LABEL_3;
    case 4:
    case 7:
    case 8:
    case 9:
    case 10:
      result = *(_WORD *)(a1 + 12) & 0xFFF8 | 6u;
      *(_WORD *)(a1 + 12) = *(_WORD *)(a1 + 12) & 0xFFF8 | 6;
      break;
    case 5:
      a2 = 4;
LABEL_3:
      result = a2 | *(_WORD *)(a1 + 12) & 0xFFF8u;
      *(_WORD *)(a1 + 12) = a2 | *(_WORD *)(a1 + 12) & 0xFFF8;
      break;
    case 6:
      result = *(_WORD *)(a1 + 12) & 0xFFF8 | 5u;
      *(_WORD *)(a1 + 12) = *(_WORD *)(a1 + 12) & 0xFFF8 | 5;
      break;
  }
  return result;
}
