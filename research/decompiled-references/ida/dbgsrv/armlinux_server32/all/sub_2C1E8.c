/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C1E8
// Address: 0x0002C1E8

//----- (0002C1E8) --------------------------------------------------------
char *__fastcall sub_2C1E8(int a1, unsigned int a2)
{
  int v2; // r3
  char *result; // r0
  int v4; // r3
  bool v5; // zf

  v2 = *(_DWORD *)(a1 + 132);
  if ( *(_BYTE *)(v2 + 395) != 6 )
  {
    if ( a2 == 1879048181 )
      return "GNU_ATTRIBUTES";
    if ( a2 <= 0x6FFFFFF5 )
    {
      if ( a2 == 1879000833 )
        return "GNU_INCREMENTAL_SYMTAB";
      if ( a2 <= 0x6FFF4701 )
      {
        if ( a2 == 1879000832 )
          return "GNU_INCREMENTAL_INPUTS";
      }
      else
      {
        if ( a2 == 1879000834 )
          return "GNU_INCREMENTAL_RELOCS";
        if ( a2 == 1879000835 )
          return "GNU_INCREMENTAL_GOT_PLT";
      }
    }
    else
    {
      if ( a2 == 1879048189 )
        return "VERDEF";
      if ( a2 <= 0x6FFFFFFD )
      {
        if ( a2 == 1879048182 )
          return "GNU_HASH";
        if ( a2 == 1879048183 )
          return "GNU_LIBLIST";
      }
      else
      {
        if ( a2 == 1879048190 )
          return "VERNEEDED";
        if ( a2 == 1879048191 )
          return "VERSYMBOL";
      }
    }
LABEL_20:
    switch ( a2 )
    {
      case 0u:
        return "NULL";
      case 1u:
        return "PROGBITS";
      case 2u:
        return "SYMTAB";
      case 3u:
        return "STRTAB";
      case 4u:
        return "RELA";
      case 5u:
        return "HASH";
      case 6u:
        return "DYNAMIC";
      case 7u:
        return "NOTE";
      case 8u:
        return "NOBITS";
      case 9u:
        return "REL";
      case 0xAu:
        return "SHLIB";
      case 0xBu:
        return "DYNSYM";
      case 0xCu:
        return "COMDAT";
      case 0xEu:
        return "INIT_ARRAY";
      case 0xFu:
        return "FINI_ARRAY";
      case 0x10u:
        return "PREINIT_ARRAY";
      case 0x11u:
        return "GROUP";
      case 0x12u:
        return "SYMTAB_SHNDX";
      default:
        v4 = *(unsigned __int16 *)(v2 + 406);
        v5 = v4 == 40;
        if ( v4 != 40 )
          v5 = v4 == 183;
        if ( v5 )
        {
          if ( a2 == 1879048194 )
            return "ARM_PREEMPTMAP";
          if ( a2 > 0x70000002 )
          {
            if ( a2 == 1879048196 )
              return "ARM_DEBUGOVERLAY";
            if ( a2 < 0x70000004 )
              return "ARM_ATTRIBUTES";
            if ( a2 == 1879048197 )
              return "ARM_OVERLAYSECTION";
          }
          else
          {
            switch ( a2 )
            {
              case 0x60000002u:
                return "ANDROID_RELA";
              case 0x70000001u:
                return "ARM_EXIDX";
              case 0x60000001u:
                return "ANDROID_REL";
            }
          }
        }
        else
        {
          result = nullptr;
          if ( v4 != 8 )
          {
            if ( v4 == 21 && a2 == 1879048356 )
              return "PRXRELA";
            return result;
          }
          if ( a2 == 1879048204 )
            return "MIPS_CONTENT";
          if ( a2 > 0x7000000C )
          {
            if ( a2 == 1879048225 )
              return "MIPS_EVENTS";
            if ( a2 <= 0x70000021 )
            {
              switch ( a2 )
              {
                case 0x7000001Eu:
                  return "MIPS_DWARF";
                case 0x70000020u:
                  return "MIPS_SYMBOL_LIB";
                case 0x7000000Du:
                  return "MIPS_OPTIONS";
              }
            }
            else
            {
              if ( a2 == 1879048352 )
                return "MIPS_PSPREL";
              if ( a2 <= 0x700000A0 )
              {
                if ( a2 == 1879048320 )
                  return "MIPS_IOPMOD";
              }
              else
              {
                if ( a2 == 2147480608 )
                  return "MIPS_DVP_OVERLAY_TABLE";
                if ( a2 == 2147480609 )
                  return "MIPS_DVP_OVERLAY";
              }
            }
          }
          else
          {
            if ( a2 == 1879048195 )
              return "MIPS_GPTAB";
            if ( a2 <= 0x70000003 )
            {
              if ( a2 == 1879048193 )
                return "MIPS_MSYM";
              if ( a2 > 0x70000001 )
                return "MIPS_CONFLICT";
              if ( a2 == 1879048192 )
                return "MIPS_LIBLIST";
            }
            else
            {
              if ( a2 == 1879048197 )
                return "MIPS_DEBUG";
              if ( a2 < 0x70000005 )
                return "MIPS_UCODE";
              if ( a2 == 1879048198 )
                return "MIPS_REGINFO";
              if ( a2 == 1879048203 )
                return "MIPS_IFACE";
            }
          }
        }
        return nullptr;
    }
  }
  switch ( a2 )
  {
    case 0x6FFFFFEEu:
      result = "SUNW_ancillary";
      break;
    case 0x6FFFFFEFu:
      result = "SUNW_capchain";
      break;
    case 0x6FFFFFF0u:
      result = "SUNW_capinfo";
      break;
    case 0x6FFFFFF1u:
      result = "SUNW_symsort";
      break;
    case 0x6FFFFFF2u:
      result = "SUNW_tlssort";
      break;
    case 0x6FFFFFF3u:
      result = "SUNW_LDYNSYM";
      break;
    case 0x6FFFFFF4u:
      result = "SUNW_dof";
      break;
    case 0x6FFFFFF5u:
      result = "SUNW_cap";
      break;
    case 0x6FFFFFF6u:
      result = "SUNW_SIGNATURE";
      break;
    case 0x6FFFFFF7u:
      result = "SUNW_ANNOTATE";
      break;
    case 0x6FFFFFF8u:
      result = "SUNW_DEBUGSTR";
      break;
    case 0x6FFFFFF9u:
      result = "SUNW_DEBUG";
      break;
    case 0x6FFFFFFAu:
      result = "SUNW_move";
      break;
    case 0x6FFFFFFBu:
      result = "SUNW_COMDAT";
      break;
    case 0x6FFFFFFCu:
      result = "SUNW_syminfo";
      break;
    case 0x6FFFFFFDu:
      result = "VERDEF";
      break;
    case 0x6FFFFFFEu:
      result = "VERNEEDED";
      break;
    case 0x6FFFFFFFu:
      result = "VERSYMBOL";
      break;
    default:
      goto LABEL_20;
  }
  return result;
}
