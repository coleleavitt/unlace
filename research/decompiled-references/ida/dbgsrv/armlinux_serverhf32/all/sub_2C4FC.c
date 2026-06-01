/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C4FC
// Address: 0x0002C4FC

//----- (0002C4FC) --------------------------------------------------------
char *__fastcall sub_2C4FC(int a1, unsigned int a2)
{
  int v2; // r3
  int v3; // r3

  v2 = *(_DWORD *)(a1 + 32);
  if ( *(_BYTE *)(v2 + 395) == 6 )
  {
    if ( a2 == 1879048186 )
      return "SUNWBSS";
    if ( a2 <= 0x6FFFFFFA )
    {
      if ( a2 == 1684333904 )
        return "UNWIND";
      if ( a2 == 1685382480 )
        return "EH_FRAME";
    }
    else
    {
      if ( a2 == 1879048188 )
        return "DTRACE";
      if ( a2 < 0x6FFFFFFC )
        return "STACK";
      if ( a2 == 1879048189 )
        return "SUNWCAP";
    }
  }
  else
  {
    switch ( a2 )
    {
      case 0x6474E551u:
        return "STACK";
      case 0x6474E552u:
        return "RO-AFTER";
      case 0x6474E550u:
        return "EH_FRAME";
    }
  }
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
  if ( a2 == 1694766464 )
    return "PAX-FLAG";
  v3 = *(unsigned __int16 *)(v2 + 406);
  if ( v3 == 40 )
  {
    if ( a2 == 1879048192 )
      return "ARCHEXT";
    if ( a2 == 1879048193 )
      return "EXIDX";
    return nullptr;
  }
  if ( v3 == 183 )
  {
    if ( a2 == 1879048192 )
      return "ARCHEXT";
    if ( a2 == 1879048193 )
      return "EXIDX";
    return nullptr;
  }
  if ( v3 != 50 )
  {
    if ( v3 == 8 )
    {
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
    }
    else if ( v3 == 21 && a2 == 1879048356 )
    {
      return "PRXRELA";
    }
    return nullptr;
  }
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
      return nullptr;
    }
    if ( a2 == 1610612753 )
      return "HP_FASTBIND";
    if ( a2 <= 0x60000011 )
    {
      if ( a2 == 1610612752 )
        return "HP_PARALLEL";
      return nullptr;
    }
    if ( a2 == 1610612754 )
      return "HP_OPT_ANNOT";
    else
      return "HP_HSL_ANNOT";
  }
  else
  {
    if ( a2 == 1610612740 )
      return "HP_CORE_COMM";
    if ( a2 > 0x60000004 )
    {
      if ( a2 == 1610612742 )
      {
        return "HP_CORE_LOADABLE";
      }
      else if ( a2 >= 0x60000006 )
      {
        if ( a2 == 1610612743 )
          return "HP_CORE_STACK";
        else
          return "HP_CORE_SHM";
      }
      else
      {
        return "HP_CORE_PROC";
      }
    }
    else
    {
      if ( a2 == 1610612737 )
        return "HP_CORE_NONE";
      if ( a2 <= 0x60000001 )
      {
        if ( a2 == 1610612736 )
          return "HP_TLS";
        return nullptr;
      }
      if ( a2 == 1610612738 )
        return "HP_CORE_VERSION";
      else
        return "HP_CORE_KERNEL";
    }
  }
}
// 2C53C: conditional instruction was optimized away because r1.4==3
// 2C698: conditional instruction was optimized away because r1.4==60000003
// 2C70A: conditional instruction was optimized away because r1.4==60000013
// 2C748: conditional instruction was optimized away because r1.4==60000008
