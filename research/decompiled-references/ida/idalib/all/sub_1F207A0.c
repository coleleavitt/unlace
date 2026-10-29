unsigned __int64 __fastcall sub_1F207A0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  switch ( *(_BYTE *)(a2 + 28) & 0x7F )
  {
    case 0:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
      result = *(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL;
      *(_DWORD *)(result + 8) = 0;
      break;
    case 0x13:
    case 0x14:
      result = *(_QWORD *)(a2 + 88) & 0xFFFFFFFFFFFFFFF8LL;
      *(_DWORD *)(result + 8) = 0;
      break;
    case 0x18:
      result = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      *(_DWORD *)(result + 8) = 0;
      break;
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      result = *(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL;
      *(_DWORD *)(result + 8) = 0;
      break;
    case 0x35:
    case 0x36:
    case 0x4D:
      result = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF8LL;
      *(_DWORD *)(result + 8) = 0;
      break;
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
      result = *(_QWORD *)(a2 + 96) & 0xFFFFFFFFFFFFFFF8LL;
      *(_DWORD *)(result + 8) = 0;
      break;
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
      result = *(_QWORD *)(a2 + 64) & 0xFFFFFFFFFFFFFFF8LL;
      *(_DWORD *)(result + 8) = 0;
      break;
    default:
      result = *(_BYTE *)(a2 + 28) & 0x7F;
      break;
  }
  return result;
}
