unsigned __int8 *__fastcall lsl::PersistentAllocator::addToFreeBlockTrees(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 **v4; // x20
  __int64 *v5; // x10
  __int64 v6; // x8
  _QWORD *v7; // x8
  __int64 v8; // t1
  __int64 ***v10; // x0
  __int64 **v11; // x8
  __int128 v12; // q0
  __int128 v13; // q1
  __int128 v14; // q2
  __int128 v15; // q0
  int v16; // w9
  __int64 **v17; // x10
  __int64 **v18; // x25
  unsigned __int8 v19; // w27
  _QWORD *v20; // x1
  __int64 v21; // x11
  vm_address_t *v22; // x8
  __int128 v24; // [xsp+0h] [xbp-450h] BYREF
  __int128 v25; // [xsp+10h] [xbp-440h] BYREF
  __int64 **v26; // [xsp+28h] [xbp-428h] BYREF
  __int128 v27; // [xsp+30h] [xbp-420h]
  __int128 v28; // [xsp+40h] [xbp-410h]
  __int128 v29; // [xsp+50h] [xbp-400h]
  __int128 v30; // [xsp+60h] [xbp-3F0h]
  __int128 v31; // [xsp+70h] [xbp-3E0h]
  __int128 v32; // [xsp+80h] [xbp-3D0h]
  __int64 **v33; // [xsp+90h] [xbp-3C0h]
  int v34; // [xsp+98h] [xbp-3B8h]
  unsigned __int8 v35; // [xsp+9Ch] [xbp-3B4h]
  __int64 **v36; // [xsp+A0h] [xbp-3B0h] BYREF
  __int128 v37; // [xsp+A8h] [xbp-3A8h]
  __int128 v38; // [xsp+B8h] [xbp-398h]
  __int128 v39; // [xsp+C8h] [xbp-388h]
  __int128 v40; // [xsp+D8h] [xbp-378h]
  __int128 v41; // [xsp+E8h] [xbp-368h]
  __int128 v42; // [xsp+F8h] [xbp-358h]
  __int64 **v43; // [xsp+108h] [xbp-348h]
  int v44; // [xsp+110h] [xbp-340h]
  unsigned __int8 v45; // [xsp+114h] [xbp-33Ch]
  __int64 **v46; // [xsp+120h] [xbp-330h] BYREF
  __int128 v47; // [xsp+128h] [xbp-328h]
  __int128 v48; // [xsp+138h] [xbp-318h]
  __int128 v49; // [xsp+148h] [xbp-308h]
  __int128 v50; // [xsp+158h] [xbp-2F8h]
  __int128 v51; // [xsp+168h] [xbp-2E8h]
  _OWORD v52[2]; // [xsp+178h] [xbp-2D8h] BYREF
  __int64 **v53; // [xsp+1A0h] [xbp-2B0h] BYREF
  __int128 v54; // [xsp+1A8h] [xbp-2A8h]
  __int128 v55; // [xsp+1B8h] [xbp-298h]
  __int128 v56; // [xsp+1C8h] [xbp-288h]
  __int128 v57; // [xsp+1D8h] [xbp-278h]
  __int128 v58; // [xsp+1E8h] [xbp-268h]
  __int128 v59; // [xsp+1F8h] [xbp-258h]
  __int64 v60; // [xsp+208h] [xbp-248h]
  int v61; // [xsp+210h] [xbp-240h]
  unsigned __int8 v62; // [xsp+214h] [xbp-23Ch]
  __int64 **v63; // [xsp+218h] [xbp-238h] BYREF
  __int128 v64; // [xsp+220h] [xbp-230h]
  __int128 v65; // [xsp+230h] [xbp-220h]
  __int128 v66; // [xsp+240h] [xbp-210h]
  __int128 v67; // [xsp+250h] [xbp-200h]
  __int128 v68; // [xsp+260h] [xbp-1F0h]
  __int128 v69; // [xsp+270h] [xbp-1E0h]
  __int64 v70; // [xsp+280h] [xbp-1D0h]
  int v71; // [xsp+288h] [xbp-1C8h]
  unsigned __int8 v72; // [xsp+28Ch] [xbp-1C4h]
  __int64 **v73; // [xsp+290h] [xbp-1C0h] BYREF
  __int128 v74; // [xsp+298h] [xbp-1B8h]
  __int128 v75; // [xsp+2A8h] [xbp-1A8h]
  __int128 v76; // [xsp+2B8h] [xbp-198h]
  __int128 v77; // [xsp+2C8h] [xbp-188h]
  __int128 v78; // [xsp+2D8h] [xbp-178h]
  __int128 v79; // [xsp+2E8h] [xbp-168h]
  __int64 v80; // [xsp+2F8h] [xbp-158h]
  int v81; // [xsp+300h] [xbp-150h]
  unsigned __int8 v82; // [xsp+304h] [xbp-14Ch]
  __int64 **v83; // [xsp+308h] [xbp-148h] BYREF
  __int128 v84; // [xsp+310h] [xbp-140h]
  __int128 v85; // [xsp+320h] [xbp-130h]
  __int128 v86; // [xsp+330h] [xbp-120h]
  __int128 v87; // [xsp+340h] [xbp-110h]
  __int128 v88; // [xsp+350h] [xbp-100h]
  __int128 v89; // [xsp+360h] [xbp-F0h]
  __int64 v90; // [xsp+370h] [xbp-E0h]
  int v91; // [xsp+378h] [xbp-D8h]
  unsigned __int8 v92; // [xsp+37Ch] [xbp-D4h]
  _BYTE v93[24]; // [xsp+380h] [xbp-D0h] BYREF
  __int128 v94; // [xsp+398h] [xbp-B8h]
  __int128 v95; // [xsp+3A8h] [xbp-A8h]
  __int128 v96; // [xsp+3B8h] [xbp-98h]
  __int128 v97; // [xsp+3C8h] [xbp-88h]
  _OWORD v98[2]; // [xsp+3D8h] [xbp-78h] BYREF

  *(_QWORD *)&v24 = a2;
  *((_QWORD *)&v24 + 1) = a3;
  v4 = (__int64 **)(a1 + 48);
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::const_iterator(
    &v83,
    a1 + 48,
    &v24);
  v46 = v4;
  v47 = 0u;
  v48 = 0u;
  v49 = 0u;
  v50 = 0u;
  v51 = 0u;
  memset(v52, 0, 29);
  if ( (unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                          &v83,
                          &v46) )
  {
    v5 = (&v83)[v92][2 * *((unsigned __int8 *)&v90 + v92 - 1)];
    v6 = (__int64)&(&v83)[v92][2 * *((unsigned __int8 *)&v90 + v92 - 1)];
    v8 = *(_QWORD *)(v6 + 8);
    v7 = (_QWORD *)(v6 + 8);
    if ( (__int64 *)((char *)v5 + v8) == (__int64 *)v24 || *((_QWORD *)&v24 + 1) + (_QWORD)v24 == (_QWORD)v5 )
    {
      *((_QWORD *)&v24 + 1) += *v7;
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::erase(a1 + 88);
      v76 = v86;
      v77 = v87;
      v78 = v88;
      v79 = v89;
      v74 = v84;
      v75 = v85;
      v81 = v91;
      v73 = v83;
      v80 = v90;
      v82 = v92;
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::erase(
        (__int64)v4,
        (__int64)&v73,
        (__int64)&v46);
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator=(
        &v83,
        &v46);
    }
  }
  v46 = v4;
  v47 = 0u;
  v48 = 0u;
  v49 = 0u;
  v50 = 0u;
  v51 = 0u;
  memset(v52, 0, 29);
  v10 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v46);
  v11 = *v10;
  v12 = *(_OWORD *)(v10 + 11);
  v13 = *(_OWORD *)(v10 + 9);
  v14 = *(_OWORD *)(v10 + 7);
  v39 = *(_OWORD *)(v10 + 5);
  v40 = v14;
  v41 = v13;
  v42 = v12;
  v15 = *(_OWORD *)(v10 + 3);
  v37 = *(_OWORD *)(v10 + 1);
  v38 = v15;
  v16 = *((_DWORD *)v10 + 28);
  v17 = v10[13];
  v36 = v11;
  v43 = v17;
  v44 = v16;
  v45 = *((_BYTE *)v10 + 116);
  if ( (unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                          &v83,
                          &v36) )
  {
    v66 = v86;
    v67 = v87;
    v68 = v88;
    v69 = v89;
    v64 = v84;
    v65 = v85;
    v63 = v83;
    v70 = v90;
    v71 = v91;
    v72 = v92;
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator--(&v63);
    v52[0] = v69;
    v51 = v68;
    v50 = v67;
    v49 = v66;
    v47 = v64;
    v48 = v65;
    DWORD2(v52[1]) = v71;
    v18 = v63;
    v46 = v63;
    *(_QWORD *)&v52[1] = v70;
    v19 = v72;
    BYTE12(v52[1]) = v72;
    v20 = (_QWORD *)(*((_QWORD *)&v47 + v72 - 1) + 16LL * *((unsigned __int8 *)v52 + v72 + 15));
    v21 = v20[1];
    if ( *((_QWORD *)&v24 + 1) + (_QWORD)v24 == *v20 || v21 + *v20 == (_QWORD)v24 )
    {
      *(_QWORD *)&v24 = *v20;
      *((_QWORD *)&v24 + 1) += v21;
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::erase(a1 + 88);
      v56 = v49;
      v57 = v50;
      v58 = v51;
      v59 = v52[0];
      v54 = v47;
      v55 = v48;
      v61 = DWORD2(v52[1]);
      v53 = v18;
      v60 = *(_QWORD *)&v52[1];
      v62 = v19;
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::erase(
        (__int64)v4,
        (__int64)&v53,
        (__int64)&v36);
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator=(
        &v83,
        &v36);
    }
  }
  *(_OWORD *)v93 = v24;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::const_iterator(
    &v36,
    a1 + 88,
    v93);
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::insert_internal(
    &v46,
    a1 + 88,
    &v36,
    v93);
  v95 = v86;
  v96 = v87;
  v97 = v88;
  v98[0] = v89;
  *(_OWORD *)&v93[8] = v84;
  v94 = v85;
  *(_QWORD *)v93 = v83;
  *(_QWORD *)&v98[1] = v90;
  DWORD2(v98[1]) = v91;
  BYTE12(v98[1]) = v92;
  v25 = v24;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert(
    &v36,
    v4,
    v93,
    &v25);
  if ( *((_QWORD *)&v24 + 1) >= 0x40000u )
  {
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::find(
      &v36,
      a1 + 8,
      &v24);
    *(_QWORD *)v93 = a1 + 8;
    *(_OWORD *)&v93[8] = 0u;
    v94 = 0u;
    v95 = 0u;
    v96 = 0u;
    v97 = 0u;
    memset(v98, 0, 29);
    if ( (unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                            &v36,
                            v93) )
    {
      v22 = (vm_address_t *)(*((_QWORD *)&v37 + v45 - 1) + 16LL * *((unsigned __int8 *)&v43 + v45 - 1));
      vm_deallocate(mach_task_self_, *v22, vm_page_size + v22[1]);
      lsl::PersistentAllocator::reserveRange((__int64)a1, (__int64 *)&v46, v24, *((__int64 *)&v24 + 1));
      v29 = v39;
      v30 = v40;
      v31 = v41;
      v32 = v42;
      v27 = v37;
      v28 = v38;
      v26 = v36;
      v33 = v43;
      v34 = v44;
      v35 = v45;
      lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::erase(
        (__int64)(a1 + 8),
        (__int64)&v26,
        (__int64)v93);
    }
  }
  return lsl::PersistentAllocator::reloadMagazine(a1);
}
