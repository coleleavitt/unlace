/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004C80
// Address: 0x0000000100004C80

//----- (0000000100004C80) ----------------------------------------------------
__int64 __fastcall sub_100004C80(
        __int64 a1,
        int *a2,
        mach_vm_address_t a3,
        int a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  mach_error_t v10; // eax
  const char *v11; // r14
  mach_msg_type_number_t *p_infoCnt; // r15
  int v14; // [rsp+4h] [rbp-4Ch]
  mach_msg_type_number_t infoCnt; // [rsp+8h] [rbp-48h] BYREF
  natural_t nesting_depth; // [rsp+Ch] [rbp-44h] BYREF
  mach_vm_size_t size; // [rsp+10h] [rbp-40h] BYREF
  mach_vm_address_t address; // [rsp+18h] [rbp-38h] BYREF

  size = 0;
  nesting_depth = 0;
  infoCnt = 19;
  address = a3;
  v10 = mach_vm_region_recurse(*(_DWORD *)(a1 + 848), &address, &size, &nesting_depth, a2, &infoCnt);
  if ( v10 )
  {
LABEL_2:
    v11 = (const char *)address;
    mach_error_string(v10);
    LODWORD(p_infoCnt) = 0;
    sub_100060FA0(a1, "mach_vm_region failed for %a: %s\n", a5, v11);
  }
  else
  {
    v14 = a4;
    p_infoCnt = &infoCnt;
    while ( nesting_depth <= 0xFF && a2[12] )
    {
      ++nesting_depth;
      address = a3;
      v10 = mach_vm_region_recurse(*(_DWORD *)(a1 + 848), &address, &size, &nesting_depth, a2, &infoCnt);
      if ( v10 )
        goto LABEL_2;
    }
    LOBYTE(p_infoCnt) = 1;
    if ( a3 + v14 > address + size )
    {
      LODWORD(p_infoCnt) = 0;
      sub_100060FA0(a1, "xfer_page: operation at [%a, %a] extends past end of vm region [%a, %a]\n", a5, a6, a7, a8);
    }
  }
  return (unsigned int)p_infoCnt;
}
