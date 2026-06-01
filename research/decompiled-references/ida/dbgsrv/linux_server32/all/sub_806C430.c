/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806C430
// Address: 0x0806C430

//----- (0806C430) --------------------------------------------------------
char *__cdecl sub_806C430(int a1, unsigned int a2)
{
  int v2; // ebx
  char *v3; // ecx
  int v5; // ecx

  v2 = *(_DWORD *)(a1 + 32);
  if ( *(_BYTE *)(v2 + 391) != 6 )
  {
    if ( a2 != 1685382481 )
    {
      v3 = "RO-AFTER";
      if ( a2 == 1685382482 )
        return v3;
      v3 = "EH_FRAME";
      if ( a2 == 1685382480 )
        return v3;
      goto LABEL_5;
    }
    return "STACK";
  }
  if ( a2 == 1879048187 )
    return "STACK";
  if ( a2 > 0x6FFFFFFB )
  {
    v3 = "DTRACE";
    if ( a2 == 1879048188 )
      return v3;
    v3 = "SUNWCAP";
    if ( a2 == 1879048189 )
      return v3;
    v5 = *(unsigned __int16 *)(v2 + 402);
    if ( v5 != 40 && v5 != 183 )
    {
      if ( v5 != 50 )
      {
LABEL_18:
        if ( v5 == 8 )
        {
          if ( a2 == 1879048320 )
            return "IOPMOD";
          if ( a2 > 0x70000080 )
          {
            switch ( a2 )
            {
              case 0x700000A0u:
                return "PSPREL";
              case 0x700000A1u:
                return "PSPREL2";
              case 0x70000090u:
                return "EEMOD";
            }
          }
          else
          {
            if ( a2 == 1879048194 )
              return "OPTIONS";
            if ( a2 > 0x70000002 )
            {
              if ( a2 == 1879048195 )
                return "ABIFLAGS";
            }
            else
            {
              if ( a2 == 1879048192 )
                return "REGINFO";
              if ( a2 == 1879048193 )
                return "RTPROC";
            }
          }
        }
        else if ( a2 == 1879048356 && v5 == 21 )
        {
          return "PRXRELA";
        }
        return nullptr;
      }
LABEL_27:
      if ( a2 == 1879048192 )
        return "IA_64_ARCHEXT";
      if ( a2 == 1879048193 )
        return "IA_64_UNWIND";
      return nullptr;
    }
    goto LABEL_43;
  }
  if ( a2 == 1685382480 )
    return "EH_FRAME";
  v3 = "SUNWBSS";
  if ( a2 != 1879048186 )
  {
    v3 = "UNWIND";
    if ( a2 != 1684333904 )
    {
      if ( a2 <= 7 )
      {
LABEL_5:
        switch ( a2 )
        {
          case 0u:
            v3 = "NULL";
            break;
          case 1u:
            v3 = "LOAD";
            break;
          case 2u:
            v3 = "DYNAMIC";
            break;
          case 3u:
            v3 = "INTERP";
            break;
          case 4u:
            v3 = "NOTE";
            break;
          case 5u:
            v3 = "SHLIB";
            break;
          case 6u:
            v3 = "PHDR";
            break;
          case 7u:
            v3 = "TLS";
            break;
          default:
            if ( a2 != 1694766464 )
            {
              v5 = *(unsigned __int16 *)(v2 + 402);
              if ( v5 != 40 )
                goto LABEL_16;
              goto LABEL_43;
            }
            v3 = "PAX-FLAG";
            break;
        }
        return v3;
      }
      v3 = "PAX-FLAG";
      if ( a2 == 1694766464 )
        return v3;
      v5 = *(unsigned __int16 *)(v2 + 402);
      if ( v5 == 40 )
      {
LABEL_44:
        v3 = "EXIDX";
        if ( a2 != 1879048193 )
          return nullptr;
        return v3;
      }
LABEL_16:
      if ( v5 != 183 )
      {
        if ( v5 != 50 )
          goto LABEL_18;
        if ( a2 <= 0x60000016 )
        {
          if ( a2 > 0x5FFFFFFF )
          {
            switch ( a2 )
            {
              case 0x60000000u:
                v3 = "HP_TLS";
                break;
              case 0x60000001u:
                v3 = "HP_CORE_NONE";
                break;
              case 0x60000002u:
                v3 = "HP_CORE_VERSION";
                break;
              case 0x60000003u:
                v3 = "HP_CORE_KERNEL";
                break;
              case 0x60000004u:
                v3 = "HP_CORE_COMM";
                break;
              case 0x60000005u:
                v3 = "HP_CORE_PROC";
                break;
              case 0x60000006u:
                v3 = "HP_CORE_LOADABLE";
                break;
              case 0x60000007u:
                v3 = "HP_CORE_STACK";
                break;
              case 0x60000008u:
                v3 = "HP_CORE_SHM";
                break;
              case 0x60000009u:
                v3 = "HP_CORE_MMF";
                break;
              case 0x60000010u:
                v3 = "HP_PARALLEL";
                break;
              case 0x60000011u:
                v3 = "HP_FASTBIND";
                break;
              case 0x60000012u:
                v3 = "HP_OPT_ANNOT";
                break;
              case 0x60000013u:
                v3 = "HP_HSL_ANNOT";
                break;
              case 0x60000014u:
                v3 = "HP_STACK";
                break;
              case 0x60000015u:
                v3 = "HP_CORE_UTSNAME";
                break;
              case 0x60000016u:
                v3 = "HP_LINKER_FOOTPRINT";
                break;
              default:
                return nullptr;
            }
            return v3;
          }
          return nullptr;
        }
        goto LABEL_27;
      }
LABEL_43:
      v3 = "ARCHEXT";
      if ( a2 == 1879048192 )
        return v3;
      goto LABEL_44;
    }
  }
  return v3;
}
