char *__fastcall sub_3C330(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char *result; // rax
  __int64 v4; // kr00_8
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 64);
  result = "STACK";
  if ( *(_BYTE *)(v2 + 511) == 6 )
  {
    if ( (_DWORD)a2 == 1879048187 )
      return result;
    if ( (unsigned int)a2 <= 0x6FFFFFFB )
    {
      result = "EH_FRAME";
      if ( (_DWORD)a2 == 1685382480 )
        return result;
      result = "SUNWBSS";
      if ( (_DWORD)a2 == 1879048186 )
        return result;
      result = "UNWIND";
      if ( (_DWORD)a2 == 1684333904 )
        return result;
      v4 = a2;
      if ( (unsigned int)a2 <= 7 )
        goto LABEL_6;
      result = "PAX-FLAG";
      if ( (_DWORD)a2 == 1694766464 )
        return result;
      v5 = *(unsigned __int16 *)(v2 + 522);
      if ( v5 == 40 )
      {
LABEL_43:
        result = "EXIDX";
        if ( (_DWORD)a2 != 1879048193 )
          return nullptr;
        return result;
      }
LABEL_18:
      if ( v5 != 183 )
      {
        if ( v5 == 50 )
        {
          if ( (unsigned int)a2 > 0x60000016 )
            goto LABEL_27;
          if ( (unsigned int)a2 > 0x5FFFFFFF )
          {
            switch ( (int)a2 )
            {
              case 1610612736:
                result = "HP_TLS";
                break;
              case 1610612737:
                result = "HP_CORE_NONE";
                break;
              case 1610612738:
                result = "HP_CORE_VERSION";
                break;
              case 1610612739:
                result = "HP_CORE_KERNEL";
                break;
              case 1610612740:
                result = "HP_CORE_COMM";
                break;
              case 1610612741:
                result = "HP_CORE_PROC";
                break;
              case 1610612742:
                result = "HP_CORE_LOADABLE";
                break;
              case 1610612743:
                result = "HP_CORE_STACK";
                break;
              case 1610612744:
                result = "HP_CORE_SHM";
                break;
              case 1610612745:
                result = "HP_CORE_MMF";
                break;
              case 1610612752:
                result = "HP_PARALLEL";
                break;
              case 1610612753:
                result = "HP_FASTBIND";
                break;
              case 1610612754:
                result = "HP_OPT_ANNOT";
                break;
              case 1610612755:
                result = "HP_HSL_ANNOT";
                break;
              case 1610612756:
                result = "HP_STACK";
                break;
              case 1610612757:
                result = "HP_CORE_UTSNAME";
                break;
              case 1610612758:
                result = "HP_LINKER_FOOTPRINT";
                break;
              default:
                return nullptr;
            }
            return result;
          }
          return nullptr;
        }
LABEL_20:
        if ( v5 == 8 )
        {
          result = "IOPMOD";
          if ( (_DWORD)a2 == 1879048320 )
            return result;
          if ( (unsigned int)a2 > 0x70000080 )
          {
            result = "PSPREL";
            if ( (_DWORD)a2 == 1879048352 )
              return result;
            result = "PSPREL2";
            if ( (_DWORD)a2 == 1879048353 )
              return result;
            if ( (_DWORD)a2 == 1879048336 )
              return "EEMOD";
          }
          else
          {
            result = "OPTIONS";
            if ( (_DWORD)a2 == 1879048194 )
              return result;
            if ( (unsigned int)a2 > 0x70000002 )
            {
              if ( (_DWORD)a2 == 1879048195 )
                return "ABIFLAGS";
            }
            else
            {
              result = "REGINFO";
              if ( (_DWORD)a2 == 1879048192 )
                return result;
              if ( (_DWORD)a2 == 1879048193 )
                return "RTPROC";
            }
          }
        }
        else if ( (_DWORD)a2 == 1879048356 && v5 == 21 )
        {
          return "PRXRELA";
        }
        return nullptr;
      }
    }
    else
    {
      result = "DTRACE";
      if ( (_DWORD)a2 == 1879048188 )
        return result;
      result = "SUNWCAP";
      if ( (_DWORD)a2 == 1879048189 )
        return result;
      v5 = *(unsigned __int16 *)(v2 + 522);
      if ( v5 != 40 && v5 != 183 )
      {
        if ( v5 == 50 )
        {
LABEL_27:
          result = "IA_64_ARCHEXT";
          if ( (_DWORD)a2 == 1879048192 )
            return result;
          if ( (_DWORD)a2 == 1879048193 )
            return "IA_64_UNWIND";
          return nullptr;
        }
        goto LABEL_20;
      }
    }
LABEL_42:
    result = "ARCHEXT";
    if ( (_DWORD)a2 == 1879048192 )
      return result;
    goto LABEL_43;
  }
  if ( (_DWORD)a2 == 1685382481 )
    return result;
  result = "RO-AFTER";
  if ( (_DWORD)a2 == 1685382482 )
    return result;
  result = "EH_FRAME";
  if ( (_DWORD)a2 == 1685382480 )
    return result;
  v4 = a2;
LABEL_6:
  switch ( v4 )
  {
    case 0LL:
      result = "NULL";
      break;
    case 1LL:
      result = "LOAD";
      break;
    case 2LL:
      result = "DYNAMIC";
      break;
    case 3LL:
      result = "INTERP";
      break;
    case 4LL:
      result = "NOTE";
      break;
    case 5LL:
      result = "SHLIB";
      break;
    case 6LL:
      result = "PHDR";
      break;
    case 7LL:
      result = "TLS";
      break;
    default:
      if ( (_DWORD)a2 != 1694766464 )
      {
        v5 = *(unsigned __int16 *)(v2 + 522);
        if ( v5 != 40 )
          goto LABEL_18;
        goto LABEL_42;
      }
      result = "PAX-FLAG";
      break;
  }
  return result;
}
