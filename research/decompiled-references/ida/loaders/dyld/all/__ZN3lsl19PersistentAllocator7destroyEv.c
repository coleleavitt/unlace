_QWORD *__fastcall lsl::PersistentAllocator::destroy(lsl::PersistentAllocator *this)
{
  __int64 **v2; // x23
  __int64 v3; // x21
  __int64 v4; // x8
  char *v5; // x22
  __int64 ***v6; // x0
  __int64 **v7; // x8
  __int128 v8; // q1
  __int128 v9; // q1
  __int128 v10; // q1
  char v11; // w9
  __int64 v12; // x8
  __int64 **v13; // x21
  __int64 v14; // x22
  __int64 v15; // x9
  vm_address_t *v16; // x20
  vm_address_t *v17; // x21
  vm_address_t v18; // x1
  vm_address_t v19; // x8
  _QWORD *v21; // [xsp+0h] [xbp-270h] BYREF
  vm_address_t *v22; // [xsp+8h] [xbp-268h]
  __int64 v23; // [xsp+10h] [xbp-260h]
  __int64 v24; // [xsp+18h] [xbp-258h]
  _QWORD v25[6]; // [xsp+20h] [xbp-250h] BYREF
  __int128 v26; // [xsp+50h] [xbp-220h]
  __int128 v27; // [xsp+60h] [xbp-210h]
  __int128 v28; // [xsp+70h] [xbp-200h]
  __int128 v29; // [xsp+80h] [xbp-1F0h]
  __int128 v30; // [xsp+90h] [xbp-1E0h]
  _BYTE v31[28]; // [xsp+A0h] [xbp-1D0h] BYREF
  __int64 **v32; // [xsp+C0h] [xbp-1B0h]
  int v33; // [xsp+C8h] [xbp-1A8h]
  __int128 v34; // [xsp+D0h] [xbp-1A0h]
  __int128 v35; // [xsp+E0h] [xbp-190h]
  __int128 v36; // [xsp+F0h] [xbp-180h]
  __int128 v37; // [xsp+100h] [xbp-170h]
  __int128 v38; // [xsp+110h] [xbp-160h]
  __int128 v39; // [xsp+120h] [xbp-150h]
  __int64 **v40; // [xsp+138h] [xbp-138h] BYREF
  __int128 v41; // [xsp+140h] [xbp-130h]
  __int128 v42; // [xsp+150h] [xbp-120h]
  __int128 v43; // [xsp+160h] [xbp-110h]
  __int128 v44; // [xsp+170h] [xbp-100h]
  __int128 v45; // [xsp+180h] [xbp-F0h]
  __int128 v46; // [xsp+190h] [xbp-E0h]
  __int64 v47; // [xsp+1A0h] [xbp-D0h]
  int v48; // [xsp+1A8h] [xbp-C8h]
  char v49; // [xsp+1ACh] [xbp-C4h]
  __int64 **v50; // [xsp+1B0h] [xbp-C0h] BYREF
  __int128 v51; // [xsp+1B8h] [xbp-B8h]
  __int128 v52; // [xsp+1C8h] [xbp-A8h]
  __int128 v53; // [xsp+1D8h] [xbp-98h]
  __int128 v54; // [xsp+1E8h] [xbp-88h]
  __int128 v55; // [xsp+1F8h] [xbp-78h]
  _OWORD v56[2]; // [xsp+208h] [xbp-68h] BYREF

  v2 = (__int64 **)((char *)this + 8);
  v3 = 16LL * *((_QWORD *)this + 4) + 136;
  __chkstk_darwin();
  v5 = (char *)&v21 - ((v4 + 151) & 0xFFFFFFFFFFFFFFF0LL);
  __bzero(v5, v3);
  lsl::EphemeralAllocator::EphemeralAllocator((lsl::EphemeralAllocator *)v25, v5, v3);
  v21 = v25;
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  lsl::Vector<lsl::MemoryManager::Buffer>::reserveExact(&v21, *((_QWORD *)this + 4));
  v50 = v2;
  v51 = 0u;
  v52 = 0u;
  v53 = 0u;
  v54 = 0u;
  v55 = 0u;
  memset(v56, 0, 29);
  v6 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v50);
  v7 = *v6;
  v8 = *(_OWORD *)(v6 + 7);
  v36 = *(_OWORD *)(v6 + 5);
  v37 = v8;
  v9 = *(_OWORD *)(v6 + 11);
  v38 = *(_OWORD *)(v6 + 9);
  v39 = v9;
  v10 = *(_OWORD *)(v6 + 3);
  v34 = *(_OWORD *)(v6 + 1);
  v35 = v10;
  v32 = v6[13];
  v33 = *((_DWORD *)v6 + 28);
  v11 = *((_BYTE *)v6 + 116);
  v26 = 0u;
  v27 = 0u;
  v28 = 0u;
  v29 = 0u;
  v30 = 0u;
  memset(v31, 0, sizeof(v31));
  v53 = v36;
  v54 = v37;
  v55 = v38;
  v56[0] = v39;
  v51 = v34;
  v52 = v10;
  DWORD2(v56[1]) = v33;
  v46 = 0u;
  v45 = 0u;
  v44 = 0u;
  v43 = 0u;
  v42 = 0u;
  v41 = 0u;
  v48 = 0;
  *(_QWORD *)&v56[1] = v32;
  v50 = v7;
  BYTE12(v56[1]) = v11;
  v47 = 0;
  v40 = v2;
  v49 = 0;
  while ( (unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                             &v50,
                             &v40) )
  {
    v12 = BYTE12(v56[1]) - 1LL;
    v13 = (&v50)[v12 + 1];
    v14 = *((unsigned __int8 *)&v56[1] + v12);
    lsl::Vector<lsl::MemoryManager::Buffer>::reserve(&v21, v23 + 1);
    v15 = v23++;
    *(_OWORD *)&v22[2 * v15] = *(_OWORD *)&v13[2 * v14];
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v50);
  }
  v16 = v22;
  if ( v23 )
  {
    v17 = &v22[2 * v23];
    do
    {
      v18 = *v16;
      v19 = v16[1];
      v16 += 2;
      vm_deallocate(mach_task_self_, v18, vm_page_size + v19);
    }
    while ( v16 != v17 );
    v16 = v22;
  }
  if ( v16 )
    lsl::Vector<lsl::MemoryManager::Buffer>::resize(&v21, 0);
  v25[0] = &off_94090;
  return lsl::EphemeralAllocator::reset(v25);
}
