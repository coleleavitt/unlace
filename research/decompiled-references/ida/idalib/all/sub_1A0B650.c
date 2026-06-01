__int64 __fastcall sub_1A0B650(_DWORD *a1, unsigned __int64 a2, double a3)
{
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0:
    case 0x14:
      result = *(unsigned int *)(sub_1A0B620((__int64)a1) + 24);
      break;
    case 1:
    case 2:
    case 6:
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
    case 0x13:
    case 0x15:
      result = sub_EEB7E0(a2, a2, a3);
      break;
    case 3:
    case 4:
    case 5:
      result = (unsigned int)a1[8];
      break;
    case 0x10:
      result = (unsigned int)a1[10];
      break;
  }
  return result;
}
