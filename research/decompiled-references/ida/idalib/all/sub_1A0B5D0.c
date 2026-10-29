unsigned __int64 __fastcall sub_1A0B5D0(__int64 a1)
{
  unsigned __int64 result; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 2:
    case 6:
    case 0x14:
    case 0x15:
      result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
      break;
    case 1:
    case 0x13:
      result = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF8LL;
      if ( result )
        result = *(_QWORD *)(result + 40);
      break;
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x11:
    case 0x12:
      result = 0;
      break;
    case 0x10:
      result = *(_QWORD *)(a1 + 32);
      break;
  }
  return result;
}
