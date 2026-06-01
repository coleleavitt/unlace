const char *__fastcall sub_3CE80(unsigned __int64 a1)
{
  const char *result; // rax

  if ( a1 > 0x30C )
  {
    if ( a1 > 0x405 )
    {
      result = "NT_PRXFPREG";
      if ( a1 != 1189489535 )
        return nullptr;
    }
    else
    {
      if ( a1 <= 0x3FF )
        return nullptr;
      switch ( a1 )
      {
        case 0x400uLL:
          result = "NT_ARM_VFP";
          break;
        case 0x401uLL:
          result = "NT_ARM_TLS";
          break;
        case 0x402uLL:
          result = "NT_ARM_HW_BREAK";
          break;
        case 0x403uLL:
          result = "NT_ARM_HW_WATCH";
          break;
        case 0x405uLL:
          result = "NT_ARM_SVE";
          break;
        default:
          return nullptr;
      }
    }
  }
  else if ( a1 > 0x2FF )
  {
    result = "NT_S390_HIGH_GPRS";
    switch ( a1 )
    {
      case 0x301uLL:
        result = "NT_S390_TIMER";
        break;
      case 0x302uLL:
        result = "NT_S390_TODCMP";
        break;
      case 0x303uLL:
        result = "NT_S390_TODPREG";
        break;
      case 0x304uLL:
        result = "NT_S390_CTRS";
        break;
      case 0x305uLL:
        result = "NT_S390_PREFIX";
        break;
      case 0x306uLL:
        result = "NT_S390_LAST_BREAK";
        break;
      case 0x307uLL:
        result = "NT_S390_SYSTEM_CALL";
        break;
      case 0x308uLL:
        result = "NT_S390_TDB";
        break;
      case 0x309uLL:
        result = "NT_S390_VXRS_LOW";
        break;
      case 0x30AuLL:
        result = "NT_S390_VXRS_HIGH";
        break;
      case 0x30BuLL:
        result = "NT_S390_GS_CB";
        break;
      case 0x30CuLL:
        result = "NT_S390_GS_BC";
        break;
      default:
        return result;
    }
  }
  else
  {
    if ( a1 <= 0x10F )
    {
      if ( a1 > 0xFF )
      {
        switch ( a1 )
        {
          case 0x100uLL:
            result = "NT_PPC_VMX";
            break;
          case 0x102uLL:
            result = "NT_PPC_VSX";
            break;
          case 0x103uLL:
            result = "NT_PPC_TAR";
            break;
          case 0x104uLL:
            result = "NT_PPC_PPR";
            break;
          case 0x105uLL:
            result = "NT_PPC_DSCR";
            break;
          case 0x106uLL:
            result = "NT_PPC_EBB";
            break;
          case 0x107uLL:
            result = "NT_PPC_PMU";
            break;
          case 0x108uLL:
            result = "NT_PPC_TM_CGPR";
            break;
          case 0x109uLL:
            result = "NT_PPC_TM_CFPR";
            break;
          case 0x10AuLL:
            result = "NT_PPC_TM_CVMX";
            break;
          case 0x10BuLL:
            result = "NT_PPC_TM_CVSX";
            break;
          case 0x10CuLL:
            result = "NT_PPC_TM_SPR";
            break;
          case 0x10DuLL:
            result = "NT_PPC_TM_CTAR";
            break;
          case 0x10EuLL:
            result = "NT_PPC_TM_CPPR";
            break;
          case 0x10FuLL:
            result = "NT_PPC_TM_CDSCR";
            break;
          default:
            return nullptr;
        }
        return result;
      }
      return nullptr;
    }
    result = "NT_386_IOPERM";
    if ( a1 != 513 )
    {
      result = "NT_X86_XSTATE";
      if ( a1 != 514 )
      {
        result = "NT_386_TLS";
        if ( a1 != 512 )
          return nullptr;
      }
    }
  }
  return result;
}

