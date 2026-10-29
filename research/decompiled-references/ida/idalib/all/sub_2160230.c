char *__fastcall sub_2160230(_QWORD *a1, __int16 a2)
{
  __int64 (*v2)(void); // rax
  int v3; // eax
  char *v4; // rcx

  v2 = *(__int64 (**)(void))(*a1 + 392LL);
  if ( (char *)v2 == (char *)sub_215E0A0 )
    v3 = sub_215E0A0(a1);
  else
    v3 = v2();
  switch ( v3 )
  {
    case 3:
      switch ( a2 )
      {
        case 0:
          j__strlen("IMAGE_REL_ARM64_ABSOLUTE");
          v4 = "IMAGE_REL_ARM64_ABSOLUTE";
          break;
        case 1:
          j__strlen("IMAGE_REL_ARM64_ADDR32");
          v4 = "IMAGE_REL_ARM64_ADDR32";
          break;
        case 2:
          j__strlen("IMAGE_REL_ARM64_ADDR32NB");
          v4 = "IMAGE_REL_ARM64_ADDR32NB";
          break;
        case 3:
          j__strlen("IMAGE_REL_ARM64_BRANCH26");
          v4 = "IMAGE_REL_ARM64_BRANCH26";
          break;
        case 4:
          j__strlen("IMAGE_REL_ARM64_PAGEBASE_REL21");
          v4 = "IMAGE_REL_ARM64_PAGEBASE_REL21";
          break;
        case 5:
          j__strlen("IMAGE_REL_ARM64_REL21");
          v4 = "IMAGE_REL_ARM64_REL21";
          break;
        case 6:
          j__strlen("IMAGE_REL_ARM64_PAGEOFFSET_12A");
          v4 = "IMAGE_REL_ARM64_PAGEOFFSET_12A";
          break;
        case 7:
          j__strlen("IMAGE_REL_ARM64_PAGEOFFSET_12L");
          v4 = "IMAGE_REL_ARM64_PAGEOFFSET_12L";
          break;
        case 8:
          j__strlen("IMAGE_REL_ARM64_SECREL");
          v4 = "IMAGE_REL_ARM64_SECREL";
          break;
        case 9:
          j__strlen("IMAGE_REL_ARM64_SECREL_LOW12A");
          v4 = "IMAGE_REL_ARM64_SECREL_LOW12A";
          break;
        case 10:
          j__strlen("IMAGE_REL_ARM64_SECREL_HIGH12A");
          v4 = "IMAGE_REL_ARM64_SECREL_HIGH12A";
          break;
        case 11:
          j__strlen("IMAGE_REL_ARM64_SECREL_LOW12L");
          v4 = "IMAGE_REL_ARM64_SECREL_LOW12L";
          break;
        case 12:
          j__strlen("IMAGE_REL_ARM64_TOKEN");
          v4 = "IMAGE_REL_ARM64_TOKEN";
          break;
        case 13:
          j__strlen("IMAGE_REL_ARM64_SECTION");
          v4 = "IMAGE_REL_ARM64_SECTION";
          break;
        case 14:
          j__strlen("IMAGE_REL_ARM64_ADDR64");
          v4 = "IMAGE_REL_ARM64_ADDR64";
          break;
        case 15:
          j__strlen("IMAGE_REL_ARM64_BRANCH19");
          v4 = "IMAGE_REL_ARM64_BRANCH19";
          break;
        case 16:
          j__strlen("IMAGE_REL_ARM64_BRANCH14");
          v4 = "IMAGE_REL_ARM64_BRANCH14";
          break;
        case 17:
          j__strlen("IMAGE_REL_ARM64_REL32");
          v4 = "IMAGE_REL_ARM64_REL32";
          break;
        default:
          goto LABEL_4;
      }
      break;
    case 17:
      switch ( a2 )
      {
        case 0:
          j__strlen("IMAGE_REL_MIPS_ABSOLUTE");
          v4 = "IMAGE_REL_MIPS_ABSOLUTE";
          break;
        case 1:
          j__strlen("IMAGE_REL_MIPS_REFHALF");
          v4 = "IMAGE_REL_MIPS_REFHALF";
          break;
        case 2:
          j__strlen("IMAGE_REL_MIPS_REFWORD");
          v4 = "IMAGE_REL_MIPS_REFWORD";
          break;
        case 3:
          j__strlen("IMAGE_REL_MIPS_JMPADDR");
          v4 = "IMAGE_REL_MIPS_JMPADDR";
          break;
        case 4:
          j__strlen("IMAGE_REL_MIPS_REFHI");
          v4 = "IMAGE_REL_MIPS_REFHI";
          break;
        case 5:
          j__strlen("IMAGE_REL_MIPS_REFLO");
          v4 = "IMAGE_REL_MIPS_REFLO";
          break;
        case 6:
          j__strlen("IMAGE_REL_MIPS_GPREL");
          v4 = "IMAGE_REL_MIPS_GPREL";
          break;
        case 7:
          j__strlen("IMAGE_REL_MIPS_LITERAL");
          v4 = "IMAGE_REL_MIPS_LITERAL";
          break;
        case 10:
          j__strlen("IMAGE_REL_MIPS_SECTION");
          v4 = "IMAGE_REL_MIPS_SECTION";
          break;
        case 11:
          j__strlen("IMAGE_REL_MIPS_SECREL");
          v4 = "IMAGE_REL_MIPS_SECREL";
          break;
        case 12:
          j__strlen("IMAGE_REL_MIPS_SECRELLO");
          v4 = "IMAGE_REL_MIPS_SECRELLO";
          break;
        case 13:
          j__strlen("IMAGE_REL_MIPS_SECRELHI");
          v4 = "IMAGE_REL_MIPS_SECRELHI";
          break;
        case 16:
          j__strlen("IMAGE_REL_MIPS_JMPADDR16");
          v4 = "IMAGE_REL_MIPS_JMPADDR16";
          break;
        case 34:
          j__strlen("IMAGE_REL_MIPS_REFWORDNB");
          v4 = "IMAGE_REL_MIPS_REFWORDNB";
          break;
        case 37:
          j__strlen("IMAGE_REL_MIPS_PAIR");
          v4 = "IMAGE_REL_MIPS_PAIR";
          break;
        default:
          goto LABEL_4;
      }
      break;
    case 35:
      switch ( a2 )
      {
        case 0:
          j__strlen("IMAGE_REL_ARM_ABSOLUTE");
          v4 = "IMAGE_REL_ARM_ABSOLUTE";
          break;
        case 1:
          j__strlen("IMAGE_REL_ARM_ADDR32");
          v4 = "IMAGE_REL_ARM_ADDR32";
          break;
        case 2:
          j__strlen("IMAGE_REL_ARM_ADDR32NB");
          v4 = "IMAGE_REL_ARM_ADDR32NB";
          break;
        case 3:
          j__strlen("IMAGE_REL_ARM_BRANCH24");
          v4 = "IMAGE_REL_ARM_BRANCH24";
          break;
        case 4:
          j__strlen("IMAGE_REL_ARM_BRANCH11");
          v4 = "IMAGE_REL_ARM_BRANCH11";
          break;
        case 5:
          j__strlen("IMAGE_REL_ARM_TOKEN");
          v4 = "IMAGE_REL_ARM_TOKEN";
          break;
        case 8:
          j__strlen("IMAGE_REL_ARM_BLX24");
          v4 = "IMAGE_REL_ARM_BLX24";
          break;
        case 9:
          j__strlen("IMAGE_REL_ARM_BLX11");
          v4 = "IMAGE_REL_ARM_BLX11";
          break;
        case 10:
          j__strlen("IMAGE_REL_ARM_REL32");
          v4 = "IMAGE_REL_ARM_REL32";
          break;
        case 14:
          j__strlen("IMAGE_REL_ARM_SECTION");
          v4 = "IMAGE_REL_ARM_SECTION";
          break;
        case 15:
          j__strlen("IMAGE_REL_ARM_SECREL");
          v4 = "IMAGE_REL_ARM_SECREL";
          break;
        case 16:
          j__strlen("IMAGE_REL_ARM_MOV32A");
          v4 = "IMAGE_REL_ARM_MOV32A";
          break;
        case 17:
          j__strlen("IMAGE_REL_ARM_MOV32T");
          v4 = "IMAGE_REL_ARM_MOV32T";
          break;
        case 18:
          j__strlen("IMAGE_REL_ARM_BRANCH20T");
          v4 = "IMAGE_REL_ARM_BRANCH20T";
          break;
        case 20:
          j__strlen("IMAGE_REL_ARM_BRANCH24T");
          v4 = "IMAGE_REL_ARM_BRANCH24T";
          break;
        case 21:
          j__strlen("IMAGE_REL_ARM_BLX23T");
          v4 = "IMAGE_REL_ARM_BLX23T";
          break;
        case 22:
          j__strlen("IMAGE_REL_ARM_PAIR");
          v4 = "IMAGE_REL_ARM_PAIR";
          break;
        default:
          goto LABEL_4;
      }
      break;
    case 37:
      switch ( a2 )
      {
        case 0:
          j__strlen("IMAGE_REL_I386_ABSOLUTE");
          v4 = "IMAGE_REL_I386_ABSOLUTE";
          break;
        case 1:
          j__strlen("IMAGE_REL_I386_DIR16");
          v4 = "IMAGE_REL_I386_DIR16";
          break;
        case 2:
          j__strlen("IMAGE_REL_I386_REL16");
          v4 = "IMAGE_REL_I386_REL16";
          break;
        case 6:
          j__strlen("IMAGE_REL_I386_DIR32");
          v4 = "IMAGE_REL_I386_DIR32";
          break;
        case 7:
          j__strlen("IMAGE_REL_I386_DIR32NB");
          v4 = "IMAGE_REL_I386_DIR32NB";
          break;
        case 9:
          j__strlen("IMAGE_REL_I386_SEG12");
          v4 = "IMAGE_REL_I386_SEG12";
          break;
        case 10:
          j__strlen("IMAGE_REL_I386_SECTION");
          v4 = "IMAGE_REL_I386_SECTION";
          break;
        case 11:
          j__strlen("IMAGE_REL_I386_SECREL");
          v4 = "IMAGE_REL_I386_SECREL";
          break;
        case 12:
          j__strlen("IMAGE_REL_I386_TOKEN");
          v4 = "IMAGE_REL_I386_TOKEN";
          break;
        case 13:
          j__strlen("IMAGE_REL_I386_SECREL7");
          v4 = "IMAGE_REL_I386_SECREL7";
          break;
        case 20:
          j__strlen("IMAGE_REL_I386_REL32");
          v4 = "IMAGE_REL_I386_REL32";
          break;
        default:
          goto LABEL_4;
      }
      break;
    case 38:
      switch ( a2 )
      {
        case 0:
          j__strlen("IMAGE_REL_AMD64_ABSOLUTE");
          v4 = "IMAGE_REL_AMD64_ABSOLUTE";
          break;
        case 1:
          j__strlen("IMAGE_REL_AMD64_ADDR64");
          v4 = "IMAGE_REL_AMD64_ADDR64";
          break;
        case 2:
          j__strlen("IMAGE_REL_AMD64_ADDR32");
          v4 = "IMAGE_REL_AMD64_ADDR32";
          break;
        case 3:
          j__strlen("IMAGE_REL_AMD64_ADDR32NB");
          v4 = "IMAGE_REL_AMD64_ADDR32NB";
          break;
        case 4:
          j__strlen("IMAGE_REL_AMD64_REL32");
          v4 = "IMAGE_REL_AMD64_REL32";
          break;
        case 5:
          j__strlen("IMAGE_REL_AMD64_REL32_1");
          v4 = "IMAGE_REL_AMD64_REL32_1";
          break;
        case 6:
          j__strlen("IMAGE_REL_AMD64_REL32_2");
          v4 = "IMAGE_REL_AMD64_REL32_2";
          break;
        case 7:
          j__strlen("IMAGE_REL_AMD64_REL32_3");
          v4 = "IMAGE_REL_AMD64_REL32_3";
          break;
        case 8:
          j__strlen("IMAGE_REL_AMD64_REL32_4");
          v4 = "IMAGE_REL_AMD64_REL32_4";
          break;
        case 9:
          j__strlen("IMAGE_REL_AMD64_REL32_5");
          v4 = "IMAGE_REL_AMD64_REL32_5";
          break;
        case 10:
          j__strlen("IMAGE_REL_AMD64_SECTION");
          v4 = "IMAGE_REL_AMD64_SECTION";
          break;
        case 11:
          j__strlen("IMAGE_REL_AMD64_SECREL");
          v4 = "IMAGE_REL_AMD64_SECREL";
          break;
        case 12:
          j__strlen("IMAGE_REL_AMD64_SECREL7");
          v4 = "IMAGE_REL_AMD64_SECREL7";
          break;
        case 13:
          j__strlen("IMAGE_REL_AMD64_TOKEN");
          v4 = "IMAGE_REL_AMD64_TOKEN";
          break;
        case 14:
          j__strlen("IMAGE_REL_AMD64_SREL32");
          v4 = "IMAGE_REL_AMD64_SREL32";
          break;
        case 15:
          j__strlen("IMAGE_REL_AMD64_PAIR");
          v4 = "IMAGE_REL_AMD64_PAIR";
          break;
        case 16:
          j__strlen("IMAGE_REL_AMD64_SSPAN32");
          v4 = "IMAGE_REL_AMD64_SSPAN32";
          break;
        default:
          goto LABEL_4;
      }
      break;
    default:
LABEL_4:
      j__strlen("Unknown");
      v4 = "Unknown";
      break;
  }
  return v4;
}
