/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F680
// Address: 0x0002F680

//----- (0002F680) --------------------------------------------------------
const char *__fastcall sub_2F680(int a1, __int64 a2)
{
  int v3; // r1
  int v4; // r0
  const char *result; // r0
  bool v6; // zf

  v3 = *(unsigned __int8 *)(a1 + 395);
  v4 = *(unsigned __int16 *)(a1 + 406);
  if ( v3 == 6 && (unsigned __int64)(a2 - 1610612749) < 0x1F )
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
  }
  else
  {
LABEL_2:
    if ( a2 == 1879047424 )
      return "DT_VALRNGLO";
    if ( a2 <= 1879047424 )
    {
      if ( a2 == 16 )
        return "DT_SYMBOLIC";
      if ( a2 < 17 )
      {
        if ( a2 == 7 )
          return "DT_RELA";
        if ( a2 >= 8 )
        {
          if ( a2 == 11 )
            return "DT_SYMENT";
          if ( a2 < 12 )
          {
            if ( a2 == 9 )
            {
              return "DT_RELAENT";
            }
            else if ( a2 < 10 )
            {
              return "DT_RELASZ";
            }
            else
            {
              return "DT_STRSZ";
            }
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
        }
        if ( a2 == 3 )
          return "DT_PLTGOT";
        if ( a2 >= 4 )
        {
          if ( a2 == 5 )
            return "DT_STRTAB";
          if ( a2 < 6 )
            return "DT_HASH";
          return "DT_SYMTAB";
        }
        if ( a2 == 1 )
          return "DT_NEEDED";
        if ( a2 >= 2 )
          return "DT_PLTRELSZ";
        if ( !a2 )
          return "DT_NULL";
      }
      else
      {
        if ( a2 == 24 )
          return "DT_BIND_NOW";
        if ( a2 < 25 )
        {
          if ( a2 == 20 )
            return "DT_PLTREL";
          if ( a2 < 21 )
          {
            if ( a2 == 18 )
            {
              return "DT_RELSZ";
            }
            else if ( a2 < 19 )
            {
              return "DT_REL";
            }
            else
            {
              return "DT_RELENT";
            }
          }
          else if ( a2 == 22 )
          {
            return "DT_TEXTREL";
          }
          else if ( a2 < 23 )
          {
            return "DT_DEBUG";
          }
          else
          {
            return "DT_JMPREL";
          }
        }
        if ( a2 == 28 )
          return "DT_FINI_ARRAYSZ";
        if ( a2 < 29 )
        {
          if ( a2 == 26 )
            return "DT_FINI_ARRAY";
          if ( a2 < 27 )
            return "DT_INIT_ARRAY";
          return "DT_INIT_ARRAYSZ";
        }
        if ( a2 == 30 )
          return "DT_FLAGS";
        if ( a2 < 30 )
          return "DT_RUNPATH";
        if ( a2 == 32 )
          return "DT_PREINIT_ARRAY";
        if ( a2 == 33 )
          return "DT_PREINIT_ARRAYSZ";
      }
    }
    else
    {
      if ( a2 == 1879047929 )
        return "DT_GNU_LIBLIST";
      if ( a2 <= 1879047929 )
      {
        if ( a2 == 1879047676 )
          return "DT_FEATURE";
        if ( a2 <= 1879047676 )
        {
          if ( a2 == 1879047672 )
            return "DT_CHECKSUM";
          if ( a2 > 1879047672 )
          {
            if ( a2 == 1879047674 )
              return "DT_MOVEENT";
            if ( a2 > 1879047674 )
              return "DT_MOVESZ";
            return "DT_PLTPADSZ";
          }
          if ( a2 == 1879047670 )
            return "DT_GNU_CONFLICTSZ";
          if ( a2 > 1879047670 )
            return "DT_GNU_LIBLISTSZ";
          if ( a2 == 1879047669 )
            return "DT_GNU_PRELINKED";
        }
        else
        {
          if ( a2 == 1879047680 )
            return "DT_ADDRRNGLO";
          if ( a2 <= 1879047680 )
          {
            if ( a2 == 1879047678 )
              return "DT_SYMINSZ";
            if ( a2 > 1879047678 )
              return "DT_SYMINENT";
            return "DT_POSFLAG_1";
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
          if ( a2 == 1879047925 )
            return "DT_GNU_HASH";
        }
      }
      else
      {
        if ( a2 == 1879048186 )
          return "DT_RELCOUNT";
        if ( a2 > 1879048186 )
        {
          if ( a2 == 1879048190 )
            return "DT_VERNEED";
          if ( a2 <= 1879048190 )
          {
            if ( a2 == 1879048188 )
              return "DT_VERDEF";
            if ( a2 > 1879048188 )
              return "DT_VERDEFNUM";
            return "DT_FLAGS_1";
          }
          if ( a2 == 2147483645 )
            return "DT_AUXILIARY";
          if ( a2 <= 2147483645 )
          {
            if ( a2 == 1879048191 )
              return "DT_VERNEEDNUM";
          }
          else
          {
            if ( a2 == 2147483646 )
              return "DT_USED";
            if ( a2 == 0x7FFFFFFF )
              return "DT_FILTER";
          }
        }
        else
        {
          if ( a2 == 1879047933 )
            return "DT_PLTPAD";
          if ( a2 <= 1879047933 )
          {
            if ( a2 == 1879047931 )
              return "DT_DEPAUDIT";
            if ( a2 > 1879047931 )
              return "DT_AUDIT";
            return "DT_CONFIG";
          }
          if ( a2 == 1879047935 )
            return "DT_SYMINFO";
          if ( a2 < 1879047935 )
            return "DT_MOVETAB";
          if ( a2 == 1879048176 )
            return "DT_VERSYM";
          if ( a2 == 1879048185 )
            return "DT_RELACOUNT";
        }
      }
    }
    switch ( v4 )
    {
      case 8:
        if ( (unsigned __int64)(a2 - 1879048193) >= 0x34 )
        {
          return nullptr;
        }
        else
        {
          switch ( (int)a2 )
          {
            case 1879048193:
              result = "DT_MIPS_RLD_VERSION";
              break;
            case 1879048194:
              result = "DT_MIPS_TIME_STAMP";
              break;
            case 1879048195:
              result = "DT_MIPS_ICHECKSUM";
              break;
            case 1879048196:
              result = "DT_MIPS_IVERSION";
              break;
            case 1879048197:
              result = "DT_MIPS_FLAGS";
              break;
            case 1879048198:
              result = "DT_MIPS_BASE_ADDRESS";
              break;
            case 1879048199:
              result = "DT_MIPS_MSYM";
              break;
            case 1879048200:
              result = "DT_MIPS_CONFLICT";
              break;
            case 1879048201:
              result = "DT_MIPS_LIBLIST";
              break;
            case 1879048202:
              result = "DT_MIPS_LOCAL_GOTNO";
              break;
            case 1879048203:
              result = "DT_MIPS_CONFLICTNO";
              break;
            case 1879048208:
              result = "DT_MIPS_LIBLISTNO";
              break;
            case 1879048209:
              result = "DT_MIPS_SYMTABNO";
              break;
            case 1879048210:
              result = "DT_MIPS_UNREFEXTNO";
              break;
            case 1879048211:
              result = "DT_MIPS_GOTSYM";
              break;
            case 1879048212:
              result = "DT_MIPS_HIPAGENO";
              break;
            case 1879048214:
              result = "DT_MIPS_RLD_MAP";
              break;
            case 1879048215:
              result = "DT_MIPS_DELTA_CLASS";
              break;
            case 1879048216:
              result = "DT_MIPS_DELTA_CLASS_NO";
              break;
            case 1879048217:
              result = "DT_MIPS_DELTA_INSTANCE";
              break;
            case 1879048218:
              result = "DT_MIPS_DELTA_INSTANCE_NO";
              break;
            case 1879048219:
              result = "DT_MIPS_DELTA_RELOC";
              break;
            case 1879048220:
              result = "DT_MIPS_DELTA_RELOC_NO";
              break;
            case 1879048221:
              result = "DT_MIPS_DELTA_SYM";
              break;
            case 1879048222:
              result = "DT_MIPS_DELTA_SYM_NO";
              break;
            case 1879048224:
              result = "DT_MIPS_DELTA_CLASSSYM";
              break;
            case 1879048225:
              result = "DT_MIPS_DELTA_CLASSSYM_NO";
              break;
            case 1879048226:
              result = "DT_MIPS_CXX_FLAGS";
              break;
            case 1879048227:
              result = "DT_MIPS_PIXIE_INIT";
              break;
            case 1879048228:
              result = "DT_MIPS_SYMBOL_LIB";
              break;
            case 1879048229:
              result = "DT_MIPS_LOCALPAGE_GOTIDX";
              break;
            case 1879048230:
              result = "DT_MIPS_LOCAL_GOTIDX";
              break;
            case 1879048231:
              result = "DT_MIPS_HIDDEN_GOTIDX";
              break;
            case 1879048232:
              result = "DT_MIPS_PROTECTED_GOTIDX";
              break;
            case 1879048233:
              result = "DT_MIPS_OPTIONS";
              break;
            case 1879048234:
              result = "DT_MIPS_INTERFACE";
              break;
            case 1879048235:
              result = "DT_MIPS_DYNSTR_ALIGN";
              break;
            case 1879048236:
              result = "DT_MIPS_INTERFACE_SIZE";
              break;
            case 1879048237:
              result = "DT_MIPS_RLD_TEXT_RESOLVE_ADDR";
              break;
            case 1879048238:
              result = "DT_MIPS_PERF_SUFFIX";
              break;
            case 1879048239:
              result = "DT_MIPS_COMPACT_SIZE";
              break;
            case 1879048240:
              result = "DT_MIPS_GP_VALUE";
              break;
            case 1879048241:
              result = "DT_MIPS_AUX_DYNAMIC";
              break;
            case 1879048242:
              result = "DT_MIPS_PLTGOT";
              break;
            case 1879048244:
              result = "DT_MIPS_RWPLT";
              break;
            default:
              return nullptr;
          }
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
            else if ( a2 == 1610612753 )
            {
              return "DT_HP_COMPAT_FILTERED";
            }
            else if ( a2 > 1610612753 )
            {
              return "DT_HP_LAZYLOAD";
            }
            else
            {
              return "DT_HP_FILTER_TLS";
            }
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
            else if ( a2 == 1610612746 )
            {
              return "DT_HP_GST_SIZE";
            }
            else if ( a2 > 1610612746 )
            {
              return "DT_HP_GST_VERSION";
            }
            else
            {
              return "DT_HP_CHECKSUM";
            }
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
        if ( a2 == 1879048192 )
          return "DT_PPC_GOT";
        else
          return nullptr;
      default:
        v6 = v4 == 183;
        if ( v4 != 183 )
          v6 = v4 == 40;
        if ( v6 )
        {
          if ( (unsigned __int64)(a2 - 1610612751) >= 4 )
          {
            return nullptr;
          }
          else
          {
            switch ( (int)a2 )
            {
              case 1610612751:
                result = "DT_ANDROID_REL";
                break;
              case 1610612752:
                result = "DT_ANDROID_RELSZ";
                break;
              case 1610612753:
                result = "DT_ANDROID_RELA";
                break;
              case 1610612754:
                result = "DT_ANDROID_RELASZ";
                break;
            }
          }
        }
        else
        {
          return nullptr;
        }
        break;
    }
  }
  return result;
}
// 2F8B4: conditional instruction was optimized away because r2.8==F
// 2FD8A: the default case was optimized away because r8.4<4u
// 2F93E: conditional instruction was optimized away because r2.8==6FFFFEF8
// 301C4: conditional instruction was optimized away because r2.8==6000000E
// 301EC: conditional instruction was optimized away because r2.8==60000007
// 30214: conditional instruction was optimized away because r2.8==60000004
// 3023C: conditional instruction was optimized away because r2.8==60000015
