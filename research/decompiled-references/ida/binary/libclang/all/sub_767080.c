__int64 __fastcall sub_767080(__int64 a1)
{
  __int64 result; // rax

  switch ( *(_BYTE *)(a1 + 12) )
  {
    case 0:
    case 8:
    case 0xB:
    case 0xC:
      result = a1 + 40;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
      result = 0;
      break;
    case 6:
    case 7:
      result = *(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24);
      break;
    case 0xA:
      result = *(_QWORD *)(a1 + 64) + 8LL * *(_QWORD *)(a1 + 72);
      break;
  }
  return result;
}

