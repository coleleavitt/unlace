__int64 __fastcall dyld4::FileManager::uuidForFileSystem(dyld4::FileManager *this, unsigned int a2)
{
  __int64 v3; // x0
  __int64 v4; // x22
  __int64 v5; // x8
  char v6; // w0
  __int128 v7; // q0
  __int64 v8; // x0
  __int64 v9; // x10
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 i; // x8
  char v13; // w11
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x10
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 j; // x8
  char v21; // w11
  __int64 v22; // x8
  __int64 v24; // [xsp+8h] [xbp-218h] BYREF
  __int128 v25; // [xsp+10h] [xbp-210h]
  __int128 v26; // [xsp+20h] [xbp-200h]
  __int128 v27; // [xsp+30h] [xbp-1F0h]
  __int128 v28; // [xsp+40h] [xbp-1E0h]
  __int128 v29; // [xsp+50h] [xbp-1D0h]
  __int128 v30; // [xsp+60h] [xbp-1C0h]
  __int128 v31; // [xsp+70h] [xbp-1B0h]
  __int64 v32; // [xsp+80h] [xbp-1A0h]
  _BYTE v33[15]; // [xsp+88h] [xbp-198h] BYREF
  unsigned __int8 v34; // [xsp+97h] [xbp-189h]
  _BYTE v35[143]; // [xsp+A0h] [xbp-180h] BYREF
  unsigned __int8 v36; // [xsp+12Fh] [xbp-F1h]
  __int64 v37; // [xsp+130h] [xbp-F0h] BYREF
  __int128 v38; // [xsp+138h] [xbp-E8h]
  __int128 v39; // [xsp+148h] [xbp-D8h]
  __int128 v40; // [xsp+158h] [xbp-C8h]
  __int128 v41; // [xsp+168h] [xbp-B8h]
  __int128 v42; // [xsp+178h] [xbp-A8h]
  __int128 v43; // [xsp+188h] [xbp-98h]
  __int128 v44; // [xsp+198h] [xbp-88h]
  __int64 v45; // [xsp+1A8h] [xbp-78h]
  _BYTE v46[15]; // [xsp+1B0h] [xbp-70h]
  unsigned __int8 v47; // [xsp+1BFh] [xbp-61h]
  __int64 v48; // [xsp+1C0h] [xbp-60h] BYREF
  __int64 v49; // [xsp+1C8h] [xbp-58h]
  __int64 v50; // [xsp+1D0h] [xbp-50h]

  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)&v35[8] = 0;
  *(_QWORD *)&v35[16] = 0;
  v4 = a2;
  *(_QWORD *)v35 = a2;
  lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::find(
    &v24,
    v3,
    v35);
  v42 = v29;
  v43 = v30;
  v44 = v31;
  v37 = v24;
  v38 = v25;
  v39 = v26;
  v40 = v27;
  v41 = v28;
  *(_QWORD *)&v46[7] = *(_QWORD *)&v33[7];
  v45 = v32;
  *(_QWORD *)v46 = *(_QWORD *)v33;
  v47 = v34;
  v5 = *((_QWORD *)this + 2);
  memset(v35, 0, 135);
  v24 = v5;
  v25 = 0u;
  v26 = 0u;
  v27 = 0u;
  v28 = 0u;
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v32 = 0;
  memset(v33, 0, sizeof(v33));
  v34 = 0;
  v6 = lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
         &v37,
         &v24);
  v7 = 0u;
  if ( !v6 )
  {
    dyld4::FileManager::reloadFSInfos((dyld4::SyscallDelegate **)this);
    v8 = *((_QWORD *)this + 2);
    v49 = 0;
    v50 = 0;
    v48 = v4;
    lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::find(
      &v24,
      v8,
      &v48);
    *(_OWORD *)&v35[72] = v29;
    *(_OWORD *)&v35[88] = v30;
    *(_OWORD *)&v35[104] = v31;
    *(_OWORD *)&v35[8] = v25;
    *(_OWORD *)&v35[24] = v26;
    *(_OWORD *)&v35[40] = v27;
    *(_OWORD *)&v35[56] = v28;
    *(_QWORD *)&v35[135] = *(_QWORD *)&v33[7];
    *(_QWORD *)&v35[120] = v32;
    *(_QWORD *)&v35[128] = *(_QWORD *)v33;
    v36 = v34;
    v9 = v37;
    v37 = v24;
    v10 = 8;
    *(_QWORD *)v35 = v9;
    do
    {
      v11 = *(__int64 *)((char *)&v37 + v10);
      *(__int64 *)((char *)&v37 + v10) = *(_QWORD *)&v35[v10];
      *(_QWORD *)&v35[v10] = v11;
      v10 += 8;
    }
    while ( v10 != 128 );
    for ( i = 0; i != 15; ++i )
    {
      v13 = v46[i];
      v46[i] = v35[i + 128];
      v35[i + 128] = v13;
    }
    v47 = v36;
    v7 = 0u;
  }
  v14 = *((_QWORD *)this + 2);
  *(_QWORD *)&v35[127] = 0;
  *(_OWORD *)&v35[96] = v7;
  *(_OWORD *)&v35[112] = v7;
  *(_OWORD *)&v35[64] = v7;
  *(_OWORD *)&v35[80] = v7;
  *(_OWORD *)&v35[32] = v7;
  *(_OWORD *)&v35[48] = v7;
  *(_OWORD *)v35 = v7;
  *(_OWORD *)&v35[16] = v7;
  v24 = v14;
  v25 = v7;
  v26 = v7;
  v27 = v7;
  v28 = v7;
  v29 = v7;
  v30 = v7;
  v31 = v7;
  *(_QWORD *)&v33[7] = HIBYTE(v7);
  v32 = 0;
  *(_QWORD *)v33 = *((_QWORD *)&v7 + 1);
  v34 = 0;
  if ( !(unsigned __int8)lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
                           &v37,
                           &v24) )
  {
    v15 = *((_QWORD *)this + 2);
    *(_QWORD *)&v35[8] = 0;
    *(_QWORD *)&v35[16] = 0;
    *(_QWORD *)v35 = v4;
    lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::insert(
      v15,
      (__int64 *)v35,
      (__int64)&v24);
    v16 = *((_QWORD *)this + 2);
    v49 = 0;
    v50 = 0;
    v48 = v4;
    lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::find(
      &v24,
      v16,
      &v48);
    *(_OWORD *)&v35[72] = v29;
    *(_OWORD *)&v35[88] = v30;
    *(_OWORD *)&v35[104] = v31;
    *(_OWORD *)&v35[8] = v25;
    *(_OWORD *)&v35[24] = v26;
    *(_OWORD *)&v35[40] = v27;
    *(_OWORD *)&v35[56] = v28;
    *(_QWORD *)&v35[135] = *(_QWORD *)&v33[7];
    *(_QWORD *)&v35[120] = v32;
    *(_QWORD *)&v35[128] = *(_QWORD *)v33;
    v36 = v34;
    v17 = v37;
    v37 = v24;
    v18 = 8;
    *(_QWORD *)v35 = v17;
    do
    {
      v19 = *(__int64 *)((char *)&v37 + v18);
      *(__int64 *)((char *)&v37 + v18) = *(_QWORD *)&v35[v18];
      *(_QWORD *)&v35[v18] = v19;
      v18 += 8;
    }
    while ( v18 != 128 );
    for ( j = 0; j != 15; ++j )
    {
      v21 = v46[j];
      v46[j] = v35[j + 128];
      v35[j + 128] = v21;
    }
    v47 = v36;
  }
  v22 = *((_QWORD *)this + 2);
  memset(v35, 0, 135);
  v24 = v22;
  v25 = 0u;
  v26 = 0u;
  v27 = 0u;
  v28 = 0u;
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v32 = 0;
  memset(v33, 0, sizeof(v33));
  v34 = 0;
  if ( !(unsigned __int8)lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
                           &v37,
                           &v24) )
    dyld4::FileManager::uuidForFileSystem();
  return *(_QWORD *)(*(&v37 + v47) + 24LL * (unsigned __int8)v46[v47 - 1] + 8);
}
