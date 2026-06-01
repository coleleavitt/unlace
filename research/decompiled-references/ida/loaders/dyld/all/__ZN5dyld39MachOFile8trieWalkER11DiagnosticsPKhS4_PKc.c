const unsigned __int8 **__fastcall dyld3::MachOFile::trieWalk(
        dyld3::MachOFile *this,
        const unsigned __int8 **a2,
        Diagnostics *a3,
        const unsigned __int8 *a4,
        const char *a5)
{
  const unsigned __int8 *v5; // x22
  const unsigned __int8 *v9; // x3
  const unsigned __int8 **v10; // x23
  __int64 v11; // x9
  const unsigned __int8 **v12; // x26
  int v13; // w8
  __int64 v14; // x24
  bool v15; // zf
  unsigned __int8 *v16; // x8
  const unsigned __int8 **v17; // x8
  int v18; // w9
  int v19; // t1
  int v20; // w13
  bool v21; // w11
  const unsigned __int8 **v22; // x10
  const unsigned __int8 **v23; // x14
  const unsigned __int8 *v24; // x12
  int v25; // t1
  int v26; // t1
  int v27; // t1
  unsigned __int64 v28; // x24
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  _DWORD *v32; // x8
  __int64 v33; // x9
  __int64 v34; // x9
  const unsigned __int8 **v36; // [xsp+10h] [xbp-290h] BYREF
  _QWORD v37[2]; // [xsp+18h] [xbp-288h] BYREF
  __int64 v38; // [xsp+28h] [xbp-278h]
  vm_address_t address; // [xsp+30h] [xbp-270h]
  vm_size_t size; // [xsp+38h] [xbp-268h]
  char v41; // [xsp+40h] [xbp-260h] BYREF

  v5 = a4;
  v37[0] = &v41;
  v37[1] = 128;
  address = 0;
  size = 0;
  v38 = 0;
  dyld3::OverflowSafeArray<unsigned int,4294967295ul>::verifySpace(v37, 1, a3, a4, a5);
  v10 = nullptr;
  v11 = v38++;
  *(_DWORD *)(v37[0] + 4 * v11) = 0;
  if ( a2 >= (const unsigned __int8 **)a3 )
    goto LABEL_38;
  v12 = a2;
  while ( 2 )
  {
    v13 = *(char *)v12;
    v36 = (const unsigned __int8 **)((char *)v12 + 1);
    if ( v13 < 0 )
    {
      v36 = v12;
      v14 = dyld3::MachOFile::read_uleb128(this, &v36, (const unsigned __int8 **)a3, v9);
      if ( Diagnostics::hasError(this) )
      {
LABEL_37:
        v10 = nullptr;
        break;
      }
    }
    else
    {
      v14 = (unsigned __int8)v13;
    }
    v10 = v36;
    if ( *v5 )
      v15 = 1;
    else
      v15 = v14 == 0;
    if ( !v15 )
      break;
    v16 = (unsigned __int8 *)v36 + v14;
    if ( (char *)v36 + v14 > (char *)a3 )
      goto LABEL_37;
    v19 = *v16;
    v17 = (const unsigned __int8 **)(v16 + 1);
    v18 = v19;
    v36 = v17;
    if ( !v19 )
      goto LABEL_37;
    while ( 1 )
    {
      v20 = *(unsigned __int8 *)v17;
      if ( !*(_BYTE *)v17 )
        break;
      v21 = 0;
      v22 = (const unsigned __int8 **)((char *)v17 + 1);
      v23 = (const unsigned __int8 **)((char *)v17 + 2);
      v24 = v5;
      do
      {
        v17 = v23;
        if ( v21 )
        {
          v21 = 1;
        }
        else
        {
          v25 = *v24++;
          v21 = v20 != v25;
        }
        v36 = v22;
        v26 = *(unsigned __int8 *)v22;
        v22 = (const unsigned __int8 **)((char *)v22 + 1);
        v20 = v26;
        v23 = (const unsigned __int8 **)((char *)v23 + 1);
      }
      while ( v26 );
      if ( !v21 )
      {
        v17 = (const unsigned __int8 **)((char *)v22 - 1);
        v5 = v24;
        break;
      }
      do
      {
        v27 = *(char *)v17;
        v17 = (const unsigned __int8 **)((char *)v17 + 1);
      }
      while ( v27 < 0 );
      v36 = v17;
      if ( v17 > (const unsigned __int8 **)a3 )
      {
        Diagnostics::error(this, "malformed trie node, child node extends past end of trie\n");
        goto LABEL_37;
      }
      if ( !(_BYTE)--v18 )
        goto LABEL_37;
    }
    v36 = (const unsigned __int8 **)((char *)v17 + 1);
    v28 = dyld3::MachOFile::read_uleb128(this, &v36, (const unsigned __int8 **)a3, v9);
    if ( Diagnostics::hasError(this) )
      goto LABEL_37;
    if ( !v28
      || (v12 = (const unsigned __int8 **)((char *)a2 + v28), (char *)a2 + v28 > (char *)a3)
      || v28 > a3 - (Diagnostics *)a2 )
    {
      Diagnostics::error(this, "malformed trie child, nodeOffset=0x%llX out of range\n");
      goto LABEL_37;
    }
    if ( v38 )
    {
      v32 = (_DWORD *)v37[0];
      v33 = 4 * v38;
      while ( v28 != *v32 )
      {
        ++v32;
        v33 -= 4;
        if ( !v33 )
          goto LABEL_33;
      }
      Diagnostics::error(this, "malformed trie child, cycle to nodeOffset=0x%llX\n");
      goto LABEL_37;
    }
LABEL_33:
    dyld3::OverflowSafeArray<unsigned int,4294967295ul>::verifySpace(v37, 1, v29, v30, v31);
    v10 = nullptr;
    v34 = v38++;
    *(_DWORD *)(v37[0] + 4 * v34) = v28;
    v36 = (const unsigned __int8 **)((char *)a2 + v28);
    if ( v12 < (const unsigned __int8 **)a3 )
      continue;
    break;
  }
LABEL_38:
  v38 = 0;
  if ( address )
    vm_deallocate(mach_task_self_, address, size);
  return v10;
}
