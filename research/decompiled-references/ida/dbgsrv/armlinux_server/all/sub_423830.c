/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423830
// Address: 0x0000000000423830

//----- (0000000000423830) ----------------------------------------------------
char *__fastcall sub_423830(__int64 a1, unsigned int a2)
{
  __int64 v2; // x2
  char *result; // x0
  int v4; // w0

  v2 = *(_QWORD *)(a1 + 64) + 504LL;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 64) + 511LL) != 6 )
  {
    if ( a2 != 1685382481 )
    {
      if ( a2 == 1685382482 )
        return "RO-AFTER";
      if ( a2 == 1685382480 )
        return "EH_FRAME";
      goto LABEL_5;
    }
    return "STACK";
  }
  if ( a2 == 1879048186 )
    return "SUNWBSS";
  if ( a2 <= 0x6FFFFFFA )
  {
    if ( a2 == 1684333904 )
      return "UNWIND";
    result = "EH_FRAME";
    if ( a2 == 1685382480 )
      return result;
    goto LABEL_5;
  }
  if ( a2 == 1879048188 )
    return "DTRACE";
  if ( a2 < 0x6FFFFFFC )
    return "STACK";
  result = "SUNWCAP";
  if ( a2 == 1879048189 )
    return result;
LABEL_5:
  if ( a2 == 4 )
    return "NOTE";
  if ( a2 <= 4 )
  {
    switch ( a2 )
    {
      case 1u:
        return "LOAD";
      case 0u:
        return "NULL";
      case 2u:
        return "DYNAMIC";
    }
    return "INTERP";
  }
  if ( a2 == 6 )
    return "PHDR";
  if ( a2 < 6 )
    return "SHLIB";
  if ( a2 == 7 )
    return "TLS";
  result = "PAX-FLAG";
  if ( a2 != 1694766464 )
  {
    v4 = *(unsigned __int16 *)(v2 + 18);
    if ( v4 != 40 && v4 != 183 )
    {
      switch ( v4 )
      {
        case 50:
          if ( a2 == 1610612745 )
            return "HP_CORE_MMF";
          if ( a2 > 0x60000009 )
          {
            if ( a2 == 1610612756 )
              return "HP_STACK";
            if ( a2 > 0x60000014 )
            {
              if ( a2 == 1610612758 )
                return "HP_LINKER_FOOTPRINT";
              if ( a2 < 0x60000016 )
                return "HP_CORE_UTSNAME";
              if ( a2 == 1879048192 )
                return "IA_64_ARCHEXT";
              if ( a2 == 1879048193 )
                return "IA_64_UNWIND";
            }
            else
            {
              if ( a2 == 1610612753 )
                return "HP_FASTBIND";
              if ( a2 > 0x60000011 )
              {
                if ( a2 == 1610612754 )
                  return "HP_OPT_ANNOT";
                else
                  return "HP_HSL_ANNOT";
              }
              if ( a2 == 1610612752 )
                return "HP_PARALLEL";
            }
          }
          else
          {
            if ( a2 == 1610612740 )
              return "HP_CORE_COMM";
            if ( a2 > 0x60000004 )
            {
              if ( a2 == 1610612742 )
                return "HP_CORE_LOADABLE";
              if ( a2 < 0x60000006 )
                return "HP_CORE_PROC";
              if ( a2 == 1610612743 )
                return "HP_CORE_STACK";
              return "HP_CORE_SHM";
            }
            if ( a2 == 1610612737 )
              return "HP_CORE_NONE";
            if ( a2 > 0x60000001 )
            {
              if ( a2 == 1610612738 )
                return "HP_CORE_VERSION";
              else
                return "HP_CORE_KERNEL";
            }
            if ( a2 == 1610612736 )
              return "HP_TLS";
          }
          break;
        case 8:
          if ( a2 == 1879048195 )
            return "ABIFLAGS";
          if ( a2 <= 0x70000003 )
          {
            if ( a2 == 1879048193 )
              return "RTPROC";
            if ( a2 > 0x70000001 )
              return "OPTIONS";
            if ( a2 == 1879048192 )
              return "REGINFO";
          }
          else
          {
            if ( a2 == 1879048336 )
              return "EEMOD";
            if ( a2 <= 0x70000090 )
            {
              if ( a2 == 1879048320 )
                return "IOPMOD";
            }
            else
            {
              if ( a2 == 1879048352 )
                return "PSPREL";
              if ( a2 == 1879048353 )
                return "PSPREL2";
            }
          }
          break;
        case 21:
          result = "PRXRELA";
          if ( a2 != 1879048356 )
            return nullptr;
          return result;
      }
      return nullptr;
    }
    if ( a2 == 1879048192 )
    {
      return "ARCHEXT";
    }
    else
    {
      result = "EXIDX";
      if ( a2 != 1879048193 )
        return nullptr;
    }
  }
  return result;
}
// 42389C: conditional instruction was optimized away because w1.4==3
// 423AAC: conditional instruction was optimized away because w1.4==60000003
// 423B4C: conditional instruction was optimized away because w1.4==60000013
// 423BB8: conditional instruction was optimized away because w1.4==60000008
