const char *__fastcall sub_35F50(__int64 a1, int a2)
{
  unsigned __int16 v2; // ax
  const char *result; // rax

  v2 = *(_WORD *)(a1 + 522);
  if ( v2 > 0xF3u )
  {
    if ( v2 == 0x9026 )
    {
      switch ( a2 )
      {
        case 0:
          result = "R_ALPHA_NONE";
          break;
        case 1:
          result = "R_ALPHA_REFLONG";
          break;
        case 2:
          result = "R_ALPHA_REFQUAD";
          break;
        case 3:
          result = "R_ALPHA_GPREL32";
          break;
        case 4:
          result = "R_ALPHA_LITERAL";
          break;
        case 5:
          result = "R_ALPHA_LITUSE";
          break;
        case 6:
          result = "R_ALPHA_GPDISP";
          break;
        case 7:
          result = "R_ALPHA_BRADDR";
          break;
        case 8:
          result = "R_ALPHA_HINT";
          break;
        case 9:
          result = "R_ALPHA_SREL16";
          break;
        case 10:
          result = "R_ALPHA_SREL32";
          break;
        case 11:
          result = "R_ALPHA_SREL64";
          break;
        case 12:
          result = "R_ALPHA_OP_PUSH";
          break;
        case 13:
          result = "R_ALPHA_OP_STORE";
          break;
        case 14:
          result = "R_ALPHA_OP_PSUB";
          break;
        case 15:
          result = "R_ALPHA_OP_PRSHIFT";
          break;
        case 16:
          result = "R_ALPHA_GPVALUE";
          break;
        case 17:
          result = "R_ALPHA_GPRELHIGH";
          break;
        case 18:
          result = "R_ALPHA_GPRELLOW";
          break;
        case 19:
          result = "R_ALPHA_IMMED_GP_16";
          break;
        case 20:
          result = "R_ALPHA_IMMED_GP_HI32";
          break;
        case 21:
          result = "R_ALPHA_IMMED_SCN_HI32";
          break;
        case 22:
          result = "R_ALPHA_IMMED_BR_HI32";
          break;
        case 23:
          result = "R_ALPHA_IMMED_LO32";
          break;
        case 24:
          result = "R_ALPHA_COPY";
          break;
        case 25:
          result = "R_ALPHA_GLOB_DAT";
          break;
        case 26:
          result = "R_ALPHA_JMP_SLOT";
          break;
        case 27:
          result = "R_ALPHA_RELATIVE";
          break;
        case 28:
          result = "R_ALPHA_BRSGP";
          break;
        case 29:
          result = "R_ALPHA_TLSGD";
          break;
        case 30:
          result = "R_ALPHA_TLSLDM";
          break;
        case 31:
          result = "R_ALPHA_DTPMOD64";
          break;
        case 32:
          result = "R_ALPHA_GOTDTPREL";
          break;
        case 33:
          result = "R_ALPHA_DTPREL64";
          break;
        case 34:
          result = "R_ALPHA_DTPRELHI";
          break;
        case 35:
          result = "R_ALPHA_DTPRELLO";
          break;
        case 36:
          result = "R_ALPHA_DTPREL16";
          break;
        case 37:
          result = "R_ALPHA_GOTTPREL";
          break;
        case 38:
          result = "R_ALPHA_TPREL64";
          break;
        case 39:
          result = "R_ALPHA_TPRELHI";
          break;
        case 40:
          result = "R_ALPHA_TPRELLO";
          break;
        case 41:
          result = "R_ALPHA_TPREL16";
          break;
        default:
          result = "Unknown";
          break;
      }
    }
    else
    {
      if ( v2 > 0x9026u )
        return "Unknown";
      if ( v2 != 29646 )
      {
        if ( v2 > 0x73CEu )
        {
          if ( v2 > 0x7400u )
          {
            if ( v2 != 29947 )
              return "Unknown";
          }
          else if ( v2 <= 0x73FCu )
          {
            return "Unknown";
          }
        }
        else if ( v2 > 0x70FFu )
        {
          if ( v2 != 29162 )
            return "Unknown";
        }
        else if ( v2 <= 0x70FBu && (unsigned __int16)(v2 - 28866) > 1u )
        {
          return "Unknown";
        }
      }
      switch ( a2 )
      {
        case 0:
          result = "REN_V810_NONE";
          break;
        case 1:
          result = "REN_V810_BYTE";
          break;
        case 2:
          result = "REN_V810_HWORD";
          break;
        case 3:
          result = "REN_V810_WORD";
          break;
        case 4:
          result = "REN_V810_WLO";
          break;
        case 5:
          result = "REN_V810_WHI";
          break;
        case 6:
          result = "REN_V810_WHI1";
          break;
        case 7:
          result = "REN_V810_REGBYTE";
          break;
        case 8:
          result = "REN_V810_REGHWORD";
          break;
        case 9:
          result = "REN_V810_REGWORD";
          break;
        case 10:
          result = "REN_V810_REGWLO";
          break;
        case 11:
          result = "REN_V810_REGWHI";
          break;
        case 12:
          result = "REN_V810_REGWHI1";
          break;
        case 13:
          result = "REN_V810_GPBYTE";
          break;
        case 14:
          result = "REN_V810_GPHWORD";
          break;
        case 15:
          result = "REN_V810_GPWORD";
          break;
        case 16:
          result = "REN_V810_GPWLO";
          break;
        case 17:
          result = "REN_V810_GPWHI";
          break;
        case 18:
          result = "REN_V810_GPWHI1";
          break;
        case 19:
          result = "REN_V810_PC26";
          break;
        case 23:
          result = "REN_V850_HWLO";
          break;
        case 24:
          result = "REN_V850_WLO";
          break;
        case 25:
          result = "REN_V850_REG7BIT";
          break;
        case 26:
          result = "REN_V850_REGHBYTE";
          break;
        case 27:
          result = "REN_V850_REGWBYTE";
          break;
        case 28:
          result = "REN_V850_REGHWLO";
          break;
        case 29:
          result = "REN_V850_REGWLO";
          break;
        case 33:
          result = "REN_V850_GPHWLO";
          break;
        case 34:
          result = "REN_V850_GPWLO";
          break;
        case 35:
          result = "REN_V850_PC22";
          break;
        case 38:
          result = "REN_V850_BLO";
          break;
        case 39:
          result = "REN_V850_REG4BIT";
          break;
        case 40:
          result = "REN_V850_REG5BIT";
          break;
        case 41:
          result = "REN_V850_REGBLO";
          break;
        case 44:
          result = "REN_V850_GPBLO";
          break;
        case 45:
          result = "REN_V810_WLO_1";
          break;
        case 46:
          result = "REN_V810_GPWLO_1";
          break;
        case 47:
          result = "REN_V850_BLO_1";
          break;
        case 48:
          result = "REN_V850_HWLO_1";
          break;
        case 49:
          result = "REN_V850_WLO_1";
          break;
        case 50:
          result = "REN_V850_GPBLO_1";
          break;
        case 51:
          result = "REN_V850_GPHWLO_1";
          break;
        case 52:
          result = "REN_V850_GPWLO_1";
          break;
        case 53:
          result = "REN_V850_EPBLO";
          break;
        case 54:
          result = "REN_V850_EPHWLO";
          break;
        case 55:
          result = "REN_V850_EPWLO";
          break;
        case 56:
          result = "REN_V850_EPWLO_N";
          break;
        case 57:
          result = "REN_V850_PC32";
          break;
        default:
          result = "Unknown";
          break;
      }
    }
  }
  else if ( v2 <= 1u )
  {
    return "Unknown";
  }
  else
  {
    switch ( *(_WORD *)(a1 + 522) )
    {
      case 2:
      case 0x12:
      case 0x2B:
        switch ( a2 )
        {
          case 0:
            result = "R_SPARC_NONE";
            break;
          case 1:
            result = "R_SPARC_8";
            break;
          case 2:
            result = "R_SPARC_16";
            break;
          case 3:
            result = "R_SPARC_32";
            break;
          case 4:
            result = "R_SPARC_DISP8";
            break;
          case 5:
            result = "R_SPARC_DISP16";
            break;
          case 6:
            result = "R_SPARC_DISP32";
            break;
          case 7:
            result = "R_SPARC_WDISP30";
            break;
          case 8:
            result = "R_SPARC_WDISP22";
            break;
          case 9:
            result = "R_SPARC_HI22";
            break;
          case 10:
            result = "R_SPARC_22";
            break;
          case 11:
            result = "R_SPARC_13";
            break;
          case 12:
            result = "R_SPARC_LO10";
            break;
          case 13:
            result = "R_SPARC_GOT10";
            break;
          case 14:
            result = "R_SPARC_GOT13";
            break;
          case 15:
            result = "R_SPARC_GOT22";
            break;
          case 16:
            result = "R_SPARC_PC10";
            break;
          case 17:
            result = "R_SPARC_PC22";
            break;
          case 18:
            result = "R_SPARC_WPLT30";
            break;
          case 19:
            result = "R_SPARC_COPY";
            break;
          case 20:
            result = "R_SPARC_GLOB_DAT";
            break;
          case 21:
            result = "R_SPARC_JMP_SLOT";
            break;
          case 22:
            result = "R_SPARC_RELATIVE";
            break;
          case 23:
            result = "R_SPARC_UA32";
            break;
          case 24:
            result = "R_SPARC_PLT32";
            break;
          case 25:
            result = "R_SPARC_HIPLT22";
            break;
          case 26:
            result = "R_SPARC_LOPLT10";
            break;
          case 27:
            result = "R_SPARC_PCPLT32";
            break;
          case 28:
            result = "R_SPARC_PCPLT22";
            break;
          case 29:
            result = "R_SPARC_PCPLT10";
            break;
          case 30:
            result = "R_SPARC_10";
            break;
          case 31:
            result = "R_SPARC_11";
            break;
          case 32:
            result = "R_SPARC_64";
            break;
          case 33:
            result = "R_SPARC_OLO10";
            break;
          case 34:
            result = "R_SPARC_HH22";
            break;
          case 35:
            result = "R_SPARC_HM10";
            break;
          case 36:
            result = "R_SPARC_LM22";
            break;
          case 37:
            result = "R_SPARC_PC_HH22";
            break;
          case 38:
            result = "R_SPARC_PC_HM10";
            break;
          case 39:
            result = "R_SPARC_PC_LM22";
            break;
          case 40:
            result = "R_SPARC_WDISP16";
            break;
          case 41:
            result = "R_SPARC_WDISP19";
            break;
          case 42:
            result = "R_SPARC_GLOB_JMP";
            break;
          case 43:
            result = "R_SPARC_7";
            break;
          case 44:
            result = "R_SPARC_5";
            break;
          case 45:
            result = "R_SPARC_6";
            break;
          case 46:
            result = "R_SPARC_DISP64";
            break;
          case 47:
            result = "R_SPARC_PLT64";
            break;
          case 48:
            result = "R_SPARC_HIX22";
            break;
          case 49:
            result = "R_SPARC_LOX10";
            break;
          case 50:
            result = "R_SPARC_H44";
            break;
          case 51:
            result = "R_SPARC_M44";
            break;
          case 52:
            result = "R_SPARC_L44";
            break;
          case 53:
            result = "R_SPARC_REGISTER";
            break;
          case 54:
            result = "R_SPARC_UA64";
            break;
          case 55:
            result = "R_SPARC_UA16";
            break;
          case 56:
            result = "R_SPARC_TLS_GD_HI22";
            break;
          case 57:
            result = "R_SPARC_TLS_GD_LO10";
            break;
          case 58:
            result = "R_SPARC_TLS_GD_ADD";
            break;
          case 59:
            result = "R_SPARC_TLS_GD_CALL";
            break;
          case 60:
            result = "R_SPARC_TLS_LDM_HI22";
            break;
          case 61:
            result = "R_SPARC_TLS_LDM_LO10";
            break;
          case 62:
            result = "R_SPARC_TLS_LDM_ADD";
            break;
          case 63:
            result = "R_SPARC_TLS_LDM_CALL";
            break;
          case 64:
            result = "R_SPARC_TLS_LDO_HIX22";
            break;
          case 65:
            result = "R_SPARC_TLS_LDO_LOX10";
            break;
          case 66:
            result = "R_SPARC_TLS_LDO_ADD";
            break;
          case 67:
            result = "R_SPARC_TLS_IE_HI22";
            break;
          case 68:
            result = "R_SPARC_TLS_IE_LO10";
            break;
          case 69:
            result = "R_SPARC_TLS_IE_LD";
            break;
          case 70:
            result = "R_SPARC_TLS_IE_LDX";
            break;
          case 71:
            result = "R_SPARC_TLS_IE_ADD";
            break;
          case 72:
            result = "R_SPARC_TLS_LE_HIX22";
            break;
          case 73:
            result = "R_SPARC_TLS_LE_LOX10";
            break;
          case 74:
            result = "R_SPARC_TLS_DTPMOD32";
            break;
          case 75:
            result = "R_SPARC_TLS_DTPMOD64";
            break;
          case 76:
            result = "R_SPARC_TLS_DTPOFF32";
            break;
          case 77:
            result = "R_SPARC_TLS_DTPOFF64";
            break;
          case 78:
            result = "R_SPARC_TLS_TPOFF32";
            break;
          case 79:
            result = "R_SPARC_TLS_TPOFF64";
            break;
          case 80:
            result = "R_SPARC_GOTDATA_HIX22";
            break;
          case 81:
            result = "R_SPARC_GOTDATA_LOX10";
            break;
          case 82:
            result = "R_SPARC_GOTDATA_OP_HIX22";
            break;
          case 83:
            result = "R_SPARC_GOTDATA_OP_LOX10";
            break;
          case 84:
            result = "R_SPARC_GOTDATA_OP";
            break;
          case 85:
            result = "R_SPARC_H34";
            break;
          case 86:
            result = "R_SPARC_SIZE32";
            break;
          case 87:
            result = "R_SPARC_SIZE64";
            break;
          case 88:
            result = "R_SPARC_WDISP10";
            break;
          case 248:
            result = "R_SPARC_JMP_IREL";
            break;
          case 249:
            result = "R_SPARC_IRELATIVE";
            break;
          case 250:
            result = "R_SPARC_GNU_VTINHERIT";
            break;
          case 251:
            result = "R_SPARC_GNU_VTENTRY";
            break;
          case 252:
            result = "R_SPARC_REV32";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 3:
        switch ( a2 )
        {
          case 0:
            result = "R_386_NONE";
            break;
          case 1:
            result = "R_386_32";
            break;
          case 2:
            result = "R_386_PC32";
            break;
          case 3:
            result = "R_386_GOT32";
            break;
          case 4:
            result = "R_386_PLT32";
            break;
          case 5:
            result = "R_386_COPY";
            break;
          case 6:
            result = "R_386_GLOB_DAT";
            break;
          case 7:
            result = "R_386_JMP_SLOT";
            break;
          case 8:
            result = "R_386_RELATIVE";
            break;
          case 9:
            result = "R_386_GOTOFF";
            break;
          case 10:
            result = "R_386_GOTPC";
            break;
          case 11:
            result = "R_386_32PLT";
            break;
          case 12:
            result = "FIRST_INVALID_RELOC";
            break;
          case 13:
            result = "LAST_INVALID_RELOC";
            break;
          case 14:
            result = "R_386_TLS_TPOFF";
            break;
          case 15:
            result = "R_386_TLS_IE";
            break;
          case 16:
            result = "R_386_TLS_GOTIE";
            break;
          case 17:
            result = "R_386_TLS_LE";
            break;
          case 18:
            result = "R_386_TLS_GD";
            break;
          case 19:
            result = "R_386_TLS_LDM";
            break;
          case 20:
            result = "R_386_16";
            break;
          case 21:
            result = "R_386_PC16";
            break;
          case 22:
            result = "R_386_8";
            break;
          case 23:
            result = "R_386_PC8";
            break;
          case 24:
            result = "R_386_TLS_GD_32";
            break;
          case 25:
            result = "R_386_TLS_GD_PUSH";
            break;
          case 26:
            result = "R_386_TLS_GD_CALL";
            break;
          case 27:
            result = "R_386_TLS_GD_POP";
            break;
          case 28:
            result = "R_386_TLS_LDM_32";
            break;
          case 29:
            result = "R_386_TLS_LDM_PUSH";
            break;
          case 30:
            result = "R_386_TLS_LDM_CALL";
            break;
          case 31:
            result = "R_386_TLS_LDM_POP";
            break;
          case 32:
            result = "R_386_TLS_LDO_32";
            break;
          case 33:
            result = "R_386_TLS_IE_32";
            break;
          case 34:
            result = "R_386_TLS_LE_32";
            break;
          case 35:
            result = "R_386_TLS_DTPMOD32";
            break;
          case 36:
            result = "R_386_TLS_DTPOFF32";
            break;
          case 37:
            result = "R_386_TLS_TPOFF32";
            break;
          case 38:
            result = "R_386_SIZE32";
            break;
          case 39:
            result = "R_386_TLS_GOTDESC";
            break;
          case 40:
            result = "R_386_TLS_DESC_CALL";
            break;
          case 41:
            result = "R_386_TLS_DESC";
            break;
          case 42:
            result = "R_386_IRELATIVE";
            break;
          case 43:
            result = "R_386_GOT32X";
            break;
          case 250:
            result = "R_386_GNU_VTINHERIT";
            break;
          case 251:
            result = "R_386_GNU_VTENTRY";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 4:
        switch ( a2 )
        {
          case 0:
            result = "R_68K_NONE";
            break;
          case 1:
            result = "R_68K_32";
            break;
          case 2:
            result = "R_68K_16";
            break;
          case 3:
            result = "R_68K_8";
            break;
          case 4:
            result = "R_68K_PC32";
            break;
          case 5:
            result = "R_68K_PC16";
            break;
          case 6:
            result = "R_68K_PC8";
            break;
          case 7:
            result = "R_68K_GOT32";
            break;
          case 8:
            result = "R_68K_GOT16";
            break;
          case 9:
            result = "R_68K_GOT8";
            break;
          case 10:
            result = "R_68K_GOT32O";
            break;
          case 11:
            result = "R_68K_GOT16O";
            break;
          case 12:
            result = "R_68K_GOT8O";
            break;
          case 13:
            result = "R_68K_PLT32";
            break;
          case 14:
            result = "R_68K_PLT16";
            break;
          case 15:
            result = "R_68K_PLT8";
            break;
          case 16:
            result = "R_68K_PLT32O";
            break;
          case 17:
            result = "R_68K_PLT16O";
            break;
          case 18:
            result = "R_68K_PLT8O";
            break;
          case 19:
            result = "R_68K_COPY";
            break;
          case 20:
            result = "R_68K_GLOB_DAT";
            break;
          case 21:
            result = "R_68K_JMP_SLOT";
            break;
          case 22:
            result = "R_68K_RELATIVE";
            break;
          case 23:
            result = "R_68K_GNU_VTINHERIT";
            break;
          case 24:
            result = "R_68K_GNU_VTENTRY";
            break;
          case 25:
            result = "R_68K_TLS_GD32";
            break;
          case 26:
            result = "R_68K_TLS_GD16";
            break;
          case 27:
            result = "R_68K_TLS_GD8";
            break;
          case 28:
            result = "R_68K_TLS_LDM32";
            break;
          case 29:
            result = "R_68K_TLS_LDM16";
            break;
          case 30:
            result = "R_68K_TLS_LDM8";
            break;
          case 31:
            result = "R_68K_TLS_LDO32";
            break;
          case 32:
            result = "R_68K_TLS_LDO16";
            break;
          case 33:
            result = "R_68K_TLS_LDO8";
            break;
          case 34:
            result = "R_68K_TLS_IE32";
            break;
          case 35:
            result = "R_68K_TLS_IE16";
            break;
          case 36:
            result = "R_68K_TLS_IE8";
            break;
          case 37:
            result = "R_68K_TLS_LE32";
            break;
          case 38:
            result = "R_68K_TLS_LE16";
            break;
          case 39:
            result = "R_68K_TLS_LE8";
            break;
          case 40:
            result = "R_68K_TLS_DTPMOD32";
            break;
          case 41:
            result = "R_68K_TLS_DTPREL32";
            break;
          case 42:
            result = "R_68K_TLS_TPREL32";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 8:
        switch ( a2 )
        {
          case 0:
            result = "R_MIPS_NONE";
            break;
          case 1:
            result = "R_MIPS_16";
            break;
          case 2:
            result = "R_MIPS_32";
            break;
          case 3:
            result = "R_MIPS_REL";
            break;
          case 4:
            result = "R_MIPS_26";
            break;
          case 5:
            result = "R_MIPS_HI16";
            break;
          case 6:
            result = "R_MIPS_LO16";
            break;
          case 7:
            result = "R_MIPS_GPREL";
            break;
          case 8:
            result = "R_MIPS_LITERAL";
            break;
          case 9:
            result = "R_MIPS_GOT";
            break;
          case 10:
            result = "R_MIPS_PC16";
            break;
          case 11:
            result = "R_MIPS_CALL";
            break;
          case 12:
            result = "R_MIPS_GPREL32";
            break;
          case 16:
            result = "R_MIPS_SHIFT5";
            break;
          case 17:
            result = "R_MIPS_SHIFT6";
            break;
          case 18:
            result = "R_MIPS_64";
            break;
          case 19:
            result = "R_MIPS_GOT_DISP";
            break;
          case 20:
            result = "R_MIPS_GOT_PAGE";
            break;
          case 21:
            result = "R_MIPS_GOT_OFST";
            break;
          case 22:
            result = "R_MIPS_GOT_HI16";
            break;
          case 23:
            result = "R_MIPS_GOT_LO16";
            break;
          case 24:
            result = "R_MIPS_SUB";
            break;
          case 25:
            result = "R_MIPS_INSERT_A";
            break;
          case 26:
            result = "R_MIPS_INSERT_B";
            break;
          case 27:
            result = "R_MIPS_DELETE";
            break;
          case 28:
            result = "R_MIPS_HIGHER";
            break;
          case 29:
            result = "R_MIPS_HIGHEST";
            break;
          case 30:
            result = "R_MIPS_CALL_HI16";
            break;
          case 31:
            result = "R_MIPS_CALL_LO16";
            break;
          case 32:
            result = "R_MIPS_SCN_DISP";
            break;
          case 33:
            result = "R_MIPS_REL16";
            break;
          case 34:
            result = "R_MIPS_ADD_IMMEDIATE";
            break;
          case 35:
            result = "R_MIPS_PJUMP";
            break;
          case 36:
            result = "R_MIPS_RELGOT";
            break;
          case 37:
            result = "R_MIPS_JALR";
            break;
          case 38:
            result = "R_MIPS_TLS_DTPMOD32";
            break;
          case 39:
            result = "R_MIPS_TLS_DTPREL32";
            break;
          case 40:
            result = "R_MIPS_TLS_DTPMOD64";
            break;
          case 41:
            result = "R_MIPS_TLS_DTPREL64";
            break;
          case 42:
            result = "R_MIPS_TLS_GD";
            break;
          case 43:
            result = "R_MIPS_TLS_LDM";
            break;
          case 44:
            result = "R_MIPS_TLS_DTPREL_HI16";
            break;
          case 45:
            result = "R_MIPS_TLS_DTPREL_LO16";
            break;
          case 46:
            result = "R_MIPS_TLS_GOTTPREL";
            break;
          case 47:
            result = "R_MIPS_TLS_TPREL32";
            break;
          case 48:
            result = "R_MIPS_TLS_TPREL64";
            break;
          case 49:
            result = "R_MIPS_TLS_TPREL_HI16";
            break;
          case 50:
            result = "R_MIPS_TLS_TPREL_LO16";
            break;
          case 51:
            result = "R_MIPS_GLOB_DAT";
            break;
          case 60:
            result = "R_MIPS_PC21_S2";
            break;
          case 61:
            result = "R_MIPS_PC26_S2";
            break;
          case 62:
            result = "R_MIPS_PC18_S3";
            break;
          case 63:
            result = "R_MIPS_PC19_S2";
            break;
          case 64:
            result = "R_MIPS_PCHI16";
            break;
          case 65:
            result = "R_MIPS_PCLO16";
            break;
          case 100:
            result = "R_MIPS16_26";
            break;
          case 101:
            result = "R_MIPS16_GPREL";
            break;
          case 102:
            result = "R_MIPS16_GOT16";
            break;
          case 103:
            result = "R_MIPS16_CALL16";
            break;
          case 104:
            result = "R_MIPS16_HI16";
            break;
          case 105:
            result = "R_MIPS16_LO16";
            break;
          case 106:
            result = "R_MIPS16_TLS_GD";
            break;
          case 107:
            result = "R_MIPS16_TLS_LDM";
            break;
          case 108:
            result = "R_MIPS16_TLS_DTPREL_HI16";
            break;
          case 109:
            result = "R_MIPS16_TLS_DTPREL_LO16";
            break;
          case 110:
            result = "R_MIPS16_TLS_GOTTPREL";
            break;
          case 111:
            result = "R_MIPS16_TLS_TPREL_HI16";
            break;
          case 112:
            result = "R_MIPS16_TLS_TPREL_LO16";
            break;
          case 113:
            result = "R_MIPS16_PC16_S1";
            break;
          case 126:
            result = "R_MIPS_COPY";
            break;
          case 127:
            result = "R_MIPS_JUMP_SLOT";
            break;
          case 133:
            result = "R_MICROMIPS_26_S1";
            break;
          case 134:
            result = "R_MICROMIPS_HI16";
            break;
          case 135:
            result = "R_MICROMIPS_LO16";
            break;
          case 136:
            result = "R_MICROMIPS_GPREL16";
            break;
          case 137:
            result = "R_MICROMIPS_LITERAL";
            break;
          case 138:
            result = "R_MICROMIPS_GOT16";
            break;
          case 139:
            result = "R_MICROMIPS_PC7_S1";
            break;
          case 140:
            result = "R_MICROMIPS_PC10_S1";
            break;
          case 141:
            result = "R_MICROMIPS_PC16_S1";
            break;
          case 142:
            result = "R_MICROMIPS_CALL16";
            break;
          case 145:
            result = "R_MICROMIPS_GOT_DISP";
            break;
          case 146:
            result = "R_MICROMIPS_GOT_PAGE";
            break;
          case 147:
            result = "R_MICROMIPS_GOT_OFST";
            break;
          case 148:
            result = "R_MICROMIPS_GOT_HI16";
            break;
          case 149:
            result = "R_MICROMIPS_GOT_LO16";
            break;
          case 150:
            result = "R_MICROMIPS_SUB";
            break;
          case 151:
            result = "R_MICROMIPS_HIGHER";
            break;
          case 152:
            result = "R_MICROMIPS_HIGHEST";
            break;
          case 153:
            result = "R_MICROMIPS_CALL_HI16";
            break;
          case 154:
            result = "R_MICROMIPS_CALL_LO16";
            break;
          case 155:
            result = "R_MICROMIPS_SCN_DISP";
            break;
          case 156:
            result = "R_MICROMIPS_JALR";
            break;
          case 157:
            result = "R_MICROMIPS_HI0_LO16";
            break;
          case 162:
            result = "R_MICROMIPS_TLS_GD";
            break;
          case 163:
            result = "R_MICROMIPS_TLS_LDM";
            break;
          case 164:
            result = "R_MICROMIPS_TLS_DTPREL_HI16";
            break;
          case 165:
            result = "R_MICROMIPS_TLS_DTPREL_LO16";
            break;
          case 166:
            result = "R_MICROMIPS_TLS_GOTTPREL";
            break;
          case 169:
            result = "R_MICROMIPS_TLS_TPREL_HI16";
            break;
          case 170:
            result = "R_MICROMIPS_TLS_TPREL_LO16";
            break;
          case 172:
            result = "R_MICROMIPS_GPREL7_S2";
            break;
          case 173:
            result = "R_MICROMIPS_PC23_S2";
            break;
          case 248:
            result = "R_MIPS_PC32";
            break;
          case 249:
            result = "R_MIPS_EH";
            break;
          case 250:
            result = "R_MIPS_GNU_REL16_S2";
            break;
          case 253:
            result = "R_MIPS_GNU_VTINHERIT";
            break;
          case 254:
            result = "R_MIPS_GNU_VTENTRY";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0xF:
        switch ( a2 )
        {
          case 0:
            result = "R_PARISC_NONE";
            break;
          case 1:
            result = "R_PARISC_DIR32";
            break;
          case 2:
            result = "R_PARISC_DIR21L";
            break;
          case 3:
            result = "R_PARISC_DIR17R";
            break;
          case 4:
            result = "R_PARISC_DIR17F";
            break;
          case 6:
            result = "R_PARISC_DIR14R";
            break;
          case 7:
            result = "R_PARISC_DIR14F";
            break;
          case 8:
            result = "R_PARISC_PCREL12F";
            break;
          case 9:
            result = "R_PARISC_PCREL32";
            break;
          case 10:
            result = "R_PARISC_PCREL21L";
            break;
          case 11:
            result = "R_PARISC_PCREL17R";
            break;
          case 12:
            result = "R_PARISC_PCREL17F";
            break;
          case 13:
            result = "R_PARISC_PCREL17C";
            break;
          case 14:
            result = "R_PARISC_PCREL14R";
            break;
          case 15:
            result = "R_PARISC_PCREL14F";
            break;
          case 18:
            result = "R_PARISC_DPREL21L";
            break;
          case 19:
            result = "R_PARISC_DPREL14WR";
            break;
          case 20:
            result = "R_PARISC_DPREL14DR";
            break;
          case 22:
            result = "R_PARISC_DPREL14R";
            break;
          case 23:
            result = "R_PARISC_DPREL14F";
            break;
          case 26:
            result = "R_PARISC_DLTREL21L";
            break;
          case 30:
            result = "R_PARISC_DLTREL14R";
            break;
          case 31:
            result = "R_PARISC_DLTREL14F";
            break;
          case 34:
            result = "R_PARISC_DLTIND21L";
            break;
          case 38:
            result = "R_PARISC_DLTIND14R";
            break;
          case 39:
            result = "R_PARISC_DLTIND14F";
            break;
          case 40:
            result = "R_PARISC_SETBASE";
            break;
          case 41:
            result = "R_PARISC_SECREL32";
            break;
          case 42:
            result = "R_PARISC_BASEREL21L";
            break;
          case 43:
            result = "R_PARISC_BASEREL17R";
            break;
          case 44:
            result = "R_PARISC_BASEREL17F";
            break;
          case 46:
            result = "R_PARISC_BASEREL14R";
            break;
          case 47:
            result = "R_PARISC_BASEREL14F";
            break;
          case 48:
            result = "R_PARISC_SEGBASE";
            break;
          case 49:
            result = "R_PARISC_SEGREL32";
            break;
          case 50:
            result = "R_PARISC_PLTOFF21L";
            break;
          case 54:
            result = "R_PARISC_PLTOFF14R";
            break;
          case 55:
            result = "R_PARISC_PLTOFF14F";
            break;
          case 57:
            result = "R_PARISC_LTOFF_FPTR32";
            break;
          case 58:
            result = "R_PARISC_LTOFF_FPTR21L";
            break;
          case 62:
            result = "R_PARISC_LTOFF_FPTR14R";
            break;
          case 64:
            result = "R_PARISC_FPTR64";
            break;
          case 65:
            result = "R_PARISC_PLABEL32";
            break;
          case 66:
            result = "R_PARISC_PLABEL21L";
            break;
          case 70:
            result = "R_PARISC_PLABEL14R";
            break;
          case 72:
            result = "R_PARISC_PCREL64";
            break;
          case 73:
            result = "R_PARISC_PCREL22C";
            break;
          case 74:
            result = "R_PARISC_PCREL22F";
            break;
          case 75:
            result = "R_PARISC_PCREL14WR";
            break;
          case 76:
            result = "R_PARISC_PCREL14DR";
            break;
          case 77:
            result = "R_PARISC_PCREL16F";
            break;
          case 78:
            result = "R_PARISC_PCREL16WF";
            break;
          case 79:
            result = "R_PARISC_PCREL16DF";
            break;
          case 80:
            result = "R_PARISC_DIR64";
            break;
          case 81:
            result = "R_PARISC_DIR64WR";
            break;
          case 82:
            result = "R_PARISC_DIR64DR";
            break;
          case 83:
            result = "R_PARISC_DIR14WR";
            break;
          case 84:
            result = "R_PARISC_DIR14DR";
            break;
          case 85:
            result = "R_PARISC_DIR16F";
            break;
          case 86:
            result = "R_PARISC_DIR16WF";
            break;
          case 87:
            result = "R_PARISC_DIR16DF";
            break;
          case 88:
            result = "R_PARISC_GPREL64";
            break;
          case 91:
            result = "R_PARISC_DLTREL14WR";
            break;
          case 92:
            result = "R_PARISC_DLTREL14DR";
            break;
          case 93:
            result = "R_PARISC_GPREL16F";
            break;
          case 94:
            result = "R_PARISC_GPREL16WF";
            break;
          case 95:
            result = "R_PARISC_GPREL16DF";
            break;
          case 96:
            result = "R_PARISC_LTOFF64";
            break;
          case 99:
            result = "R_PARISC_DLTIND14WR";
            break;
          case 100:
            result = "R_PARISC_DLTIND14DR";
            break;
          case 101:
            result = "R_PARISC_LTOFF16F";
            break;
          case 102:
            result = "R_PARISC_LTOFF16WF";
            break;
          case 103:
            result = "R_PARISC_LTOFF16DF";
            break;
          case 104:
            result = "R_PARISC_SECREL64";
            break;
          case 107:
            result = "R_PARISC_BASEREL14WR";
            break;
          case 108:
            result = "R_PARISC_BASEREL14DR";
            break;
          case 112:
            result = "R_PARISC_SEGREL64";
            break;
          case 115:
            result = "R_PARISC_PLTOFF14WR";
            break;
          case 116:
            result = "R_PARISC_PLTOFF14DR";
            break;
          case 117:
            result = "R_PARISC_PLTOFF16F";
            break;
          case 118:
            result = "R_PARISC_PLTOFF16WF";
            break;
          case 119:
            result = "R_PARISC_PLTOFF16DF";
            break;
          case 120:
            result = "R_PARISC_LTOFF_FPTR64";
            break;
          case 123:
            result = "R_PARISC_LTOFF_FPTR14WR";
            break;
          case 124:
            result = "R_PARISC_LTOFF_FPTR14DR";
            break;
          case 125:
            result = "R_PARISC_LTOFF_FPTR16F";
            break;
          case 126:
            result = "R_PARISC_LTOFF_FPTR16WF";
            break;
          case 127:
            result = "R_PARISC_LTOFF_FPTR16DF";
            break;
          case 128:
            result = "R_PARISC_COPY";
            break;
          case 129:
            result = "R_PARISC_IPLT";
            break;
          case 130:
            result = "R_PARISC_EPLT";
            break;
          case 153:
            result = "R_PARISC_TPREL32";
            break;
          case 154:
            result = "R_PARISC_TPREL21L";
            break;
          case 158:
            result = "R_PARISC_TPREL14R";
            break;
          case 162:
            result = "R_PARISC_LTOFF_TP21L";
            break;
          case 166:
            result = "R_PARISC_LTOFF_TP14R";
            break;
          case 167:
            result = "R_PARISC_LTOFF_TP14F";
            break;
          case 216:
            result = "R_PARISC_TPREL64";
            break;
          case 219:
            result = "R_PARISC_TPREL14WR";
            break;
          case 220:
            result = "R_PARISC_TPREL14DR";
            break;
          case 221:
            result = "R_PARISC_TPREL16F";
            break;
          case 222:
            result = "R_PARISC_TPREL16WF";
            break;
          case 223:
            result = "R_PARISC_TPREL16DF";
            break;
          case 224:
            result = "R_PARISC_LTOFF_TP64";
            break;
          case 227:
            result = "R_PARISC_LTOFF_TP14WR";
            break;
          case 228:
            result = "R_PARISC_LTOFF_TP14DR";
            break;
          case 229:
            result = "R_PARISC_LTOFF_TP16F";
            break;
          case 230:
            result = "R_PARISC_LTOFF_TP16WF";
            break;
          case 231:
            result = "R_PARISC_LTOFF_TP16DF";
            break;
          case 232:
            result = "R_PARISC_GNU_VTENTRY";
            break;
          case 233:
            result = "R_PARISC_GNU_VTINHERIT";
            break;
          case 234:
            result = "R_PARISC_TLS_GD21L";
            break;
          case 235:
            result = "R_PARISC_TLS_GD14R";
            break;
          case 236:
            result = "R_PARISC_TLS_GDCALL";
            break;
          case 237:
            result = "R_PARISC_TLS_LDM21L";
            break;
          case 238:
            result = "R_PARISC_TLS_LDM14R";
            break;
          case 239:
            result = "R_PARISC_TLS_LDMCALL";
            break;
          case 240:
            result = "R_PARISC_TLS_LDO21L";
            break;
          case 241:
            result = "R_PARISC_TLS_LDO14R";
            break;
          case 242:
            result = "R_PARISC_TLS_DTPMOD32";
            break;
          case 243:
            result = "R_PARISC_TLS_DTPMOD64";
            break;
          case 244:
            result = "R_PARISC_TLS_DTPOFF32";
            break;
          case 245:
            result = "R_PARISC_TLS_DTPOFF64";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x13:
        switch ( a2 )
        {
          case 0:
            result = "R_960_NONE";
            break;
          case 1:
            result = "R_960_12";
            break;
          case 2:
            result = "R_960_32";
            break;
          case 3:
            result = "R_960_IP24";
            break;
          case 4:
            result = "R_960_SUB";
            break;
          case 5:
            result = "R_960_OPTCALL";
            break;
          case 6:
            result = "R_960_OPTCALLX";
            break;
          case 7:
            result = "R_960_OPTCALLXA";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x14:
        switch ( a2 )
        {
          case 0:
            result = "R_PPC_NONE";
            break;
          case 1:
            result = "R_PPC_ADDR32";
            break;
          case 2:
            result = "R_PPC_ADDR24";
            break;
          case 3:
            result = "R_PPC_ADDR16";
            break;
          case 4:
            result = "R_PPC_ADDR16_LO";
            break;
          case 5:
            result = "R_PPC_ADDR16_HI";
            break;
          case 6:
            result = "R_PPC_ADDR16_HA";
            break;
          case 7:
            result = "R_PPC_ADDR14";
            break;
          case 8:
            result = "R_PPC_ADDR14_BRTAKEN";
            break;
          case 9:
            result = "R_PPC_ADDR14_BRNTAKEN";
            break;
          case 10:
            result = "R_PPC_REL24";
            break;
          case 11:
            result = "R_PPC_REL14";
            break;
          case 12:
            result = "R_PPC_REL14_BRTAKEN";
            break;
          case 13:
            result = "R_PPC_REL14_BRNTAKEN";
            break;
          case 14:
            result = "R_PPC_GOT16";
            break;
          case 15:
            result = "R_PPC_GOT16_LO";
            break;
          case 16:
            result = "R_PPC_GOT16_HI";
            break;
          case 17:
            result = "R_PPC_GOT16_HA";
            break;
          case 18:
            result = "R_PPC_PLTREL24";
            break;
          case 19:
            result = "R_PPC_COPY";
            break;
          case 20:
            result = "R_PPC_GLOB_DAT";
            break;
          case 21:
            result = "R_PPC_JMP_SLOT";
            break;
          case 22:
            result = "R_PPC_RELATIVE";
            break;
          case 23:
            result = "R_PPC_LOCAL24PC";
            break;
          case 24:
            result = "R_PPC_UADDR32";
            break;
          case 25:
            result = "R_PPC_UADDR16";
            break;
          case 26:
            result = "R_PPC_REL32";
            break;
          case 27:
            result = "R_PPC_PLT32";
            break;
          case 28:
            result = "R_PPC_PLTREL32";
            break;
          case 29:
            result = "R_PPC_PLT16_LO";
            break;
          case 30:
            result = "R_PPC_PLT16_HI";
            break;
          case 31:
            result = "R_PPC_PLT16_HA";
            break;
          case 32:
            result = "R_PPC_SDAREL16";
            break;
          case 33:
            result = "R_PPC_SECTOFF";
            break;
          case 34:
            result = "R_PPC_SECTOFF_LO";
            break;
          case 35:
            result = "R_PPC_SECTOFF_HI";
            break;
          case 36:
            result = "R_PPC_SECTOFF_HA";
            break;
          case 37:
            result = "R_PPC_ADDR30";
            break;
          case 38:
            result = "R_PPC_FVLE_REL8";
            break;
          case 39:
            result = "R_PPC_FVLE_REL15";
            break;
          case 40:
            result = "R_PPC_FVLE_REL24";
            break;
          case 44:
            result = "R_PPC_FVLE_ADDR8";
            break;
          case 45:
            result = "R_PPC_FVLE_ADDR4";
            break;
          case 47:
            result = "R_PPC_FVLE_SDA";
            break;
          case 49:
            result = "R_PPC_FVLE_LO16A";
            break;
          case 50:
            result = "R_PPC_FVLE_HI16A";
            break;
          case 51:
            result = "R_PPC_FVLE_HA16A";
            break;
          case 56:
            result = "R_PPC_FVLE_LO16D";
            break;
          case 57:
            result = "R_PPC_FVLE_HI16D";
            break;
          case 58:
            result = "R_PPC_FVLE_HA16D";
            break;
          case 67:
            result = "R_PPC_TLS";
            break;
          case 68:
            result = "R_PPC_DTPMOD32";
            break;
          case 69:
            result = "R_PPC_TPREL16";
            break;
          case 70:
            result = "R_PPC_TPREL16_LO";
            break;
          case 71:
            result = "R_PPC_TPREL16_HI";
            break;
          case 72:
            result = "R_PPC_TPREL16_HA";
            break;
          case 73:
            result = "R_PPC_TPREL32";
            break;
          case 74:
            result = "R_PPC_DTPREL16";
            break;
          case 75:
            result = "R_PPC_DTPREL16_LO";
            break;
          case 76:
            result = "R_PPC_DTPREL16_HI";
            break;
          case 77:
            result = "R_PPC_DTPREL16_HA";
            break;
          case 78:
            result = "R_PPC_DTPREL32";
            break;
          case 79:
            result = "R_PPC_GOT_TLSGD16";
            break;
          case 80:
            result = "R_PPC_GOT_TLSGD16_LO";
            break;
          case 81:
            result = "R_PPC_GOT_TLSGD16_HI";
            break;
          case 82:
            result = "R_PPC_GOT_TLSGD16_HA";
            break;
          case 83:
            result = "R_PPC_GOT_TLSLD16";
            break;
          case 84:
            result = "R_PPC_GOT_TLSLD16_LO";
            break;
          case 85:
            result = "R_PPC_GOT_TLSLD16_HI";
            break;
          case 86:
            result = "R_PPC_GOT_TLSLD16_HA";
            break;
          case 87:
            result = "R_PPC_GOT_TPREL16";
            break;
          case 88:
            result = "R_PPC_GOT_TPREL16_LO";
            break;
          case 89:
            result = "R_PPC_GOT_TPREL16_HI";
            break;
          case 90:
            result = "R_PPC_GOT_TPREL16_HA";
            break;
          case 91:
            result = "R_PPC_GOT_DTPREL16";
            break;
          case 92:
            result = "R_PPC_GOT_DTPREL16_LO";
            break;
          case 93:
            result = "R_PPC_GOT_DTPREL16_HI";
            break;
          case 94:
            result = "R_PPC_GOT_DTPREL16_HA";
            break;
          case 95:
            result = "R_PPC_TLSGD";
            break;
          case 96:
            result = "R_PPC_TLSLD";
            break;
          case 101:
            result = "R_PPC_EMB_NADDR32";
            break;
          case 102:
            result = "R_PPC_EMB_NADDR16";
            break;
          case 103:
            result = "R_PPC_EMB_NADDR16_LO";
            break;
          case 104:
            result = "R_PPC_EMB_NADDR16_HI";
            break;
          case 105:
            result = "R_PPC_EMB_NADDR16_HA";
            break;
          case 106:
            result = "R_PPC_EMB_SDA_I16";
            break;
          case 107:
            result = "R_PPC_EMB_SDA2_I16";
            break;
          case 108:
            result = "R_PPC_EMB_SDA2REL";
            break;
          case 109:
            result = "R_PPC_EMB_SDA21";
            break;
          case 110:
            result = "R_PPC_EMB_MRKREF";
            break;
          case 111:
            result = "R_PPC_EMB_RELSEC16";
            break;
          case 112:
            result = "R_PPC_EMB_RELST_LO";
            break;
          case 113:
            result = "R_PPC_EMB_RELST_HI";
            break;
          case 114:
            result = "R_PPC_EMB_RELST_HA";
            break;
          case 115:
            result = "R_PPC_EMB_BIT_FLD";
            break;
          case 116:
            result = "R_PPC_EMB_RELSDA";
            break;
          case 120:
            result = "R_PPC_EMB_RELOC_120";
            break;
          case 121:
            result = "R_PPC_EMB_RELOC_121";
            break;
          case 180:
            result = "R_PPC_DIAB_SDA21_LO";
            break;
          case 181:
            result = "R_PPC_DIAB_SDA21_HI";
            break;
          case 182:
            result = "R_PPC_DIAB_SDA21_HA";
            break;
          case 183:
            result = "R_PPC_DIAB_RELSDA_LO";
            break;
          case 184:
            result = "R_PPC_DIAB_RELSDA_HI";
            break;
          case 185:
            result = "R_PPC_DIAB_RELSDA_HA";
            break;
          case 186:
            result = "R_PPC_DIAB_IMTO";
            break;
          case 187:
            result = "R_PPC_DIAB_IMT";
            break;
          case 188:
            result = "R_PPC_DIAB_ADDR0";
            break;
          case 189:
            result = "R_PPC_DIAB_OVERRIDE0";
            break;
          case 190:
            result = "R_PPC_DIAB_VTBL32";
            break;
          case 191:
            result = "R_PPC_DIAB_LAST";
            break;
          case 201:
            result = "R_PPC_EMB_SPE_DOUBLE";
            break;
          case 202:
            result = "R_PPC_EMB_SPE_WORD";
            break;
          case 203:
            result = "R_PPC_EMB_SPE_HALF";
            break;
          case 204:
            result = "R_PPC_EMB_SPE_DOUBLE_SDAREL";
            break;
          case 205:
            result = "R_PPC_EMB_SPE_WORD_SDAREL";
            break;
          case 206:
            result = "R_PPC_EMB_SPE_HALF_SDAREL";
            break;
          case 207:
            result = "R_PPC_EMB_SPE_DOUBLE_SDA2REL";
            break;
          case 208:
            result = "R_PPC_EMB_SPE_WORD_SDA2REL";
            break;
          case 209:
            result = "R_PPC_EMB_SPE_HALF_SDA2REL";
            break;
          case 210:
            result = "R_PPC_EMB_SPE_DOUBLE_SDA0REL";
            break;
          case 211:
            result = "R_PPC_EMB_SPE_WORD_SDA0REL";
            break;
          case 212:
            result = "R_PPC_EMB_SPE_HALF_SDA0REL";
            break;
          case 213:
            result = "R_PPC_EMB_SPE_DOUBLE_SDA";
            break;
          case 214:
            result = "R_PPC_EMB_SPE_WORD_SDA";
            break;
          case 215:
            result = "R_PPC_EMB_SPE_HALF_SDA";
            break;
          case 216:
            result = "R_PPC_VLE_REL8";
            break;
          case 217:
            result = "R_PPC_VLE_REL15";
            break;
          case 218:
            result = "R_PPC_VLE_REL24";
            break;
          case 219:
            result = "R_PPC_VLE_LO16A";
            break;
          case 220:
            result = "R_PPC_VLE_LO16D";
            break;
          case 221:
            result = "R_PPC_VLE_HI16A";
            break;
          case 222:
            result = "R_PPC_VLE_HI16D";
            break;
          case 223:
            result = "R_PPC_VLE_HA16A";
            break;
          case 224:
            result = "R_PPC_VLE_HA16D";
            break;
          case 225:
            result = "R_PPC_VLE_SDA21";
            break;
          case 226:
            result = "R_PPC_VLE_SDA21_LO";
            break;
          case 227:
            result = "R_PPC_VLE_SDAREL_LO16A";
            break;
          case 228:
            result = "R_PPC_VLE_SDAREL_LO16D";
            break;
          case 229:
            result = "R_PPC_VLE_SDAREL_HI16A";
            break;
          case 230:
            result = "R_PPC_VLE_SDAREL_HI16D";
            break;
          case 231:
            result = "R_PPC_VLE_SDAREL_HA16A";
            break;
          case 232:
            result = "R_PPC_VLE_SDAREL_HA16D";
            break;
          case 246:
            result = "R_PPC_REL16DX_HA";
            break;
          case 248:
            result = "R_PPC_IRELATIVE";
            break;
          case 249:
            result = "R_PPC_REL16";
            break;
          case 250:
            result = "R_PPC_REL16_LO";
            break;
          case 251:
            result = "R_PPC_REL16_HI";
            break;
          case 252:
            result = "R_PPC_REL16_HA";
            break;
          case 253:
            result = "R_PPC_GNU_VTINHERIT";
            break;
          case 254:
            result = "R_PPC_GNU_VTENTRY";
            break;
          case 255:
            result = "R_PPC_TOC16";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x15:
        switch ( a2 )
        {
          case 0:
            result = "R_PPC64_NONE";
            break;
          case 1:
            result = "R_PPC64_ADDR32";
            break;
          case 2:
            result = "R_PPC64_ADDR24";
            break;
          case 3:
            result = "R_PPC64_ADDR16";
            break;
          case 4:
            result = "R_PPC64_ADDR16_LO";
            break;
          case 5:
            result = "R_PPC64_ADDR16_HI";
            break;
          case 6:
            result = "R_PPC64_ADDR16_HA";
            break;
          case 7:
            result = "R_PPC64_ADDR14";
            break;
          case 8:
            result = "R_PPC64_ADDR14_BRTAKEN";
            break;
          case 9:
            result = "R_PPC64_ADDR14_BRNTAKEN";
            break;
          case 10:
            result = "R_PPC64_REL24";
            break;
          case 11:
            result = "R_PPC64_REL14";
            break;
          case 12:
            result = "R_PPC64_REL14_BRTAKEN";
            break;
          case 13:
            result = "R_PPC64_REL14_BRNTAKEN";
            break;
          case 14:
            result = "R_PPC64_GOT16";
            break;
          case 15:
            result = "R_PPC64_GOT16_LO";
            break;
          case 16:
            result = "R_PPC64_GOT16_HI";
            break;
          case 17:
            result = "R_PPC64_GOT16_HA";
            break;
          case 18:
            result = "R_PPC64_PLTREL24";
            break;
          case 19:
            result = "R_PPC64_COPY";
            break;
          case 20:
            result = "R_PPC64_GLOB_DAT";
            break;
          case 21:
            result = "R_PPC64_JMP_SLOT";
            break;
          case 22:
            result = "R_PPC64_RELATIVE";
            break;
          case 23:
            result = "R_PPC64_LOCAL24PC";
            break;
          case 24:
            result = "R_PPC64_UADDR32";
            break;
          case 25:
            result = "R_PPC64_UADDR16";
            break;
          case 26:
            result = "R_PPC64_REL32";
            break;
          case 27:
            result = "R_PPC64_PLT32";
            break;
          case 28:
            result = "R_PPC64_PLTREL32";
            break;
          case 29:
            result = "R_PPC64_PLT16_LO";
            break;
          case 30:
            result = "R_PPC64_PLT16_HI";
            break;
          case 31:
            result = "R_PPC64_PLT16_HA";
            break;
          case 32:
            result = "R_PPC64_SDAREL16";
            break;
          case 33:
            result = "R_PPC64_SECTOFF";
            break;
          case 34:
            result = "R_PPC64_SECTOFF_LO";
            break;
          case 35:
            result = "R_PPC64_SECTOFF_HI";
            break;
          case 36:
            result = "R_PPC64_SECTOFF_HA";
            break;
          case 37:
            result = "R_PPC64_ADDR30";
            break;
          case 38:
            result = "R_PPC64_ADDR64";
            break;
          case 39:
            result = "R_PPC64_ADDR16_HIGHER";
            break;
          case 40:
            result = "R_PPC64_ADDR16_HIGHERA";
            break;
          case 41:
            result = "R_PPC64_ADDR16_HIGHEST";
            break;
          case 42:
            result = "R_PPC64_ADDR16_HIGHESTA";
            break;
          case 43:
            result = "R_PPC64_UADDR64";
            break;
          case 44:
            result = "R_PPC64_REL64";
            break;
          case 45:
            result = "R_PPC64_PLT64";
            break;
          case 46:
            result = "R_PPC64_PLTREL64";
            break;
          case 47:
            result = "R_PPC64_TOC16";
            break;
          case 48:
            result = "R_PPC64_TOC16_LO";
            break;
          case 49:
            result = "R_PPC64_TOC16_HI";
            break;
          case 50:
            result = "R_PPC64_TOC16_HA";
            break;
          case 51:
            result = "R_PPC64_TOC";
            break;
          case 52:
            result = "R_PPC64_PLTGOT16";
            break;
          case 53:
            result = "R_PPC64_PLTGOT16_LO";
            break;
          case 54:
            result = "R_PPC64_PLTGOT16_HI";
            break;
          case 55:
            result = "R_PPC64_PLTGOT16_HA";
            break;
          case 56:
            result = "R_PPC64_ADDR16_DS";
            break;
          case 57:
            result = "R_PPC64_ADDR16_LO_DS";
            break;
          case 58:
            result = "R_PPC64_GOT16_DS";
            break;
          case 59:
            result = "R_PPC64_GOT16_LO_DS";
            break;
          case 60:
            result = "R_PPC64_PLT16_LO_DS";
            break;
          case 61:
            result = "R_PPC64_SECTOFF_DS";
            break;
          case 62:
            result = "R_PPC64_SECTOFF_LO_DS";
            break;
          case 63:
            result = "R_PPC64_TOC16_DS";
            break;
          case 64:
            result = "R_PPC64_TOC16_LO_DS";
            break;
          case 65:
            result = "R_PPC64_PLTGOT16_DS";
            break;
          case 66:
            result = "R_PPC64_PLTGOT16_LO_DS";
            break;
          case 67:
            result = "R_PPC64_TLS";
            break;
          case 68:
            result = "R_PPC64_DTPMOD64";
            break;
          case 69:
            result = "R_PPC64_TPREL16";
            break;
          case 70:
            result = "R_PPC64_TPREL16_LO";
            break;
          case 71:
            result = "R_PPC64_TPREL16_HI";
            break;
          case 72:
            result = "R_PPC64_TPREL16_HA";
            break;
          case 73:
            result = "R_PPC64_TPREL64";
            break;
          case 74:
            result = "R_PPC64_DTPREL16";
            break;
          case 75:
            result = "R_PPC64_DTPREL16_LO";
            break;
          case 76:
            result = "R_PPC64_DTPREL16_HI";
            break;
          case 77:
            result = "R_PPC64_DTPREL16_HA";
            break;
          case 78:
            result = "R_PPC64_DTPREL64";
            break;
          case 79:
            result = "R_PPC64_GOT_TLSGD16";
            break;
          case 80:
            result = "R_PPC64_GOT_TLSGD16_LO";
            break;
          case 81:
            result = "R_PPC64_GOT_TLSGD16_HI";
            break;
          case 82:
            result = "R_PPC64_GOT_TLSGD16_HA";
            break;
          case 83:
            result = "R_PPC64_GOT_TLSLD16";
            break;
          case 84:
            result = "R_PPC64_GOT_TLSLD16_LO";
            break;
          case 85:
            result = "R_PPC64_GOT_TLSLD16_HI";
            break;
          case 86:
            result = "R_PPC64_GOT_TLSLD16_HA";
            break;
          case 87:
            result = "R_PPC64_GOT_TPREL16_DS";
            break;
          case 88:
            result = "R_PPC64_GOT_TPREL16_LO_DS";
            break;
          case 89:
            result = "R_PPC64_GOT_TPREL16_HI";
            break;
          case 90:
            result = "R_PPC64_GOT_TPREL16_HA";
            break;
          case 91:
            result = "R_PPC64_GOT_DTPREL16_DS";
            break;
          case 92:
            result = "R_PPC64_GOT_DTPREL16_LO_DS";
            break;
          case 93:
            result = "R_PPC64_GOT_DTPREL16_HI";
            break;
          case 94:
            result = "R_PPC64_GOT_DTPREL16_HA";
            break;
          case 95:
            result = "R_PPC64_TPREL16_DS";
            break;
          case 96:
            result = "R_PPC64_TPREL16_LO_DS";
            break;
          case 97:
            result = "R_PPC64_TPREL16_HIGHER";
            break;
          case 98:
            result = "R_PPC64_TPREL16_HIGHERA";
            break;
          case 99:
            result = "R_PPC64_TPREL16_HIGHEST";
            break;
          case 100:
            result = "R_PPC64_TPREL16_HIGHESTA";
            break;
          case 101:
            result = "R_PPC64_DTPREL16_DS";
            break;
          case 102:
            result = "R_PPC64_DTPREL16_LO_DS";
            break;
          case 103:
            result = "R_PPC64_DTPREL16_HIGHER";
            break;
          case 104:
            result = "R_PPC64_DTPREL16_HIGHERA";
            break;
          case 105:
            result = "R_PPC64_DTPREL16_HIGHEST";
            break;
          case 106:
            result = "R_PPC64_DTPREL16_HIGHESTA";
            break;
          case 107:
            result = "R_PPC64_TLSGD";
            break;
          case 108:
            result = "R_PPC64_TLSLD";
            break;
          case 109:
            result = "R_PPC64_TOCSAVE";
            break;
          case 110:
            result = "R_PPC64_ADDR16_HIGH";
            break;
          case 111:
            result = "R_PPC64_ADDR16_HIGHA";
            break;
          case 112:
            result = "R_PPC64_TPREL16_HIGH";
            break;
          case 113:
            result = "R_PPC64_TPREL16_HIGHA";
            break;
          case 114:
            result = "R_PPC64_DTPREL16_HIGH";
            break;
          case 115:
            result = "R_PPC64_DTPREL16_HIGHA";
            break;
          case 116:
            result = "R_PPC64_REL24_NOTOC";
            break;
          case 117:
            result = "R_PPC64_ADDR64_LOCAL";
            break;
          case 247:
            result = "R_PPC64_JMP_IREL";
            break;
          case 248:
            result = "R_PPC64_IRELATIVE";
            break;
          case 249:
            result = "R_PPC64_REL16";
            break;
          case 250:
            result = "R_PPC64_REL16_LO";
            break;
          case 251:
            result = "R_PPC64_REL16_HI";
            break;
          case 252:
            result = "R_PPC64_REL16_HA";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x16:
        switch ( a2 )
        {
          case 0:
            result = "R_390_NONE";
            break;
          case 1:
            result = "R_390_8";
            break;
          case 2:
            result = "R_390_12";
            break;
          case 3:
            result = "R_390_16";
            break;
          case 4:
            result = "R_390_32";
            break;
          case 5:
            result = "R_390_PC32";
            break;
          case 6:
            result = "R_390_GOT12";
            break;
          case 7:
            result = "R_390_GOT32";
            break;
          case 8:
            result = "R_390_PLT32";
            break;
          case 9:
            result = "R_390_COPY";
            break;
          case 10:
            result = "R_390_GLOB_DAT";
            break;
          case 11:
            result = "R_390_JMP_SLOT";
            break;
          case 12:
            result = "R_390_RELATIVE";
            break;
          case 13:
            result = "R_390_GOTOFF";
            break;
          case 14:
            result = "R_390_GOTPC";
            break;
          case 15:
            result = "R_390_GOT16";
            break;
          case 16:
            result = "R_390_PC16";
            break;
          case 17:
            result = "R_390_PC16DBL";
            break;
          case 18:
            result = "R_390_PLT16DBL";
            break;
          case 19:
            result = "R_390_PC32DBL";
            break;
          case 20:
            result = "R_390_PLT32DBL";
            break;
          case 21:
            result = "R_390_GOTPCDBL";
            break;
          case 22:
            result = "R_390_64";
            break;
          case 23:
            result = "R_390_PC64";
            break;
          case 24:
            result = "R_390_GOT64";
            break;
          case 25:
            result = "R_390_PLT64";
            break;
          case 26:
            result = "R_390_GOTENT";
            break;
          case 27:
            result = "R_390_GOTOFF16";
            break;
          case 28:
            result = "R_390_GOTOFF64";
            break;
          case 29:
            result = "R_390_GOTPLT12";
            break;
          case 30:
            result = "R_390_GOTPLT16";
            break;
          case 31:
            result = "R_390_GOTPLT32";
            break;
          case 32:
            result = "R_390_GOTPLT64";
            break;
          case 33:
            result = "R_390_GOTPLTENT";
            break;
          case 34:
            result = "R_390_PLTOFF16";
            break;
          case 35:
            result = "R_390_PLTOFF32";
            break;
          case 36:
            result = "R_390_PLTOFF64";
            break;
          case 37:
            result = "R_390_TLS_LOAD";
            break;
          case 38:
            result = "R_390_TLS_GDCALL";
            break;
          case 39:
            result = "R_390_TLS_LDCALL";
            break;
          case 40:
            result = "R_390_TLS_GD32";
            break;
          case 41:
            result = "R_390_TLS_GD64";
            break;
          case 42:
            result = "R_390_TLS_GOTIE12";
            break;
          case 43:
            result = "R_390_TLS_GOTIE32";
            break;
          case 44:
            result = "R_390_TLS_GOTIE64";
            break;
          case 45:
            result = "R_390_TLS_LDM32";
            break;
          case 46:
            result = "R_390_TLS_LDM64";
            break;
          case 47:
            result = "R_390_TLS_IE32";
            break;
          case 48:
            result = "R_390_TLS_IE64";
            break;
          case 49:
            result = "R_390_TLS_IEENT";
            break;
          case 50:
            result = "R_390_TLS_LE32";
            break;
          case 51:
            result = "R_390_TLS_LE64";
            break;
          case 52:
            result = "R_390_TLS_LDO32";
            break;
          case 53:
            result = "R_390_TLS_LDO64";
            break;
          case 54:
            result = "R_390_TLS_DTPMOD";
            break;
          case 55:
            result = "R_390_TLS_DTPOFF";
            break;
          case 56:
            result = "R_390_TLS_TPOFF";
            break;
          case 57:
            result = "R_390_20";
            break;
          case 58:
            result = "R_390_GOT20";
            break;
          case 59:
            result = "R_390_GOTPLT20";
            break;
          case 60:
            result = "R_390_TLS_GOTIE20";
            break;
          case 61:
            result = "R_390_IRELATIVE";
            break;
          case 62:
            result = "R_390_PC12DBL";
            break;
          case 63:
            result = "R_390_PLT12DBL";
            break;
          case 64:
            result = "R_390_PC24DBL";
            break;
          case 65:
            result = "R_390_PLT24DBL";
            break;
          case 250:
            result = "R_390_GNU_VTINHERIT";
            break;
          case 251:
            result = "R_390_GNU_VTENTRY";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x24:
        switch ( a2 )
        {
          case 0:
            result = "R_V800_NONE";
            break;
          case 1:
            result = "R_V800_DIR32";
            break;
          case 7:
            result = "R_V800_HIGH1";
            break;
          case 8:
            result = "R_V800_LOW";
            break;
          case 10:
            result = "R_V800_SDA";
            break;
          case 12:
            result = "R_V800_PIDLOW";
            break;
          case 16:
            result = "R_V800_PIDHIADJ";
            break;
          case 22:
            result = "R_V800_PCR22";
            break;
          case 24:
            result = "R_V800_PICHIGH1";
            break;
          case 25:
            result = "R_V800_PICLOW";
            break;
          case 26:
            result = "R_V800_REL32";
            break;
          case 28:
            result = "R_V800_PICBASE";
            break;
          case 29:
            result = "R_V800_PCR32";
            break;
          case 31:
            result = "R_V800_PCR9";
            break;
          case 32:
            result = "R_V800_DATA2";
            break;
          case 48:
            result = "R_V810_NONE";
            break;
          case 49:
            result = "R_V810_BYTE";
            break;
          case 50:
            result = "R_V810_HWORD";
            break;
          case 51:
            result = "R_V810_WORD";
            break;
          case 52:
            result = "R_V810_WLO";
            break;
          case 53:
            result = "R_V810_WHI";
            break;
          case 54:
            result = "R_V810_WHI1";
            break;
          case 55:
            result = "R_V810_GPBYTE";
            break;
          case 56:
            result = "R_V810_GPHWORD";
            break;
          case 57:
            result = "R_V810_GPWORD";
            break;
          case 58:
            result = "R_V810_GPWLO";
            break;
          case 59:
            result = "R_V810_GPWHI";
            break;
          case 60:
            result = "R_V810_GPWHI1";
            break;
          case 61:
            result = "R_V850_HWLO";
            break;
          case 62:
            result = "R_V850_WLO";
            break;
          case 63:
            result = "R_V850_EP7BIT";
            break;
          case 64:
            result = "R_V850_EPHBYTE";
            break;
          case 65:
            result = "R_V850_EPWBYTE";
            break;
          case 66:
            result = "R_V850_REGHWLO";
            break;
          case 67:
            result = "R_V850_REGWLO";
            break;
          case 68:
            result = "R_V850_GPHWLO";
            break;
          case 69:
            result = "R_V850_GPWLO";
            break;
          case 70:
            result = "R_V850_PCR22";
            break;
          case 71:
            result = "R_V850_BLO";
            break;
          case 72:
            result = "R_V850_EP4BIT";
            break;
          case 73:
            result = "R_V850_EP5BIT";
            break;
          case 74:
            result = "R_V850_REGBLO";
            break;
          case 75:
            result = "R_V850_GPBLO";
            break;
          case 76:
            result = "R_V810_WLO_1";
            break;
          case 77:
            result = "R_V810_GPWLO_1";
            break;
          case 78:
            result = "R_V850_BLO_1";
            break;
          case 79:
            result = "R_V850_HWLO_1";
            break;
          case 80:
            result = "R_V850_WLO_1";
            break;
          case 81:
            result = "R_V850_GPBLO_1";
            break;
          case 82:
            result = "R_V850_GPHWLO_1";
            break;
          case 83:
            result = "R_V850_GPWLO_1";
            break;
          case 84:
            result = "R_V850_EPBLO";
            break;
          case 85:
            result = "R_V850_EPHWLO";
            break;
          case 86:
            result = "R_V850_EPWLO";
            break;
          case 87:
            result = "R_V850_EPWLO_N";
            break;
          case 88:
            result = "R_V850_PC32";
            break;
          case 89:
            result = "R_V850_W23BIT";
            break;
          case 90:
            result = "R_V850_GPW23BIT";
            break;
          case 91:
            result = "R_V850_EPW23BIT";
            break;
          case 92:
            result = "R_V850_B23BIT";
            break;
          case 93:
            result = "R_V850_GPB23BIT";
            break;
          case 94:
            result = "R_V850_EPB23BIT";
            break;
          case 95:
            result = "R_V850_PC16U_R";
            break;
          case 96:
            result = "R_V850_PC17";
            break;
          case 97:
            result = "R_V850_DW8";
            break;
          case 98:
            result = "R_V850_GPDW8";
            break;
          case 99:
            result = "R_V850_EPDW8";
            break;
          case 100:
            result = "R_V850_PC9";
            break;
          case 101:
            result = "R_V810_REGBYTE";
            break;
          case 102:
            result = "R_V810_REGHWORD";
            break;
          case 103:
            result = "R_V810_REGWORD";
            break;
          case 104:
            result = "R_V810_REGWLO";
            break;
          case 105:
            result = "R_V810_REGWHI";
            break;
          case 106:
            result = "R_V810_REGWHI1";
            break;
          case 107:
            result = "R_V850_REGW23BIT";
            break;
          case 108:
            result = "R_V850_REGB23BIT";
            break;
          case 109:
            result = "R_V850_REGDW8";
            break;
          case 110:
            result = "R_V810_EPBYTE";
            break;
          case 111:
            result = "R_V810_EPHWORD";
            break;
          case 112:
            result = "R_V810_EPWORD";
            break;
          case 113:
            result = "R_V850_WLO23";
            break;
          case 114:
            result = "R_V850_WORD_E";
            break;
          case 115:
            result = "R_V850_REGWORD_E";
            break;
          case 116:
            result = "R_V850_WORD";
            break;
          case 117:
            result = "R_V850_GPWORD";
            break;
          case 118:
            result = "R_V850_REGWORD";
            break;
          case 119:
            result = "R_V850_EPWORD";
            break;
          case 120:
            result = "R_V810_TPBYTE";
            break;
          case 121:
            result = "R_V810_TPHWORD";
            break;
          case 122:
            result = "R_V810_TPWORD";
            break;
          case 123:
            result = "R_V810_TPWLO";
            break;
          case 124:
            result = "R_V810_TPWHI";
            break;
          case 125:
            result = "R_V810_TPWHI1";
            break;
          case 126:
            result = "R_V850_TPHWLO";
            break;
          case 127:
            result = "R_V850_TPBLO";
            break;
          case 128:
            result = "R_V810_TPWLO_1";
            break;
          case 129:
            result = "R_V850_TPBLO_1";
            break;
          case 130:
            result = "R_V850_TPHWLO_1";
            break;
          case 131:
            result = "R_V850_TP23BIT";
            break;
          case 132:
            result = "R_V850_TPW23BIT";
            break;
          case 133:
            result = "R_V850_TPDW8";
            break;
          case 134:
            result = "R_V850_D16_S2";
            break;
          case 135:
            result = "R_V850_D16_1_S2";
            break;
          case 136:
            result = "R_V850_GPD16_S2";
            break;
          case 137:
            result = "R_V850_GPD16_1_S2";
            break;
          case 138:
            result = "R_V850_EPD16_S2";
            break;
          case 139:
            result = "R_V850_D16_S3";
            break;
          case 140:
            result = "R_V850_D16_1_S3";
            break;
          case 141:
            result = "R_V850_GPD16_S3";
            break;
          case 142:
            result = "R_V850_GPD16_1_S3";
            break;
          case 143:
            result = "R_V850_EPD16_S3";
            break;
          case 144:
            result = "R_V850_D16_S4";
            break;
          case 145:
            result = "R_V850_D16_1_S4";
            break;
          case 146:
            result = "R_V850_GPD16_S4";
            break;
          case 147:
            result = "R_V850_GPD16_1_S4";
            break;
          case 148:
            result = "R_V850_EPD16_S4";
            break;
          case 160:
            result = "R_V850_ABS32";
            break;
          case 161:
            result = "R_V850_ABS16_U12";
            break;
          case 162:
            result = "R_V850_ABS16_U13";
            break;
          case 163:
            result = "R_V850_ABS16_U14";
            break;
          case 164:
            result = "R_V850_ABS16_U15";
            break;
          case 165:
            result = "R_V850_ABS16";
            break;
          case 166:
            result = "R_V850_ABSWHI";
            break;
          case 167:
            result = "R_V850_ABSWHI1";
            break;
          case 168:
            result = "R_V850_ABSBLO";
            break;
          case 169:
            result = "R_V850_ABSW23BIT";
            break;
          case 170:
            result = "R_V850_ABSB23BIT";
            break;
          case 171:
            result = "R_V850_ABSDW8";
            break;
          case 172:
            result = "R_V850_ABSWLO23";
            break;
          case 173:
            result = "R_V850_ABSWORD_E";
            break;
          case 174:
            result = "R_V850_ABSWORD";
            break;
          case 224:
            result = "R_V850_SYM";
            break;
          case 225:
            result = "R_V850_OPadd";
            break;
          case 226:
            result = "R_V850_OPsub";
            break;
          case 227:
            result = "R_V850_OPsctsize";
            break;
          case 228:
            result = "R_V850_OPscttop";
            break;
          case 229:
            result = "R_V850_JUMPTYPE_RETURN";
            break;
          case 230:
            result = "R_V850_OPChkAndMsk0000FFFC";
            break;
          case 231:
            result = "R_V850_CHKsigned8";
            break;
          case 232:
            result = "R_V850_CHKsigned16";
            break;
          case 233:
            result = "R_V850_CHKsigned23";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x28:
        switch ( a2 )
        {
          case 0:
            result = "R_ARM_NONE";
            break;
          case 1:
            result = "R_ARM_PC24";
            break;
          case 2:
            result = "R_ARM_ABS32";
            break;
          case 3:
            result = "R_ARM_REL32";
            break;
          case 4:
            result = "R_ARM_LDR_PC_G0";
            break;
          case 5:
            result = "R_ARM_ABS16";
            break;
          case 6:
            result = "R_ARM_ABS12";
            break;
          case 7:
            result = "R_ARM_THM_ABS5";
            break;
          case 8:
            result = "R_ARM_ABS8";
            break;
          case 9:
            result = "R_ARM_SBREL32";
            break;
          case 10:
            result = "R_ARM_THM_CALL";
            break;
          case 11:
            result = "R_ARM_THM_PC8";
            break;
          case 12:
            result = "R_ARM_BREL_ADJ";
            break;
          case 13:
            result = "R_ARM_TLS_DESC";
            break;
          case 14:
            result = "R_ARM_THM_SWI8";
            break;
          case 15:
            result = "R_ARM_XPC25";
            break;
          case 16:
            result = "R_ARM_THM_XPC22";
            break;
          case 17:
            result = "R_ARM_TLS_DTPMOD32";
            break;
          case 18:
            result = "R_ARM_TLS_DTPOFF32";
            break;
          case 19:
            result = "R_ARM_TLS_TPOFF32";
            break;
          case 20:
            result = "R_ARM_COPY";
            break;
          case 21:
            result = "R_ARM_GLOB_DAT";
            break;
          case 22:
            result = "R_ARM_JUMP_SLOT";
            break;
          case 23:
            result = "R_ARM_RELATIVE";
            break;
          case 24:
            result = "R_ARM_GOTOFF32";
            break;
          case 25:
            result = "R_ARM_BASE_PREL";
            break;
          case 26:
            result = "R_ARM_GOT_BREL";
            break;
          case 27:
            result = "R_ARM_PLT32";
            break;
          case 28:
            result = "R_ARM_CALL";
            break;
          case 29:
            result = "R_ARM_JUMP24";
            break;
          case 30:
            result = "R_ARM_THM_JUMP24";
            break;
          case 31:
            result = "R_ARM_BASE_ABS";
            break;
          case 32:
            result = "R_ARM_ALU_PCREL7_0";
            break;
          case 33:
            result = "R_ARM_ALU_PCREL15_8";
            break;
          case 34:
            result = "R_ARM_ALU_PCREL23_15";
            break;
          case 35:
            result = "R_ARM_LDR_SBREL_11_0";
            break;
          case 36:
            result = "R_ARM_ALU_SBREL_19_12";
            break;
          case 37:
            result = "R_ARM_ALU_SBREL_27_20";
            break;
          case 38:
            result = "R_ARM_TARGET1";
            break;
          case 39:
            result = "R_ARM_ROSEGREL32";
            break;
          case 40:
            result = "R_ARM_V4BX";
            break;
          case 41:
            result = "R_ARM_TARGET2";
            break;
          case 42:
            result = "R_ARM_PREL31";
            break;
          case 43:
            result = "R_ARM_MOVW_ABS_NC";
            break;
          case 44:
            result = "R_ARM_MOVT_ABS";
            break;
          case 45:
            result = "R_ARM_MOVW_PREL_NC";
            break;
          case 46:
            result = "R_ARM_MOVT_PREL";
            break;
          case 47:
            result = "R_ARM_THM_MOVW_ABS_NC";
            break;
          case 48:
            result = "R_ARM_THM_MOVT_ABS";
            break;
          case 49:
            result = "R_ARM_THM_MOVW_PREL_NC";
            break;
          case 50:
            result = "R_ARM_THM_MOVT_PREL";
            break;
          case 51:
            result = "R_ARM_THM_JUMP19";
            break;
          case 52:
            result = "R_ARM_THM_JUMP6";
            break;
          case 53:
            result = "R_ARM_THM_ALU_PREL_11_0";
            break;
          case 54:
            result = "R_ARM_THM_PC12";
            break;
          case 55:
            result = "R_ARM_ABS32_NOI";
            break;
          case 56:
            result = "R_ARM_REL32_NOI";
            break;
          case 57:
            result = "R_ARM_ALU_PC_G0_NC";
            break;
          case 58:
            result = "R_ARM_ALU_PC_G0";
            break;
          case 59:
            result = "R_ARM_ALU_PC_G1_NC";
            break;
          case 60:
            result = "R_ARM_ALU_PC_G1";
            break;
          case 61:
            result = "R_ARM_ALU_PC_G2";
            break;
          case 62:
            result = "R_ARM_LDR_PC_G1";
            break;
          case 63:
            result = "R_ARM_LDR_PC_G2";
            break;
          case 64:
            result = "R_ARM_LDRS_PC_G0";
            break;
          case 65:
            result = "R_ARM_LDRS_PC_G1";
            break;
          case 66:
            result = "R_ARM_LDRS_PC_G2";
            break;
          case 67:
            result = "R_ARM_LDC_PC_G0";
            break;
          case 68:
            result = "R_ARM_LDC_PC_G1";
            break;
          case 69:
            result = "R_ARM_LDC_PC_G2";
            break;
          case 70:
            result = "R_ARM_ALU_SB_G0_NC";
            break;
          case 71:
            result = "R_ARM_ALU_SB_G0";
            break;
          case 72:
            result = "R_ARM_ALU_SB_G1_NC";
            break;
          case 73:
            result = "R_ARM_ALU_SB_G1";
            break;
          case 74:
            result = "R_ARM_ALU_SB_G2";
            break;
          case 75:
            result = "R_ARM_LDR_SB_G0";
            break;
          case 76:
            result = "R_ARM_LDR_SB_G1";
            break;
          case 77:
            result = "R_ARM_LDR_SB_G2";
            break;
          case 78:
            result = "R_ARM_LDRS_SB_G0";
            break;
          case 79:
            result = "R_ARM_LDRS_SB_G1";
            break;
          case 80:
            result = "R_ARM_LDRS_SB_G2";
            break;
          case 81:
            result = "R_ARM_LDC_SB_G0";
            break;
          case 82:
            result = "R_ARM_LDC_SB_G1";
            break;
          case 83:
            result = "R_ARM_LDC_SB_G2";
            break;
          case 84:
            result = "R_ARM_MOVW_BREL_NC";
            break;
          case 85:
            result = "R_ARM_MOVT_BREL";
            break;
          case 86:
            result = "R_ARM_MOVW_BREL";
            break;
          case 87:
            result = "R_ARM_THM_MOVW_BREL_NC";
            break;
          case 88:
            result = "R_ARM_THM_MOVT_BREL";
            break;
          case 89:
            result = "R_ARM_THM_MOVW_BREL";
            break;
          case 90:
            result = "R_ARM_TLS_GOTDESC";
            break;
          case 91:
            result = "R_ARM_TLS_CALL";
            break;
          case 92:
            result = "R_ARM_TLS_DESCSEQ";
            break;
          case 93:
            result = "R_ARM_THM_TLS_CALL";
            break;
          case 94:
            result = "R_ARM_PLT32_ABS";
            break;
          case 95:
            result = "R_ARM_GOT_ABS";
            break;
          case 96:
            result = "R_ARM_GOT_PREL";
            break;
          case 97:
            result = "R_ARM_GOT_BREL12";
            break;
          case 98:
            result = "R_ARM_GOTOFF12";
            break;
          case 99:
            result = "R_ARM_GOTRELAX";
            break;
          case 100:
            result = "R_ARM_GNU_VTENTRY";
            break;
          case 101:
            result = "R_ARM_GNU_VTINHERIT";
            break;
          case 102:
            result = "R_ARM_THM_JUMP11";
            break;
          case 103:
            result = "R_ARM_THM_JUMP8";
            break;
          case 104:
            result = "R_ARM_TLS_GD32";
            break;
          case 105:
            result = "R_ARM_TLS_LDM32";
            break;
          case 106:
            result = "R_ARM_TLS_LDO32";
            break;
          case 107:
            result = "R_ARM_TLS_IE32";
            break;
          case 108:
            result = "R_ARM_TLS_LE32";
            break;
          case 109:
            result = "R_ARM_TLS_LDO12";
            break;
          case 110:
            result = "R_ARM_TLS_LE12";
            break;
          case 111:
            result = "R_ARM_TLS_IE12GP";
            break;
          case 112:
            result = "R_ARM_PRIVATE_0";
            break;
          case 113:
            result = "R_ARM_PRIVATE_1";
            break;
          case 114:
            result = "R_ARM_PRIVATE_2";
            break;
          case 115:
            result = "R_ARM_PRIVATE_3";
            break;
          case 116:
            result = "R_ARM_PRIVATE_4";
            break;
          case 117:
            result = "R_ARM_PRIVATE_5";
            break;
          case 118:
            result = "R_ARM_PRIVATE_6";
            break;
          case 119:
            result = "R_ARM_PRIVATE_7";
            break;
          case 120:
            result = "R_ARM_PRIVATE_8";
            break;
          case 121:
            result = "R_ARM_PRIVATE_9";
            break;
          case 122:
            result = "R_ARM_PRIVATE_10";
            break;
          case 123:
            result = "R_ARM_PRIVATE_11";
            break;
          case 124:
            result = "R_ARM_PRIVATE_12";
            break;
          case 125:
            result = "R_ARM_PRIVATE_13";
            break;
          case 126:
            result = "R_ARM_PRIVATE_14";
            break;
          case 127:
            result = "R_ARM_PRIVATE_15";
            break;
          case 128:
            result = "R_ARM_ME_TOO";
            break;
          case 129:
            result = "R_ARM_THM_TLS_DESCSEQ16";
            break;
          case 130:
            result = "R_ARM_THM_TLS_DESCSEQ32";
            break;
          case 131:
            result = "R_ARM_THM_GOT_BREL12";
            break;
          case 132:
            result = "R_ARM_THM_ALU_ABS_G0_NC";
            break;
          case 133:
            result = "R_ARM_THM_ALU_ABS_G1_NC";
            break;
          case 134:
            result = "R_ARM_THM_ALU_ABS_G2_NC";
            break;
          case 135:
            result = "R_ARM_THM_ALU_ABS_G3_NC";
            break;
          case 136:
            result = "R_ARM_THM_BF16";
            break;
          case 137:
            result = "R_ARM_THM_BF12";
            break;
          case 138:
            result = "R_ARM_THM_BF18";
            break;
          case 160:
            result = "R_ARM_IRELATIVE";
            break;
          case 249:
            result = "R_ARM_RXPC25";
            break;
          case 250:
            result = "R_ARM_RSBREL32";
            break;
          case 251:
            result = "R_ARM_THM_RPC22";
            break;
          case 252:
            result = "R_ARM_RREL32";
            break;
          case 253:
            result = "R_ARM_RABS32";
            break;
          case 254:
            result = "R_ARM_RPC24";
            break;
          case 255:
            result = "R_ARM_RBASE";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x2A:
        switch ( a2 )
        {
          case 0:
            result = "R_SH_NONE";
            break;
          case 1:
            result = "R_SH_DIR32";
            break;
          case 2:
            result = "R_SH_REL32";
            break;
          case 3:
            result = "R_SH_DIR8WPN";
            break;
          case 4:
            result = "R_SH_IND12W";
            break;
          case 5:
            result = "R_SH_DIR8WPL";
            break;
          case 6:
            result = "R_SH_DIR8WPZ";
            break;
          case 7:
            result = "R_SH_DIR8BP";
            break;
          case 8:
            result = "R_SH_DIR8W";
            break;
          case 9:
            result = "R_SH_DIR8L";
            break;
          case 10:
            result = "R_SH_LOOP_START";
            break;
          case 11:
            result = "R_SH_LOOP_END";
            break;
          case 22:
            result = "R_SH_GNU_VTINHERIT";
            break;
          case 23:
            result = "R_SH_GNU_VTENTRY";
            break;
          case 24:
            result = "R_SH_SWITCH8";
            break;
          case 25:
            result = "R_SH_SWITCH16";
            break;
          case 26:
            result = "R_SH_SWITCH32";
            break;
          case 27:
            result = "R_SH_USES";
            break;
          case 28:
            result = "R_SH_COUNT";
            break;
          case 29:
            result = "R_SH_ALIGN";
            break;
          case 30:
            result = "R_SH_CODE";
            break;
          case 31:
            result = "R_SH_DATA";
            break;
          case 32:
            result = "R_SH_LABEL";
            break;
          case 33:
            result = "R_SH_DIR16";
            break;
          case 34:
            result = "R_SH_DIR8";
            break;
          case 35:
            result = "R_SH_DIR8UL";
            break;
          case 36:
            result = "R_SH_DIR8UW";
            break;
          case 37:
            result = "R_SH_DIR8U";
            break;
          case 38:
            result = "R_SH_DIR8SW";
            break;
          case 39:
            result = "R_SH_DIR8S";
            break;
          case 40:
            result = "R_SH_DIR4UL";
            break;
          case 41:
            result = "R_SH_DIR4UW";
            break;
          case 42:
            result = "R_SH_DIR4U";
            break;
          case 43:
            result = "R_SH_PSHA";
            break;
          case 44:
            result = "R_SH_PSHL";
            break;
          case 45:
            result = "R_SH_DIR5U";
            break;
          case 46:
            result = "R_SH_DIR6U";
            break;
          case 47:
            result = "R_SH_DIR6S";
            break;
          case 48:
            result = "R_SH_DIR10S";
            break;
          case 49:
            result = "R_SH_DIR10SW";
            break;
          case 50:
            result = "R_SH_DIR10SL";
            break;
          case 51:
            result = "R_SH_DIR10SQ";
            break;
          case 52:
            result = "R_SH_DIR16X";
            break;
          case 53:
            result = "R_SH_DIR16S";
            break;
          case 54:
            result = "R_SH_DIR16HI";
            break;
          case 55:
            result = "R_SH_DIR16LO";
            break;
          case 56:
            result = "R_SH_IND16L";
            break;
          case 57:
            result = "R_SH_IND16LM";
            break;
          case 58:
            result = "R_SH_IND32M";
            break;
          case 65:
            result = "R_SH_ABS32";
            break;
          case 66:
            result = "R_SH_ABSREL32";
            break;
          case 67:
            result = "R_SH_ABS8WPN";
            break;
          case 68:
            result = "R_SH_ABSIND12W";
            break;
          case 69:
            result = "R_SH_ABS8WPL";
            break;
          case 70:
            result = "R_SH_ABS8WPZ";
            break;
          case 71:
            result = "R_SH_ABS8BP";
            break;
          case 72:
            result = "R_SH_ABS8W";
            break;
          case 73:
            result = "R_SH_ABS8L";
            break;
          case 97:
            result = "R_SH_ABS16";
            break;
          case 98:
            result = "R_SH_ABS8";
            break;
          case 99:
            result = "R_SH_ABS8UL";
            break;
          case 100:
            result = "R_SH_ABS8UW";
            break;
          case 101:
            result = "R_SH_ABS8U";
            break;
          case 102:
            result = "R_SH_ABS8SW";
            break;
          case 103:
            result = "R_SH_ABS8S";
            break;
          case 104:
            result = "R_SH_ABS4UL";
            break;
          case 105:
            result = "R_SH_ABS4UW";
            break;
          case 106:
            result = "R_SH_ABS4U";
            break;
          case 107:
            result = "R_SH_ABSphsa";
            break;
          case 108:
            result = "R_SH_ABSpshl";
            break;
          case 109:
            result = "R_SH_ABS5U";
            break;
          case 110:
            result = "R_SH_ABS6U";
            break;
          case 111:
            result = "R_SH_ABS6S";
            break;
          case 112:
            result = "R_SH_ABS10S";
            break;
          case 113:
            result = "R_SH_ABS10SW";
            break;
          case 114:
            result = "R_SH_ABS10SL";
            break;
          case 115:
            result = "R_SH_ABS10SQ";
            break;
          case 116:
            result = "R_SH_ABS16X";
            break;
          case 118:
            result = "R_SH_ABS16HI";
            break;
          case 119:
            result = "R_SH_ABS16LO";
            break;
          case 120:
            result = "R_SH_ABSIND16L";
            break;
          case 121:
            result = "R_SH_ABSIND16LM";
            break;
          case 122:
            result = "R_SH_ABS32M";
            break;
          case 128:
            result = "R_SH_SYM";
            break;
          case 129:
            result = "R_SH_OPneg";
            break;
          case 130:
            result = "R_SH_OPadd";
            break;
          case 131:
            result = "R_SH_OPsub";
            break;
          case 132:
            result = "R_SH_OPmul";
            break;
          case 133:
            result = "R_SH_OPdiv";
            break;
          case 134:
            result = "R_SH_OPshla";
            break;
          case 135:
            result = "R_SH_OPshra";
            break;
          case 136:
            result = "R_SH_OPsctsize";
            break;
          case 137:
            result = "R_SH_OPhword";
            break;
          case 138:
            result = "R_SH_OPlword";
            break;
          case 139:
            result = "R_SH_OPhigh";
            break;
          case 140:
            result = "R_SH_OPlow";
            break;
          case 141:
            result = "R_SH_OPscttop";
            break;
          case 142:
            result = "R_SH_OPbrt";
            break;
          case 144:
            result = "R_SH_TLS_GD_32";
            break;
          case 145:
            result = "R_SH_TLS_LD_32";
            break;
          case 146:
            result = "R_SH_TLS_LDO_32";
            break;
          case 147:
            result = "R_SH_TLS_IE_32";
            break;
          case 148:
            result = "R_SH_TLS_LE_32";
            break;
          case 149:
            result = "R_SH_TLS_DTPMOD32";
            break;
          case 150:
            result = "R_SH_TLS_DTPOFF32";
            break;
          case 151:
            result = "R_SH_TLS_TPOFF32";
            break;
          case 160:
            result = "R_SH_GOT32";
            break;
          case 161:
            result = "R_SH_PLT32";
            break;
          case 162:
            result = "R_SH_COPY";
            break;
          case 163:
            result = "R_SH_GLOB_DAT";
            break;
          case 164:
            result = "R_SH_JMP_SLOT";
            break;
          case 165:
            result = "R_SH_RELATIVE";
            break;
          case 166:
            result = "R_SH_GOTOFF";
            break;
          case 167:
            result = "R_SH_GOTPC";
            break;
          case 168:
            result = "R_SH_GOTPLT32";
            break;
          case 169:
            result = "R_SH_GOT_LOW16";
            break;
          case 170:
            result = "R_SH_GOT_MEDLOW16";
            break;
          case 171:
            result = "R_SH_GOT_MEDHI16";
            break;
          case 172:
            result = "R_SH_GOT_HI16";
            break;
          case 173:
            result = "R_SH_GOTPLT_LOW16";
            break;
          case 174:
            result = "R_SH_GOTPLT_MEDLOW16";
            break;
          case 175:
            result = "R_SH_GOTPLT_MEDHI16";
            break;
          case 176:
            result = "R_SH_GOTPLT_HI16";
            break;
          case 177:
            result = "R_SH_PLT_LOW16";
            break;
          case 178:
            result = "R_SH_PLT_MEDLOW16";
            break;
          case 179:
            result = "R_SH_PLT_MEDHI16";
            break;
          case 180:
            result = "R_SH_PLT_HI16";
            break;
          case 181:
            result = "R_SH_GOTOFF_LOW16";
            break;
          case 182:
            result = "R_SH_GOTOFF_MEDLOW16";
            break;
          case 183:
            result = "R_SH_GOTOFF_MEDHI16";
            break;
          case 184:
            result = "R_SH_GOTOFF_HI16";
            break;
          case 185:
            result = "R_SH_GOTPC_LOW16";
            break;
          case 186:
            result = "R_SH_GOTPC_MEDLOW16";
            break;
          case 187:
            result = "R_SH_GOTPC_MEDHI16";
            break;
          case 188:
            result = "R_SH_GOTPC_HI16";
            break;
          case 189:
            result = "R_SH_GOT10BY4";
            break;
          case 190:
            result = "R_SH_GOTPLT10BY4";
            break;
          case 191:
            result = "R_SH_GOT10BY8";
            break;
          case 192:
            result = "R_SH_GOTPLT10BY8";
            break;
          case 193:
            result = "R_SH_COPY64";
            break;
          case 194:
            result = "R_SH_GLOB_DAT64";
            break;
          case 195:
            result = "R_SH_JMP_SLOT64";
            break;
          case 196:
            result = "R_SH_RELATIVE64";
            break;
          case 201:
            result = "R_SH_GOT20";
            break;
          case 202:
            result = "R_SH_GOTOFF20";
            break;
          case 203:
            result = "R_SH_GOTFUNCDESC";
            break;
          case 204:
            result = "R_SH_GOTFUNCDESC20";
            break;
          case 205:
            result = "R_SH_GOTOFFFUNCDESC";
            break;
          case 206:
            result = "R_SH_GOTOFFFUNCDESC20";
            break;
          case 207:
            result = "R_SH_FUNCDESC";
            break;
          case 208:
            result = "R_SH_FUNCDESC_VALUE";
            break;
          case 242:
            result = "R_SH_SHMEDIA_CODE";
            break;
          case 243:
            result = "R_SH_PT_16";
            break;
          case 244:
            result = "R_SH_IMMS16";
            break;
          case 245:
            result = "R_SH_IMMU16";
            break;
          case 246:
            result = "R_SH_IMM_LOW16";
            break;
          case 247:
            result = "R_SH_IMM_LOW16_PCREL";
            break;
          case 248:
            result = "R_SH_IMM_MEDLOW16";
            break;
          case 249:
            result = "R_SH_IMM_MEDLOW16_PCREL";
            break;
          case 250:
            result = "R_SH_IMM_MEDHI16";
            break;
          case 251:
            result = "R_SH_IMM_MEDHI16_PCREL";
            break;
          case 252:
            result = "R_SH_IMM_HI16";
            break;
          case 253:
            result = "R_SH_IMM_HI16_PCREL";
            break;
          case 254:
            result = "R_SH_64";
            break;
          case 255:
            result = "R_SH_64_PCREL";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x2C:
        switch ( a2 )
        {
          case 0:
            result = "R_TRICORE_NONE";
            break;
          case 1:
            result = "R_TRICORE_32REL";
            break;
          case 2:
            result = "R_TRICORE_32ABS";
            break;
          case 3:
            result = "R_TRICORE_24REL";
            break;
          case 4:
            result = "R_TRICORE_24ABS";
            break;
          case 5:
            result = "R_TRICORE_16SM";
            break;
          case 6:
            result = "R_TRICORE_HI";
            break;
          case 7:
            result = "R_TRICORE_LO";
            break;
          case 8:
            result = "R_TRICORE_LO2";
            break;
          case 9:
            result = "R_TRICORE_18ABS";
            break;
          case 10:
            result = "R_TRICORE_10SM";
            break;
          case 11:
            result = "R_TRICORE_15REL";
            break;
          case 12:
            result = "R_TRICORE_10LI";
            break;
          case 13:
            result = "R_TRICORE_16LI";
            break;
          case 14:
            result = "R_TRICORE_10A8";
            break;
          case 15:
            result = "R_TRICORE_16A8";
            break;
          case 16:
            result = "R_TRICORE_10A9";
            break;
          case 17:
            result = "R_TRICORE_16A9";
            break;
          case 25:
            result = "R_TRICORE_PCPHI";
            break;
          case 26:
            result = "R_TRICORE_PCPLO";
            break;
          case 27:
            result = "R_TRICORE_PCPPAGE";
            break;
          case 28:
            result = "R_TRICORE_PCPOFF";
            break;
          case 29:
            result = "R_TRICORE_PCPTEXT";
            break;
          case 30:
            result = "R_TRICORE_PCP32ABS";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x2D:
        switch ( a2 )
        {
          case 0:
            result = "R_ARC_NONE";
            break;
          case 1:
          case 4:
            result = "R_ARC_32";
            break;
          case 2:
          case 5:
            result = "R_ARC_B26";
            break;
          case 3:
          case 6:
            result = "R_ARC_B22_PCREL";
            break;
          case 7:
            result = "R_ARC_H30";
            break;
          case 8:
            result = "R_ARC_N8";
            break;
          case 9:
            result = "R_ARC_N16";
            break;
          case 10:
            result = "R_ARC_N24";
            break;
          case 11:
            result = "R_ARC_N32";
            break;
          case 12:
            result = "R_ARC_SDA";
            break;
          case 13:
            result = "R_ARC_SECTOFF";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x2E:
      case 0x2F:
      case 0x30:
        switch ( a2 )
        {
          case 0:
            result = "R_H8_NONE";
            break;
          case 1:
            result = "R_H8_DIR32";
            break;
          case 2:
            result = "R_H8_DIR32_28";
            break;
          case 3:
            result = "R_H8_DIR32_24";
            break;
          case 4:
            result = "R_H8_DIR32_16";
            break;
          case 6:
            result = "R_H8_DIR32U";
            break;
          case 7:
            result = "R_H8_DIR32U_28";
            break;
          case 8:
            result = "R_H8_DIR32U_24";
            break;
          case 9:
            result = "R_H8_DIR32U_20";
            break;
          case 10:
            result = "R_H8_DIR32U_16";
            break;
          case 11:
            result = "R_H8_DIR24";
            break;
          case 12:
            result = "R_H8_DIR24_20";
            break;
          case 13:
            result = "R_H8_DIR24_16";
            break;
          case 14:
            result = "R_H8_DIR24U";
            break;
          case 15:
            result = "R_H8_DIR24U_20";
            break;
          case 16:
            result = "R_H8_DIR24U_16";
            break;
          case 17:
            result = "R_H8_DIR16";
            break;
          case 18:
            result = "R_H8_DIR16U";
            break;
          case 19:
            result = "R_H8_DIR16S_32";
            break;
          case 20:
            result = "R_H8_DIR16S_28";
            break;
          case 21:
            result = "R_H8_DIR16S_24";
            break;
          case 22:
            result = "R_H8_DIR16S_20";
            break;
          case 23:
            result = "R_H8_DIR16S";
            break;
          case 24:
            result = "R_H8_DIR8";
            break;
          case 25:
            result = "R_H8_DIR8U";
            break;
          case 26:
            result = "R_H8_DIR8Z_32";
            break;
          case 27:
            result = "R_H8_DIR8Z_28";
            break;
          case 28:
            result = "R_H8_DIR8Z_24";
            break;
          case 29:
            result = "R_H8_DIR8Z_20";
            break;
          case 30:
            result = "R_H8_DIR8Z_16";
            break;
          case 31:
            result = "R_H8_PCREL16";
            break;
          case 32:
            result = "R_H8_PCREL8";
            break;
          case 33:
            result = "R_H8_BPOS";
            break;
          case 34:
            result = "R_H8_FIRST_INVALID_DIR_RELOC";
            break;
          case 58:
            result = "R_H8_LAST_INVALID_DIR_RELOC";
            break;
          case 59:
            result = "R_H8_DIR16A8";
            break;
          case 60:
            result = "R_H8_DIR16R8";
            break;
          case 61:
            result = "R_H8_DIR24A8";
            break;
          case 62:
            result = "R_H8_DIR24R8";
            break;
          case 63:
            result = "R_H8_DIR32A16";
            break;
          case 64:
            result = "R_H8_DISP32A16";
            break;
          case 65:
            result = "R_H8_ABS32";
            break;
          case 127:
            result = "R_H8_ABS32A16";
            break;
          case 128:
            result = "R_H8_SYM";
            break;
          case 129:
            result = "R_H8_OPneg";
            break;
          case 130:
            result = "R_H8_OPadd";
            break;
          case 131:
            result = "R_H8_OPsub";
            break;
          case 132:
            result = "R_H8_OPmul";
            break;
          case 133:
            result = "R_H8_OPdiv";
            break;
          case 134:
            result = "R_H8_OPshla";
            break;
          case 135:
            result = "R_H8_OPshra";
            break;
          case 136:
            result = "R_H8_OPsctsize";
            break;
          case 137:
            result = "R_H8_OPhword";
            break;
          case 138:
            result = "R_H8_OPlword";
            break;
          case 139:
            result = "R_H8_OPhigh";
            break;
          case 140:
            result = "R_H8_OPlow";
            break;
          case 141:
            result = "R_H8_OPscttop";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x32:
        switch ( a2 )
        {
          case 0:
            result = "R_IA64_NONE";
            break;
          case 33:
            result = "R_IA64_IMM14";
            break;
          case 34:
            result = "R_IA64_IMM22";
            break;
          case 35:
            result = "R_IA64_IMM64";
            break;
          case 36:
            result = "R_IA64_DIR32MSB";
            break;
          case 37:
            result = "R_IA64_DIR32LSB";
            break;
          case 38:
            result = "R_IA64_DIR64MSB";
            break;
          case 39:
            result = "R_IA64_DIR64LSB";
            break;
          case 42:
            result = "R_IA64_GPREL22";
            break;
          case 43:
            result = "R_IA64_GPREL64I";
            break;
          case 44:
            result = "R_IA64_GPREL32MSB";
            break;
          case 45:
            result = "R_IA64_GPREL32LSB";
            break;
          case 46:
            result = "R_IA64_GPREL64MSB";
            break;
          case 47:
            result = "R_IA64_GPREL64LSB";
            break;
          case 50:
            result = "R_IA64_LTOFF22";
            break;
          case 51:
            result = "R_IA64_LTOFF64I";
            break;
          case 58:
            result = "R_IA64_PLTOFF22";
            break;
          case 59:
            result = "R_IA64_PLTOFF64I";
            break;
          case 62:
            result = "R_IA64_PLTOFF64MSB";
            break;
          case 63:
            result = "R_IA64_PLTOFF64LSB";
            break;
          case 67:
            result = "R_IA64_FPTR64I";
            break;
          case 68:
            result = "R_IA64_FPTR32MSB";
            break;
          case 69:
            result = "R_IA64_FPTR32LSB";
            break;
          case 70:
            result = "R_IA64_FPTR64MSB";
            break;
          case 71:
            result = "R_IA64_FPTR64LSB";
            break;
          case 72:
            result = "R_IA64_PCREL60B";
            break;
          case 73:
            result = "R_IA64_PCREL21B";
            break;
          case 74:
            result = "R_IA64_PCREL21M";
            break;
          case 75:
            result = "R_IA64_PCREL21F";
            break;
          case 76:
            result = "R_IA64_PCREL32MSB";
            break;
          case 77:
            result = "R_IA64_PCREL32LSB";
            break;
          case 78:
            result = "R_IA64_PCREL64MSB";
            break;
          case 79:
            result = "R_IA64_PCREL64LSB";
            break;
          case 82:
            result = "R_IA64_LTOFF_FPTR22";
            break;
          case 83:
            result = "R_IA64_LTOFF_FPTR64I";
            break;
          case 84:
            result = "R_IA64_LTOFF_FPTR32MSB";
            break;
          case 85:
            result = "R_IA64_LTOFF_FPTR32LSB";
            break;
          case 86:
            result = "R_IA64_LTOFF_FPTR64MSB";
            break;
          case 87:
            result = "R_IA64_LTOFF_FPTR64LSB";
            break;
          case 88:
            result = "R_IA64_SEGBASE";
            break;
          case 92:
            result = "R_IA64_SEGREL32MSB";
            break;
          case 93:
            result = "R_IA64_SEGREL32LSB";
            break;
          case 94:
            result = "R_IA64_SEGREL64MSB";
            break;
          case 95:
            result = "R_IA64_SEGREL64LSB";
            break;
          case 100:
            result = "R_IA64_SECREL32MSB";
            break;
          case 101:
            result = "R_IA64_SECREL32LSB";
            break;
          case 102:
            result = "R_IA64_SECREL64MSB";
            break;
          case 103:
            result = "R_IA64_SECREL64LSB";
            break;
          case 108:
            result = "R_IA64_REL32MSB";
            break;
          case 109:
            result = "R_IA64_REL32LSB";
            break;
          case 110:
            result = "R_IA64_REL64MSB";
            break;
          case 111:
            result = "R_IA64_REL64LSB";
            break;
          case 116:
            result = "R_IA64_LTV32MSB";
            break;
          case 117:
            result = "R_IA64_LTV32LSB";
            break;
          case 118:
            result = "R_IA64_LTV64MSB";
            break;
          case 119:
            result = "R_IA64_LTV64LSB";
            break;
          case 121:
            result = "R_IA64_PCREL21BI";
            break;
          case 122:
            result = "R_IA64_PCREL22";
            break;
          case 123:
            result = "R_IA64_PCREL64I";
            break;
          case 128:
            result = "R_IA64_IPLTMSB";
            break;
          case 129:
            result = "R_IA64_IPLTLSB";
            break;
          case 130:
            result = "R_IA64_EPLTMSB";
            break;
          case 131:
            result = "R_IA64_EPLTLSB";
            break;
          case 132:
            result = "R_IA64_COPY";
            break;
          case 133:
            result = "R_IA64_SUB";
            break;
          case 134:
            result = "R_IA64_LTOFF22X";
            break;
          case 135:
            result = "R_IA64_LDXMOV";
            break;
          case 145:
            result = "R_IA64_TPREL14";
            break;
          case 146:
            result = "R_IA64_TPREL22";
            break;
          case 147:
            result = "R_IA64_TPREL64I";
            break;
          case 150:
            result = "R_IA64_TPREL64MSB";
            break;
          case 151:
            result = "R_IA64_TPREL64LSB";
            break;
          case 154:
            result = "R_IA64_LTOFF_TP22";
            break;
          case 166:
            result = "R_IA64_DTPMOD64MSB";
            break;
          case 167:
            result = "R_IA64_DTPMOD64LSB";
            break;
          case 170:
            result = "R_IA64_LTOFF_DTPMOD22";
            break;
          case 177:
            result = "R_IA64_DTPREL14";
            break;
          case 178:
            result = "R_IA64_DTPREL22";
            break;
          case 179:
            result = "R_IA64_DTPREL64I";
            break;
          case 180:
            result = "R_IA64_DTPREL32MSB";
            break;
          case 181:
            result = "R_IA64_DTPREL32LSB";
            break;
          case 182:
            result = "R_IA64_DTPREL64MSB";
            break;
          case 183:
            result = "R_IA64_DTPREL64LSB";
            break;
          case 186:
            result = "R_IA64_LTOFF_DTPREL22";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x35:
        switch ( a2 )
        {
          case 0:
            result = "R_M68HC11_NONE";
            break;
          case 1:
            result = "R_M68HC11_8";
            break;
          case 2:
            result = "R_M68HC11_HI8";
            break;
          case 3:
            result = "R_M68HC11_LO8";
            break;
          case 4:
            result = "R_M68HC11_PCREL_8";
            break;
          case 5:
            result = "R_M68HC11_16";
            break;
          case 6:
            result = "R_M68HC11_32";
            break;
          case 7:
            result = "R_M68HC11_3B";
            break;
          case 8:
            result = "R_M68HC11_PCREL_16";
            break;
          case 9:
            result = "R_M68HC11_GNU_VTINHERIT";
            break;
          case 10:
            result = "R_M68HC11_GNU_VTENTRY";
            break;
          case 11:
            result = "R_M68HC11_24";
            break;
          case 12:
            result = "R_M68HC11_LO16";
            break;
          case 13:
            result = "R_M68HC11_PAGE";
            break;
          case 20:
            result = "R_M68HC11_RL_JUMP";
            break;
          case 21:
            result = "R_M68HC11_RL_GROUP";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x3E:
        switch ( a2 )
        {
          case 0:
            result = "R_X86_64_NONE";
            break;
          case 1:
            result = "R_X86_64_64";
            break;
          case 2:
            result = "R_X86_64_PC32";
            break;
          case 3:
            result = "R_X86_64_GOT32";
            break;
          case 4:
            result = "R_X86_64_PLT32";
            break;
          case 5:
            result = "R_X86_64_COPY";
            break;
          case 6:
            result = "R_X86_64_GLOB_DAT";
            break;
          case 7:
            result = "R_X86_64_JUMP_SLOT";
            break;
          case 8:
            result = "R_X86_64_RELATIVE";
            break;
          case 9:
            result = "R_X86_64_GOTPCREL";
            break;
          case 10:
            result = "R_X86_64_32";
            break;
          case 11:
            result = "R_X86_64_32S";
            break;
          case 12:
            result = "R_X86_64_16";
            break;
          case 13:
            result = "R_X86_64_PC16";
            break;
          case 14:
            result = "R_X86_64_8";
            break;
          case 15:
            result = "R_X86_64_PC8";
            break;
          case 16:
            result = "R_X86_64_DTPMOD64";
            break;
          case 17:
            result = "R_X86_64_DTPOFF64";
            break;
          case 18:
            result = "R_X86_64_TPOFF64";
            break;
          case 19:
            result = "R_X86_64_TLSGD";
            break;
          case 20:
            result = "R_X86_64_TLSLD";
            break;
          case 21:
            result = "R_X86_64_DTPOFF32";
            break;
          case 22:
            result = "R_X86_64_GOTTPOFF";
            break;
          case 23:
            result = "R_X86_64_TPOFF32";
            break;
          case 24:
            result = "R_X86_64_PC64";
            break;
          case 25:
            result = "R_X86_64_GOTOFF64";
            break;
          case 26:
            result = "R_X86_64_GOTPC32";
            break;
          case 27:
            result = "R_X86_64_GOT64";
            break;
          case 28:
            result = "R_X86_64_GOTPCREL64";
            break;
          case 29:
            result = "R_X86_64_GOTPC64";
            break;
          case 30:
            result = "R_X86_64_GOTPLT64";
            break;
          case 31:
            result = "R_X86_64_PLTOFF64";
            break;
          case 32:
            result = "R_X86_64_SIZE32";
            break;
          case 33:
            result = "R_X86_64_SIZE64";
            break;
          case 34:
            result = "R_X86_64_GOTPC32_TLSDESC";
            break;
          case 35:
            result = "R_X86_64_TLSDESC_CALL";
            break;
          case 36:
            result = "R_X86_64_TLSDESC";
            break;
          case 37:
            result = "R_X86_64_IRELATIVE";
            break;
          case 38:
            result = "R_X86_64_RELATIVE64";
            break;
          case 39:
            result = "R_X86_64_PC32_BND";
            break;
          case 40:
            result = "R_X86_64_PLT32_BND";
            break;
          case 41:
            result = "R_X86_64_GOTPCRELX";
            break;
          case 42:
            result = "R_X86_64_REX_GOTPCRELX";
            break;
          case 250:
            result = "R_X86_64_GNU_VTINHERIT";
            break;
          case 251:
            result = "R_X86_64_GNU_VTENTRY";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x43:
        switch ( a2 )
        {
          case 0:
            result = "R_ST9_none";
            break;
          case 1:
            result = "R_ST9_2_DPR";
            break;
          case 2:
            result = "R_ST9_2_FLOAT_DPR";
            break;
          case 3:
            result = "R_ST9_2_DPR_REV";
            break;
          case 4:
            result = "R_ST9_2_FLOAT_DPR_REV";
            break;
          case 5:
            result = "R_ST9_6_SEG";
            break;
          case 6:
            result = "R_ST9_8";
            break;
          case 7:
            result = "R_ST9_8_PCREL";
            break;
          case 8:
            result = "R_ST9_8_PAG";
            break;
          case 9:
            result = "R_ST9_8_CPL";
            break;
          case 10:
            result = "R_ST9_14_POF";
            break;
          case 11:
            result = "R_ST9_14_POF_REV";
            break;
          case 12:
            result = "R_ST9_16_SOF";
            break;
          case 13:
            result = "R_ST9_16_SOF_REV";
            break;
          case 14:
            result = "R_ST9_16_EXTERN";
            break;
          case 15:
            result = "R_ST9_16_EXTERN_REV";
            break;
          case 16:
            result = "R_ST9_8_REG";
            break;
          case 17:
            result = "R_ST9_16_REG";
            break;
          case 18:
            result = "R_ST9_32";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x53:
        switch ( a2 )
        {
          case 0:
            result = "R_AVR_NONE";
            break;
          case 1:
            result = "R_AVR_32";
            break;
          case 2:
            result = "R_AVR_7_PCREL";
            break;
          case 3:
            result = "R_AVR_13_PCREL";
            break;
          case 4:
            result = "R_AVR_16";
            break;
          case 5:
            result = "R_AVR_16PM";
            break;
          case 6:
            result = "R_AVR_LO8_LDI";
            break;
          case 7:
            result = "R_AVR_HI8_LDI";
            break;
          case 8:
            result = "R_AVR_HH8_LDI";
            break;
          case 9:
            result = "R_AVR_LO8_LDI_NEG";
            break;
          case 10:
            result = "R_AVR_HI8_LDI_NEG";
            break;
          case 11:
            result = "R_AVR_HH8_LDI_NEG";
            break;
          case 12:
            result = "R_AVR_LO8_LDI_PM";
            break;
          case 13:
            result = "R_AVR_HI8_LDI_PM";
            break;
          case 14:
            result = "R_AVR_HH8_LDI_PM";
            break;
          case 15:
            result = "R_AVR_LO8_LDI_PM_NEG";
            break;
          case 16:
            result = "R_AVR_HI8_LDI_PM_NEG";
            break;
          case 17:
            result = "R_AVR_HH8_LDI_PM_NEG";
            break;
          case 18:
            result = "R_AVR_CALL";
            break;
          case 19:
            result = "R_AVR_LDI";
            break;
          case 20:
            result = "R_AVR_6";
            break;
          case 21:
            result = "R_AVR_6_ADIW";
            break;
          case 22:
            result = "R_AVR_MS8_LDI";
            break;
          case 23:
            result = "R_AVR_MS8_LDI_NEG";
            break;
          case 24:
            result = "R_AVR_LO8_LDI_GS";
            break;
          case 25:
            result = "R_AVR_HI8_LDI_GS";
            break;
          case 26:
            result = "R_AVR_8";
            break;
          case 27:
            result = "R_AVR_8_LO8";
            break;
          case 28:
            result = "R_AVR_8_HI8";
            break;
          case 29:
            result = "R_AVR_8_HLO8";
            break;
          case 30:
            result = "R_AVR_DIFF8";
            break;
          case 31:
            result = "R_AVR_DIFF16";
            break;
          case 32:
            result = "R_AVR_DIFF32";
            break;
          case 33:
            result = "R_AVR_LDS_STS_16";
            break;
          case 34:
            result = "R_AVR_PORT6";
            break;
          case 35:
            result = "R_AVR_PORT5";
            break;
          case 36:
            result = "R_AVR_32_PCREL";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x54:
        switch ( a2 )
        {
          case 0:
            result = "R_FR_NONE";
            break;
          case 1:
            result = "R_FR_8";
            break;
          case 2:
            result = "R_FR_20";
            break;
          case 3:
            result = "R_FR_32";
            break;
          case 4:
            result = "R_FR_48";
            break;
          case 5:
            result = "R_FR_6_IN_4";
            break;
          case 6:
            result = "R_FR_8_IN_8";
            break;
          case 7:
            result = "R_FR_9_IN_8";
            break;
          case 8:
            result = "R_FR_10_IN_8";
            break;
          case 9:
            result = "R_FR_9_PCREL";
            break;
          case 10:
            result = "R_FR_12_PCREL";
            break;
          case 11:
            result = "R_FR_GNU_VTINHERIT";
            break;
          case 12:
            result = "R_FR_GNU_VTENTRY";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x57:
        switch ( a2 )
        {
          case 0:
            result = "R_GNU850_NONE";
            break;
          case 1:
            result = "R_GNU850_9_PCREL";
            break;
          case 2:
            result = "R_GNU850_22_PCREL";
            break;
          case 3:
            result = "R_GNU850_HI16_S";
            break;
          case 4:
            result = "R_GNU850_HI16";
            break;
          case 5:
            result = "R_GNU850_LO16";
            break;
          case 6:
            result = "R_GNU850_ABS32";
            break;
          case 7:
            result = "R_GNU850_16";
            break;
          case 8:
            result = "R_GNU850_8";
            break;
          case 9:
            result = "R_GNU850_SDA_16_16_OFFSET";
            break;
          case 10:
            result = "R_GNU850_SDA_15_16_OFFSET";
            break;
          case 11:
            result = "R_GNU850_ZDA_16_16_OFFSET";
            break;
          case 12:
            result = "R_GNU850_ZDA_15_16_OFFSET";
            break;
          case 13:
            result = "R_GNU850_TDA_6_8_OFFSET";
            break;
          case 14:
            result = "R_GNU850_TDA_7_8_OFFSET";
            break;
          case 15:
            result = "R_GNU850_TDA_7_7_OFFSET";
            break;
          case 16:
            result = "R_GNU850_TDA_16_16_OFFSET";
            break;
          case 17:
            result = "R_GNU850_TDA_4_5_OFFSET";
            break;
          case 18:
            result = "R_GNU850_TDA_4_4_OFFSET";
            break;
          case 19:
            result = "R_GNU850_SDA_16_16_SPLIT_OFFSET";
            break;
          case 20:
            result = "R_GNU850_ZDA_16_16_SPLIT_OFFSET";
            break;
          case 21:
            result = "R_GNU850_CALLT_6_7_OFFSET";
            break;
          case 22:
            result = "R_GNU850_CALLT_16_16_OFFSET";
            break;
          case 23:
            result = "R_GNU850_GNU_VTINHERIT";
            break;
          case 24:
            result = "R_GNU850_GNU_VTENTRY";
            break;
          case 25:
            result = "R_GNU850_LONGCALL";
            break;
          case 26:
            result = "R_GNU850_LONGJUMP";
            break;
          case 27:
            result = "R_GNU850_ALIGN";
            break;
          case 28:
            result = "R_GNU850_REL32";
            break;
          case 29:
            result = "R_GNU850_LO16_SPLIT_OFFSET";
            break;
          case 30:
            result = "R_GNU850_16_PCREL";
            break;
          case 31:
            result = "R_GNU850_17_PCREL";
            break;
          case 32:
            result = "R_GNU850_23";
            break;
          case 33:
            result = "R_GNU850_32_PCREL";
            break;
          case 34:
            result = "R_GNU850_32_ABS";
            break;
          case 35:
            result = "R_GNU850_16_SPLIT_OFFSET";
            break;
          case 36:
            result = "R_GNU850_16_S1";
            break;
          case 37:
            result = "R_GNU850_LO16_S1";
            break;
          case 38:
            result = "R_GNU850_CALLT_15_16_OFFSET";
            break;
          case 39:
            result = "R_GNU850_32_GOTPCREL";
            break;
          case 40:
            result = "R_GNU850_16_GOT";
            break;
          case 41:
            result = "R_GNU850_32_GOT";
            break;
          case 42:
            result = "R_GNU850_22_PLT";
            break;
          case 43:
            result = "R_GNU850_32_PLT";
            break;
          case 44:
            result = "R_GNU850_COPY";
            break;
          case 45:
            result = "R_GNU850_GLOB_DAT";
            break;
          case 46:
            result = "R_GNU850_JMP_SLOT";
            break;
          case 47:
            result = "R_GNU850_RELATIVE";
            break;
          case 48:
            result = "R_GNU850_16_GOTOFF";
            break;
          case 49:
            result = "R_GNU850_32_GOTOFF";
            break;
          case 50:
            result = "R_GNU850_CODE";
            break;
          case 51:
            result = "R_GNU850_DATA";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x58:
        switch ( a2 )
        {
          case 0:
            result = "R_M32R_NONE";
            break;
          case 1:
            result = "R_M32R_16";
            break;
          case 2:
            result = "R_M32R_32";
            break;
          case 3:
            result = "R_M32R_24";
            break;
          case 4:
            result = "R_M32R_10_PCREL";
            break;
          case 5:
            result = "R_M32R_18_PCREL";
            break;
          case 6:
            result = "R_M32R_26_PCREL";
            break;
          case 7:
            result = "R_M32R_HI16_ULO";
            break;
          case 8:
            result = "R_M32R_HI16_SLO";
            break;
          case 9:
            result = "R_M32R_LO16";
            break;
          case 10:
            result = "R_M32R_SDA16";
            break;
          case 11:
            result = "R_M32R_GNU_VTINHERIT";
            break;
          case 12:
            result = "R_M32R_GNU_VTENTRY";
            break;
          case 33:
            result = "R_M32R_16_RELA";
            break;
          case 34:
            result = "R_M32R_32_RELA";
            break;
          case 35:
            result = "R_M32R_24_RELA";
            break;
          case 36:
            result = "R_M32R_10_PCREL_RELA";
            break;
          case 37:
            result = "R_M32R_18_PCREL_RELA";
            break;
          case 38:
            result = "R_M32R_26_PCREL_RELA";
            break;
          case 39:
            result = "R_M32R_HI16_ULO_RELA";
            break;
          case 40:
            result = "R_M32R_HI16_SLO_RELA";
            break;
          case 41:
            result = "R_M32R_LO16_RELA";
            break;
          case 42:
            result = "R_M32R_SDA16_RELA";
            break;
          case 43:
            result = "R_M32R_RELA_GNU_VTINHERIT";
            break;
          case 44:
            result = "R_M32R_RELA_GNU_VTENTRY";
            break;
          case 45:
            result = "R_M32R_REL32";
            break;
          case 48:
            result = "R_M32R_GOT24";
            break;
          case 49:
            result = "R_M32R_26_PLTREL";
            break;
          case 50:
            result = "R_M32R_COPY";
            break;
          case 51:
            result = "R_M32R_GLOB_DAT";
            break;
          case 52:
            result = "R_M32R_JMP_SLOT";
            break;
          case 53:
            result = "R_M32R_RELATIVE";
            break;
          case 54:
            result = "R_M32R_GOTOFF";
            break;
          case 55:
            result = "R_M32R_GOTPC24";
            break;
          case 56:
            result = "R_M32R_GOT16_HI_ULO";
            break;
          case 57:
            result = "R_M32R_GOT16_HI_SLO";
            break;
          case 58:
            result = "R_M32R_GOT16_LO";
            break;
          case 59:
            result = "R_M32R_GOTPC_HI_ULO";
            break;
          case 60:
            result = "R_M32R_GOTPC_HI_SLO";
            break;
          case 61:
            result = "R_M32R_GOTPC_LO";
            break;
          case 62:
            result = "R_M32R_GOTOFF_HI_ULO";
            break;
          case 63:
            result = "R_M32R_GOTOFF_HI_SLO";
            break;
          case 64:
            result = "R_M32R_GOTOFF_LO";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x59:
        switch ( a2 )
        {
          case 0:
            result = "R_MN10300_NONE";
            break;
          case 1:
            result = "R_MN10300_32";
            break;
          case 2:
            result = "R_MN10300_16";
            break;
          case 3:
            result = "R_MN10300_8";
            break;
          case 4:
            result = "R_MN10300_PCREL32";
            break;
          case 5:
            result = "R_MN10300_PCREL16";
            break;
          case 6:
            result = "R_MN10300_PCREL8";
            break;
          case 7:
            result = "R_MN10300_GNU_VTINHERIT";
            break;
          case 8:
            result = "R_MN10300_GNU_VTENTRY";
            break;
          case 9:
            result = "R_MN10300_24";
            break;
          case 10:
            result = "R_MN10300_GOTPC32";
            break;
          case 11:
            result = "R_MN10300_GOTPC16";
            break;
          case 12:
            result = "R_MN10300_GOTOFF32";
            break;
          case 13:
            result = "R_MN10300_GOTOFF24";
            break;
          case 14:
            result = "R_MN10300_GOTOFF16";
            break;
          case 15:
            result = "R_MN10300_PLT32";
            break;
          case 16:
            result = "R_MN10300_PLT16";
            break;
          case 17:
            result = "R_MN10300_GOT32";
            break;
          case 18:
            result = "R_MN10300_GOT24";
            break;
          case 19:
            result = "R_MN10300_GOT16";
            break;
          case 20:
            result = "R_MN10300_COPY";
            break;
          case 21:
            result = "R_MN10300_GLOB_DAT";
            break;
          case 22:
            result = "R_MN10300_JMP_SLOT";
            break;
          case 23:
            result = "R_MN10300_RELATIVE";
            break;
          case 24:
            result = "R_MN10300_TLS_GD";
            break;
          case 25:
            result = "R_MN10300_TLS_LD";
            break;
          case 26:
            result = "R_MN10300_TLS_LDO";
            break;
          case 27:
            result = "R_MN10300_TLS_GOTIE";
            break;
          case 28:
            result = "R_MN10300_TLS_IE";
            break;
          case 29:
            result = "R_MN10300_TLS_LE";
            break;
          case 30:
            result = "R_MN10300_TLS_DTPMOD";
            break;
          case 31:
            result = "R_MN10300_TLS_DTPOFF";
            break;
          case 32:
            result = "R_MN10300_TLS_TPOFF";
            break;
          case 33:
            result = "R_MN10300_SYM_DIFF";
            break;
          case 34:
            result = "R_MN10300_ALIGN";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x5A:
        switch ( a2 )
        {
          case 0:
            result = "R_MN10200_NONE";
            break;
          case 1:
            result = "R_MN10200_32";
            break;
          case 2:
            result = "R_MN10200_16";
            break;
          case 3:
            result = "R_MN10200_8";
            break;
          case 4:
            result = "R_MN10200_24";
            break;
          case 5:
            result = "R_MN10200_PCREL8";
            break;
          case 6:
            result = "R_MN10200_PCREL16";
            break;
          case 7:
            result = "R_MN10200_PCREL24";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x5D:
      case 0xC3:
        switch ( a2 )
        {
          case 0:
            result = "R_ARC_NONE";
            break;
          case 1:
            result = "R_ARC_8";
            break;
          case 2:
            result = "R_ARC_16";
            break;
          case 3:
            result = "R_ARC_24";
            break;
          case 4:
            result = "R_ARC_32";
            break;
          case 5:
            result = "R_ARC_B26";
            break;
          case 6:
            result = "R_ARC_B22_PCREL";
            break;
          case 7:
            result = "R_ARC_H30";
            break;
          case 8:
            result = "R_ARC_N8";
            break;
          case 9:
            result = "R_ARC_N16";
            break;
          case 10:
            result = "R_ARC_N24";
            break;
          case 11:
            result = "R_ARC_N32";
            break;
          case 12:
            result = "R_ARC_SDA";
            break;
          case 13:
            result = "R_ARC_SECTOFF";
            break;
          case 14:
            result = "R_ARC_S21H_PCREL";
            break;
          case 15:
            result = "R_ARC_S21W_PCREL";
            break;
          case 16:
            result = "R_ARC_S25H_PCREL";
            break;
          case 17:
            result = "R_ARC_S25W_PCREL";
            break;
          case 18:
            result = "R_ARC_SDA32";
            break;
          case 19:
            result = "R_ARC_SDA_LDST";
            break;
          case 20:
            result = "R_ARC_SDA_LDST1";
            break;
          case 21:
            result = "R_ARC_SDA_LDST2";
            break;
          case 22:
            result = "R_ARC_SDA16_LD";
            break;
          case 23:
            result = "R_ARC_SDA16_LD1";
            break;
          case 24:
            result = "R_ARC_SDA16_LD2";
            break;
          case 25:
            result = "R_ARC_S13_PCREL";
            break;
          case 26:
            result = "R_ARC_W";
            break;
          case 27:
            result = "R_ARC_32_ME";
            break;
          case 28:
            result = "R_ARC_N32_ME";
            break;
          case 29:
            result = "R_ARC_SECTOFF_ME";
            break;
          case 30:
            result = "R_ARC_SDA32_ME";
            break;
          case 31:
            result = "R_ARC_W_ME";
            break;
          case 32:
            result = "R_ARC_H30_ME";
            break;
          case 33:
            result = "R_ARC_SECTOFF_U8";
            break;
          case 34:
            result = "R_ARC_SECTOFF_S9";
            break;
          case 35:
            result = "R_AC_SECTOFF_U8";
            break;
          case 36:
            result = "R_AC_SECTOFF_U8_1";
            break;
          case 37:
            result = "R_AC_SECTOFF_U8_2";
            break;
          case 38:
            result = "R_AC_SECTOFF_S9";
            break;
          case 39:
            result = "R_AC_SECTOFF_S9_1";
            break;
          case 40:
            result = "R_AC_SECTOFF_S9_2";
            break;
          case 41:
            result = "R_ARC_SECTOFF_ME_1";
            break;
          case 42:
            result = "R_ARC_SECTOFF_ME_2";
            break;
          case 43:
            result = "R_ARC_SECTOFF_1";
            break;
          case 44:
            result = "R_ARC_SECTOFF_2";
            break;
          case 50:
            result = "R_ARC_PC32";
            break;
          case 51:
            result = "R_ARC_GOTPC32";
            break;
          case 52:
            result = "R_ARC_PLT32";
            break;
          case 53:
            result = "R_ARC_COPY";
            break;
          case 54:
            result = "R_ARC_GLOB_DAT";
            break;
          case 55:
            result = "R_ARC_JMP_SLOT";
            break;
          case 56:
            result = "R_ARC_RELATIVE";
            break;
          case 57:
            result = "R_ARC_GOTOFF";
            break;
          case 58:
            result = "R_ARC_GOTPC";
            break;
          case 59:
            result = "R_ARC_GOT32";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x5E:
        switch ( a2 )
        {
          case 0:
            result = "R_XTENSA_NONE";
            break;
          case 1:
            result = "R_XTENSA_32";
            break;
          case 2:
            result = "R_XTENSA_RTLD";
            break;
          case 3:
            result = "R_XTENSA_GLOB_DAT";
            break;
          case 4:
            result = "R_XTENSA_JMP_SLOT";
            break;
          case 5:
            result = "R_XTENSA_RELATIVE";
            break;
          case 6:
            result = "R_XTENSA_PLT";
            break;
          case 8:
            result = "R_XTENSA_OP0";
            break;
          case 9:
            result = "R_XTENSA_OP1";
            break;
          case 10:
            result = "R_XTENSA_OP2";
            break;
          case 11:
            result = "R_XTENSA_ASM_EXPAND";
            break;
          case 12:
            result = "R_XTENSA_ASM_SIMPLIFY";
            break;
          case 14:
            result = "R_XTENSA_32_PCREL";
            break;
          case 15:
            result = "R_XTENSA_GNU_VTINHERIT";
            break;
          case 16:
            result = "R_XTENSA_GNU_VTENTRY";
            break;
          case 17:
            result = "R_XTENSA_DIFF8";
            break;
          case 18:
            result = "R_XTENSA_DIFF16";
            break;
          case 19:
            result = "R_XTENSA_DIFF32";
            break;
          case 20:
            result = "R_XTENSA_SLOT0_OP";
            break;
          case 21:
            result = "R_XTENSA_SLOT1_OP";
            break;
          case 22:
            result = "R_XTENSA_SLOT2_OP";
            break;
          case 23:
            result = "R_XTENSA_SLOT3_OP";
            break;
          case 24:
            result = "R_XTENSA_SLOT4_OP";
            break;
          case 25:
            result = "R_XTENSA_SLOT5_OP";
            break;
          case 26:
            result = "R_XTENSA_SLOT6_OP";
            break;
          case 27:
            result = "R_XTENSA_SLOT7_OP";
            break;
          case 28:
            result = "R_XTENSA_SLOT8_OP";
            break;
          case 29:
            result = "R_XTENSA_SLOT9_OP";
            break;
          case 30:
            result = "R_XTENSA_SLOT10_OP";
            break;
          case 31:
            result = "R_XTENSA_SLOT11_OP";
            break;
          case 32:
            result = "R_XTENSA_SLOT12_OP";
            break;
          case 33:
            result = "R_XTENSA_SLOT13_OP";
            break;
          case 34:
            result = "R_XTENSA_SLOT14_OP";
            break;
          case 35:
            result = "R_XTENSA_SLOT0_ALT";
            break;
          case 36:
            result = "R_XTENSA_SLOT1_ALT";
            break;
          case 37:
            result = "R_XTENSA_SLOT2_ALT";
            break;
          case 38:
            result = "R_XTENSA_SLOT3_ALT";
            break;
          case 39:
            result = "R_XTENSA_SLOT4_ALT";
            break;
          case 40:
            result = "R_XTENSA_SLOT5_ALT";
            break;
          case 41:
            result = "R_XTENSA_SLOT6_ALT";
            break;
          case 42:
            result = "R_XTENSA_SLOT7_ALT";
            break;
          case 43:
            result = "R_XTENSA_SLOT8_ALT";
            break;
          case 44:
            result = "R_XTENSA_SLOT9_ALT";
            break;
          case 45:
            result = "R_XTENSA_SLOT10_ALT";
            break;
          case 46:
            result = "R_XTENSA_SLOT11_ALT";
            break;
          case 47:
            result = "R_XTENSA_SLOT12_ALT";
            break;
          case 48:
            result = "R_XTENSA_SLOT13_ALT";
            break;
          case 49:
            result = "R_XTENSA_SLOT14_ALT";
            break;
          case 50:
            result = "R_XTENSA_TLSDESC_FN";
            break;
          case 51:
            result = "R_XTENSA_TLSDESC_ARG";
            break;
          case 52:
            result = "R_XTENSA_TLS_DTPOFF";
            break;
          case 53:
            result = "R_XTENSA_TLS_TPOFF";
            break;
          case 54:
            result = "R_XTENSA_TLS_FUNC";
            break;
          case 55:
            result = "R_XTENSA_TLS_ARG";
            break;
          case 56:
            result = "R_XTENSA_TLS_CALL";
            break;
          case 57:
            result = "R_XTENSA_PDIFF8";
            break;
          case 58:
            result = "R_XTENSA_PDIFF16";
            break;
          case 59:
            result = "R_XTENSA_PDIFF32";
            break;
          case 60:
            result = "R_XTENSA_NDIFF8";
            break;
          case 61:
            result = "R_XTENSA_NDIFF16";
            break;
          case 62:
            result = "R_XTENSA_NDIFF32";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0x75:
      case 0x78:
        switch ( a2 )
        {
          case 0:
            result = "R_M32C_NONE";
            break;
          case 1:
            result = "R_M32C_DIR16";
            break;
          case 2:
            result = "R_M32C_DIR24";
            break;
          case 3:
            result = "R_M32C_DIR32";
            break;
          case 4:
            result = "R_M32C_DIR_PCREL8";
            break;
          case 5:
            result = "R_M32C_DIR_PCREL16";
            break;
          case 6:
            result = "R_M32C_DIR8U";
            break;
          case 7:
            result = "R_M32C_DIR_LO16";
            break;
          case 8:
            result = "R_M32C_DIR_HI8";
            break;
          case 9:
            result = "R_M32C_DIR_HI16";
            break;
          case 10:
            result = "R_M32C_RL_JUMP";
            break;
          case 11:
            result = "R_M32C_RL_1ADDR";
            break;
          case 12:
            result = "R_M32C_RL_2ADDR";
            break;
          case 16:
            result = "R_M32C_DIR8";
            break;
          case 17:
            result = "R_M32C_DIR8S";
            break;
          case 18:
            result = "R_M32C_DIR16U";
            break;
          case 19:
            result = "R_M32C_DIR16S";
            break;
          case 20:
            result = "R_M32C_DIR20U";
            break;
          case 21:
            result = "R_M32C_DIR24U";
            break;
          case 22:
            result = "R_M32C_DIR3";
            break;
          case 23:
            result = "R_M32C_DIR4S";
            break;
          case 24:
            result = "R_M32C_DIR4SL4";
            break;
          case 25:
            result = "R_M32C_DIR6U";
            break;
          case 26:
            result = "R_M32C_DIR6UL2";
            break;
          case 27:
            result = "R_M32C_DIR_PCREL3U";
            break;
          case 28:
            result = "R_M32C_DIR_PCREL8S1";
            break;
          case 29:
            result = "R_M32C_DIR_PCREL8S2";
            break;
          case 65:
            result = "R_M32C_ABS16";
            break;
          case 66:
            result = "R_M32C_ABS24";
            break;
          case 67:
            result = "R_M32C_ABS32";
            break;
          case 68:
            result = "R_M32C_ABS_PCREL8";
            break;
          case 69:
            result = "R_M32C_ABS_PCREL16";
            break;
          case 70:
            result = "R_M32C_ABS8U";
            break;
          case 71:
            result = "R_M32C_ABS_LO16";
            break;
          case 72:
            result = "R_M32C_ABS_HI8";
            break;
          case 73:
            result = "R_M32C_ABS_HI16";
            break;
          case 80:
            result = "R_M32C_ABS8";
            break;
          case 81:
            result = "R_M32C_ABS8S";
            break;
          case 82:
            result = "R_M32C_ABS16U";
            break;
          case 83:
            result = "R_M32C_ABS16S";
            break;
          case 84:
            result = "R_M32C_ABS20U";
            break;
          case 85:
            result = "R_M32C_ABS24U";
            break;
          case 86:
            result = "R_M32C_ABS3";
            break;
          case 87:
            result = "R_M32C_ABS4S";
            break;
          case 88:
            result = "R_M32C_ABS4SL4";
            break;
          case 89:
            result = "R_M32C_ABS6U";
            break;
          case 90:
            result = "R_M32C_ABS6UL2";
            break;
          case 91:
            result = "R_M32C_ABS_PCREL3U";
            break;
          case 92:
            result = "R_M32C_ABS_PCREL8S1";
            break;
          case 93:
            result = "R_M32C_ABS_PCREL8S2";
            break;
          case 128:
            result = "R_M32C_SYM";
            break;
          case 129:
            result = "R_M32C_OPneg";
            break;
          case 130:
            result = "R_M32C_OPadd";
            break;
          case 131:
            result = "R_M32C_OPsub";
            break;
          case 132:
            result = "R_M32C_OPmul";
            break;
          case 133:
            result = "R_M32C_OPdiv";
            break;
          case 134:
            result = "R_M32C_OPshla";
            break;
          case 135:
            result = "R_M32C_OPshra";
            break;
          case 136:
            result = "R_M32C_OPsctsize";
            break;
          case 141:
            result = "R_M32C_OPscttop";
            break;
          case 144:
            result = "R_M32C_OPand";
            break;
          case 145:
            result = "R_M32C_OPor";
            break;
          case 146:
            result = "R_M32C_OPxor";
            break;
          case 147:
            result = "R_M32C_OPnot";
            break;
          case 148:
            result = "R_M32C_OPmod";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0xA7:
        switch ( a2 )
        {
          case 0:
            result = "R_NDS32_NONE";
            break;
          case 1:
            result = "R_NDS32_16";
            break;
          case 2:
            result = "R_NDS32_32";
            break;
          case 3:
            result = "R_NDS32_20";
            break;
          case 4:
            result = "R_NDS32_9_PCREL";
            break;
          case 5:
            result = "R_NDS32_15_PCREL";
            break;
          case 6:
            result = "R_NDS32_17_PCREL";
            break;
          case 7:
            result = "R_NDS32_25_PCREL";
            break;
          case 8:
            result = "R_NDS32_HI20";
            break;
          case 9:
            result = "R_NDS32_LO12S3";
            break;
          case 10:
            result = "R_NDS32_LO12S2";
            break;
          case 11:
            result = "R_NDS32_LO12S1";
            break;
          case 12:
            result = "R_NDS32_LO12S0";
            break;
          case 13:
            result = "R_NDS32_SDA15S3";
            break;
          case 14:
            result = "R_NDS32_SDA15S2";
            break;
          case 15:
            result = "R_NDS32_SDA15S1";
            break;
          case 16:
            result = "R_NDS32_SDA15S0";
            break;
          case 17:
            result = "R_NDS32_GNU_VTINHERIT";
            break;
          case 18:
            result = "R_NDS32_GNU_VTENTRY";
            break;
          case 19:
            result = "R_NDS32_16_RELA";
            break;
          case 20:
            result = "R_NDS32_32_RELA";
            break;
          case 21:
            result = "R_NDS32_20_RELA";
            break;
          case 22:
            result = "R_NDS32_9_PCREL_RELA";
            break;
          case 23:
            result = "R_NDS32_15_PCREL_RELA";
            break;
          case 24:
            result = "R_NDS32_17_PCREL_RELA";
            break;
          case 25:
            result = "R_NDS32_25_PCREL_RELA";
            break;
          case 26:
            result = "R_NDS32_HI20_RELA";
            break;
          case 27:
            result = "R_NDS32_LO12S3_RELA";
            break;
          case 28:
            result = "R_NDS32_LO12S2_RELA";
            break;
          case 29:
            result = "R_NDS32_LO12S1_RELA";
            break;
          case 30:
            result = "R_NDS32_LO12S0_RELA";
            break;
          case 31:
            result = "R_NDS32_SDA15S3_RELA";
            break;
          case 32:
            result = "R_NDS32_SDA15S2_RELA";
            break;
          case 33:
            result = "R_NDS32_SDA15S1_RELA";
            break;
          case 34:
            result = "R_NDS32_SDA15S0_RELA";
            break;
          case 35:
            result = "R_NDS32_RELA_GNU_VTINHERIT";
            break;
          case 36:
            result = "R_NDS32_RELA_GNU_VTENTRY";
            break;
          case 37:
            result = "R_NDS32_GOT20";
            break;
          case 38:
            result = "R_NDS32_25_PLTREL";
            break;
          case 39:
            result = "R_NDS32_COPY";
            break;
          case 40:
            result = "R_NDS32_GLOB_DAT";
            break;
          case 41:
            result = "R_NDS32_JMP_SLOT";
            break;
          case 42:
            result = "R_NDS32_RELATIVE";
            break;
          case 43:
            result = "R_NDS32_GOTOFF";
            break;
          case 44:
            result = "R_NDS32_GOTPC20";
            break;
          case 45:
            result = "R_NDS32_GOT_HI20";
            break;
          case 46:
            result = "R_NDS32_GOT_LO12";
            break;
          case 47:
            result = "R_NDS32_GOTPC_HI20";
            break;
          case 48:
            result = "R_NDS32_GOTPC_LO12";
            break;
          case 49:
            result = "R_NDS32_GOTOFF_HI20";
            break;
          case 50:
            result = "R_NDS32_GOTOFF_LO12";
            break;
          case 51:
            result = "R_NDS32_INSN16";
            break;
          case 52:
            result = "R_NDS32_LABEL";
            break;
          case 53:
            result = "R_NDS32_LONGCALL1";
            break;
          case 54:
            result = "R_NDS32_LONGCALL2";
            break;
          case 55:
            result = "R_NDS32_LONGCALL3";
            break;
          case 56:
            result = "R_NDS32_LONGJUMP1";
            break;
          case 57:
            result = "R_NDS32_LONGJUMP2";
            break;
          case 58:
            result = "R_NDS32_LONGJUMP3";
            break;
          case 59:
            result = "R_NDS32_LOADSTORE";
            break;
          case 60:
            result = "R_NDS32_9_FIXED_RELA";
            break;
          case 61:
            result = "R_NDS32_15_FIXED_RELA";
            break;
          case 62:
            result = "R_NDS32_17_FIXED_RELA";
            break;
          case 63:
            result = "R_NDS32_25_FIXED_RELA";
            break;
          case 64:
            result = "R_NDS32_PLTREL_HI20";
            break;
          case 65:
            result = "R_NDS32_PLTREL_LO12";
            break;
          case 66:
            result = "R_NDS32_PLT_GOTREL_HI20";
            break;
          case 67:
            result = "R_NDS32_PLT_GOTREL_LO12";
            break;
          case 68:
            result = "R_NDS32_SDA12S2_DP_RELA";
            break;
          case 69:
            result = "R_NDS32_SDA12S2_SP_RELA";
            break;
          case 70:
            result = "R_NDS32_LO12S2_DP_RELA";
            break;
          case 71:
            result = "R_NDS32_LO12S2_SP_RELA";
            break;
          case 72:
            result = "R_NDS32_LO12S0_ORI_RELA";
            break;
          case 73:
            result = "R_NDS32_SDA16S3_RELA";
            break;
          case 74:
            result = "R_NDS32_SDA17S2_RELA";
            break;
          case 75:
            result = "R_NDS32_SDA18S1_RELA";
            break;
          case 76:
            result = "R_NDS32_SDA19S0_RELA";
            break;
          case 77:
            result = "R_NDS32_DWARF2_OP1_RELA";
            break;
          case 78:
            result = "R_NDS32_DWARF2_OP2_RELA";
            break;
          case 79:
            result = "R_NDS32_DWARF2_LEB_RELA";
            break;
          case 80:
            result = "R_NDS32_UPDATE_TA_RELA";
            break;
          case 81:
            result = "R_NDS32_9_PLTREL";
            break;
          case 82:
            result = "R_NDS32_PLT_GOTREL_LO20";
            break;
          case 83:
            result = "R_NDS32_PLT_GOTREL_LO15";
            break;
          case 84:
            result = "R_NDS32_PLT_GOTREL_LO19";
            break;
          case 85:
            result = "R_NDS32_GOT_LO15";
            break;
          case 86:
            result = "R_NDS32_GOT_LO19";
            break;
          case 87:
            result = "R_NDS32_GOTOFF_LO15";
            break;
          case 88:
            result = "R_NDS32_GOTOFF_LO19";
            break;
          case 89:
            result = "R_NDS32_GOT15S2_RELA";
            break;
          case 90:
            result = "R_NDS32_GOT17S2_RELA";
            break;
          case 91:
            result = "R_NDS32_5_RELA";
            break;
          case 92:
            result = "R_NDS32_10_UPCREL_RELA";
            break;
          case 93:
            result = "R_NDS32_SDA_FP7U2_RELA";
            break;
          case 94:
            result = "R_NDS32_WORD_9_PCREL_RELA";
            break;
          case 95:
            result = "R_NDS32_25_ABS_RELA";
            break;
          case 96:
            result = "R_NDS32_17IFC_PCREL_RELA";
            break;
          case 97:
            result = "R_NDS32_10IFCU_PCREL_RELA";
            break;
          case 98:
            result = "R_NDS32_TLS_LE_HI20";
            break;
          case 99:
            result = "R_NDS32_TLS_LE_LO12";
            break;
          case 100:
            result = "R_NDS32_TLS_IE_HI20";
            break;
          case 101:
            result = "R_NDS32_TLS_IE_LO12S2";
            break;
          case 102:
            result = "R_NDS32_TLS_TPOFF";
            break;
          case 103:
            result = "R_NDS32_TLS_LE_20";
            break;
          case 104:
            result = "R_NDS32_TLS_LE_15S0";
            break;
          case 105:
            result = "R_NDS32_TLS_LE_15S1";
            break;
          case 106:
            result = "R_NDS32_TLS_LE_15S2";
            break;
          case 107:
            result = "R_NDS32_LONGCALL4";
            break;
          case 108:
            result = "R_NDS32_LONGCALL5";
            break;
          case 109:
            result = "R_NDS32_LONGCALL6";
            break;
          case 110:
            result = "R_NDS32_LONGJUMP4";
            break;
          case 111:
            result = "R_NDS32_LONGJUMP5";
            break;
          case 112:
            result = "R_NDS32_LONGJUMP6";
            break;
          case 113:
            result = "R_NDS32_LONGJUMP7";
            break;
          case 115:
            result = "R_NDS32_TLS_IE_LO12";
            break;
          case 116:
            result = "R_NDS32_TLS_IEGP_HI20";
            break;
          case 117:
            result = "R_NDS32_TLS_IEGP_LO12";
            break;
          case 118:
            result = "R_NDS32_TLS_IEGP_LO12S2";
            break;
          case 119:
            result = "R_NDS32_TLS_DESC";
            break;
          case 120:
            result = "R_NDS32_TLS_DESC_HI20";
            break;
          case 121:
            result = "R_NDS32_TLS_DESC_LO12";
            break;
          case 122:
            result = "R_NDS32_TLS_DESC_20";
            break;
          case 123:
            result = "R_NDS32_TLS_DESC_SDA17S2";
            break;
          case 192:
            result = "R_NDS32_RELAX_ENTRY";
            break;
          case 193:
            result = "R_NDS32_GOT_SUFF";
            break;
          case 194:
            result = "R_NDS32_GOTOFF_SUFF";
            break;
          case 195:
            result = "R_NDS32_PLT_GOT_SUFF";
            break;
          case 196:
            result = "R_NDS32_MULCALL_SUFF";
            break;
          case 197:
            result = "R_NDS32_PTR";
            break;
          case 198:
            result = "R_NDS32_PTR_COUNT";
            break;
          case 199:
            result = "R_NDS32_PTR_RESOLVED";
            break;
          case 200:
            result = "R_NDS32_PLTBLOCK";
            break;
          case 201:
            result = "R_NDS32_RELAX_REGION_BEGIN";
            break;
          case 202:
            result = "R_NDS32_RELAX_REGION_END";
            break;
          case 203:
            result = "R_NDS32_MINUEND";
            break;
          case 204:
            result = "R_NDS32_SUBTRAHEND";
            break;
          case 205:
            result = "R_NDS32_DIFF8";
            break;
          case 206:
            result = "R_NDS32_DIFF16";
            break;
          case 207:
            result = "R_NDS32_DIFF32";
            break;
          case 208:
            result = "R_NDS32_DIFF_ULEB128";
            break;
          case 209:
            result = "R_NDS32_DATA";
            break;
          case 210:
            result = "R_NDS32_TRAN";
            break;
          case 211:
            result = "R_NDS32_TLS_LE_ADD";
            break;
          case 212:
            result = "R_NDS32_TLS_LE_LS";
            break;
          case 213:
            result = "R_NDS32_EMPTY";
            break;
          case 214:
            result = "R_NDS32_TLS_DESC_ADD";
            break;
          case 215:
            result = "R_NDS32_TLS_DESC_FUNC";
            break;
          case 216:
            result = "R_NDS32_TLS_DESC_CALL";
            break;
          case 217:
            result = "R_NDS32_TLS_DESC_MEM";
            break;
          case 218:
            result = "R_NDS32_RELAX_REMOVE";
            break;
          case 219:
            result = "R_NDS32_RELAX_GROUP";
            break;
          case 220:
            result = "R_NDS32_TLS_IEGP_LW";
            break;
          case 221:
            result = "R_NDS32_LSI";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0xAD:
        switch ( a2 )
        {
          case 0:
            result = "R_RX_NONE";
            break;
          case 1:
            result = "R_RX_DIR32";
            break;
          case 9:
            result = "R_RX_DIR24S_PCREL";
            break;
          case 10:
            result = "R_RX_DIR16S_PCREL";
            break;
          case 11:
            result = "R_RX_DIR8S_PCREL";
            break;
          case 18:
            result = "R_RX_DIR3U_PCREL";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0xB7:
        switch ( a2 )
        {
          case 0:
            result = "R_ARM_NONE";
            break;
          case 1:
            result = "R_AARCH64_P32_ABS32";
            break;
          case 2:
            result = "R_AARCH64_P32_ABS16";
            break;
          case 3:
            result = "R_AARCH64_P32_PREL32";
            break;
          case 4:
            result = "R_AARCH64_P32_PREL16";
            break;
          case 5:
            result = "R_AARCH64_P32_MOVW_UABS_G0";
            break;
          case 6:
            result = "R_AARCH64_P32_MOVW_UABS_G0_NC";
            break;
          case 7:
            result = "R_AARCH64_P32_MOVW_UABS_G1";
            break;
          case 8:
            result = "R_AARCH64_P32_MOVW_SABS_G0";
            break;
          case 9:
            result = "R_AARCH64_P32_LD_PREL_LO19";
            break;
          case 10:
            result = "R_AARCH64_P32_ADR_PREL_LO21";
            break;
          case 11:
            result = "R_AARCH64_P32_ADR_PREL_PG_HI21";
            break;
          case 12:
            result = "R_AARCH64_P32_ADD_ABS_LO12_NC";
            break;
          case 13:
            result = "R_AARCH64_P32_LDST8_ABS_LO12_NC";
            break;
          case 14:
            result = "R_AARCH64_P32_LDST16_ABS_LO12_NC";
            break;
          case 15:
            result = "R_AARCH64_P32_LDST32_ABS_LO12_NC";
            break;
          case 16:
            result = "R_AARCH64_P32_LDST64_ABS_LO12_NC";
            break;
          case 17:
            result = "R_AARCH64_P32_LDST128_ABS_LO12_NC";
            break;
          case 18:
            result = "R_AARCH64_P32_TSTBR14";
            break;
          case 19:
            result = "R_AARCH64_P32_CONDBR19";
            break;
          case 20:
            result = "R_AARCH64_P32_JUMP26";
            break;
          case 21:
            result = "R_AARCH64_P32_CALL26";
            break;
          case 22:
            result = "R_AARCH64_P32_MOVW_PREL_G0";
            break;
          case 23:
            result = "R_AARCH64_P32_MOVW_PREL_G0_NC";
            break;
          case 24:
            result = "R_AARCH64_P32_MOVW_PREL_G1";
            break;
          case 25:
            result = "R_AARCH64_P32_GOT_LD_PREL19";
            break;
          case 26:
            result = "R_AARCH64_P32_ADR_GOT_PAGE";
            break;
          case 27:
            result = "R_AARCH64_P32_LD32_GOT_LO12_NC";
            break;
          case 28:
            result = "R_AARCH64_P32_LD32_GOTPAGE_LO14";
            break;
          case 29:
            result = "R_AARCH64_P32_PLT32";
            break;
          case 80:
            result = "R_AARCH64_P32_TLSGD_ADR_PREL21";
            break;
          case 81:
            result = "R_AARCH64_P32_TLSGD_ADR_PAGE21";
            break;
          case 82:
            result = "R_AARCH64_P32_TLSGD_ADD_LO12_NC";
            break;
          case 83:
            result = "R_AARCH64_P32_TLSLD_ADR_PREL21";
            break;
          case 84:
            result = "R_AARCH64_P32_TLSLD_ADR_PAGE21";
            break;
          case 85:
            result = "R_AARCH64_P32_TLSLD_ADD_LO12_NC";
            break;
          case 86:
            result = "R_AARCH64_P32_TLSLD_LD_PREL19";
            break;
          case 87:
            result = "R_AARCH64_P32_TLSLD_MOVW_DTPREL_G1";
            break;
          case 88:
            result = "R_AARCH64_P32_TLSLD_MOVW_DTPREL_G0";
            break;
          case 89:
            result = "R_AARCH64_P32_TLSLD_MOVW_DTPREL_G0_NC";
            break;
          case 90:
            result = "R_AARCH64_P32_TLSLD_ADD_DTPREL_HI12";
            break;
          case 91:
            result = "R_AARCH64_P32_TLSLD_ADD_DTPREL_LO12";
            break;
          case 92:
            result = "R_AARCH64_P32_TLSLD_ADD_DTPREL_LO12_NC";
            break;
          case 93:
            result = "R_AARCH64_P32_TLSLD_LDST8_DTPREL_LO12";
            break;
          case 94:
            result = "R_AARCH64_P32_TLSLD_LDST8_DTPREL_LO12_NC";
            break;
          case 95:
            result = "R_AARCH64_P32_TLSLD_LDST16_DTPREL_LO12";
            break;
          case 96:
            result = "R_AARCH64_P32_TLSLD_LDST16_DTPREL_LO12_NC";
            break;
          case 97:
            result = "R_AARCH64_P32_TLSLD_LDST32_DTPREL_LO12";
            break;
          case 98:
            result = "R_AARCH64_P32_TLSLD_LDST32_DTPREL_LO12_NC";
            break;
          case 99:
            result = "R_AARCH64_P32_TLSLD_LDST64_DTPREL_LO12";
            break;
          case 100:
            result = "R_AARCH64_P32_TLSLD_LDST64_DTPREL_LO12_NC";
            break;
          case 101:
            result = "R_AARCH64_P32_TLSLD_LDST128_DTPREL_LO12";
            break;
          case 102:
            result = "R_AARCH64_P32_TLSLD_LDST128_DTPREL_LO12_NC";
            break;
          case 103:
            result = "R_AARCH64_P32_TLSIE_ADR_GOTTPREL_PAGE21";
            break;
          case 104:
            result = "R_AARCH64_P32_TLSIE_LD32_GOTTPREL_LO12_NC";
            break;
          case 105:
            result = "R_AARCH64_P32_TLSIE_LD_GOTTPREL_PREL19";
            break;
          case 106:
            result = "R_AARCH64_P32_TLSLE_MOVW_TPREL_G1";
            break;
          case 107:
            result = "R_AARCH64_P32_TLSLE_MOVW_TPREL_G0";
            break;
          case 108:
            result = "R_AARCH64_P32_TLSLE_MOVW_TPREL_G0_NC";
            break;
          case 109:
            result = "R_AARCH64_P32_TLSLE_ADD_TPREL_HI12";
            break;
          case 110:
            result = "R_AARCH64_P32_TLSLE_ADD_TPREL_LO12";
            break;
          case 111:
            result = "R_AARCH64_P32_TLSLE_ADD_TPREL_LO12_NC";
            break;
          case 112:
            result = "R_AARCH64_P32_TLSLE_LDST8_TPREL_LO12";
            break;
          case 113:
            result = "R_AARCH64_P32_TLSLE_LDST8_TPREL_LO12_NC";
            break;
          case 114:
            result = "R_AARCH64_P32_TLSLE_LDST16_TPREL_LO12";
            break;
          case 115:
            result = "R_AARCH64_P32_TLSLE_LDST16_TPREL_LO12_NC";
            break;
          case 116:
            result = "R_AARCH64_P32_TLSLE_LDST32_TPREL_LO12";
            break;
          case 117:
            result = "R_AARCH64_P32_TLSLE_LDST32_TPREL_LO12_NC";
            break;
          case 118:
            result = "R_AARCH64_P32_TLSLE_LDST64_TPREL_LO12";
            break;
          case 119:
            result = "R_AARCH64_P32_TLSLE_LDST64_TPREL_LO12_NC";
            break;
          case 120:
            result = "R_AARCH64_P32_TLSLE_LDST128_TPREL_LO12";
            break;
          case 121:
            result = "R_AARCH64_P32_TLSLE_LDST128_TPREL_LO12_NC";
            break;
          case 122:
            result = "R_AARCH64_P32_TLSDESC_LD_PREL19";
            break;
          case 123:
            result = "R_AARCH64_P32_TLSDESC_ADR_PREL21";
            break;
          case 124:
            result = "R_AARCH64_P32_TLSDESC_ADR_PAGE21";
            break;
          case 125:
            result = "R_AARCH64_P32_TLSDESC_LD32_LO12";
            break;
          case 126:
            result = "R_AARCH64_P32_TLSDESC_ADD_LO12";
            break;
          case 127:
            result = "R_AARCH64_P32_TLSDESC_CALL";
            break;
          case 180:
            result = "R_AARCH64_P32_COPY";
            break;
          case 181:
            result = "R_AARCH64_P32_GLOB_DAT";
            break;
          case 182:
            result = "R_AARCH64_P32_JUMP_SLOT";
            break;
          case 183:
            result = "R_AARCH64_P32_RELATIVE";
            break;
          case 184:
            result = "R_AARCH64_P32_TLS_DTPMOD";
            break;
          case 185:
            result = "R_AARCH64_P32_TLS_DTPREL";
            break;
          case 186:
            result = "R_AARCH64_P32_TLS_TPREL";
            break;
          case 187:
            result = "R_AARCH64_P32_TLSDESC";
            break;
          case 188:
            result = "R_AARCH64_P32_IRELATIVE";
            break;
          case 256:
            result = "R_AARCH64_NONE";
            break;
          case 257:
            result = "R_AARCH64_ABS64";
            break;
          case 258:
            result = "R_AARCH64_ABS32";
            break;
          case 259:
            result = "R_AARCH64_ABS16";
            break;
          case 260:
            result = "R_AARCH64_PREL64";
            break;
          case 261:
            result = "R_AARCH64_PREL32";
            break;
          case 262:
            result = "R_AARCH64_PREL16";
            break;
          case 263:
            result = "R_AARCH64_MOVW_UABS_G0";
            break;
          case 264:
            result = "R_AARCH64_MOVW_UABS_G0_NC";
            break;
          case 265:
            result = "R_AARCH64_MOVW_UABS_G1";
            break;
          case 266:
            result = "R_AARCH64_MOVW_UABS_G1_NC";
            break;
          case 267:
            result = "R_AARCH64_MOVW_UABS_G2";
            break;
          case 268:
            result = "R_AARCH64_MOVW_UABS_G2_NC";
            break;
          case 269:
            result = "R_AARCH64_MOVW_UABS_G3";
            break;
          case 270:
            result = "R_AARCH64_MOVW_SABS_G0";
            break;
          case 271:
            result = "R_AARCH64_MOVW_SABS_G1";
            break;
          case 272:
            result = "R_AARCH64_MOVW_SABS_G2";
            break;
          case 273:
            result = "R_AARCH64_LD_PREL_LO19";
            break;
          case 274:
            result = "R_AARCH64_ADR_PREL_LO21";
            break;
          case 275:
            result = "R_AARCH64_ADR_PREL_PG_HI21";
            break;
          case 276:
            result = "R_AARCH64_ADR_PREL_PG_HI21_NC";
            break;
          case 277:
            result = "R_AARCH64_ADD_ABS_LO12_NC";
            break;
          case 278:
            result = "R_AARCH64_LDST8_ABS_LO12_NC";
            break;
          case 279:
            result = "R_AARCH64_TSTBR14";
            break;
          case 280:
            result = "R_AARCH64_CONDBR19";
            break;
          case 282:
            result = "R_AARCH64_JUMP26";
            break;
          case 283:
            result = "R_AARCH64_CALL26";
            break;
          case 284:
            result = "R_AARCH64_LDST16_ABS_LO12_NC";
            break;
          case 285:
            result = "R_AARCH64_LDST32_ABS_LO12_NC";
            break;
          case 286:
            result = "R_AARCH64_LDST64_ABS_LO12_NC";
            break;
          case 287:
            result = "R_AARCH64_MOVW_PREL_G0";
            break;
          case 288:
            result = "R_AARCH64_MOVW_PREL_G0_NC";
            break;
          case 289:
            result = "R_AARCH64_MOVW_PREL_G1";
            break;
          case 290:
            result = "R_AARCH64_MOVW_PREL_G1_NC";
            break;
          case 291:
            result = "R_AARCH64_MOVW_PREL_G2";
            break;
          case 292:
            result = "R_AARCH64_MOVW_PREL_G2_NC";
            break;
          case 293:
            result = "R_AARCH64_MOVW_PREL_G3";
            break;
          case 299:
            result = "R_AARCH64_LDST128_ABS_LO12_NC";
            break;
          case 300:
            result = "R_AARCH64_MOVW_GOTOFF_G0";
            break;
          case 301:
            result = "R_AARCH64_MOVW_GOTOFF_G0_NC";
            break;
          case 302:
            result = "R_AARCH64_MOVW_GOTOFF_G1";
            break;
          case 303:
            result = "R_AARCH64_MOVW_GOTOFF_G1_NC";
            break;
          case 304:
            result = "R_AARCH64_MOVW_GOTOFF_G2";
            break;
          case 305:
            result = "R_AARCH64_MOVW_GOTOFF_G2_NC";
            break;
          case 306:
            result = "R_AARCH64_MOVW_GOTOFF_G3";
            break;
          case 307:
            result = "R_AARCH64_GOTREL64";
            break;
          case 308:
            result = "R_AARCH64_GOTREL32";
            break;
          case 309:
            result = "R_AARCH64_GOT_LD_PREL19";
            break;
          case 310:
            result = "R_AARCH64_LD64_GOTOFF_LO15";
            break;
          case 311:
            result = "R_AARCH64_ADR_GOT_PAGE";
            break;
          case 312:
            result = "R_AARCH64_LD64_GOT_LO12_NC";
            break;
          case 313:
            result = "R_AARCH64_LD64_GOTPAGE_LO15";
            break;
          case 512:
            result = "R_AARCH64_TLSGD_ADR_PREL21";
            break;
          case 513:
            result = "R_AARCH64_TLSGD_ADR_PAGE21";
            break;
          case 514:
            result = "R_AARCH64_TLSGD_ADD_LO12_NC";
            break;
          case 515:
            result = "R_AARCH64_TLSGD_MOVW_G1";
            break;
          case 516:
            result = "R_AARCH64_TLSGD_MOVW_G0_NC";
            break;
          case 517:
            result = "R_AARCH64_TLSLD_ADR_PREL21";
            break;
          case 518:
            result = "R_AARCH64_TLSLD_ADR_PAGE21";
            break;
          case 519:
            result = "R_AARCH64_TLSLD_ADD_LO12_NC";
            break;
          case 520:
            result = "R_AARCH64_TLSLD_MOVW_G1";
            break;
          case 521:
            result = "R_AARCH64_TLSLD_MOVW_G0_NC";
            break;
          case 522:
            result = "R_AARCH64_TLSLD_LD_PREL19";
            break;
          case 523:
            result = "R_AARCH64_TLSLD_MOVW_DTPREL_G2";
            break;
          case 524:
            result = "R_AARCH64_TLSLD_MOVW_DTPREL_G1";
            break;
          case 525:
            result = "R_AARCH64_TLSLD_MOVW_DTPREL_G1_NC";
            break;
          case 526:
            result = "R_AARCH64_TLSLD_MOVW_DTPREL_G0";
            break;
          case 527:
            result = "R_AARCH64_TLSLD_MOVW_DTPREL_G0_NC";
            break;
          case 528:
            result = "R_AARCH64_TLSLD_ADD_DTPREL_HI12";
            break;
          case 529:
            result = "R_AARCH64_TLSLD_ADD_DTPREL_LO12";
            break;
          case 530:
            result = "R_AARCH64_TLSLD_ADD_DTPREL_LO12_NC";
            break;
          case 531:
            result = "R_AARCH64_TLSLD_LDST8_DTPREL_LO12";
            break;
          case 532:
            result = "R_AARCH64_TLSLD_LDST8_DTPREL_LO12_NC";
            break;
          case 533:
            result = "R_AARCH64_TLSLD_LDST16_DTPREL_LO12";
            break;
          case 534:
            result = "R_AARCH64_TLSLD_LDST16_DTPREL_LO12_NC";
            break;
          case 535:
            result = "R_AARCH64_TLSLD_LDST32_DTPREL_LO12";
            break;
          case 536:
            result = "R_AARCH64_TLSLD_LDST32_DTPREL_LO12_NC";
            break;
          case 537:
            result = "R_AARCH64_TLSLD_LDST64_DTPREL_LO12";
            break;
          case 538:
            result = "R_AARCH64_TLSLD_LDST64_DTPREL_LO12_NC";
            break;
          case 539:
            result = "R_AARCH64_TLSIE_MOVW_GOTTPREL_G1";
            break;
          case 540:
            result = "R_AARCH64_TLSIE_MOVW_GOTTPREL_G0_NC";
            break;
          case 541:
            result = "R_AARCH64_TLSIE_ADR_GOTTPREL_PAGE21";
            break;
          case 542:
            result = "R_AARCH64_TLSIE_LD64_GOTTPREL_LO12_NC";
            break;
          case 543:
            result = "R_AARCH64_TLSIE_LD_GOTTPREL_PREL19";
            break;
          case 544:
            result = "R_AARCH64_TLSLE_MOVW_TPREL_G2";
            break;
          case 545:
            result = "R_AARCH64_TLSLE_MOVW_TPREL_G1";
            break;
          case 546:
            result = "R_AARCH64_TLSLE_MOVW_TPREL_G1_NC";
            break;
          case 547:
            result = "R_AARCH64_TLSLE_MOVW_TPREL_G0";
            break;
          case 548:
            result = "R_AARCH64_TLSLE_MOVW_TPREL_G0_NC";
            break;
          case 549:
            result = "R_AARCH64_TLSLE_ADD_TPREL_HI12";
            break;
          case 550:
            result = "R_AARCH64_TLSLE_ADD_TPREL_LO12";
            break;
          case 551:
            result = "R_AARCH64_TLSLE_ADD_TPREL_LO12_NC";
            break;
          case 552:
            result = "R_AARCH64_TLSLE_LDST8_TPREL_LO12";
            break;
          case 553:
            result = "R_AARCH64_TLSLE_LDST8_TPREL_LO12_NC";
            break;
          case 554:
            result = "R_AARCH64_TLSLE_LDST16_TPREL_LO12";
            break;
          case 555:
            result = "R_AARCH64_TLSLE_LDST16_TPREL_LO12_NC";
            break;
          case 556:
            result = "R_AARCH64_TLSLE_LDST32_TPREL_LO12";
            break;
          case 557:
            result = "R_AARCH64_TLSLE_LDST32_TPREL_LO12_NC";
            break;
          case 558:
            result = "R_AARCH64_TLSLE_LDST64_TPREL_LO12";
            break;
          case 559:
            result = "R_AARCH64_TLSLE_LDST64_TPREL_LO12_NC";
            break;
          case 560:
            result = "R_AARCH64_TLSDESC_LD_PREL19";
            break;
          case 561:
            result = "R_AARCH64_TLSDESC_ADR_PREL21";
            break;
          case 562:
            result = "R_AARCH64_TLSDESC_ADR_PAGE21";
            break;
          case 563:
            result = "R_AARCH64_TLSDESC_LD64_LO12";
            break;
          case 564:
            result = "R_AARCH64_TLSDESC_ADD_LO12";
            break;
          case 565:
            result = "R_AARCH64_TLSDESC_OFF_G1";
            break;
          case 566:
            result = "R_AARCH64_TLSDESC_OFF_G0_NC";
            break;
          case 567:
            result = "R_AARCH64_TLSDESC_LDR";
            break;
          case 568:
            result = "R_AARCH64_TLSDESC_ADD";
            break;
          case 569:
            result = "R_AARCH64_TLSDESC_CALL";
            break;
          case 570:
            result = "R_AARCH64_TLSLE_LDST128_TPREL_LO12";
            break;
          case 571:
            result = "R_AARCH64_TLSLE_LDST128_TPREL_LO12_NC";
            break;
          case 572:
            result = "R_AARCH64_TLSLD_LDST128_DTPREL_Lo12";
            break;
          case 573:
            result = "R_AARCH64_TLSLD_LDST128_DTPREL_Lo12_NC";
            break;
          case 1024:
            result = "R_AARCH64_COPY";
            break;
          case 1025:
            result = "R_AARCH64_GLOB_DAT";
            break;
          case 1026:
            result = "R_AARCH64_JUMP_SLOT";
            break;
          case 1027:
            result = "R_AARCH64_RELATIVE";
            break;
          case 1028:
            result = "R_AARCH64_TLS_DTPREL64";
            break;
          case 1029:
            result = "R_AARCH64_TLS_DTPMOD64";
            break;
          case 1030:
            result = "R_AARCH64_TLS_TPREL64";
            break;
          case 1031:
            result = "R_AARCH64_TLSDESC";
            break;
          case 1032:
            result = "R_AARCH64_IRELATIVE";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      case 0xF3:
        switch ( a2 )
        {
          case 0:
            result = "R_RISCV_NONE";
            break;
          case 1:
            result = "R_RISCV_32";
            break;
          case 2:
            result = "R_RISCV_64";
            break;
          case 3:
            result = "R_RISCV_RELATIVE";
            break;
          case 4:
            result = "R_RISCV_COPY";
            break;
          case 5:
            result = "R_RISCV_JUMP_SLOT";
            break;
          case 6:
            result = "R_RISCV_TLS_DTPMOD32";
            break;
          case 7:
            result = "R_RISCV_TLS_DTPMOD64";
            break;
          case 8:
            result = "R_RISCV_TLS_DTPREL32";
            break;
          case 9:
            result = "R_RISCV_TLS_DTPREL64";
            break;
          case 10:
            result = "R_RISCV_TLS_TPREL32";
            break;
          case 11:
            result = "R_RISCV_TLS_TPREL64";
            break;
          case 16:
            result = "R_RISCV_BRANCH";
            break;
          case 17:
            result = "R_RISCV_JAL";
            break;
          case 18:
            result = "R_RISCV_CALL";
            break;
          case 19:
            result = "R_RISCV_CALL_PLT";
            break;
          case 20:
            result = "R_RISCV_GOT_HI20";
            break;
          case 21:
            result = "R_RISCV_TLS_GOT_HI20";
            break;
          case 22:
            result = "R_RISCV_TLS_GD_HI20";
            break;
          case 23:
            result = "R_RISCV_PCREL_HI20";
            break;
          case 24:
            result = "R_RISCV_PCREL_LO12_I";
            break;
          case 25:
            result = "R_RISCV_PCREL_LO12_S";
            break;
          case 26:
            result = "R_RISCV_HI20";
            break;
          case 27:
            result = "R_RISCV_LO12_I";
            break;
          case 28:
            result = "R_RISCV_LO12_S";
            break;
          case 29:
            result = "R_RISCV_TPREL_HI20";
            break;
          case 30:
            result = "R_RISCV_TPREL_LO12_I";
            break;
          case 31:
            result = "R_RISCV_TPREL_LO12_S";
            break;
          case 32:
            result = "R_RISCV_TPREL_ADD";
            break;
          case 33:
            result = "R_RISCV_ADD8";
            break;
          case 34:
            result = "R_RISCV_ADD16";
            break;
          case 35:
            result = "R_RISCV_ADD32";
            break;
          case 36:
            result = "R_RISCV_ADD64";
            break;
          case 37:
            result = "R_RISCV_SUB8";
            break;
          case 38:
            result = "R_RISCV_SUB16";
            break;
          case 39:
            result = "R_RISCV_SUB32";
            break;
          case 40:
            result = "R_RISCV_SUB64";
            break;
          case 41:
            result = "R_RISCV_GNU_VTINHERIT";
            break;
          case 42:
            result = "R_RISCV_GNU_VTENTRY";
            break;
          case 43:
            result = "R_RISCV_ALIGN";
            break;
          case 44:
            result = "R_RISCV_RVC_BRANCH";
            break;
          case 45:
            result = "R_RISCV_RVC_JUMP";
            break;
          case 46:
            result = "R_RISCV_RVC_LUI";
            break;
          case 47:
            result = "R_RISCV_GPREL_I";
            break;
          case 48:
            result = "R_RISCV_GPREL_S";
            break;
          case 49:
            result = "R_RISCV_TPREL_I";
            break;
          case 50:
            result = "R_RISCV_TPREL_S";
            break;
          case 51:
            result = "R_RISCV_RELAX";
            break;
          case 52:
            result = "R_RISCV_SUB6";
            break;
          case 53:
            result = "R_RISCV_SET6";
            break;
          case 54:
            result = "R_RISCV_SET8";
            break;
          case 55:
            result = "R_RISCV_SET16";
            break;
          case 56:
            result = "R_RISCV_SET32";
            break;
          case 57:
            result = "R_RISCV_32_PCREL";
            break;
          case 58:
            result = "R_RISCV_IRELATIVE";
            break;
          default:
            result = "Unknown";
            break;
        }
        break;
      default:
        result = "Unknown";
        break;
    }
  }
  return result;
}

