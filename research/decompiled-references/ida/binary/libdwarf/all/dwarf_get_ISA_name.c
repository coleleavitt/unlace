__int64 __fastcall dwarf_get_ISA_name(int a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a1 == 1 )
  {
    *a2 = "DW_ISA_ARM_thumb";
    return 0;
  }
  else if ( a1 == 2 )
  {
    *a2 = "DW_ISA_ARM_arm";
    return 0;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( !a1 )
    {
      *a2 = "DW_ISA_UNKNOWN";
      return 0;
    }
  }
  return result;
}

