__int64 __fastcall lsl::PersistentAllocator::owned(lsl::PersistentAllocator *this, char *a2, __int64 a3)
{
  __int64 **v5; // x21
  __int64 ***v6; // x0
  __int128 v7; // q0
  __int128 v8; // q1
  __int128 v9; // q2
  __int128 v10; // q0
  int v11; // w8
  char *v12; // x20
  __int64 v13; // x9
  __int64 **v14; // x8
  __int64 v15; // x9
  unsigned __int64 v16; // x10
  __int64 **v18; // [xsp+8h] [xbp-128h] BYREF
  __int128 v19; // [xsp+10h] [xbp-120h]
  __int128 v20; // [xsp+20h] [xbp-110h]
  __int128 v21; // [xsp+30h] [xbp-100h]
  __int128 v22; // [xsp+40h] [xbp-F0h]
  __int128 v23; // [xsp+50h] [xbp-E0h]
  __int128 v24; // [xsp+60h] [xbp-D0h]
  __int64 **v25; // [xsp+70h] [xbp-C0h]
  int v26; // [xsp+78h] [xbp-B8h]
  unsigned __int8 v27; // [xsp+7Ch] [xbp-B4h]
  __int64 **v28; // [xsp+80h] [xbp-B0h] BYREF
  __int128 v29; // [xsp+88h] [xbp-A8h]
  __int128 v30; // [xsp+98h] [xbp-98h]
  __int128 v31; // [xsp+A8h] [xbp-88h]
  __int128 v32; // [xsp+B8h] [xbp-78h]
  __int128 v33; // [xsp+C8h] [xbp-68h]
  _BYTE v34[29]; // [xsp+D8h] [xbp-58h] BYREF

  v5 = (__int64 **)((char *)this + 8);
  v28 = (__int64 **)((char *)this + 8);
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  memset(v34, 0, sizeof(v34));
  v6 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v28);
  v18 = *v6;
  v7 = *(_OWORD *)(v6 + 11);
  v8 = *(_OWORD *)(v6 + 9);
  v9 = *(_OWORD *)(v6 + 7);
  v21 = *(_OWORD *)(v6 + 5);
  v22 = v9;
  v23 = v8;
  v24 = v7;
  v10 = *(_OWORD *)(v6 + 3);
  v19 = *(_OWORD *)(v6 + 1);
  v20 = v10;
  v11 = *((_DWORD *)v6 + 28);
  v25 = v6[13];
  v26 = v11;
  v27 = *((_BYTE *)v6 + 116);
  v28 = v5;
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  memset(v34, 0, sizeof(v34));
  if ( !(unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                           &v18,
                           &v28) )
    return 0;
  v12 = &a2[a3];
  while ( 1 )
  {
    v13 = v27 - 1LL;
    v14 = (&v18)[v13 + 1];
    v15 = *((unsigned __int8 *)&v25 + v13);
    v16 = (unsigned __int64)v14[2 * v15];
    if ( v16 <= (unsigned __int64)a2 && v12 <= (char *)v14[2 * v15 + 1] + v16 )
      break;
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v18);
    if ( !(unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                             &v18,
                             &v28) )
      return 0;
  }
  return 1;
}
