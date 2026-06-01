__int64 __fastcall sub_CCD30(const __m128i *a1, __int8 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    sub_CCC40(a1);
    if ( !a1[12].m128i_i8[9] && sub_19EFD0(&a1[8].m128i_u64[1]) )
    {
      sub_19DD80("Debug/Take memory", "ManualRegions", 1);
      a1[12].m128i_i8[9] = 1;
    }
    if ( !byte_252788 )
    {
      sub_922D0(
        (__int64)"AUTOHIDE REGISTRY\n"
                 "The current debugger backend (%s) does not provide memory information to IDA.\n"
                 "Therefore the memory contents may be invisible by default.\n"
                 "Please use the Debugger/%s menu item to configure the memory layout.\n"
                 "It is possible to define just one big region for the whole memory\n"
                 "(IDA will display question marks for missing memory regions in this case).",
        *(const char **)(dbg + 8LL),
        "Manual memory regions");
      byte_252788 = 1;
    }
  }
  else
  {
    sub_C2B50((__int64)a1);
    dbg_save_manual_regions();
    sub_19E000("ManualRegions");
    a1[12].m128i_i8[9] = 0;
    sub_194440("Manual memory regions");
  }
  a1[12].m128i_i8[8] = a2;
  result = invalidate_dbgmem_config();
  a1[3].m128i_i8[8] = 1;
  return result;
}

