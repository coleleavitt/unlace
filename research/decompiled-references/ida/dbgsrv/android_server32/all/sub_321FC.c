/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_321FC
// Address: 0x000321FC

//----- (000321FC) --------------------------------------------------------
const char *__fastcall sub_321FC(int a1, int a2)
{
  int v2; // r0
  const char *result; // r0
  int v4; // kr00_4
  int v5; // kr08_4
  int v6; // r0

  v2 = *(_DWORD *)(a1 + 132);
  if ( *(_BYTE *)(v2 + 395) != 6 )
  {
    switch ( a2 )
    {
      case 0:
        return "NULL";
      case 1:
        return "PROGBITS";
      case 2:
        return "SYMTAB";
      case 3:
        return "STRTAB";
      case 4:
        return "RELA";
      case 5:
        return "HASH";
      case 6:
        return "DYNAMIC";
      case 7:
        return "NOTE";
      case 8:
        return "NOBITS";
      case 9:
        return "REL";
      case 10:
        return "SHLIB";
      case 11:
        return "DYNSYM";
      case 12:
        return "COMDAT";
      case 13:
LABEL_11:
        v6 = *(unsigned __int16 *)(v2 + 406);
        if ( v6 == 8 )
        {
          if ( a2 <= 1879048351 )
          {
            result = "MIPS_LIBLIST";
            switch ( a2 )
            {
              case 1879048192:
                return result;
              case 1879048193:
                result = "MIPS_MSYM";
                break;
              case 1879048194:
                result = "MIPS_CONFLICT";
                break;
              case 1879048195:
                result = "MIPS_GPTAB";
                break;
              case 1879048196:
                result = "MIPS_UCODE";
                break;
              case 1879048197:
                result = "MIPS_DEBUG";
                break;
              case 1879048198:
                result = "MIPS_REGINFO";
                break;
              case 1879048203:
                result = "MIPS_IFACE";
                break;
              case 1879048204:
                result = "MIPS_CONTENT";
                break;
              case 1879048205:
                result = "MIPS_OPTIONS";
                break;
              case 1879048222:
                result = "MIPS_DWARF";
                break;
              case 1879048224:
                result = "MIPS_SYMBOL_LIB";
                break;
              case 1879048225:
                result = "MIPS_EVENTS";
                break;
              case 1879048320:
                result = "MIPS_IOPMOD";
                break;
              default:
                return nullptr;
            }
            return result;
          }
          switch ( a2 )
          {
            case 1879048352:
              return "MIPS_PSPREL";
            case 2147480608:
              return "MIPS_DVP_OVERLAY_TABLE";
            case 2147480609:
              return "MIPS_DVP_OVERLAY";
          }
        }
        else
        {
          if ( v6 == 183 || v6 == 40 )
          {
            result = "ARM_EXIDX";
            switch ( a2 )
            {
              case 1879048193:
                return result;
              case 1879048194:
                result = "ARM_PREEMPTMAP";
                break;
              case 1879048195:
                result = "ARM_ATTRIBUTES";
                break;
              case 1879048196:
                result = "ARM_DEBUGOVERLAY";
                break;
              case 1879048197:
                result = "ARM_OVERLAYSECTION";
                break;
              default:
                if ( a2 == 1610612737 )
                {
                  result = "ANDROID_REL";
                }
                else
                {
                  if ( a2 != 1610612738 )
                    return nullptr;
                  result = "ANDROID_RELA";
                }
                break;
            }
            return result;
          }
          if ( a2 == 1879048356 && v6 == 21 )
            return "PRXRELA";
        }
        return nullptr;
      case 14:
        return "INIT_ARRAY";
      case 15:
        return "FINI_ARRAY";
      case 16:
        return "PREINIT_ARRAY";
      case 17:
        return "GROUP";
      case 18:
        return "SYMTAB_SHNDX";
      default:
        switch ( a2 )
        {
          case 1879048181:
            result = "GNU_ATTRIBUTES";
            break;
          case 1879048182:
            result = "GNU_HASH";
            break;
          case 1879048183:
            result = "GNU_LIBLIST";
            break;
          case 1879048184:
          case 1879048185:
          case 1879048186:
          case 1879048187:
          case 1879048188:
            goto LABEL_11;
          case 1879048189:
            result = "VERDEF";
            break;
          case 1879048190:
            result = "VERNEEDED";
            break;
          case 1879048191:
            result = "VERSYMBOL";
            break;
          default:
            v5 = v2;
            result = "GNU_INCREMENTAL_INPUTS";
            switch ( a2 )
            {
              case 1879000832:
                return result;
              case 1879000833:
                result = "GNU_INCREMENTAL_SYMTAB";
                break;
              case 1879000834:
                result = "GNU_INCREMENTAL_RELOCS";
                break;
              case 1879000835:
                result = "GNU_INCREMENTAL_GOT_PLT";
                break;
              default:
                v2 = v5;
                goto LABEL_11;
            }
            break;
        }
        return result;
    }
  }
  switch ( a2 )
  {
    case 0:
      return "NULL";
    case 1:
      return "PROGBITS";
    case 2:
      return "SYMTAB";
    case 3:
      return "STRTAB";
    case 4:
      return "RELA";
    case 5:
      return "HASH";
    case 6:
      return "DYNAMIC";
    case 7:
      return "NOTE";
    case 8:
      return "NOBITS";
    case 9:
      return "REL";
    case 10:
      return "SHLIB";
    case 11:
      return "DYNSYM";
    case 12:
      return "COMDAT";
    case 13:
      goto LABEL_11;
    case 14:
      return "INIT_ARRAY";
    case 15:
      return "FINI_ARRAY";
    case 16:
      return "PREINIT_ARRAY";
    case 17:
      return "GROUP";
    case 18:
      return "SYMTAB_SHNDX";
    default:
      v4 = v2;
      result = "SUNW_ancillary";
      switch ( a2 )
      {
        case 1879048174:
          return result;
        case 1879048175:
          result = "SUNW_capchain";
          break;
        case 1879048176:
          result = "SUNW_capinfo";
          break;
        case 1879048177:
          result = "SUNW_symsort";
          break;
        case 1879048178:
          result = "SUNW_tlssort";
          break;
        case 1879048179:
          result = "SUNW_LDYNSYM";
          break;
        case 1879048180:
          result = "SUNW_dof";
          break;
        case 1879048181:
          result = "SUNW_cap";
          break;
        case 1879048182:
          result = "SUNW_SIGNATURE";
          break;
        case 1879048183:
          result = "SUNW_ANNOTATE";
          break;
        case 1879048184:
          result = "SUNW_DEBUGSTR";
          break;
        case 1879048185:
          result = "SUNW_DEBUG";
          break;
        case 1879048186:
          result = "SUNW_move";
          break;
        case 1879048187:
          result = "SUNW_COMDAT";
          break;
        case 1879048188:
          result = "SUNW_syminfo";
          break;
        case 1879048189:
          result = "VERDEF";
          break;
        case 1879048190:
          result = "VERNEEDED";
          break;
        case 1879048191:
          result = "VERSYMBOL";
          break;
        default:
          v2 = v4;
          goto LABEL_11;
      }
      break;
  }
  return result;
}
