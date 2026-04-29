__int64 __fastcall dyld4::FileManager::fsidForUUID(dyld4::FileManager *this, const UUID *a2)
{
  __int64 v4; // x24
  __int64 v5; // x0
  __int64 v6; // x8
  __int128 v7; // q0
  __int128 v8; // q1
  __int64 v9; // x9
  __int64 v10; // x10
  __int128 v11; // q0
  __int128 v12; // q1
  __int128 v13; // q2
  __int64 v14; // x10
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x9
  int v18; // w12
  int v19; // w13
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x8
  __int128 v24; // q0
  __int128 v25; // q1
  __int64 v26; // x9
  __int64 v27; // x10
  __int128 v28; // q0
  __int128 v29; // q1
  __int128 v30; // q2
  __int64 v31; // x9
  __int64 v32; // x10
  __int64 v33; // x10
  int v34; // w12
  int v35; // w13
  __int64 v38; // x9
  __int64 v39; // [xsp+0h] [xbp-1F0h] BYREF
  __int128 v40; // [xsp+8h] [xbp-1E8h]
  __int128 v41; // [xsp+18h] [xbp-1D8h]
  __int128 v42; // [xsp+28h] [xbp-1C8h]
  __int128 v43; // [xsp+38h] [xbp-1B8h]
  __int128 v44; // [xsp+48h] [xbp-1A8h]
  __int128 v45; // [xsp+58h] [xbp-198h]
  __int128 v46; // [xsp+68h] [xbp-188h]
  __int64 v47; // [xsp+78h] [xbp-178h]
  _BYTE v48[15]; // [xsp+80h] [xbp-170h]
  unsigned __int8 v49; // [xsp+8Fh] [xbp-161h]
  __int64 v50; // [xsp+90h] [xbp-160h] BYREF
  __int128 v51; // [xsp+98h] [xbp-158h]
  __int128 v52; // [xsp+A8h] [xbp-148h]
  __int128 v53; // [xsp+B8h] [xbp-138h]
  __int128 v54; // [xsp+C8h] [xbp-128h]
  __int128 v55; // [xsp+D8h] [xbp-118h]
  __int128 v56; // [xsp+E8h] [xbp-108h]
  __int128 v57; // [xsp+F8h] [xbp-F8h]
  _QWORD v58[3]; // [xsp+108h] [xbp-E8h] BYREF
  __int128 v59; // [xsp+120h] [xbp-D0h]
  __int128 v60; // [xsp+130h] [xbp-C0h]
  __int128 v61; // [xsp+140h] [xbp-B0h]
  __int128 v62; // [xsp+150h] [xbp-A0h]
  __int128 v63; // [xsp+160h] [xbp-90h]
  __int128 v64; // [xsp+170h] [xbp-80h]
  __int128 v65; // [xsp+180h] [xbp-70h]
  _QWORD v66[3]; // [xsp+190h] [xbp-60h] BYREF

  v4 = *((_QWORD *)this + 2);
  v51 = 0u;
  v52 = 0u;
  v53 = 0u;
  v54 = 0u;
  v55 = 0u;
  v56 = 0u;
  v57 = 0u;
  memset(v58, 0, sizeof(v58));
  v50 = v4;
  v5 = lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator++(&v50);
  v6 = *(_QWORD *)v5;
  v7 = *(_OWORD *)(v5 + 104);
  v8 = *(_OWORD *)(v5 + 88);
  v9 = *(_QWORD *)(v5 + 120);
  v10 = *(_QWORD *)(v5 + 128);
  v44 = *(_OWORD *)(v5 + 72);
  v45 = v8;
  v46 = v7;
  v47 = v9;
  v11 = *(_OWORD *)(v5 + 56);
  v12 = *(_OWORD *)(v5 + 40);
  v13 = *(_OWORD *)(v5 + 24);
  v40 = *(_OWORD *)(v5 + 8);
  v41 = v13;
  v42 = v12;
  v43 = v11;
  *(_QWORD *)&v48[7] = *(_QWORD *)(v5 + 135);
  *(_QWORD *)v48 = v10;
  LOBYTE(v9) = *(_BYTE *)(v5 + 143);
  v39 = v6;
  v49 = v9;
  v65 = 0u;
  memset(v66, 0, 23);
  v63 = 0u;
  v64 = 0u;
  v61 = 0u;
  v62 = 0u;
  v59 = 0u;
  v60 = 0u;
  v51 = 0u;
  v52 = 0u;
  v53 = 0u;
  v54 = 0u;
  v55 = 0u;
  v56 = 0u;
  v57 = 0u;
  v50 = v4;
  memset(v58, 0, sizeof(v58));
  if ( (unsigned __int8)lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
                          &v39,
                          &v50) )
  {
    while ( 1 )
    {
      v14 = 0;
      v15 = v49 - 1LL;
      v16 = *(&v39 + v15 + 1);
      v17 = (unsigned __int8)v48[v15];
      do
      {
        v18 = *(unsigned __int8 *)(v16 + 24 * v17 + 8 + v14);
        v19 = (*a2)[v14];
      }
      while ( v18 == v19 && v14++ != 15 );
      if ( v18 == v19 )
        break;
      lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator++(&v39);
      if ( !(unsigned __int8)lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
                               &v39,
                               &v50) )
        goto LABEL_10;
    }
    v38 = 24 * v17;
  }
  else
  {
LABEL_10:
    dyld4::FileManager::reloadFSInfos((dyld4::SyscallDelegate **)this);
    v21 = *((_QWORD *)this + 2);
    v51 = 0u;
    v52 = 0u;
    v53 = 0u;
    v54 = 0u;
    v55 = 0u;
    v56 = 0u;
    v57 = 0u;
    memset(v58, 0, sizeof(v58));
    v50 = v21;
    v22 = lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator++(&v50);
    v23 = *(_QWORD *)v22;
    v24 = *(_OWORD *)(v22 + 104);
    v25 = *(_OWORD *)(v22 + 88);
    v26 = *(_QWORD *)(v22 + 120);
    v27 = *(_QWORD *)(v22 + 128);
    v44 = *(_OWORD *)(v22 + 72);
    v45 = v25;
    v46 = v24;
    v47 = v26;
    v28 = *(_OWORD *)(v22 + 56);
    v29 = *(_OWORD *)(v22 + 40);
    v30 = *(_OWORD *)(v22 + 24);
    v40 = *(_OWORD *)(v22 + 8);
    v41 = v30;
    v42 = v29;
    v43 = v28;
    *(_QWORD *)&v48[7] = *(_QWORD *)(v22 + 135);
    *(_QWORD *)v48 = v27;
    LOBYTE(v26) = *(_BYTE *)(v22 + 143);
    v39 = v23;
    v49 = v26;
    v65 = 0u;
    memset(v66, 0, 23);
    v63 = 0u;
    v64 = 0u;
    v61 = 0u;
    v62 = 0u;
    v59 = 0u;
    v60 = 0u;
    v51 = 0u;
    v52 = 0u;
    v53 = 0u;
    v54 = 0u;
    v55 = 0u;
    v56 = 0u;
    v57 = 0u;
    v50 = v21;
    memset(v58, 0, sizeof(v58));
    if ( !(unsigned __int8)lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
                             &v39,
                             &v50) )
      return 0;
    while ( 1 )
    {
      v31 = 0;
      v32 = v49 - 1LL;
      v16 = *(&v39 + v32 + 1);
      v33 = (unsigned __int8)v48[v32];
      do
      {
        v34 = *(unsigned __int8 *)(v16 + 24 * v33 + 8 + v31);
        v35 = (*a2)[v31];
      }
      while ( v34 == v35 && v31++ != 15 );
      if ( v34 == v35 )
        break;
      lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator++(&v39);
      if ( !(unsigned __int8)lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
                               &v39,
                               &v50) )
        return 0;
    }
    v38 = 24 * v33;
  }
  return *(_QWORD *)(v16 + v38);
}
