__int64 __fastcall lsl::PersistentAllocator::debugDump(lsl::PersistentAllocator *this)
{
  __int64 ***v2; // x0
  __int128 v3; // q0
  __int128 v4; // q1
  __int128 v5; // q2
  __int128 v6; // q0
  int v7; // w8
  __int64 v8; // x0
  __int128 v9; // q0
  __int128 v10; // q1
  __int128 v11; // q2
  __int128 v12; // q0
  int v13; // w8
  __int64 **v14; // x19
  __int64 ***v15; // x0
  __int128 v16; // q0
  __int128 v17; // q1
  __int128 v18; // q2
  __int128 v19; // q0
  int v20; // w8
  __int64 result; // x0
  __int64 **v22; // x8
  __int64 **v23; // [xsp+18h] [xbp-128h] BYREF
  __int128 v24; // [xsp+20h] [xbp-120h]
  __int128 v25; // [xsp+30h] [xbp-110h]
  __int128 v26; // [xsp+40h] [xbp-100h]
  __int128 v27; // [xsp+50h] [xbp-F0h]
  __int128 v28; // [xsp+60h] [xbp-E0h]
  __int128 v29; // [xsp+70h] [xbp-D0h]
  __int64 **v30; // [xsp+80h] [xbp-C0h]
  int v31; // [xsp+88h] [xbp-B8h]
  unsigned __int8 v32; // [xsp+8Ch] [xbp-B4h]
  __int64 **v33; // [xsp+90h] [xbp-B0h] BYREF
  __int128 v34; // [xsp+98h] [xbp-A8h]
  __int128 v35; // [xsp+A8h] [xbp-98h]
  __int128 v36; // [xsp+B8h] [xbp-88h]
  __int128 v37; // [xsp+C8h] [xbp-78h]
  __int128 v38; // [xsp+D8h] [xbp-68h]
  _BYTE v39[29]; // [xsp+E8h] [xbp-58h] BYREF

  fwrite("_regionList\n", 0xCu, 1u, __stderrp);
  v33 = (__int64 **)((char *)this + 8);
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  v37 = 0u;
  v38 = 0u;
  memset(v39, 0, sizeof(v39));
  v2 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v33);
  v23 = *v2;
  v3 = *(_OWORD *)(v2 + 11);
  v4 = *(_OWORD *)(v2 + 9);
  v5 = *(_OWORD *)(v2 + 7);
  v26 = *(_OWORD *)(v2 + 5);
  v27 = v5;
  v28 = v4;
  v29 = v3;
  v6 = *(_OWORD *)(v2 + 3);
  v24 = *(_OWORD *)(v2 + 1);
  v25 = v6;
  v7 = *((_DWORD *)v2 + 28);
  v30 = v2[13];
  v31 = v7;
  v32 = *((_BYTE *)v2 + 116);
  v33 = (__int64 **)((char *)this + 8);
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  v37 = 0u;
  v38 = 0u;
  memset(v39, 0, sizeof(v39));
  while ( (unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                             &v23,
                             &v33) )
  {
    fprintf(
      __stderrp,
      "\t%lu @ 0x%lx\n",
      (&v23)[v32][2 * *((unsigned __int8 *)&v30 + v32 - 1) + 1],
      (&v23)[v32][2 * *((unsigned __int8 *)&v30 + v32 - 1)]);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v23);
  }
  fwrite("_freeSizeHash\n", 0xEu, 1u, __stderrp);
  v33 = (__int64 **)((char *)this + 88);
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  v37 = 0u;
  v38 = 0u;
  memset(v39, 0, sizeof(v39));
  v8 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator++(&v33);
  v23 = *(__int64 ***)v8;
  v9 = *(_OWORD *)(v8 + 88);
  v10 = *(_OWORD *)(v8 + 72);
  v11 = *(_OWORD *)(v8 + 56);
  v26 = *(_OWORD *)(v8 + 40);
  v27 = v11;
  v28 = v10;
  v29 = v9;
  v12 = *(_OWORD *)(v8 + 24);
  v24 = *(_OWORD *)(v8 + 8);
  v25 = v12;
  v13 = *(_DWORD *)(v8 + 112);
  v30 = *(__int64 ***)(v8 + 104);
  v31 = v13;
  v32 = *(_BYTE *)(v8 + 116);
  v33 = (__int64 **)((char *)this + 88);
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  v37 = 0u;
  v38 = 0u;
  memset(v39, 0, sizeof(v39));
  while ( (unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator<=>(
                             &v23,
                             &v33) )
  {
    fprintf(
      __stderrp,
      "\t%lu @ 0x%lx\n",
      (&v23)[v32][2 * *((unsigned __int8 *)&v30 + v32 - 1) + 1],
      (&v23)[v32][2 * *((unsigned __int8 *)&v30 + v32 - 1)]);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator++(&v23);
  }
  fwrite("_freeAddressHash\n", 0x11u, 1u, __stderrp);
  v14 = (__int64 **)((char *)this + 48);
  v33 = v14;
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  v37 = 0u;
  v38 = 0u;
  memset(v39, 0, sizeof(v39));
  v15 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v33);
  v23 = *v15;
  v16 = *(_OWORD *)(v15 + 11);
  v17 = *(_OWORD *)(v15 + 9);
  v18 = *(_OWORD *)(v15 + 7);
  v26 = *(_OWORD *)(v15 + 5);
  v27 = v18;
  v28 = v17;
  v29 = v16;
  v19 = *(_OWORD *)(v15 + 3);
  v24 = *(_OWORD *)(v15 + 1);
  v25 = v19;
  v20 = *((_DWORD *)v15 + 28);
  v30 = v15[13];
  v31 = v20;
  v32 = *((_BYTE *)v15 + 116);
  v33 = v14;
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  v37 = 0u;
  v38 = 0u;
  memset(v39, 0, sizeof(v39));
  for ( result = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                   &v23,
                   &v33);
        (_BYTE)result;
        result = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                   &v23,
                   &v33) )
  {
    v22 = &(&v23)[v32][2 * *((unsigned __int8 *)&v30 + v32 - 1)];
    fprintf(__stderrp, "\t0x%lx: %lu\n", *v22, v22[1]);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v23);
  }
  return result;
}
