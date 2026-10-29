/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007B7C
// Address: 0x0000000100007B7C

//----- (0000000100007B7C) ----------------------------------------------------
__int64 __fastcall sub_100007B7C(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, _QWORD *))
{
  __int64 v4; // x21
  mach_vm_address_t i; // x26
  char v8; // w8
  natural_t nesting_depth; // [xsp+4h] [xbp-13Ch] BYREF
  mach_vm_size_t v10; // [xsp+8h] [xbp-138h] BYREF
  mach_vm_address_t v11; // [xsp+10h] [xbp-130h] BYREF
  mach_msg_type_number_t infoCnt; // [xsp+1Ch] [xbp-124h] BYREF
  int info[5]; // [xsp+20h] [xbp-120h] BYREF
  mach_port_t object_name; // [xsp+34h] [xbp-10Ch] BYREF
  mach_vm_address_t address; // [xsp+38h] [xbp-108h] BYREF
  mach_vm_size_t size; // [xsp+40h] [xbp-100h] BYREF
  _QWORD v17[2]; // [xsp+48h] [xbp-F8h] BYREF
  __int128 v18; // [xsp+58h] [xbp-E8h]
  __int128 v19; // [xsp+68h] [xbp-D8h]
  _QWORD v20[4]; // [xsp+78h] [xbp-C8h] BYREF
  int v21[19]; // [xsp+9Ch] [xbp-A4h] BYREF

  address = 0;
  size = 0;
  for ( infoCnt = 5; !mach_vm_region(*(_DWORD *)(a1 + 1544), &address, &size, 12, info, &infoCnt, &object_name); infoCnt = 5 )
  {
    v10 = 0;
    v11 = address;
    for ( i = size + address; v11 < i; v11 += v10 )
    {
      nesting_depth = 1;
      infoCnt = 19;
      if ( mach_vm_region_recurse(*(_DWORD *)(a1 + 1544), &v11, &v10, &nesting_depth, v21, &infoCnt) || v11 >= i )
        break;
      v19 = 0u;
      memset(v20, 0, 26);
      v18 = 0u;
      v17[0] = v11;
      v17[1] = v10 + v11;
      if ( *(_BYTE *)(a1 + 1929) )
        v8 = 2;
      else
        v8 = 1;
      LOBYTE(v20[3]) = v8;
      if ( (v21[0] & 7) != 0 )
        BYTE1(v20[3]) = __rbit32(v21[0]) >> 29;
      v4 = (**a2)(a2, v17);
      if ( *((_QWORD *)&v19 + 1) )
      {
        v20[0] = 0;
        qfree(*((void **)&v19 + 1));
        *((_QWORD *)&v19 + 1) = 0;
        v20[1] = 0;
      }
      if ( (_QWORD)v18 )
      {
        *((_QWORD *)&v18 + 1) = 0;
        qfree((void *)v18);
      }
      if ( (_DWORD)v4 )
        return v4;
    }
    address += size;
  }
  return 0;
}
