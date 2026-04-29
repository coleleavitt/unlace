char *__fastcall sub_3BE10(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  char *v3; // rdx
  __int16 v5; // dx

  v2 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)(v2 + 511) != 6 )
  {
    if ( a2 > 0x6FFFFFFF )
    {
LABEL_56:
      v5 = *(_WORD *)(v2 + 522);
      if ( v5 == 183 || v5 == 40 )
      {
        if ( a2 <= 0x70000005 )
        {
          if ( a2 > 0x70000000 )
          {
            v3 = "ARM_EXIDX";
            switch ( a2 )
            {
              case 0x70000002u:
                v3 = "ARM_PREEMPTMAP";
                break;
              case 0x70000003u:
                v3 = "ARM_ATTRIBUTES";
                break;
              case 0x70000004u:
                v3 = "ARM_DEBUGOVERLAY";
                break;
              case 0x70000005u:
                v3 = "ARM_OVERLAYSECTION";
                break;
              default:
                return v3;
            }
            return v3;
          }
          v3 = "ANDROID_REL";
          if ( a2 == 1610612737 )
            return v3;
          if ( a2 == 1610612738 )
            return "ANDROID_RELA";
        }
        return nullptr;
      }
      if ( v5 != 8 )
      {
        if ( a2 == 1879048356 && v5 == 21 )
          return "PRXRELA";
        return nullptr;
      }
      if ( a2 > 0x70000021 )
      {
        v3 = "MIPS_DVP_OVERLAY_TABLE";
        if ( a2 == 2147480608 )
          return v3;
        if ( a2 > 0x7FFFF420 )
        {
          v3 = "MIPS_DVP_OVERLAY";
          if ( a2 == 2147480609 )
            return v3;
        }
        else
        {
          v3 = "MIPS_IOPMOD";
          if ( a2 == 1879048320 )
            return v3;
          v3 = "MIPS_PSPREL";
          if ( a2 == 1879048352 )
            return v3;
        }
        return nullptr;
      }
    }
    else
    {
      if ( a2 > 0x6FFFFFF4 )
      {
        switch ( a2 )
        {
          case 0x6FFFFFF5u:
            v3 = "GNU_ATTRIBUTES";
            break;
          case 0x6FFFFFF6u:
            v3 = "GNU_HASH";
            break;
          case 0x6FFFFFF7u:
            v3 = "GNU_LIBLIST";
            break;
          case 0x6FFFFFFDu:
            goto LABEL_15;
          case 0x6FFFFFFEu:
            goto LABEL_17;
          case 0x6FFFFFFFu:
            goto LABEL_16;
          default:
            goto LABEL_18;
        }
        return v3;
      }
      v3 = "GNU_INCREMENTAL_RELOCS";
      if ( a2 == 1879000834 )
        return v3;
      if ( a2 <= 0x6FFF4702 )
      {
        v3 = "GNU_INCREMENTAL_INPUTS";
        if ( a2 != 1879000832 )
        {
          v3 = "GNU_INCREMENTAL_SYMTAB";
          if ( a2 != 1879000833 )
          {
LABEL_18:
            switch ( a2 )
            {
              case 0u:
                v3 = "NULL";
                break;
              case 1u:
                v3 = "PROGBITS";
                break;
              case 2u:
                v3 = "SYMTAB";
                break;
              case 3u:
                v3 = "STRTAB";
                break;
              case 4u:
                v3 = "RELA";
                break;
              case 5u:
                v3 = "HASH";
                break;
              case 6u:
                v3 = "DYNAMIC";
                break;
              case 7u:
                v3 = "NOTE";
                break;
              case 8u:
                v3 = "NOBITS";
                break;
              case 9u:
                v3 = "REL";
                break;
              case 0xAu:
                v3 = "SHLIB";
                break;
              case 0xBu:
                v3 = "DYNSYM";
                break;
              case 0xCu:
                v3 = "COMDAT";
                break;
              case 0xEu:
                v3 = "INIT_ARRAY";
                break;
              case 0xFu:
                v3 = "FINI_ARRAY";
                break;
              case 0x10u:
                v3 = "PREINIT_ARRAY";
                break;
              case 0x11u:
                v3 = "GROUP";
                break;
              case 0x12u:
                v3 = "SYMTAB_SHNDX";
                break;
              default:
                goto LABEL_56;
            }
          }
        }
        return v3;
      }
      v3 = "GNU_INCREMENTAL_GOT_PLT";
      if ( a2 == 1879000835 )
        return v3;
      if ( *(_WORD *)(v2 + 522) != 8 )
        return nullptr;
    }
    if ( a2 > 0x6FFFFFFF )
    {
      switch ( a2 )
      {
        case 0x70000000u:
          v3 = "MIPS_LIBLIST";
          break;
        case 0x70000001u:
          v3 = "MIPS_MSYM";
          break;
        case 0x70000002u:
          v3 = "MIPS_CONFLICT";
          break;
        case 0x70000003u:
          v3 = "MIPS_GPTAB";
          break;
        case 0x70000004u:
          v3 = "MIPS_UCODE";
          break;
        case 0x70000005u:
          v3 = "MIPS_DEBUG";
          break;
        case 0x70000006u:
          v3 = "MIPS_REGINFO";
          break;
        case 0x7000000Bu:
          v3 = "MIPS_IFACE";
          break;
        case 0x7000000Cu:
          v3 = "MIPS_CONTENT";
          break;
        case 0x7000000Du:
          v3 = "MIPS_OPTIONS";
          break;
        case 0x7000001Eu:
          v3 = "MIPS_DWARF";
          break;
        case 0x70000020u:
          v3 = "MIPS_SYMBOL_LIB";
          break;
        case 0x70000021u:
          v3 = "MIPS_EVENTS";
          break;
        default:
          return nullptr;
      }
      return v3;
    }
    return nullptr;
  }
  switch ( a2 )
  {
    case 0x6FFFFFEEu:
      v3 = "SUNW_ancillary";
      break;
    case 0x6FFFFFEFu:
      v3 = "SUNW_capchain";
      break;
    case 0x6FFFFFF0u:
      v3 = "SUNW_capinfo";
      break;
    case 0x6FFFFFF1u:
      v3 = "SUNW_symsort";
      break;
    case 0x6FFFFFF2u:
      v3 = "SUNW_tlssort";
      break;
    case 0x6FFFFFF3u:
      v3 = "SUNW_LDYNSYM";
      break;
    case 0x6FFFFFF4u:
      v3 = "SUNW_dof";
      break;
    case 0x6FFFFFF5u:
      v3 = "SUNW_cap";
      break;
    case 0x6FFFFFF6u:
      v3 = "SUNW_SIGNATURE";
      break;
    case 0x6FFFFFF7u:
      v3 = "SUNW_ANNOTATE";
      break;
    case 0x6FFFFFF8u:
      v3 = "SUNW_DEBUGSTR";
      break;
    case 0x6FFFFFF9u:
      v3 = "SUNW_DEBUG";
      break;
    case 0x6FFFFFFAu:
      v3 = "SUNW_move";
      break;
    case 0x6FFFFFFBu:
      v3 = "SUNW_COMDAT";
      break;
    case 0x6FFFFFFCu:
      v3 = "SUNW_syminfo";
      break;
    case 0x6FFFFFFDu:
LABEL_15:
      v3 = "VERDEF";
      break;
    case 0x6FFFFFFEu:
LABEL_17:
      v3 = "VERNEEDED";
      break;
    case 0x6FFFFFFFu:
LABEL_16:
      v3 = "VERSYMBOL";
      break;
    default:
      goto LABEL_18;
  }
  return v3;
}
