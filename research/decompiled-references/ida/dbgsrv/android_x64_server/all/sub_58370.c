/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58370
// Address: 0x0000000000058370

//----- (0000000000058370) ----------------------------------------------------
const char *__fastcall sub_58370(__int64 a1, int a2)
{
  __int64 v2; // rax
  const char *result; // rax
  int v4; // eax
  const char *v5; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v2 + 511) == 6 )
  {
    if ( a2 > 1685382479 )
    {
      switch ( a2 )
      {
        case 1879048186:
          result = "SUNWBSS";
          break;
        case 1879048187:
          result = "STACK";
          break;
        case 1879048188:
          result = "DTRACE";
          break;
        case 1879048189:
          result = "SUNWCAP";
          break;
        default:
          if ( a2 == 1694766464 )
            return "PAX-FLAG";
          if ( a2 != 1685382480 )
            goto LABEL_27;
          result = "EH_FRAME";
          break;
      }
    }
    else
    {
      switch ( a2 )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_7;
        case 2:
          goto LABEL_19;
        case 3:
          goto LABEL_20;
        case 4:
          goto LABEL_21;
        case 5:
          goto LABEL_22;
        case 6:
          goto LABEL_23;
        case 7:
          goto LABEL_24;
        default:
          v2 = *(_QWORD *)(a1 + 64);
          if ( a2 != 1684333904 )
            goto LABEL_27;
          result = "UNWIND";
          break;
      }
    }
    return result;
  }
  if ( a2 > 1685382479 )
  {
    if ( a2 <= 1685382481 )
    {
      if ( a2 == 1685382480 )
        return "EH_FRAME";
      else
        return "STACK";
    }
    if ( a2 == 1685382482 )
      return "RO-AFTER";
    if ( a2 == 1694766464 )
      return "PAX-FLAG";
LABEL_27:
    v4 = *(__int16 *)(v2 + 522);
    if ( v4 > 49 )
    {
      if ( (unsigned __int16)v4 == 50 )
      {
        result = "HP_TLS";
        switch ( a2 )
        {
          case 1610612736:
            return result;
          case 1610612737:
            return "HP_CORE_NONE";
          case 1610612738:
            return "HP_CORE_VERSION";
          case 1610612739:
            return "HP_CORE_KERNEL";
          case 1610612740:
            return "HP_CORE_COMM";
          case 1610612741:
            return "HP_CORE_PROC";
          case 1610612742:
            return "HP_CORE_LOADABLE";
          case 1610612743:
            return "HP_CORE_STACK";
          case 1610612744:
            return "HP_CORE_SHM";
          case 1610612745:
            return "HP_CORE_MMF";
          case 1610612746:
          case 1610612747:
          case 1610612748:
          case 1610612749:
          case 1610612750:
          case 1610612751:
            return nullptr;
          case 1610612752:
            return "HP_PARALLEL";
          case 1610612753:
            return "HP_FASTBIND";
          case 1610612754:
            return "HP_OPT_ANNOT";
          case 1610612755:
            return "HP_HSL_ANNOT";
          case 1610612756:
            return "HP_STACK";
          case 1610612757:
            return "HP_CORE_UTSNAME";
          case 1610612758:
            return "HP_LINKER_FOOTPRINT";
          default:
            if ( a2 == 1879048192 )
            {
              result = "IA_64_ARCHEXT";
            }
            else
            {
              if ( a2 != 1879048193 )
                return nullptr;
              result = "IA_64_UNWIND";
            }
            break;
        }
        return result;
      }
      if ( (unsigned __int16)v4 != 183 )
      {
LABEL_30:
        if ( a2 == 1879048356 && (unsigned __int16)v4 == 21 )
          return "PRXRELA";
        else
          return nullptr;
      }
    }
    else
    {
      if ( (unsigned __int16)v4 == 8 )
      {
        switch ( a2 )
        {
          case 1879048192:
            result = "REGINFO";
            break;
          case 1879048193:
            result = "RTPROC";
            break;
          case 1879048194:
            result = "OPTIONS";
            break;
          case 1879048195:
            result = "ABIFLAGS";
            break;
          default:
            result = "IOPMOD";
            switch ( a2 )
            {
              case 1879048320:
                return result;
              case 1879048336:
                result = "EEMOD";
                break;
              case 1879048352:
                result = "PSPREL";
                break;
              case 1879048353:
                result = "PSPREL2";
                break;
              default:
                return nullptr;
            }
            break;
        }
        return result;
      }
      if ( (unsigned __int16)v4 != 40 )
        goto LABEL_30;
    }
    v5 = nullptr;
    if ( a2 == 1879048193 )
      v5 = "EXIDX";
    result = "ARCHEXT";
    if ( a2 != 1879048192 )
      return v5;
    return result;
  }
  switch ( a2 )
  {
    case 0:
LABEL_4:
      result = "NULL";
      break;
    case 1:
LABEL_7:
      result = "LOAD";
      break;
    case 2:
LABEL_19:
      result = "DYNAMIC";
      break;
    case 3:
LABEL_20:
      result = "INTERP";
      break;
    case 4:
LABEL_21:
      result = "NOTE";
      break;
    case 5:
LABEL_22:
      result = "SHLIB";
      break;
    case 6:
LABEL_23:
      result = "PHDR";
      break;
    case 7:
LABEL_24:
      result = "TLS";
      break;
    default:
      v2 = *(_QWORD *)(a1 + 64);
      goto LABEL_27;
  }
  return result;
}
// 58410: conditional instruction was optimized away because esi.4==6474E551
