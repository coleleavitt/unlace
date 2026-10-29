/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004C10
// Address: 0x0000000100004C10

//----- (0000000100004C10) ----------------------------------------------------
mach_error_t __fastcall sub_100004C10(
        __int64 a1,
        mach_vm_address_t a2,
        vm_offset_t a3,
        mach_msg_type_number_t a4,
        double a5)
{
  mach_error_t result; // eax
  int v7; // r12d
  mach_error_t v8; // r13d

  result = mach_vm_write(*(_DWORD *)(a1 + 848), a2, a3, a4);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 848);
    v8 = result;
    mach_error_string(result);
    sub_100060FA0(a1, "vm_write %d: ea=%a, size=%d => %s\n", v7, a5, a2, (const char *)a4);
    return v8;
  }
  return result;
}
