/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004824
// Address: 0x0000000100004824

//----- (0000000100004824) ----------------------------------------------------
__int64 __fastcall sub_100004824(__int64 a1, vm_region_recurse_info_t info, mach_vm_address_t a3, int a4)
{
  vm_map_read_t i; // w0
  mach_error_t v9; // w0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  char v16; // w20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  mach_msg_type_number_t infoCnt; // [xsp+20h] [xbp-40h] BYREF
  natural_t nesting_depth; // [xsp+24h] [xbp-3Ch] BYREF
  mach_vm_size_t size; // [xsp+28h] [xbp-38h] BYREF
  mach_vm_address_t address; // [xsp+30h] [xbp-30h] BYREF

  size = 0;
  address = a3;
  infoCnt = 19;
  nesting_depth = 0;
  for ( i = *(_DWORD *)(a1 + 1544); ; i = *(_DWORD *)(a1 + 1544) )
  {
    v9 = mach_vm_region_recurse(i, &address, &size, &nesting_depth, info, &infoCnt);
    if ( v9 )
    {
      v16 = address;
      mach_error_string(v9);
      sub_1000593FC(a1, "mach_vm_region failed for %a: %s\n", v17, v18, v19, v20, v21, v22, v16);
      return 0;
    }
    if ( nesting_depth > 0xFF || !info[12] )
      break;
    ++nesting_depth;
    address = a3;
  }
  if ( a3 + a4 > size + address )
  {
    sub_1000593FC(
      a1,
      "xfer_page: operation at [%a, %a] extends past end of vm region [%a, %a]\n",
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      a3);
    return 0;
  }
  return 1;
}
// 1000048C8: variable 'v17' is possibly undefined
// 1000048C8: variable 'v18' is possibly undefined
// 1000048C8: variable 'v19' is possibly undefined
// 1000048C8: variable 'v20' is possibly undefined
// 1000048C8: variable 'v21' is possibly undefined
// 1000048C8: variable 'v22' is possibly undefined
// 100004920: variable 'v10' is possibly undefined
// 100004920: variable 'v11' is possibly undefined
// 100004920: variable 'v12' is possibly undefined
// 100004920: variable 'v13' is possibly undefined
// 100004920: variable 'v14' is possibly undefined
// 100004920: variable 'v15' is possibly undefined
