__int64 __fastcall lsl::MemoryManager::writeProtect(__int64 this, int a2)
{
  __int64 v2; // x8
  __int64 **v3; // x20
  __int64 ***v4; // x0
  __int128 v5; // q0
  __int128 v6; // q1
  __int128 v7; // q2
  __int128 v8; // q0
  int v9; // w8
  __int64 **v10; // x8
  __int64 ***v11; // x0
  __int128 v12; // q0
  __int128 v13; // q1
  __int128 v14; // q2
  __int128 v15; // q0
  int v16; // w8
  __int64 **v17; // x8
  __int64 **v18; // [xsp+8h] [xbp-118h] BYREF
  __int128 v19; // [xsp+10h] [xbp-110h]
  __int128 v20; // [xsp+20h] [xbp-100h]
  __int128 v21; // [xsp+30h] [xbp-F0h]
  __int128 v22; // [xsp+40h] [xbp-E0h]
  __int128 v23; // [xsp+50h] [xbp-D0h]
  __int128 v24; // [xsp+60h] [xbp-C0h]
  __int64 **v25; // [xsp+70h] [xbp-B0h]
  int v26; // [xsp+78h] [xbp-A8h]
  unsigned __int8 v27; // [xsp+7Ch] [xbp-A4h]
  __int64 **v28; // [xsp+80h] [xbp-A0h] BYREF
  __int128 v29; // [xsp+88h] [xbp-98h]
  __int128 v30; // [xsp+98h] [xbp-88h]
  __int128 v31; // [xsp+A8h] [xbp-78h]
  __int128 v32; // [xsp+B8h] [xbp-68h]
  __int128 v33; // [xsp+C8h] [xbp-58h]
  _BYTE v34[29]; // [xsp+D8h] [xbp-48h] BYREF

  v2 = *(_QWORD *)(this + 16);
  if ( v2 )
  {
    v3 = (__int64 **)(v2 + 8);
    if ( a2 )
    {
      v28 = (__int64 **)(v2 + 8);
      v29 = 0u;
      v30 = 0u;
      v31 = 0u;
      v32 = 0u;
      v33 = 0u;
      memset(v34, 0, sizeof(v34));
      v4 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v28);
      v18 = *v4;
      v5 = *(_OWORD *)(v4 + 11);
      v6 = *(_OWORD *)(v4 + 9);
      v7 = *(_OWORD *)(v4 + 7);
      v21 = *(_OWORD *)(v4 + 5);
      v22 = v7;
      v23 = v6;
      v24 = v5;
      v8 = *(_OWORD *)(v4 + 3);
      v19 = *(_OWORD *)(v4 + 1);
      v20 = v8;
      v9 = *((_DWORD *)v4 + 28);
      v25 = v4[13];
      v26 = v9;
      v27 = *((_BYTE *)v4 + 116);
      v28 = v3;
      v29 = 0u;
      v30 = 0u;
      v31 = 0u;
      v32 = 0u;
      v33 = 0u;
      memset(v34, 0, sizeof(v34));
      while ( 1 )
      {
        this = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                 &v18,
                 &v28);
        if ( !(_BYTE)this )
          break;
        v10 = &(&v18)[v27][2 * *((unsigned __int8 *)&v25 + v27 - 1)];
        __mprotect(*v10, (size_t)v10[1], 1);
        lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v18);
      }
    }
    else
    {
      v28 = (__int64 **)(v2 + 8);
      v29 = 0u;
      v30 = 0u;
      v31 = 0u;
      v32 = 0u;
      v33 = 0u;
      memset(v34, 0, sizeof(v34));
      v11 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v28);
      v18 = *v11;
      v12 = *(_OWORD *)(v11 + 11);
      v13 = *(_OWORD *)(v11 + 9);
      v14 = *(_OWORD *)(v11 + 7);
      v21 = *(_OWORD *)(v11 + 5);
      v22 = v14;
      v23 = v13;
      v24 = v12;
      v15 = *(_OWORD *)(v11 + 3);
      v19 = *(_OWORD *)(v11 + 1);
      v20 = v15;
      v16 = *((_DWORD *)v11 + 28);
      v25 = v11[13];
      v26 = v16;
      v27 = *((_BYTE *)v11 + 116);
      v28 = v3;
      v29 = 0u;
      v30 = 0u;
      v31 = 0u;
      v32 = 0u;
      v33 = 0u;
      memset(v34, 0, sizeof(v34));
      while ( 1 )
      {
        this = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                 &v18,
                 &v28);
        if ( !(_BYTE)this )
          break;
        v17 = &(&v18)[v27][2 * *((unsigned __int8 *)&v25 + v27 - 1)];
        __mprotect(*v17, (size_t)v17[1], 3);
        lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v18);
      }
    }
  }
  return this;
}
