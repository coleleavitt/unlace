_QWORD *__fastcall lsl::PersistentAllocator::reserveRange(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // x19
  __int64 *v9; // x26
  __int64 *v10; // x27
  __int64 v11; // x8
  unsigned __int64 *v12; // x9
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x10
  unsigned __int64 v15; // x11
  unsigned __int64 v16; // x26
  unsigned __int64 v17; // x11
  __int64 v18; // x13
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x27
  unsigned __int64 v21; // x28
  __int128 v22; // q1
  __int64 v23; // x20
  __int128 v24; // q1
  __int128 v25; // q1
  __int64 v26; // x9
  _QWORD *result; // x0
  _QWORD *v28; // x0
  unsigned __int64 v29; // [xsp+8h] [xbp-2D8h]
  unsigned __int64 v30; // [xsp+10h] [xbp-2D0h] BYREF
  unsigned __int64 v31; // [xsp+18h] [xbp-2C8h]
  _QWORD v32[15]; // [xsp+20h] [xbp-2C0h] BYREF
  char v33; // [xsp+98h] [xbp-248h]
  __int64 v34; // [xsp+A0h] [xbp-240h] BYREF
  __int128 v35; // [xsp+A8h] [xbp-238h]
  __int128 v36; // [xsp+B8h] [xbp-228h]
  __int128 v37; // [xsp+C8h] [xbp-218h]
  __int128 v38; // [xsp+D8h] [xbp-208h]
  __int128 v39; // [xsp+E8h] [xbp-1F8h]
  __int128 v40; // [xsp+F8h] [xbp-1E8h]
  __int64 v41; // [xsp+108h] [xbp-1D8h]
  int v42; // [xsp+110h] [xbp-1D0h]
  char v43; // [xsp+114h] [xbp-1CCh]
  __int64 v44; // [xsp+118h] [xbp-1C8h] BYREF
  __int128 v45; // [xsp+120h] [xbp-1C0h]
  __int128 v46; // [xsp+130h] [xbp-1B0h]
  __int128 v47; // [xsp+140h] [xbp-1A0h]
  __int128 v48; // [xsp+150h] [xbp-190h]
  __int128 v49; // [xsp+160h] [xbp-180h]
  __int128 v50; // [xsp+170h] [xbp-170h]
  __int64 v51; // [xsp+180h] [xbp-160h]
  int v52; // [xsp+188h] [xbp-158h]
  char v53; // [xsp+18Ch] [xbp-154h]
  __int64 v54; // [xsp+190h] [xbp-150h] BYREF
  __int128 v55; // [xsp+198h] [xbp-148h]
  __int128 v56; // [xsp+1A8h] [xbp-138h]
  __int128 v57; // [xsp+1B8h] [xbp-128h]
  __int128 v58; // [xsp+1C8h] [xbp-118h]
  __int128 v59; // [xsp+1D8h] [xbp-108h]
  __int128 v60; // [xsp+1E8h] [xbp-F8h]
  __int64 v61; // [xsp+1F8h] [xbp-E8h]
  int v62; // [xsp+200h] [xbp-E0h]
  char v63; // [xsp+204h] [xbp-DCh]
  __int64 v64; // [xsp+208h] [xbp-D8h] BYREF
  __int128 v65; // [xsp+210h] [xbp-D0h]
  __int128 v66; // [xsp+220h] [xbp-C0h]
  __int128 v67; // [xsp+230h] [xbp-B0h]
  __int128 v68; // [xsp+240h] [xbp-A0h]
  __int128 v69; // [xsp+250h] [xbp-90h]
  __int128 v70; // [xsp+260h] [xbp-80h]
  __int64 v71; // [xsp+270h] [xbp-70h]
  int v72; // [xsp+278h] [xbp-68h]
  char v73; // [xsp+27Ch] [xbp-64h]

  v8 = a1 + 48;
  v9 = a2 + 1;
  v10 = a2 + 13;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::find(
    &v54,
    a1 + 48,
    a2[*((unsigned __int8 *)a2 + 116)] + 16LL * *((unsigned __int8 *)a2 + *((unsigned __int8 *)a2 + 116) + 103));
  v11 = *((unsigned __int8 *)a2 + 116);
  v12 = (unsigned __int64 *)(v9[v11 - 1] + 16LL * *((unsigned __int8 *)v10 + v11 - 1));
  v14 = *v12;
  v13 = v12[1];
  v15 = a3 - v14;
  if ( a3 <= v14 )
    v15 = 0;
  v29 = v15;
  if ( a3 <= v14 )
    v16 = 0;
  else
    v16 = v14;
  v17 = v13 + v14;
  v18 = *a2;
  v19 = v14 - (a4 + a3) + v13;
  if ( v17 <= a4 + a3 )
    v20 = 0;
  else
    v20 = v19;
  if ( v17 <= a4 + a3 )
    v21 = 0;
  else
    v21 = a4 + a3;
  v22 = *(_OWORD *)(a2 + 7);
  v23 = a1 + 88;
  v47 = *(_OWORD *)(a2 + 5);
  v48 = v22;
  v24 = *(_OWORD *)(a2 + 11);
  v49 = *(_OWORD *)(a2 + 9);
  v50 = v24;
  v25 = *(_OWORD *)(a2 + 3);
  v45 = *(_OWORD *)(a2 + 1);
  v46 = v25;
  v26 = a2[13];
  v52 = *((_DWORD *)a2 + 28);
  v44 = v18;
  v51 = v26;
  v53 = v11;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::erase(v32, a1 + 88, &v44);
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::operator=(
    a2,
    v32);
  v37 = v57;
  v38 = v58;
  v39 = v59;
  v40 = v60;
  v35 = v55;
  v36 = v56;
  v42 = v62;
  v34 = v54;
  v41 = v61;
  v43 = v63;
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::erase(v32, v8, &v34);
  result = (_QWORD *)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator=(
                       &v54,
                       v32);
  if ( v21 || v20 )
  {
    v30 = v21;
    v31 = v20;
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::const_iterator(
      &v64,
      a1 + 88,
      &v30);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::insert_internal(
      v32,
      a1 + 88,
      &v64,
      &v30);
    v67 = v57;
    v68 = v58;
    v69 = v59;
    v70 = v60;
    v65 = v55;
    v66 = v56;
    v64 = v54;
    v71 = v61;
    v72 = v62;
    v73 = v63;
    v30 = v21;
    v31 = v20;
    v28 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert(
            v32,
            v8,
            &v64,
            &v30);
    if ( !v33 )
      lsl::PersistentAllocator::reserveRange(v28);
    result = (_QWORD *)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator=(
                         &v54,
                         v32);
  }
  if ( v16 || v29 )
  {
    v30 = v16;
    v31 = v29;
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::const_iterator::const_iterator(
      &v64,
      v23,
      &v30);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionSizeCompare,false>::insert_internal(
      v32,
      v23,
      &v64,
      &v30);
    v67 = v57;
    v68 = v58;
    v69 = v59;
    v70 = v60;
    v65 = v55;
    v66 = v56;
    v64 = v54;
    v71 = v61;
    v72 = v62;
    v73 = v63;
    v30 = v16;
    v31 = v29;
    return lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert(
             v32,
             v8,
             &v64,
             &v30);
  }
  return result;
}
