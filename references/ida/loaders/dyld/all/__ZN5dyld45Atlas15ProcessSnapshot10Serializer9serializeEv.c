__int64 *__usercall dyld4::Atlas::ProcessSnapshot::Serializer::serialize@<X0>(
        __int64 *__return_ptr a1@<X8>,
        dyld4::Atlas::ProcessSnapshot::Serializer *this@<X0>)
{
  __int64 v4; // x8
  __int64 v5; // x8
  dyld4::FileRecord *v6; // x21
  __int64 v7; // x0
  const char *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x8
  __int128 v11; // q0
  __int128 v12; // q1
  __int128 v13; // q2
  __int64 v14; // x9
  unsigned __int8 v15; // w10
  dyld4::FileRecord *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x8
  __int128 v20; // q0
  __int128 v21; // q1
  __int128 v22; // q2
  __int128 v23; // q0
  __int64 v24; // x9
  char v25; // w10
  __int128 v26; // q1
  __int64 v27; // x8
  __int64 v28; // x9
  __int64 v29; // x11
  __int64 v30; // x0
  __int64 v31; // x8
  __int128 v32; // q0
  __int128 v33; // q1
  __int128 v34; // q2
  __int64 v35; // x9
  unsigned __int8 v36; // w10
  __int64 v37; // x8
  __int64 v38; // x26
  __int64 v39; // x27
  __int64 v40; // x24
  __int64 v41; // x8
  __int64 v42; // x9
  char *v43; // x28
  __int64 v44; // x24
  char v45; // w8
  __int64 v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  __int64 v49; // x9
  __int64 v50; // x9
  unsigned int *v51; // x22
  __int64 v52; // x8
  __int64 v53; // x25
  unsigned int v54; // t1
  __int64 v55; // x24
  __int64 v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8
  __int64 v59; // x21
  __int64 v60; // x22
  __int64 i; // x24
  char v62; // w8
  __int64 v63; // x9
  __int64 v64; // x10
  __int64 v65; // x21
  char *v66; // x22
  char v67; // t1
  __int64 v68; // x9
  __int64 v69; // x10
  char v70; // w8
  __int64 v71; // x21
  __int64 v72; // x0
  __int64 v73; // x8
  __int128 v74; // q0
  __int128 v75; // q1
  __int128 v76; // q2
  __int64 v77; // x9
  unsigned __int8 v78; // w10
  __int64 v79; // x8
  __int64 v80; // x9
  __int64 v81; // x25
  __int64 v82; // x26
  dyld4::Atlas::Image *v83; // x0
  __int64 v84; // x27
  unsigned __int64 v85; // x8
  char v86; // w9
  unsigned __int64 v87; // x21
  int v88; // w0
  char v89; // w0
  __int64 v90; // x8
  __int64 v91; // x9
  __int64 v92; // x8
  __int64 *result; // x0
  const char *v94; // [xsp+0h] [xbp-310h] BYREF
  __int64 v95; // [xsp+8h] [xbp-308h] BYREF
  __int64 v96; // [xsp+10h] [xbp-300h] BYREF
  __int64 v97; // [xsp+18h] [xbp-2F8h]
  __int64 v98; // [xsp+28h] [xbp-2E8h]
  char v99; // [xsp+30h] [xbp-2E0h]
  __int64 *v100; // [xsp+38h] [xbp-2D8h] BYREF
  __int64 v101; // [xsp+40h] [xbp-2D0h]
  __int64 v102; // [xsp+50h] [xbp-2C0h]
  char v103; // [xsp+58h] [xbp-2B8h]
  __int64 *v104; // [xsp+60h] [xbp-2B0h] BYREF
  __int128 v105; // [xsp+68h] [xbp-2A8h]
  __int128 v106; // [xsp+78h] [xbp-298h]
  __int128 v107; // [xsp+88h] [xbp-288h]
  __int128 v108; // [xsp+98h] [xbp-278h]
  __int128 v109; // [xsp+A8h] [xbp-268h]
  __int128 v110; // [xsp+B8h] [xbp-258h]
  __int64 v111; // [xsp+C8h] [xbp-248h]
  int v112; // [xsp+D0h] [xbp-240h]
  char v113; // [xsp+D4h] [xbp-23Ch]
  __int64 v114; // [xsp+D8h] [xbp-238h] BYREF
  __int128 v115; // [xsp+E0h] [xbp-230h]
  __int128 v116; // [xsp+F0h] [xbp-220h]
  __int128 v117; // [xsp+100h] [xbp-210h]
  __int128 v118; // [xsp+110h] [xbp-200h]
  __int128 v119; // [xsp+120h] [xbp-1F0h]
  __int128 v120; // [xsp+130h] [xbp-1E0h]
  __int64 v121; // [xsp+140h] [xbp-1D0h]
  int v122; // [xsp+148h] [xbp-1C8h]
  char v123; // [xsp+14Ch] [xbp-1C4h]
  const char *v124; // [xsp+150h] [xbp-1C0h] BYREF
  __int128 v125; // [xsp+158h] [xbp-1B8h]
  __int128 v126; // [xsp+168h] [xbp-1A8h]
  __int128 v127; // [xsp+178h] [xbp-198h]
  __int128 v128; // [xsp+188h] [xbp-188h]
  _QWORD v129[3]; // [xsp+198h] [xbp-178h] BYREF
  __int16 v130; // [xsp+1B0h] [xbp-160h]
  char v131; // [xsp+1B2h] [xbp-15Eh]
  __int64 Path; // [xsp+1B8h] [xbp-158h] BYREF
  __int128 v133; // [xsp+1C0h] [xbp-150h]
  __int128 v134; // [xsp+1D0h] [xbp-140h]
  __int128 v135; // [xsp+1E0h] [xbp-130h]
  __int128 v136; // [xsp+1F0h] [xbp-120h]
  __int128 v137; // [xsp+200h] [xbp-110h]
  __int64 v138; // [xsp+210h] [xbp-100h]
  __int16 v139; // [xsp+218h] [xbp-F8h]
  unsigned __int8 v140; // [xsp+21Ah] [xbp-F6h]
  _OWORD v141[8]; // [xsp+220h] [xbp-F0h] BYREF

  *((_QWORD *)this + 25) = mach_absolute_time();
  ++*((_DWORD *)this + 52);
  v4 = *((_QWORD *)this + 1);
  *a1 = v4;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v100 = nullptr;
  v101 = v4;
  v102 = 0;
  v103 = 0;
  v96 = 0;
  v97 = v4;
  v98 = 0;
  v99 = 0;
  if ( vm_page_size == 0x4000 )
    *((_QWORD *)this + 27) |= 4uLL;
  v5 = **((_QWORD **)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 27) |= 1uLL;
    v6 = (dyld4::FileRecord *)(v5 + 8);
    if ( dyld4::FileRecord::persistent((dyld4::FileRecord *)(v5 + 8)) )
    {
      v7 = dyld4::FileRecord::volume(v6);
      lsl::OrderedSet<lsl::UUID,std::less<lsl::UUID>>::insert(v141, &v96, v7);
    }
    else
    {
      Path = dyld4::FileRecord::getPath(v6);
      if ( Path )
      {
        lsl::OrderedSet<char const*,lsl::ConstCharStarCompare>::insert((__int64)&v100, &Path, (__int64)v141);
      }
      else
      {
        v124 = "???";
        lsl::OrderedSet<char const*,lsl::ConstCharStarCompare>::insert(v141, &v100, &v124);
      }
    }
  }
  *(_QWORD *)&v141[0] = *((_QWORD *)this + 3);
  v8 = *(const char **)&v141[0];
  memset((char *)v141 + 8, 0, 91);
  v9 = lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator++(v141);
  v10 = *(_QWORD *)v9;
  v133 = *(_OWORD *)(v9 + 8);
  v11 = *(_OWORD *)(v9 + 72);
  v12 = *(_OWORD *)(v9 + 56);
  v13 = *(_OWORD *)(v9 + 40);
  v134 = *(_OWORD *)(v9 + 24);
  v135 = v13;
  v136 = v12;
  v137 = v11;
  v14 = *(_QWORD *)(v9 + 88);
  v139 = *(_WORD *)(v9 + 96);
  v15 = *(_BYTE *)(v9 + 98);
  v138 = v14;
  Path = v10;
  v140 = v15;
  *(_OWORD *)((char *)&v141[4] + 10) = 0u;
  v125 = 0u;
  v126 = 0u;
  v127 = 0u;
  v128 = 0u;
  memset(v129, 0, sizeof(v129));
  v124 = v8;
  v130 = 0;
  v131 = 0;
  while ( (unsigned __int8)lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator<=>(
                             &Path,
                             &v124) )
  {
    v16 = (dyld4::FileRecord *)(*(_QWORD *)(*(&Path + v140) + 8LL * *((unsigned __int8 *)&v138 + v140 - 1)) + 8LL);
    if ( dyld4::FileRecord::persistent(v16) )
    {
      v17 = dyld4::FileRecord::volume(v16);
      lsl::OrderedSet<lsl::UUID,std::less<lsl::UUID>>::insert(v141, &v96, v17);
    }
    else
    {
      v95 = 0;
      v95 = dyld4::FileRecord::getPath(v16);
      if ( v95 )
      {
        lsl::OrderedSet<char const*,lsl::ConstCharStarCompare>::insert((__int64)&v100, &v95, (__int64)v141);
      }
      else
      {
        v94 = "???";
        lsl::OrderedSet<char const*,lsl::ConstCharStarCompare>::insert(v141, &v100, &v94);
      }
    }
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator++(&Path);
  }
  *(_QWORD *)&v141[0] = &v96;
  memset((char *)v141 + 8, 0, 109);
  v18 = lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::operator++(v141);
  v19 = *(_QWORD *)v18;
  v20 = *(_OWORD *)(v18 + 88);
  v21 = *(_OWORD *)(v18 + 72);
  v22 = *(_OWORD *)(v18 + 56);
  v117 = *(_OWORD *)(v18 + 40);
  v118 = v22;
  v119 = v21;
  v120 = v20;
  v23 = *(_OWORD *)(v18 + 24);
  v115 = *(_OWORD *)(v18 + 8);
  v116 = v23;
  v24 = *(_QWORD *)(v18 + 104);
  v122 = *(_DWORD *)(v18 + 112);
  v25 = *(_BYTE *)(v18 + 116);
  v121 = v24;
  v114 = v19;
  v123 = v25;
  memset(v141, 0, 108);
  v104 = &v96;
  v110 = 0u;
  v109 = 0u;
  v108 = 0u;
  v107 = 0u;
  v106 = 0u;
  v105 = 0u;
  v112 = 0;
  v111 = 0;
  v113 = 0;
  lsl::Vector<lsl::UUID>::Vector<lsl::OrderedSet<lsl::UUID,std::less<lsl::UUID>>::const_iterator>(
    v141,
    &v114,
    &v104,
    *((_QWORD *)this + 1));
  if ( (_OWORD *)((char *)this + 48) != v141 )
  {
    v26 = *((_OWORD *)this + 4);
    *((_OWORD *)this + 4) = v141[1];
    v141[1] = v26;
    v28 = *((_QWORD *)this + 6);
    v27 = *((_QWORD *)this + 7);
    v29 = *((_QWORD *)&v141[0] + 1);
    *((_QWORD *)this + 6) = *(_QWORD *)&v141[0];
    *((_QWORD *)this + 7) = v29;
    *(_QWORD *)&v141[0] = v28;
    *((_QWORD *)&v141[0] + 1) = v27;
    if ( !v27 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( *((_QWORD *)&v141[0] + 1) )
LABEL_18:
    lsl::Vector<lsl::UUID>::resize(v141, 0);
LABEL_19:
  *(_QWORD *)&v141[0] = &v100;
  memset((char *)v141 + 8, 0, 91);
  v30 = lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator++(v141);
  v31 = *(_QWORD *)v30;
  v133 = *(_OWORD *)(v30 + 8);
  v32 = *(_OWORD *)(v30 + 72);
  v33 = *(_OWORD *)(v30 + 56);
  v34 = *(_OWORD *)(v30 + 40);
  v134 = *(_OWORD *)(v30 + 24);
  v135 = v34;
  v136 = v33;
  v137 = v32;
  v35 = *(_QWORD *)(v30 + 88);
  v139 = *(_WORD *)(v30 + 96);
  v36 = *(_BYTE *)(v30 + 98);
  v138 = v35;
  Path = v31;
  v140 = v36;
  *(_OWORD *)((char *)v129 + 2) = 0u;
  memset((char *)v141 + 8, 0, 91);
  *(_QWORD *)&v141[0] = &v100;
  while ( (unsigned __int8)lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator<=>(
                             &Path,
                             v141) )
  {
    v37 = v140 - 1LL;
    v38 = *(&Path + v37 + 1);
    v39 = *((unsigned __int8 *)&v138 + v37);
    v40 = *((_QWORD *)this + 16);
    lsl::Vector<unsigned int>::reserve((char *)this + 144, *((_QWORD *)this + 20) + 1LL);
    v41 = *((_QWORD *)this + 19);
    v42 = *((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = v42 + 1;
    *(_DWORD *)(v41 + 4 * v42) = v40;
    v43 = *(char **)(v38 + 8 * v39);
    if ( *v43 )
    {
      v44 = 1;
      do
      {
        lsl::Vector<char>::reserve((char *)this + 112, *((_QWORD *)this + 16) + 1LL);
        v45 = *v43;
        v46 = *((_QWORD *)this + 15);
        v47 = *((_QWORD *)this + 16);
        *((_QWORD *)this + 16) = v47 + 1;
        *(_BYTE *)(v46 + v47) = v45;
        v43 = (char *)(*(_QWORD *)(v38 + 8 * v39) + v44++);
      }
      while ( *v43 );
    }
    lsl::Vector<char>::reserve((char *)this + 112, *((_QWORD *)this + 16) + 1LL);
    v48 = *((_QWORD *)this + 15);
    v49 = *((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = v49 + 1;
    *(_BYTE *)(v48 + v49) = 0;
    lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::const_iterator::operator++(&Path);
  }
  v50 = *((_QWORD *)this + 20);
  if ( v50 )
  {
    v51 = *((unsigned int **)this + 19);
    v52 = *((_QWORD *)this + 12);
    v53 = 4 * v50;
    do
    {
      v54 = *v51++;
      v55 = *((_QWORD *)this + 15) + v54;
      lsl::Vector<char const*>::reserve((char *)this + 80, v52 + 1);
      v56 = *((_QWORD *)this + 11);
      v57 = *((_QWORD *)this + 12);
      v52 = v57 + 1;
      *((_QWORD *)this + 12) = v57 + 1;
      *(_QWORD *)(v56 + 8 * v57) = v55;
      v53 -= 4;
    }
    while ( v53 );
  }
  dyld4::Atlas::ProcessSnapshot::Serializer::emit<unsigned int>(*((unsigned int *)this + 44), a1);
  dyld4::Atlas::ProcessSnapshot::Serializer::emit<unsigned int>(*((unsigned int *)this + 45), a1);
  dyld4::Atlas::ProcessSnapshot::Serializer::emit<unsigned long long>(*((_QWORD *)this + 23), a1);
  dyld4::Atlas::ProcessSnapshot::Serializer::emit<unsigned int>(*((unsigned int *)this + 48), a1);
  dyld4::Atlas::ProcessSnapshot::Serializer::emit<unsigned int>(*((unsigned int *)this + 52), a1);
  dyld4::Atlas::ProcessSnapshot::Serializer::emit<unsigned long long>(*((_QWORD *)this + 25), a1);
  dyld4::Atlas::ProcessSnapshot::Serializer::emit<unsigned int>(*((unsigned int *)this + 53), a1);
  lsl::emitPVLEUInt64(*((_QWORD *)this + 27), (__int64)a1);
  lsl::emitPVLEUInt64(**((_QWORD **)this + 28), (__int64)a1);
  lsl::emitPVLEUInt64(**((_QWORD **)this + 29), (__int64)a1);
  lsl::emitPVLEUInt64(**((_QWORD **)this + 30), (__int64)a1);
  lsl::emitPVLEUInt64(*((_QWORD *)this + 8), (__int64)a1);
  v58 = *((_QWORD *)this + 8);
  if ( v58 )
  {
    v59 = *((_QWORD *)this + 7);
    v60 = v59 + 16 * v58;
    do
    {
      for ( i = 0; i != 16; ++i )
      {
        lsl::Vector<std::byte>::reserve((__int64)a1, a1[2] + 1);
        v62 = *(_BYTE *)(v59 + i);
        v63 = a1[1];
        v64 = a1[2];
        a1[2] = v64 + 1;
        *(_BYTE *)(v63 + v64) = v62;
      }
      v59 += 16;
    }
    while ( v59 != v60 );
  }
  lsl::emitPVLEUInt64(*((_QWORD *)this + 16), (__int64)a1);
  v65 = *((_QWORD *)this + 16);
  if ( v65 )
  {
    v66 = *((char **)this + 15);
    do
    {
      lsl::Vector<std::byte>::reserve((__int64)a1, a1[2] + 1);
      v67 = *v66++;
      v68 = a1[1];
      v69 = a1[2];
      a1[2] = v69 + 1;
      *(_BYTE *)(v68 + v69) = v67;
      --v65;
    }
    while ( v65 );
  }
  if ( (*((_QWORD *)this + 27) & 1) != 0 )
  {
    v70 = 14;
    if ( (*((_QWORD *)this + 27) & 4LL) == 0 )
      v70 = 12;
    dyld4::Atlas::ProcessSnapshot::Serializer::emitMappedFileInfo(
      (int)this,
      *(_QWORD *)(**((_QWORD **)this + 4) + 160LL) >> v70,
      **((_QWORD **)this + 4) + 88,
      (dyld4::FileRecord *)(**((_QWORD **)this + 4) + 8LL));
    dyld4::Atlas::Bitmap::emit(**((unsigned __int64 ***)this + 5), (__int64)a1);
  }
  lsl::emitPVLEUInt64(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL), (__int64)a1);
  *(_QWORD *)&v141[0] = *((_QWORD *)this + 3);
  v71 = *(_QWORD *)&v141[0];
  memset((char *)v141 + 8, 0, 91);
  v72 = lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator++(v141);
  v73 = *(_QWORD *)v72;
  v133 = *(_OWORD *)(v72 + 8);
  v74 = *(_OWORD *)(v72 + 72);
  v75 = *(_OWORD *)(v72 + 56);
  v76 = *(_OWORD *)(v72 + 40);
  v134 = *(_OWORD *)(v72 + 24);
  v135 = v76;
  v136 = v75;
  v137 = v74;
  v77 = *(_QWORD *)(v72 + 88);
  v139 = *(_WORD *)(v72 + 96);
  v78 = *(_BYTE *)(v72 + 98);
  v138 = v77;
  Path = v73;
  v140 = v78;
  *(_OWORD *)((char *)v129 + 2) = 0u;
  memset((char *)v141 + 8, 0, 91);
  *(_QWORD *)&v141[0] = v71;
  if ( (unsigned __int8)lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator<=>(
                          &Path,
                          v141) )
  {
    v79 = 0;
    do
    {
      v80 = v140 - 1LL;
      v81 = *(&Path + v80 + 1);
      v82 = *((unsigned __int8 *)&v138 + v80);
      v83 = *(dyld4::Atlas::Image **)(v81 + 8 * v82);
      v84 = *((_QWORD *)v83 + 20);
      v85 = v84 - v79;
      if ( (*((_QWORD *)this + 27) & 4LL) != 0 )
        v86 = 14;
      else
        v86 = 12;
      v87 = v85 >> v86;
      v88 = dyld4::Atlas::Image::uuid(v83);
      dyld4::Atlas::ProcessSnapshot::Serializer::emitMappedFileInfo(
        (int)this,
        v87,
        v88,
        (dyld4::FileRecord *)(*(_QWORD *)(v81 + 8 * v82) + 8LL));
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator++(&Path);
      v89 = lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator<=>(
              &Path,
              v141);
      v79 = v84;
    }
    while ( v89 );
  }
  while ( 1 )
  {
    v92 = a1[2];
    if ( (v92 & 0xF) == 0 )
      break;
    lsl::Vector<std::byte>::reserve((__int64)a1, v92 + 1);
    v90 = a1[1];
    v91 = a1[2];
    a1[2] = v91 + 1;
    *(_BYTE *)(v90 + v91) = 0;
  }
  lsl::CRC32c::CRC32c((__int64)v141);
  lsl::CRC32c::operator()((unsigned int *)v141, a1[1], a1[2]);
  *(_DWORD *)(a1[1] + 32) = lsl::CRC32c::operator unsigned int((__int64)v141);
  if ( v96 )
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::deallocate(v96, v97);
  result = v100;
  if ( v100 )
    return lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::deallocate(v100, v101);
  return result;
}
