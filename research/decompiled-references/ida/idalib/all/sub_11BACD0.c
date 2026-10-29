const char *__fastcall sub_11BACD0(_DWORD *a1, __int64 a2)
{
  const char *result; // rax
  bool v3; // zf
  char v4; // bp
  char v5; // dl
  char v6; // dl
  int v7; // edx

  switch ( a1[8] )
  {
    case 0:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xB:
    case 0xC:
    case 0x14:
    case 0x19:
    case 0x1A:
    case 0x21:
    case 0x22:
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
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
      result = nullptr;
      break;
    case 1:
    case 2:
    case 0x23:
    case 0x24:
      v4 = sub_113D610((__int64)a1, a2);
      if ( sub_113D7A0(a1) )
      {
        result = "armelfb";
        if ( !v4 )
          result = "armelf";
      }
      else
      {
        result = "armelfb_linux_eabi";
        if ( !v4 )
          result = "armelf_linux_eabi";
      }
      break;
    case 3:
      result = "aarch64managarm";
      if ( a1[11] != 10 )
      {
        v3 = !sub_1139440(a1);
        result = "aarch64linux";
        if ( !v3 )
          result = "aarch64elf";
      }
      break;
    case 4:
      v3 = !sub_1139440(a1);
      result = "aarch64linuxb";
      if ( !v3 )
        result = "aarch64elfb";
      break;
    case 0xA:
      result = "cskyelf_linux";
      break;
    case 0xD:
      result = "elf32loongarch";
      break;
    case 0xE:
      result = "elf64loongarch";
      break;
    case 0xF:
      result = "m68kelf";
      break;
    case 0x10:
      result = "elf32btsmip";
      break;
    case 0x11:
      result = "elf32ltsmip";
      break;
    case 0x12:
      v6 = sub_11543B0(a2, "n32");
      result = "elf32btsmipn32";
      if ( !v6 && (a1[12] & 0xFFFFFFEF) != 3 )
        result = "elf64btsmip";
      break;
    case 0x13:
      v5 = sub_11543B0(a2, "n32");
      result = "elf32ltsmipn32";
      if ( !v5 && (a1[12] & 0xFFFFFFEF) != 3 )
        result = "elf64ltsmip";
      break;
    case 0x15:
      result = "elf32ppc";
      if ( a1[11] == 7 )
        result = "elf32ppclinux";
      break;
    case 0x16:
      result = "elf32lppc";
      if ( a1[11] == 7 )
        result = "elf32lppclinux";
      break;
    case 0x17:
      result = "elf64ppc";
      break;
    case 0x18:
      result = "elf64lppc";
      break;
    case 0x1B:
      result = "elf32lriscv";
      break;
    case 0x1C:
      result = "elf64lriscv";
      break;
    case 0x1D:
    case 0x1F:
      result = "elf32_sparc";
      break;
    case 0x1E:
      result = "elf64_sparc";
      break;
    case 0x20:
      result = "elf64_s390";
      break;
    case 0x25:
      result = "elf_i386";
      if ( a1[11] == 26 )
        result = "elf_iamcu";
      break;
    case 0x26:
      v7 = a1[12];
      if ( v7 == 12 || (result = "elf_x86_64", v7 == 25) )
        result = "elf32_x86_64";
      break;
    case 0x3B:
      result = "elf64ve";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}
