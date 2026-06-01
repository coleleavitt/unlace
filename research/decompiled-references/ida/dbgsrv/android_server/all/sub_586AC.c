/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_586AC
// Address: 0x00000000000586AC

//----- (00000000000586AC) ----------------------------------------------------
char *__fastcall sub_586AC(__int64 a1, __int64 a2)
{
  int v2; // w8
  __int64 v3; // x9
  char *result; // x0

  v2 = *(unsigned __int16 *)(a1 + 522);
  if ( *(_BYTE *)(a1 + 511) == 6 )
  {
    v3 = a2 - 1610612749;
    if ( (unsigned __int64)(a2 - 1610612749) < 0x1F && ((0x51557FFBu >> v3) & 1) != 0 )
      return off_15CB70[v3];
  }
  if ( a2 > 1879047668 )
  {
    if ( a2 <= 1879047924 )
    {
      switch ( a2 )
      {
        case 1879047669LL:
          result = "DT_GNU_PRELINKED";
          break;
        case 1879047670LL:
          result = "DT_GNU_CONFLICTSZ";
          break;
        case 1879047671LL:
          result = "DT_GNU_LIBLISTSZ";
          break;
        case 1879047672LL:
          result = "DT_CHECKSUM";
          break;
        case 1879047673LL:
          result = "DT_PLTPADSZ";
          break;
        case 1879047674LL:
          result = "DT_MOVEENT";
          break;
        case 1879047675LL:
          result = "DT_MOVESZ";
          break;
        case 1879047676LL:
          result = "DT_FEATURE";
          break;
        case 1879047677LL:
          result = "DT_POSFLAG_1";
          break;
        case 1879047678LL:
          result = "DT_SYMINSZ";
          break;
        case 1879047679LL:
          result = "DT_SYMINENT";
          break;
        case 1879047680LL:
          result = "DT_ADDRRNGLO";
          break;
        default:
          goto LABEL_22;
      }
    }
    else if ( a2 > 1879048175 )
    {
      if ( a2 > 2147483644 )
      {
        switch ( a2 )
        {
          case 0x7FFFFFFDLL:
            return "DT_AUXILIARY";
          case 0x7FFFFFFELL:
            return "DT_USED";
          case 0x7FFFFFFFLL:
            return "DT_FILTER";
        }
LABEL_22:
        if ( v2 <= 39 )
        {
          if ( v2 == 8 )
          {
            if ( (unsigned __int64)(a2 - 1879048193) < 0x34 )
              return off_15CC70[a2 - 1879048193];
          }
          else if ( v2 == 20 && a2 == 1879048192 )
          {
            return "DT_PPC_GOT";
          }
        }
        else
        {
          switch ( v2 )
          {
            case 40:
              goto LABEL_26;
            case 50:
              result = "DT_HP_LOAD_MAP";
              switch ( a2 )
              {
                case 1610612736LL:
                  return result;
                case 1610612737LL:
                  result = "DT_HP_DLD_FLAGS";
                  break;
                case 1610612738LL:
                  result = "DT_HP_DLD_HOOK";
                  break;
                case 1610612739LL:
                  result = "DT_HP_UX10_INIT";
                  break;
                case 1610612740LL:
                  result = "DT_HP_UX10_INITSZ";
                  break;
                case 1610612741LL:
                  result = "DT_HP_PREINIT";
                  break;
                case 1610612742LL:
                  result = "DT_HP_PREINITSZ";
                  break;
                case 1610612743LL:
                  result = "DT_HP_NEEDED";
                  break;
                case 1610612744LL:
                  result = "DT_HP_TIME_STAMP";
                  break;
                case 1610612745LL:
                  result = "DT_HP_CHECKSUM";
                  break;
                case 1610612746LL:
                  result = "DT_HP_GST_SIZE";
                  break;
                case 1610612747LL:
                  result = "DT_HP_GST_VERSION";
                  break;
                case 1610612748LL:
                  result = "DT_HP_GST_HASHVAL";
                  break;
                case 1610612749LL:
                  result = "DT_HP_EPLTREL";
                  break;
                case 1610612750LL:
                  result = "DT_HP_EPLTRELSZ";
                  break;
                case 1610612751LL:
                  result = "DT_HP_FILTERED";
                  break;
                case 1610612752LL:
                  result = "DT_HP_FILTER_TLS";
                  break;
                case 1610612753LL:
                  result = "DT_HP_COMPAT_FILTERED";
                  break;
                case 1610612754LL:
                  result = "DT_HP_LAZYLOAD";
                  break;
                case 1610612755LL:
                  result = "DT_HP_BIND_NOW_COUNT";
                  break;
                case 1610612756LL:
                  result = "DT_PLT";
                  break;
                case 1610612757LL:
                  result = "DT_PLT_SIZE";
                  break;
                case 1610612758LL:
                  result = "DT_DLT";
                  break;
                case 1610612759LL:
                  result = "DT_DLT_SIZE";
                  break;
                case 1610612760LL:
                  result = "DT_HP_SYM_CHECKSUM";
                  break;
                default:
                  if ( a2 != 1879048192 )
                    return nullptr;
                  result = "DT_IA_64_PLT_RESERVE";
                  break;
              }
              return result;
            case 183:
LABEL_26:
              if ( (unsigned __int64)(a2 - 1610612751) < 4 )
                return (char *)*(&off_15CE10 + a2 - 1610612751);
              break;
          }
        }
        return nullptr;
      }
      switch ( a2 )
      {
        case 1879048176LL:
          result = "DT_VERSYM";
          break;
        case 1879048185LL:
          result = "DT_RELACOUNT";
          break;
        case 1879048186LL:
          result = "DT_RELCOUNT";
          break;
        case 1879048187LL:
          result = "DT_FLAGS_1";
          break;
        case 1879048188LL:
          result = "DT_VERDEF";
          break;
        case 1879048189LL:
          result = "DT_VERDEFNUM";
          break;
        case 1879048190LL:
          result = "DT_VERNEED";
          break;
        case 1879048191LL:
          result = "DT_VERNEEDNUM";
          break;
        default:
          goto LABEL_22;
      }
    }
    else
    {
      switch ( a2 )
      {
        case 1879047925LL:
          result = "DT_GNU_HASH";
          break;
        case 1879047926LL:
          result = "DT_TLSDESC_PLT";
          break;
        case 1879047927LL:
          result = "DT_TLSDESC_GOT";
          break;
        case 1879047928LL:
          result = "DT_GNU_CONFLICT";
          break;
        case 1879047929LL:
          result = "DT_GNU_LIBLIST";
          break;
        case 1879047930LL:
          result = "DT_CONFIG";
          break;
        case 1879047931LL:
          result = "DT_DEPAUDIT";
          break;
        case 1879047932LL:
          result = "DT_AUDIT";
          break;
        case 1879047933LL:
          result = "DT_PLTPAD";
          break;
        case 1879047934LL:
          result = "DT_MOVETAB";
          break;
        case 1879047935LL:
          result = "DT_SYMINFO";
          break;
        default:
          goto LABEL_22;
      }
    }
  }
  else
  {
    result = "DT_NULL";
    switch ( a2 )
    {
      case 0LL:
        return result;
      case 1LL:
        result = "DT_NEEDED";
        break;
      case 2LL:
        result = "DT_PLTRELSZ";
        break;
      case 3LL:
        result = "DT_PLTGOT";
        break;
      case 4LL:
        result = "DT_HASH";
        break;
      case 5LL:
        result = "DT_STRTAB";
        break;
      case 6LL:
        result = "DT_SYMTAB";
        break;
      case 7LL:
        result = "DT_RELA";
        break;
      case 8LL:
        result = "DT_RELASZ";
        break;
      case 9LL:
        result = "DT_RELAENT";
        break;
      case 10LL:
        result = "DT_STRSZ";
        break;
      case 11LL:
        result = "DT_SYMENT";
        break;
      case 12LL:
        result = "DT_INIT";
        break;
      case 13LL:
        result = "DT_FINI";
        break;
      case 14LL:
        result = "DT_SONAME";
        break;
      case 15LL:
        result = "DT_RPATH";
        break;
      case 16LL:
        result = "DT_SYMBOLIC";
        break;
      case 17LL:
        result = "DT_REL";
        break;
      case 18LL:
        result = "DT_RELSZ";
        break;
      case 19LL:
        result = "DT_RELENT";
        break;
      case 20LL:
        result = "DT_PLTREL";
        break;
      case 21LL:
        result = "DT_DEBUG";
        break;
      case 22LL:
        result = "DT_TEXTREL";
        break;
      case 23LL:
        result = "DT_JMPREL";
        break;
      case 24LL:
        result = "DT_BIND_NOW";
        break;
      case 25LL:
        result = "DT_INIT_ARRAY";
        break;
      case 26LL:
        result = "DT_FINI_ARRAY";
        break;
      case 27LL:
        result = "DT_INIT_ARRAYSZ";
        break;
      case 28LL:
        result = "DT_FINI_ARRAYSZ";
        break;
      case 29LL:
        result = "DT_RUNPATH";
        break;
      case 30LL:
        result = "DT_FLAGS";
        break;
      case 31LL:
        goto LABEL_22;
      case 32LL:
        result = "DT_PREINIT_ARRAY";
        break;
      case 33LL:
        result = "DT_PREINIT_ARRAYSZ";
        break;
      default:
        if ( a2 != 1879047424 )
          goto LABEL_22;
        result = "DT_VALRNGLO";
        break;
    }
  }
  return result;
}
// 15CB70: using guessed type char *off_15CB70[31];
// 15CC70: using guessed type char *off_15CC70[11];
// 15CE10: using guessed type _UNKNOWN *off_15CE10;
