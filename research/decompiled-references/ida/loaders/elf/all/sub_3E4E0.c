const char *__fastcall sub_3E4E0(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  __int16 v4; // cx
  __int16 v5; // cx

  if ( *(_BYTE *)(a1 + 511) == 6 )
  {
    switch ( a2 )
    {
      case 1610612749LL:
        v2 = "DT_SUNW_AUXILIARY";
        break;
      case 1610612750LL:
        v2 = "DT_SUNW_FILTER";
        break;
      case 1610612752LL:
        v2 = "DT_SUNW_CAP";
        break;
      case 1610612753LL:
        v2 = "DT_SUNW_SYMTAB";
        break;
      case 1610612754LL:
        v2 = "DT_SUNW_SYMSZ";
        break;
      case 1610612755LL:
        v2 = "DT_SUNW_ENCODING";
        break;
      case 1610612756LL:
        v2 = "DT_SUNW_SYMSORT";
        break;
      case 1610612757LL:
        v2 = "DT_SUNW_SYMSORTSZ";
        break;
      case 1610612758LL:
        v2 = "DT_SUNW_TLSSORT";
        break;
      case 1610612759LL:
        v2 = "DT_SUNW_TLSSORTSZ";
        break;
      case 1610612760LL:
        v2 = "DT_SUNW_CAPINFO";
        break;
      case 1610612761LL:
        v2 = "DT_SUNW_STRPAD";
        break;
      case 1610612762LL:
        v2 = "DT_SUNW_CAPCHAIN";
        break;
      case 1610612763LL:
        v2 = "DT_SUNW_LDMACH";
        break;
      case 1610612765LL:
        v2 = "DT_SUNW_CAPCHAINENT";
        break;
      case 1610612767LL:
        v2 = "DT_SUNW_CAPCHAINSZ";
        break;
      case 1610612769LL:
        v2 = "DT_SUNW_PARENT";
        break;
      case 1610612771LL:
        v2 = "DT_SUNW_ASLR";
        break;
      case 1610612773LL:
        v2 = "DT_SUNW_RELAX";
        break;
      case 1610612777LL:
        v2 = "DT_SUNW_NXHEAP";
        break;
      case 1610612779LL:
        v2 = "DT_SUNW_NXSTACK";
        break;
      default:
        goto LABEL_2;
    }
    return v2;
  }
LABEL_2:
  if ( a2 <= 1879047680 )
  {
    if ( a2 > 1879047668 )
    {
      v2 = "DT_GNU_PRELINKED";
      switch ( a2 )
      {
        case 1879047670LL:
          v2 = "DT_GNU_CONFLICTSZ";
          break;
        case 1879047671LL:
          v2 = "DT_GNU_LIBLISTSZ";
          break;
        case 1879047672LL:
          v2 = "DT_CHECKSUM";
          break;
        case 1879047673LL:
          v2 = "DT_PLTPADSZ";
          break;
        case 1879047674LL:
          v2 = "DT_MOVEENT";
          break;
        case 1879047675LL:
          v2 = "DT_MOVESZ";
          break;
        case 1879047676LL:
          v2 = "DT_FEATURE";
          break;
        case 1879047677LL:
          v2 = "DT_POSFLAG_1";
          break;
        case 1879047678LL:
          v2 = "DT_SYMINSZ";
          break;
        case 1879047679LL:
          v2 = "DT_SYMINENT";
          break;
        case 1879047680LL:
          v2 = "DT_ADDRRNGLO";
          break;
        default:
          return v2;
      }
      return v2;
    }
    if ( a2 <= 33 )
    {
      if ( a2 < 0 )
        return nullptr;
      switch ( a2 )
      {
        case 0LL:
          v2 = "DT_NULL";
          break;
        case 1LL:
          v2 = "DT_NEEDED";
          break;
        case 2LL:
          v2 = "DT_PLTRELSZ";
          break;
        case 3LL:
          v2 = "DT_PLTGOT";
          break;
        case 4LL:
          v2 = "DT_HASH";
          break;
        case 5LL:
          v2 = "DT_STRTAB";
          break;
        case 6LL:
          v2 = "DT_SYMTAB";
          break;
        case 7LL:
          v2 = "DT_RELA";
          break;
        case 8LL:
          v2 = "DT_RELASZ";
          break;
        case 9LL:
          v2 = "DT_RELAENT";
          break;
        case 10LL:
          v2 = "DT_STRSZ";
          break;
        case 11LL:
          v2 = "DT_SYMENT";
          break;
        case 12LL:
          v2 = "DT_INIT";
          break;
        case 13LL:
          v2 = "DT_FINI";
          break;
        case 14LL:
          v2 = "DT_SONAME";
          break;
        case 15LL:
          v2 = "DT_RPATH";
          break;
        case 16LL:
          v2 = "DT_SYMBOLIC";
          break;
        case 17LL:
          v2 = "DT_REL";
          break;
        case 18LL:
          v2 = "DT_RELSZ";
          break;
        case 19LL:
          v2 = "DT_RELENT";
          break;
        case 20LL:
          v2 = "DT_PLTREL";
          break;
        case 21LL:
          v2 = "DT_DEBUG";
          break;
        case 22LL:
          v2 = "DT_TEXTREL";
          break;
        case 23LL:
          v2 = "DT_JMPREL";
          break;
        case 24LL:
          v2 = "DT_BIND_NOW";
          break;
        case 25LL:
          v2 = "DT_INIT_ARRAY";
          break;
        case 26LL:
          v2 = "DT_FINI_ARRAY";
          break;
        case 27LL:
          v2 = "DT_INIT_ARRAYSZ";
          break;
        case 28LL:
          v2 = "DT_FINI_ARRAYSZ";
          break;
        case 29LL:
          v2 = "DT_RUNPATH";
          break;
        case 30LL:
          v2 = "DT_FLAGS";
          break;
        case 32LL:
          v2 = "DT_PREINIT_ARRAY";
          break;
        case 33LL:
          v2 = "DT_PREINIT_ARRAYSZ";
          break;
        default:
          goto LABEL_29;
      }
      return v2;
    }
    v2 = "DT_VALRNGLO";
    if ( a2 == 1879047424 )
      return v2;
    v4 = *(_WORD *)(a1 + 522);
    v2 = nullptr;
    switch ( v4 )
    {
      case 8:
        return v2;
      case 50:
        if ( a2 <= 1610612760 && a2 > 1610612735 )
        {
          v2 = "DT_HP_LOAD_MAP";
          switch ( a2 )
          {
            case 1610612737LL:
              v2 = "DT_HP_DLD_FLAGS";
              break;
            case 1610612738LL:
              v2 = "DT_HP_DLD_HOOK";
              break;
            case 1610612739LL:
              v2 = "DT_HP_UX10_INIT";
              break;
            case 1610612740LL:
              v2 = "DT_HP_UX10_INITSZ";
              break;
            case 1610612741LL:
              v2 = "DT_HP_PREINIT";
              break;
            case 1610612742LL:
              v2 = "DT_HP_PREINITSZ";
              break;
            case 1610612743LL:
              v2 = "DT_HP_NEEDED";
              break;
            case 1610612744LL:
              v2 = "DT_HP_TIME_STAMP";
              break;
            case 1610612745LL:
              v2 = "DT_HP_CHECKSUM";
              break;
            case 1610612746LL:
              v2 = "DT_HP_GST_SIZE";
              break;
            case 1610612747LL:
              v2 = "DT_HP_GST_VERSION";
              break;
            case 1610612748LL:
              v2 = "DT_HP_GST_HASHVAL";
              break;
            case 1610612749LL:
              v2 = "DT_HP_EPLTREL";
              break;
            case 1610612750LL:
              v2 = "DT_HP_EPLTRELSZ";
              break;
            case 1610612751LL:
              v2 = "DT_HP_FILTERED";
              break;
            case 1610612752LL:
              v2 = "DT_HP_FILTER_TLS";
              break;
            case 1610612753LL:
              v2 = "DT_HP_COMPAT_FILTERED";
              break;
            case 1610612754LL:
              v2 = "DT_HP_LAZYLOAD";
              break;
            case 1610612755LL:
              v2 = "DT_HP_BIND_NOW_COUNT";
              break;
            case 1610612756LL:
              v2 = "DT_PLT";
              break;
            case 1610612757LL:
              v2 = "DT_PLT_SIZE";
              break;
            case 1610612758LL:
              v2 = "DT_DLT";
              break;
            case 1610612759LL:
              v2 = "DT_DLT_SIZE";
              break;
            case 1610612760LL:
              v2 = "DT_HP_SYM_CHECKSUM";
              break;
            default:
              return v2;
          }
        }
        return v2;
      case 20:
        return v2;
    }
    goto LABEL_22;
  }
  if ( a2 > 1879048191 )
  {
    v2 = "DT_USED";
    if ( a2 == 2147483646 )
      return v2;
    v2 = "DT_FILTER";
    if ( a2 == 0x7FFFFFFF )
      return v2;
    v2 = "DT_AUXILIARY";
    if ( a2 == 2147483645 )
      return v2;
    v4 = *(_WORD *)(a1 + 522);
    if ( v4 == 8 )
    {
LABEL_127:
      switch ( a2 )
      {
        case 1879048193LL:
          v2 = "DT_MIPS_RLD_VERSION";
          break;
        case 1879048194LL:
          v2 = "DT_MIPS_TIME_STAMP";
          break;
        case 1879048195LL:
          v2 = "DT_MIPS_ICHECKSUM";
          break;
        case 1879048196LL:
          v2 = "DT_MIPS_IVERSION";
          break;
        case 1879048197LL:
          v2 = "DT_MIPS_FLAGS";
          break;
        case 1879048198LL:
          v2 = "DT_MIPS_BASE_ADDRESS";
          break;
        case 1879048199LL:
          v2 = "DT_MIPS_MSYM";
          break;
        case 1879048200LL:
          v2 = "DT_MIPS_CONFLICT";
          break;
        case 1879048201LL:
          v2 = "DT_MIPS_LIBLIST";
          break;
        case 1879048202LL:
          v2 = "DT_MIPS_LOCAL_GOTNO";
          break;
        case 1879048203LL:
          v2 = "DT_MIPS_CONFLICTNO";
          break;
        case 1879048208LL:
          v2 = "DT_MIPS_LIBLISTNO";
          break;
        case 1879048209LL:
          v2 = "DT_MIPS_SYMTABNO";
          break;
        case 1879048210LL:
          v2 = "DT_MIPS_UNREFEXTNO";
          break;
        case 1879048211LL:
          v2 = "DT_MIPS_GOTSYM";
          break;
        case 1879048212LL:
          v2 = "DT_MIPS_HIPAGENO";
          break;
        case 1879048214LL:
          v2 = "DT_MIPS_RLD_MAP";
          break;
        case 1879048215LL:
          v2 = "DT_MIPS_DELTA_CLASS";
          break;
        case 1879048216LL:
          v2 = "DT_MIPS_DELTA_CLASS_NO";
          break;
        case 1879048217LL:
          v2 = "DT_MIPS_DELTA_INSTANCE";
          break;
        case 1879048218LL:
          v2 = "DT_MIPS_DELTA_INSTANCE_NO";
          break;
        case 1879048219LL:
          v2 = "DT_MIPS_DELTA_RELOC";
          break;
        case 1879048220LL:
          v2 = "DT_MIPS_DELTA_RELOC_NO";
          break;
        case 1879048221LL:
          v2 = "DT_MIPS_DELTA_SYM";
          break;
        case 1879048222LL:
          v2 = "DT_MIPS_DELTA_SYM_NO";
          break;
        case 1879048224LL:
          v2 = "DT_MIPS_DELTA_CLASSSYM";
          break;
        case 1879048225LL:
          v2 = "DT_MIPS_DELTA_CLASSSYM_NO";
          break;
        case 1879048226LL:
          v2 = "DT_MIPS_CXX_FLAGS";
          break;
        case 1879048227LL:
          v2 = "DT_MIPS_PIXIE_INIT";
          break;
        case 1879048228LL:
          v2 = "DT_MIPS_SYMBOL_LIB";
          break;
        case 1879048229LL:
          v2 = "DT_MIPS_LOCALPAGE_GOTIDX";
          break;
        case 1879048230LL:
          v2 = "DT_MIPS_LOCAL_GOTIDX";
          break;
        case 1879048231LL:
          v2 = "DT_MIPS_HIDDEN_GOTIDX";
          break;
        case 1879048232LL:
          v2 = "DT_MIPS_PROTECTED_GOTIDX";
          break;
        case 1879048233LL:
          v2 = "DT_MIPS_OPTIONS";
          break;
        case 1879048234LL:
          v2 = "DT_MIPS_INTERFACE";
          break;
        case 1879048235LL:
          v2 = "DT_MIPS_DYNSTR_ALIGN";
          break;
        case 1879048236LL:
          v2 = "DT_MIPS_INTERFACE_SIZE";
          break;
        case 1879048237LL:
          v2 = "DT_MIPS_RLD_TEXT_RESOLVE_ADDR";
          break;
        case 1879048238LL:
          v2 = "DT_MIPS_PERF_SUFFIX";
          break;
        case 1879048239LL:
          v2 = "DT_MIPS_COMPACT_SIZE";
          break;
        case 1879048240LL:
          v2 = "DT_MIPS_GP_VALUE";
          break;
        case 1879048241LL:
          v2 = "DT_MIPS_AUX_DYNAMIC";
          break;
        case 1879048242LL:
          v2 = "DT_MIPS_PLTGOT";
          break;
        case 1879048244LL:
          v2 = "DT_MIPS_RWPLT";
          break;
        default:
          v2 = nullptr;
          break;
      }
      return v2;
    }
    if ( v4 == 50 )
    {
LABEL_176:
      if ( a2 == 1879048192 )
        return "DT_IA_64_PLT_RESERVE";
      else
        return nullptr;
    }
LABEL_21:
    if ( v4 == 20 )
    {
      v2 = "DT_PPC_GOT";
      if ( a2 != 1879048192 )
        return nullptr;
      return v2;
    }
LABEL_22:
    if ( v4 != 40 && v4 != 183 )
      return nullptr;
    v2 = "DT_ANDROID_RELA";
    if ( a2 != 1610612753 )
    {
LABEL_25:
      if ( a2 > 1610612753 )
      {
        v2 = "DT_ANDROID_RELASZ";
        if ( a2 != 1610612754 )
          return nullptr;
      }
      else
      {
        v2 = "DT_ANDROID_REL";
        if ( a2 != 1610612751 )
        {
          if ( a2 == 1610612752 )
            return "DT_ANDROID_RELSZ";
          else
            return nullptr;
        }
      }
      return v2;
    }
    return v2;
  }
  if ( a2 > 1879048175 )
  {
    switch ( a2 )
    {
      case 1879048176LL:
        v2 = "DT_VERSYM";
        break;
      case 1879048185LL:
        v2 = "DT_RELACOUNT";
        break;
      case 1879048186LL:
        v2 = "DT_RELCOUNT";
        break;
      case 1879048187LL:
        v2 = "DT_FLAGS_1";
        break;
      case 1879048188LL:
        v2 = "DT_VERDEF";
        break;
      case 1879048189LL:
        v2 = "DT_VERDEFNUM";
        break;
      case 1879048190LL:
        v2 = "DT_VERNEED";
        break;
      case 1879048191LL:
        v2 = "DT_VERNEEDNUM";
        break;
      default:
LABEL_29:
        v4 = *(_WORD *)(a1 + 522);
        if ( v4 == 8 )
          goto LABEL_127;
        if ( v4 != 50 )
          goto LABEL_21;
        if ( a2 > 1610612760 )
          goto LABEL_176;
        v2 = nullptr;
        break;
    }
  }
  else
  {
    if ( (unsigned __int64)(a2 - 1879047925) > 0xA )
    {
      v5 = *(_WORD *)(a1 + 522);
      v2 = nullptr;
      if ( v5 == 8 || v5 == 50 || v5 == 20 || v5 != 40 && v5 != 183 )
        return v2;
      goto LABEL_25;
    }
    v2 = "DT_GNU_HASH";
    switch ( a2 )
    {
      case 1879047926LL:
        v2 = "DT_TLSDESC_PLT";
        break;
      case 1879047927LL:
        v2 = "DT_TLSDESC_GOT";
        break;
      case 1879047928LL:
        v2 = "DT_GNU_CONFLICT";
        break;
      case 1879047929LL:
        v2 = "DT_GNU_LIBLIST";
        break;
      case 1879047930LL:
        v2 = "DT_CONFIG";
        break;
      case 1879047931LL:
        v2 = "DT_DEPAUDIT";
        break;
      case 1879047932LL:
        v2 = "DT_AUDIT";
        break;
      case 1879047933LL:
        v2 = "DT_PLTPAD";
        break;
      case 1879047934LL:
        v2 = "DT_MOVETAB";
        break;
      case 1879047935LL:
        v2 = "DT_SYMINFO";
        break;
      default:
        return v2;
    }
  }
  return v2;
}

