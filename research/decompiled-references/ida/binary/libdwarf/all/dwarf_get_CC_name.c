__int64 __fastcall dwarf_get_CC_name(__int64 a1, _QWORD *a2)
{
  if ( (unsigned int)a1 > 5 )
  {
    switch ( (int)a1 )
    {
      case 64:
        *a2 = "DW_CC_GNU_renesas_sh";
        return 0;
      case 65:
        *a2 = "DW_CC_GNU_borland_fastcall_i386";
        return 0;
      case 101:
        *a2 = "DW_CC_ALTIUM_interrupt";
        return 0;
      case 102:
        *a2 = "DW_CC_ALTIUM_near_system_stack";
        return 0;
      case 103:
        *a2 = "DW_CC_ALTIUM_near_user_stack";
        return 0;
      case 104:
        *a2 = "DW_CC_ALTIUM_huge_user_stack";
        return 0;
      case 176:
        *a2 = "DW_CC_GNU_BORLAND_safecall";
        return 0;
      case 177:
        *a2 = "DW_CC_GNU_BORLAND_stdcall";
        return 0;
      case 178:
        *a2 = "DW_CC_GNU_BORLAND_pascal";
        return 0;
      case 179:
        *a2 = "DW_CC_GNU_BORLAND_msfastcall";
        return 0;
      case 180:
        *a2 = "DW_CC_GNU_BORLAND_msreturn";
        return 0;
      case 181:
        *a2 = "DW_CC_GNU_BORLAND_thiscall";
        return 0;
      case 182:
        *a2 = "DW_CC_GNU_BORLAND_fastcall";
        return 0;
      case 192:
        *a2 = "DW_CC_LLVM_vectorcall";
        return 0;
      case 193:
        *a2 = "DW_CC_LLVM_Win64";
        return 0;
      case 194:
        *a2 = "DW_CC_LLVM_X86_64SysV";
        return 0;
      case 195:
        *a2 = "DW_CC_LLVM_AAPCS";
        return 0;
      case 196:
        *a2 = "DW_CC_LLVM_AAPCS_VFP";
        return 0;
      case 197:
        *a2 = "DW_CC_LLVM_IntelOclBicc";
        return 0;
      case 198:
        *a2 = "DW_CC_LLVM_SpirFunction";
        return 0;
      case 199:
        *a2 = "DW_CC_LLVM_OpenCLKernel";
        return 0;
      case 200:
        *a2 = "DW_CC_LLVM_Swift";
        return 0;
      case 201:
        *a2 = "DW_CC_LLVM_PreserveMost";
        return 0;
      case 202:
        *a2 = "DW_CC_LLVM_PreserveAll";
        return 0;
      case 203:
        *a2 = "DW_CC_LLVM_X86RegCall";
        return 0;
      case 255:
        *a2 = "DW_CC_GDB_IBM_OpenCL";
        return 0;
      default:
        return 0xFFFFFFFFLL;
    }
  }
  if ( !(_DWORD)a1 )
    return 0xFFFFFFFFLL;
  switch ( a1 )
  {
    case 2LL:
      *a2 = "DW_CC_program";
      break;
    case 3LL:
      *a2 = "DW_CC_nocall";
      break;
    case 4LL:
      *a2 = "DW_CC_pass_by_reference";
      break;
    case 5LL:
      *a2 = "DW_CC_pass_by_value";
      break;
    default:
      *a2 = "DW_CC_normal";
      break;
  }
  return 0;
}

