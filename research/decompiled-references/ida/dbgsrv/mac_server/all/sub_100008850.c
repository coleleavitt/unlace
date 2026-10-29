/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008850
// Address: 0x0000000100008850

//----- (0000000100008850) ----------------------------------------------------
__int64 __fastcall sub_100008850(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, _QWORD *))
{
  unsigned int v2; // r13d
  mach_vm_size_t v4; // rax
  mach_vm_address_t v5; // r12
  unsigned __int8 v6; // al
  natural_t nesting_depth; // [rsp+Ch] [rbp-114h] BYREF
  mach_vm_size_t v8; // [rsp+10h] [rbp-110h] BYREF
  mach_vm_address_t v9; // [rsp+18h] [rbp-108h] BYREF
  mach_msg_type_number_t infoCnt; // [rsp+24h] [rbp-FCh] BYREF
  int info[5]; // [rsp+28h] [rbp-F8h] BYREF
  mach_port_t object_name; // [rsp+3Ch] [rbp-E4h] BYREF
  mach_vm_address_t address; // [rsp+40h] [rbp-E0h] BYREF
  mach_vm_size_t size; // [rsp+48h] [rbp-D8h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+60h] [rbp-C0h]
  __int128 v17; // [rsp+70h] [rbp-B0h]
  _QWORD v18[4]; // [rsp+80h] [rbp-A0h] BYREF
  int v19[19]; // [rsp+A4h] [rbp-7Ch] BYREF

  size = 0;
  address = 0;
  for ( infoCnt = 5; !mach_vm_region(*(_DWORD *)(a1 + 848), &address, &size, 12, info, &infoCnt, &object_name); infoCnt = 5 )
  {
    v8 = 0;
    v4 = address;
    v5 = address + size;
    while ( 1 )
    {
      v9 = v4;
      if ( v4 >= v5 )
        break;
      nesting_depth = 1;
      infoCnt = 19;
      if ( mach_vm_region_recurse(*(_DWORD *)(a1 + 848), &v9, &v8, &nesting_depth, v19, &infoCnt) || v9 >= v5 )
        break;
      memset(v18, 0, 26);
      v17 = 0;
      v16 = 0;
      v15[0] = v9;
      v15[1] = v8 + v9;
      LOBYTE(v18[3]) = *(_BYTE *)(a1 + 1233) + 1;
      if ( (v19[0] & 7) != 0 )
      {
        v6 = __ROL1__(v19[0], 4);
        BYTE1(v18[3]) = (unsigned __int8)((2 * (((v6 >> 2) | (4 * (v6 & 0x10))) & 0x50)) | (2 * v6) & 0x40) >> 5;
      }
      v2 = (**a2)(a2, v15);
      if ( *((_QWORD *)&v17 + 1) )
      {
        v18[0] = 0;
        qfree(*((void **)&v17 + 1));
        *((_QWORD *)&v17 + 1) = 0;
        v18[1] = 0;
      }
      if ( (_QWORD)v16 )
      {
        *((_QWORD *)&v16 + 1) = 0;
        qfree((void *)v16);
      }
      if ( v2 )
        return v2;
      v4 = v8 + v9;
    }
    address += size;
  }
  return 0;
}
