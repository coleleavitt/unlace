__int64 __usercall lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        unsigned __int64 *a3@<X2>,
        __int64 a4@<X8>)
{
  unsigned __int64 *v8; // x8
  unsigned __int64 v9; // x11
  _BOOL4 v10; // w8
  __int64 ***v11; // x0
  __int64 **v12; // x8
  __int128 v13; // q0
  __int128 v14; // q1
  __int128 v15; // q2
  __int128 v16; // q0
  int v17; // w9
  __int64 **v18; // x10
  __int128 v19; // q0
  __int128 v20; // q0
  __int128 v21; // q0
  unsigned __int64 *v22; // x8
  unsigned __int64 v23; // x9
  bool v24; // w8
  bool v25; // zf
  bool v26; // w9
  __int64 ***v27; // x1
  __int64 v28; // x8
  __int64 v29; // x0
  __int64 **v30; // x8
  __int128 v31; // q1
  __int128 v32; // q1
  __int128 v33; // q1
  __int64 v34; // x9
  unsigned __int64 *v35; // x8
  unsigned __int64 v36; // x9
  _BOOL4 v37; // w8
  _BOOL4 v38; // w9
  __int64 **v40; // [xsp+8h] [xbp-228h] BYREF
  __int128 v41; // [xsp+10h] [xbp-220h]
  __int128 v42; // [xsp+20h] [xbp-210h]
  __int128 v43; // [xsp+30h] [xbp-200h]
  __int128 v44; // [xsp+40h] [xbp-1F0h]
  __int128 v45; // [xsp+50h] [xbp-1E0h]
  __int128 v46; // [xsp+60h] [xbp-1D0h]
  __int64 v47; // [xsp+70h] [xbp-1C0h]
  int v48; // [xsp+78h] [xbp-1B8h]
  unsigned __int8 v49; // [xsp+7Ch] [xbp-1B4h]
  __int64 **v50; // [xsp+80h] [xbp-1B0h] BYREF
  __int128 v51; // [xsp+88h] [xbp-1A8h]
  __int128 v52; // [xsp+98h] [xbp-198h]
  __int128 v53; // [xsp+A8h] [xbp-188h]
  __int128 v54; // [xsp+B8h] [xbp-178h]
  __int128 v55; // [xsp+C8h] [xbp-168h]
  __int128 v56; // [xsp+D8h] [xbp-158h]
  __int64 **v57; // [xsp+E8h] [xbp-148h]
  int v58; // [xsp+F0h] [xbp-140h]
  char v59; // [xsp+F4h] [xbp-13Ch]
  __int64 **v60; // [xsp+F8h] [xbp-138h] BYREF
  __int128 v61; // [xsp+100h] [xbp-130h]
  __int128 v62; // [xsp+110h] [xbp-120h]
  __int128 v63; // [xsp+120h] [xbp-110h]
  __int128 v64; // [xsp+130h] [xbp-100h]
  __int128 v65; // [xsp+140h] [xbp-F0h]
  __int128 v66; // [xsp+150h] [xbp-E0h]
  __int64 v67; // [xsp+160h] [xbp-D0h]
  int v68; // [xsp+168h] [xbp-C8h]
  unsigned __int8 v69; // [xsp+16Ch] [xbp-C4h]
  __int64 **v70; // [xsp+170h] [xbp-C0h] BYREF
  __int128 v71; // [xsp+178h] [xbp-B8h]
  __int128 v72; // [xsp+188h] [xbp-A8h]
  __int128 v73; // [xsp+198h] [xbp-98h]
  __int128 v74; // [xsp+1A8h] [xbp-88h]
  __int128 v75; // [xsp+1B8h] [xbp-78h]
  _OWORD v76[2]; // [xsp+1C8h] [xbp-68h] BYREF

  if ( !*(_QWORD *)(a1 + 24) )
  {
    v70 = (__int64 **)a1;
    v71 = 0u;
    v72 = 0u;
    v73 = 0u;
    v74 = 0u;
    v75 = 0u;
    memset(v76, 0, 29);
    goto LABEL_12;
  }
  v70 = (__int64 **)a1;
  v71 = 0u;
  v72 = 0u;
  v73 = 0u;
  v74 = 0u;
  v75 = 0u;
  memset(v76, 0, 29);
  if ( !(unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                           a2,
                           (__int64)&v70) )
  {
    v30 = *(__int64 ***)a2;
    v31 = *(_OWORD *)(a2 + 56);
    v63 = *(_OWORD *)(a2 + 40);
    v64 = v31;
    v32 = *(_OWORD *)(a2 + 88);
    v65 = *(_OWORD *)(a2 + 72);
    v66 = v32;
    v33 = *(_OWORD *)(a2 + 24);
    v61 = *(_OWORD *)(a2 + 8);
    v62 = v33;
    v34 = *(_QWORD *)(a2 + 104);
    v60 = v30;
    v67 = v34;
    v68 = *(_DWORD *)(a2 + 112);
    v69 = *(_BYTE *)(a2 + 116);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator--(&v60);
    v76[0] = v66;
    v75 = v65;
    v74 = v64;
    v73 = v63;
    v71 = v61;
    v72 = v62;
    DWORD2(v76[1]) = v68;
    v70 = v60;
    *(_QWORD *)&v76[1] = v67;
    BYTE12(v76[1]) = v69;
    v35 = (unsigned __int64 *)(*((_QWORD *)&v71 + v69 - 1) + 16LL * *((unsigned __int8 *)v76 + v69 + 15));
    v36 = *v35;
    v37 = v35[1] < a3[1];
    v25 = v36 == *a3;
    v38 = v36 < *a3;
    if ( !v25 )
      v37 = v38;
    if ( !v37 )
      goto LABEL_10;
LABEL_16:
    v28 = a4;
    v29 = a1;
    v27 = (__int64 ***)a2;
    return lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert_internal(
             v29,
             (__int64)v27,
             a3,
             v28);
  }
  v8 = (unsigned __int64 *)(*(_QWORD *)(a2 + 8 * (*(unsigned __int8 *)(a2 + 116) - 1LL) + 8)
                          + 16LL * *(unsigned __int8 *)(a2 + *(unsigned __int8 *)(a2 + 116) - 1LL + 104));
  v9 = *v8;
  v10 = a3[1] < v8[1];
  if ( *a3 != v9 )
    v10 = *a3 < v9;
  if ( v10 )
  {
    v70 = (__int64 **)a1;
    v71 = 0u;
    v72 = 0u;
    v73 = 0u;
    v74 = 0u;
    v75 = 0u;
    memset(v76, 0, 29);
    v11 = lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator++(&v70);
    v12 = *v11;
    v13 = *(_OWORD *)(v11 + 11);
    v14 = *(_OWORD *)(v11 + 9);
    v15 = *(_OWORD *)(v11 + 7);
    v53 = *(_OWORD *)(v11 + 5);
    v54 = v15;
    v55 = v14;
    v56 = v13;
    v16 = *(_OWORD *)(v11 + 3);
    v51 = *(_OWORD *)(v11 + 1);
    v52 = v16;
    v17 = *((_DWORD *)v11 + 28);
    v18 = v11[13];
    v50 = v12;
    v57 = v18;
    v58 = v17;
    v59 = *((_BYTE *)v11 + 116);
    if ( !(unsigned __int8)lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator<=>(
                             a2,
                             (__int64)&v50) )
      goto LABEL_16;
    v40 = *(__int64 ***)a2;
    v19 = *(_OWORD *)(a2 + 56);
    v43 = *(_OWORD *)(a2 + 40);
    v44 = v19;
    v20 = *(_OWORD *)(a2 + 88);
    v45 = *(_OWORD *)(a2 + 72);
    v46 = v20;
    v21 = *(_OWORD *)(a2 + 24);
    v41 = *(_OWORD *)(a2 + 8);
    v42 = v21;
    v47 = *(_QWORD *)(a2 + 104);
    v48 = *(_DWORD *)(a2 + 112);
    v49 = *(_BYTE *)(a2 + 116);
    lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::operator--(&v40);
    v76[0] = v46;
    v75 = v45;
    v74 = v44;
    v73 = v43;
    v71 = v41;
    v72 = v42;
    DWORD2(v76[1]) = v48;
    v70 = v40;
    *(_QWORD *)&v76[1] = v47;
    BYTE12(v76[1]) = v49;
    v22 = (unsigned __int64 *)(*((_QWORD *)&v71 + v49 - 1) + 16LL * *((unsigned __int8 *)v76 + v49 + 15));
    v23 = *v22;
    v24 = v22[1] < a3[1];
    v25 = v23 == *a3;
    v26 = v23 < *a3;
    if ( !v25 )
      v24 = v26;
    if ( v24 )
      goto LABEL_16;
  }
LABEL_10:
  lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::const_iterator::const_iterator(
    &v70,
    a1,
    a3);
LABEL_12:
  v27 = &v70;
  v28 = a4;
  v29 = a1;
  return lsl::BTree<lsl::MemoryManager::Buffer,lsl::PersistentAllocator::RegionAddressCompare,false>::insert_internal(
           v29,
           (__int64)v27,
           a3,
           v28);
}
