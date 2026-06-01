_QWORD *__fastcall sub_6844F0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *result; // rax

  switch ( (*(_BYTE *)(a3 + 28) + 111) & 0x7F )
  {
    case 0:
      sub_639C30(a1, a3, a4, *(_QWORD *)(a2 + 40));
      result = a1;
      break;
    case 1:
      sub_639C80((__int64)a1, a3, a4, *(_QWORD *)(a2 + 40));
      result = a1;
      break;
    case 5:
    case 0x3A:
      sub_639D90(a1, a3, a4, *(_QWORD *)(a2 + 40));
      result = a1;
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
      sub_639DE0(a1, a3, a4, *(_QWORD *)(a2 + 40));
      result = a1;
      break;
    case 0x1E:
    case 0x1F:
    case 0x20:
      sub_639E30(a1, a3, a4, *(_QWORD *)(a2 + 40));
      result = a1;
      break;
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
      sub_639CF0(a1, a3, a4, *(_QWORD *)(a2 + 40));
      result = a1;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
      sub_639D40(a1, a3, a4, *(_QWORD *)(a2 + 40));
      result = a1;
      break;
    default:
      clang_getNullCursor(a1);
      result = a1;
      break;
  }
  return result;
}

