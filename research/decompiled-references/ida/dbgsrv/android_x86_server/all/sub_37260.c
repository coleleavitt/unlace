/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37260
// Address: 0x00037260

//----- (00037260) --------------------------------------------------------
const char *__cdecl sub_37260(int a1)
{
  const char *result; // eax

  result = "UNIX System V ABI";
  switch ( *(_BYTE *)(a1 + 391) )
  {
    case 0xFF:
      result = "Standalone (embedded) application";
      break;
    case 0:
      return result;
    case 1:
      result = "HP-UX operating system";
      break;
    case 2:
      result = "NetBSD";
      break;
    case 3:
      result = "GNU/Linux";
      break;
    case 4:
      result = "GNU/Hurd";
      break;
    case 6:
      result = "Solaris";
      break;
    case 7:
      result = "AIX";
      break;
    case 8:
      result = "IRIX";
      break;
    case 9:
      result = "FreeBSD";
      break;
    case 0xA:
      result = "TRU64 UNIX";
      break;
    case 0xB:
      result = "Novell Modesto";
      break;
    case 0xC:
      result = "OpenBSD";
      break;
    case 0xD:
      result = "OpenVMS";
      break;
    case 0xE:
      result = "Hewlett-Packard Non-Stop Kernel";
      break;
    case 0xF:
      result = "Amiga Research OS";
      break;
    case 0x61:
      result = "ARM";
      break;
    case 0x66:
      if ( *(_WORD *)(a1 + 402) != 21 )
        goto LABEL_19;
      result = "PS3 Cell OS lv2";
      break;
    default:
LABEL_19:
      result = "Unknown";
      break;
  }
  return result;
}
