__int64 __fastcall sub_23C4E0(
        const __m128i *a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  __int64 result; // rax
  char v16; // [rsp+0h] [rbp-18h]

  if ( (_BYTE)a2 )
  {
    sub_23C3F0(a1, a2);
    if ( !a1[12].m128i_i8[9] && sub_538360(&a1[8].m128i_u64[1]) )
    {
      sub_536B20("Debug/Take memory", "ManualRegions", 1);
      a1[12].m128i_i8[9] = 1;
    }
    if ( !byte_8CC638 )
    {
      sub_16B9E0(
        (int)"AUTOHIDE REGISTRY\n"
             "The current debugger backend (%s) does not provide memory information to IDA.\n"
             "Therefore the memory contents may be invisible by default.\n"
             "Please use the Debugger/%s menu item to configure the memory layout.\n"
             "It is possible to define just one big region for the whole memory\n"
             "(IDA will display question marks for missing memory regions in this case).",
        *(_QWORD *)(dbg + 8),
        (__int64)"Manual memory regions",
        v10,
        v11,
        v12,
        a3,
        a4,
        a5,
        a6,
        v13,
        v14,
        a9,
        a10,
        v16);
      byte_8CC638 = 1;
    }
  }
  else
  {
    sub_231D20((__int64)a1, a2);
    dbg_save_manual_regions(&a1->m128i_u64[1]);
    sub_5344B0("ManualRegions");
    a1[12].m128i_i8[9] = 0;
    sub_4A04A0("Manual memory regions");
  }
  a1[12].m128i_i8[8] = (char)a2;
  result = invalidate_dbgmem_config();
  a1[3].m128i_i8[8] = 1;
  return result;
}
