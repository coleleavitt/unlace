/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4272E0
// Address: 0x00000000004272E0

//----- (00000000004272E0) ----------------------------------------------------
const char *__fastcall sub_4272E0(__int64 a1, __int64 a2)
{
  int v2; // w3
  const char *result; // x0
  const char *v5; // x2
  const char *v6; // x2
  const char *v7; // x2
  const char *v8; // x2
  const char *v9; // x2
  const char *v10; // x2
  const char *v11; // x2
  const char *v12; // x2
  const char *v13; // x2
  unsigned __int64 v14; // x1
  const char *v15; // x2
  const char *v16; // x2

  v2 = *(unsigned __int16 *)(a1 + 522);
  if ( *(_BYTE *)(a1 + 511) == 6 && (unsigned __int64)(a2 - 1610612749) <= 0x1E )
  {
    switch ( (int)a2 )
    {
      case 1610612749:
        result = "DT_SUNW_AUXILIARY";
        break;
      case 1610612750:
        result = "DT_SUNW_FILTER";
        break;
      case 1610612752:
        result = "DT_SUNW_CAP";
        break;
      case 1610612753:
        result = "DT_SUNW_SYMTAB";
        break;
      case 1610612754:
        result = "DT_SUNW_SYMSZ";
        break;
      case 1610612755:
        result = "DT_SUNW_ENCODING";
        break;
      case 1610612756:
        result = "DT_SUNW_SYMSORT";
        break;
      case 1610612757:
        result = "DT_SUNW_SYMSORTSZ";
        break;
      case 1610612758:
        result = "DT_SUNW_TLSSORT";
        break;
      case 1610612759:
        result = "DT_SUNW_TLSSORTSZ";
        break;
      case 1610612760:
        result = "DT_SUNW_CAPINFO";
        break;
      case 1610612761:
        result = "DT_SUNW_STRPAD";
        break;
      case 1610612762:
        result = "DT_SUNW_CAPCHAIN";
        break;
      case 1610612763:
        result = "DT_SUNW_LDMACH";
        break;
      case 1610612765:
        result = "DT_SUNW_CAPCHAINENT";
        break;
      case 1610612767:
        result = "DT_SUNW_CAPCHAINSZ";
        break;
      case 1610612769:
        result = "DT_SUNW_PARENT";
        break;
      case 1610612771:
        result = "DT_SUNW_ASLR";
        break;
      case 1610612773:
        result = "DT_SUNW_RELAX";
        break;
      case 1610612777:
        result = "DT_SUNW_NXHEAP";
        break;
      case 1610612779:
        result = "DT_SUNW_NXSTACK";
        break;
      default:
        goto LABEL_2;
    }
    return result;
  }
LABEL_2:
  if ( a2 == 1879047424 )
    return "DT_VALRNGLO";
  if ( a2 <= 1879047424 )
  {
    if ( a2 == 16 )
      return "DT_SYMBOLIC";
    if ( a2 <= 16 )
    {
      if ( a2 == 7 )
        return "DT_RELA";
      if ( a2 > 7 )
      {
        if ( a2 == 11 )
          return "DT_SYMENT";
        if ( a2 <= 11 )
        {
          v8 = "DT_STRSZ";
          if ( a2 <= 9 )
            v8 = "DT_RELASZ";
          result = "DT_RELAENT";
          if ( a2 != 9 )
            return v8;
        }
        else if ( a2 == 13 )
        {
          return "DT_FINI";
        }
        else if ( a2 < 13 )
        {
          return "DT_INIT";
        }
        else if ( a2 == 14 )
        {
          return "DT_SONAME";
        }
        else
        {
          return "DT_RPATH";
        }
        return result;
      }
      if ( a2 == 3 )
        return "DT_PLTGOT";
      if ( a2 > 3 )
      {
        v10 = "DT_SYMTAB";
        if ( a2 <= 5 )
          v10 = "DT_HASH";
        result = "DT_STRTAB";
        if ( a2 != 5 )
          return v10;
        return result;
      }
      if ( a2 == 1 )
        return "DT_NEEDED";
      if ( a2 > 1 )
        return "DT_PLTRELSZ";
      result = "DT_NULL";
      if ( a2 )
        goto LABEL_64;
    }
    else
    {
      if ( a2 == 24 )
        return "DT_BIND_NOW";
      if ( a2 <= 24 )
      {
        if ( a2 == 20 )
          return "DT_PLTREL";
        if ( a2 <= 20 )
        {
          v13 = "DT_RELENT";
          if ( a2 <= 18 )
            v13 = "DT_REL";
          result = "DT_RELSZ";
          if ( a2 != 18 )
            return v13;
        }
        else
        {
          v5 = "DT_JMPREL";
          if ( a2 <= 22 )
            v5 = "DT_DEBUG";
          result = "DT_TEXTREL";
          if ( a2 != 22 )
            return v5;
        }
        return result;
      }
      if ( a2 == 28 )
        return "DT_FINI_ARRAYSZ";
      if ( a2 <= 28 )
      {
        v7 = "DT_INIT_ARRAYSZ";
        if ( a2 <= 26 )
          v7 = "DT_INIT_ARRAY";
        result = "DT_FINI_ARRAY";
        if ( a2 != 26 )
          return v7;
        return result;
      }
      if ( a2 == 30 )
        return "DT_FLAGS";
      if ( a2 < 30 )
        return "DT_RUNPATH";
      if ( a2 == 32 )
        return "DT_PREINIT_ARRAY";
      result = "DT_PREINIT_ARRAYSZ";
      if ( a2 != 33 )
        goto LABEL_64;
    }
  }
  else
  {
    if ( a2 == 1879047929 )
      return "DT_GNU_LIBLIST";
    if ( a2 > 1879047929 )
    {
      if ( a2 == 1879048186 )
        return "DT_RELCOUNT";
      if ( a2 > 1879048186 )
      {
        if ( a2 == 1879048190 )
          return "DT_VERNEED";
        if ( a2 <= 1879048190 )
        {
          v12 = "DT_FLAGS_1";
          if ( a2 > 1879048188 )
            v12 = "DT_VERDEFNUM";
          result = "DT_VERDEF";
          if ( a2 != 1879048188 )
            return v12;
          return result;
        }
        if ( a2 == 2147483645 )
          return "DT_AUXILIARY";
        if ( a2 <= 2147483645 )
        {
          result = "DT_VERNEEDNUM";
          if ( a2 == 1879048191 )
            return result;
        }
        else
        {
          if ( a2 == 2147483646 )
            return "DT_USED";
          result = "DT_FILTER";
          if ( a2 == 0x7FFFFFFF )
            return result;
        }
      }
      else
      {
        if ( a2 == 1879047933 )
          return "DT_PLTPAD";
        if ( a2 <= 1879047933 )
        {
          v9 = "DT_CONFIG";
          if ( a2 > 1879047931 )
            v9 = "DT_AUDIT";
          result = "DT_DEPAUDIT";
          if ( a2 != 1879047931 )
            return v9;
          return result;
        }
        if ( a2 == 1879047935 )
          return "DT_SYMINFO";
        if ( a2 < 1879047935 )
          return "DT_MOVETAB";
        if ( a2 == 1879048176 )
          return "DT_VERSYM";
        result = "DT_RELACOUNT";
        if ( a2 == 1879048185 )
          return result;
      }
LABEL_64:
      switch ( v2 )
      {
        case 8:
          v14 = a2 - 1879048193;
          if ( v14 <= 0x33 )
          {
            switch ( (int)v14 )
            {
              case 0:
                result = "DT_MIPS_RLD_VERSION";
                break;
              case 1:
                result = "DT_MIPS_TIME_STAMP";
                break;
              case 2:
                result = "DT_MIPS_ICHECKSUM";
                break;
              case 3:
                result = "DT_MIPS_IVERSION";
                break;
              case 4:
                result = "DT_MIPS_FLAGS";
                break;
              case 5:
                result = "DT_MIPS_BASE_ADDRESS";
                break;
              case 6:
                result = "DT_MIPS_MSYM";
                break;
              case 7:
                result = "DT_MIPS_CONFLICT";
                break;
              case 8:
                result = "DT_MIPS_LIBLIST";
                break;
              case 9:
                result = "DT_MIPS_LOCAL_GOTNO";
                break;
              case 10:
                result = "DT_MIPS_CONFLICTNO";
                break;
              case 15:
                result = "DT_MIPS_LIBLISTNO";
                break;
              case 16:
                result = "DT_MIPS_SYMTABNO";
                break;
              case 17:
                result = "DT_MIPS_UNREFEXTNO";
                break;
              case 18:
                result = "DT_MIPS_GOTSYM";
                break;
              case 19:
                result = "DT_MIPS_HIPAGENO";
                break;
              case 21:
                result = "DT_MIPS_RLD_MAP";
                break;
              case 22:
                result = "DT_MIPS_DELTA_CLASS";
                break;
              case 23:
                result = "DT_MIPS_DELTA_CLASS_NO";
                break;
              case 24:
                result = "DT_MIPS_DELTA_INSTANCE";
                break;
              case 25:
                result = "DT_MIPS_DELTA_INSTANCE_NO";
                break;
              case 26:
                result = "DT_MIPS_DELTA_RELOC";
                break;
              case 27:
                result = "DT_MIPS_DELTA_RELOC_NO";
                break;
              case 28:
                result = "DT_MIPS_DELTA_SYM";
                break;
              case 29:
                result = "DT_MIPS_DELTA_SYM_NO";
                break;
              case 31:
                result = "DT_MIPS_DELTA_CLASSSYM";
                break;
              case 32:
                result = "DT_MIPS_DELTA_CLASSSYM_NO";
                break;
              case 33:
                result = "DT_MIPS_CXX_FLAGS";
                break;
              case 34:
                result = "DT_MIPS_PIXIE_INIT";
                break;
              case 35:
                result = "DT_MIPS_SYMBOL_LIB";
                break;
              case 36:
                result = "DT_MIPS_LOCALPAGE_GOTIDX";
                break;
              case 37:
                result = "DT_MIPS_LOCAL_GOTIDX";
                break;
              case 38:
                result = "DT_MIPS_HIDDEN_GOTIDX";
                break;
              case 39:
                result = "DT_MIPS_PROTECTED_GOTIDX";
                break;
              case 40:
                result = "DT_MIPS_OPTIONS";
                break;
              case 41:
                result = "DT_MIPS_INTERFACE";
                break;
              case 42:
                result = "DT_MIPS_DYNSTR_ALIGN";
                break;
              case 43:
                result = "DT_MIPS_INTERFACE_SIZE";
                break;
              case 44:
                result = "DT_MIPS_RLD_TEXT_RESOLVE_ADDR";
                break;
              case 45:
                result = "DT_MIPS_PERF_SUFFIX";
                break;
              case 46:
                result = "DT_MIPS_COMPACT_SIZE";
                break;
              case 47:
                result = "DT_MIPS_GP_VALUE";
                break;
              case 48:
                result = "DT_MIPS_AUX_DYNAMIC";
                break;
              case 49:
                result = "DT_MIPS_PLTGOT";
                break;
              case 51:
                result = "DT_MIPS_RWPLT";
                break;
              default:
                return nullptr;
            }
          }
          else
          {
            return nullptr;
          }
          break;
        case 50:
          if ( a2 == 1610612748 )
            return "DT_HP_GST_HASHVAL";
          if ( a2 > 1610612748 )
          {
            if ( a2 == 1610612755 )
              return "DT_HP_BIND_NOW_COUNT";
            if ( a2 <= 1610612755 )
            {
              if ( a2 == 1610612751 )
                return "DT_HP_FILTERED";
              if ( a2 <= 1610612751 )
              {
                if ( a2 == 1610612749 )
                  return "DT_HP_EPLTREL";
                else
                  return "DT_HP_EPLTRELSZ";
              }
              else
              {
                v16 = "DT_HP_FILTER_TLS";
                if ( a2 > 1610612753 )
                  v16 = "DT_HP_LAZYLOAD";
                result = "DT_HP_COMPAT_FILTERED";
                if ( a2 != 1610612753 )
                  return v16;
              }
              return result;
            }
            if ( a2 == 1610612758 )
              return "DT_DLT";
            if ( a2 <= 1610612758 )
            {
              if ( a2 == 1610612756 )
                return "DT_PLT";
              else
                return "DT_PLT_SIZE";
            }
            if ( a2 == 1610612760 )
              return "DT_HP_SYM_CHECKSUM";
            if ( a2 < 1610612760 )
              return "DT_DLT_SIZE";
            if ( a2 == 1879048192 )
              return "DT_IA_64_PLT_RESERVE";
          }
          else
          {
            if ( a2 == 1610612741 )
              return "DT_HP_PREINIT";
            if ( a2 > 1610612741 )
            {
              if ( a2 == 1610612744 )
                return "DT_HP_TIME_STAMP";
              if ( a2 <= 1610612744 )
              {
                if ( a2 == 1610612742 )
                  return "DT_HP_PREINITSZ";
                else
                  return "DT_HP_NEEDED";
              }
              else
              {
                v15 = "DT_HP_CHECKSUM";
                if ( a2 > 1610612746 )
                  v15 = "DT_HP_GST_VERSION";
                result = "DT_HP_GST_SIZE";
                if ( a2 != 1610612746 )
                  return v15;
              }
              return result;
            }
            if ( a2 == 1610612738 )
              return "DT_HP_DLD_HOOK";
            if ( a2 > 1610612738 )
            {
              if ( a2 == 1610612739 )
                return "DT_HP_UX10_INIT";
              else
                return "DT_HP_UX10_INITSZ";
            }
            if ( a2 == 1610612736 )
              return "DT_HP_LOAD_MAP";
            if ( a2 == 1610612737 )
              return "DT_HP_DLD_FLAGS";
          }
          return nullptr;
        case 20:
          result = "DT_PPC_GOT";
          if ( a2 != 1879048192 )
            return nullptr;
          break;
        case 40:
        case 183:
          if ( a2 == 1610612752 )
            return "DT_ANDROID_RELSZ";
          if ( a2 <= 1610612752 )
          {
            if ( a2 == 1610612751 )
              return "DT_ANDROID_REL";
          }
          else
          {
            if ( a2 == 1610612753 )
              return "DT_ANDROID_RELA";
            if ( a2 == 1610612754 )
              return "DT_ANDROID_RELASZ";
          }
          return nullptr;
        default:
          return nullptr;
      }
      return result;
    }
    if ( a2 == 1879047676 )
      return "DT_FEATURE";
    if ( a2 > 1879047676 )
    {
      if ( a2 == 1879047680 )
        return "DT_ADDRRNGLO";
      if ( a2 <= 1879047680 )
      {
        v6 = "DT_POSFLAG_1";
        if ( a2 > 1879047678 )
          v6 = "DT_SYMINENT";
        result = "DT_SYMINSZ";
        if ( a2 != 1879047678 )
          return v6;
        return result;
      }
      if ( a2 == 1879047926 )
        return "DT_TLSDESC_PLT";
      if ( a2 > 1879047926 )
      {
        if ( a2 == 1879047927 )
          return "DT_TLSDESC_GOT";
        else
          return "DT_GNU_CONFLICT";
      }
      result = "DT_GNU_HASH";
      if ( a2 == 1879047925 )
        return result;
      goto LABEL_64;
    }
    if ( a2 == 1879047672 )
      return "DT_CHECKSUM";
    if ( a2 > 1879047672 )
    {
      v11 = "DT_PLTPADSZ";
      if ( a2 > 1879047674 )
        v11 = "DT_MOVESZ";
      result = "DT_MOVEENT";
      if ( a2 != 1879047674 )
        return v11;
      return result;
    }
    if ( a2 == 1879047670 )
      return "DT_GNU_CONFLICTSZ";
    if ( a2 > 1879047670 )
      return "DT_GNU_LIBLISTSZ";
    result = "DT_GNU_PRELINKED";
    if ( a2 != 1879047669 )
      goto LABEL_64;
  }
  return result;
}
// 427434: conditional instruction was optimized away because x1.8==F
// 42749C: conditional instruction was optimized away because x1.8==6FFFFEF8
// 427BE8: conditional instruction was optimized away because x1.8==60000007
// 427C10: conditional instruction was optimized away because x1.8==60000015
// 427C38: conditional instruction was optimized away because x1.8==60000004
// 427C60: conditional instruction was optimized away because x1.8==6000000E
