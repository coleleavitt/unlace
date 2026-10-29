_QWORD *__fastcall sub_EADB70(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *result; // rax
  __int64 v5; // rax

  switch ( *(_BYTE *)(a2 + 8) )
  {
    case 0:
    case 1:
    case 4:
    case 5:
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
    case 0x10:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x22:
    case 0x23:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
      v2 = *(_QWORD *)(a2 + 24);
      v3 = *(_QWORD *)(a2 + 32);
      a1[1] = 0;
      a1[4] = 0;
      *a1 = v2;
      a1[3] = v2 + 8 * v3;
      goto LABEL_3;
    case 0x1F:
      if ( !*(_QWORD *)(a2 + 24) )
        goto LABEL_4;
      a1[1] = 0;
      *a1 = a2 + 24;
      a1[3] = a2 + 32;
      a1[4] = 0;
LABEL_3:
      result = a1;
      break;
    case 0x2A:
      v5 = *(unsigned int *)(a2 + 28);
      a1[1] = 0;
      a1[4] = 0;
      *a1 = a2 + 32;
      a1[3] = a2 + 8 * v5 + 32;
      goto LABEL_3;
    default:
LABEL_4:
      *a1 = 0;
      a1[1] = 0;
      a1[2] = 0;
      a1[3] = 0;
      a1[4] = 0;
      a1[5] = 0;
      result = a1;
      break;
  }
  return result;
}
