__int64 __fastcall dyld4::PrebuiltObjC::make(__int64 this, Diagnostics *a2, dyld4::RuntimeState *a3)
{
  __int64 v3; // x8
  __int64 v4; // x21
  Diagnostics *v5; // x10
  bool v6; // zf
  dyld4::RuntimeState *v8; // x26
  __int64 v10; // x20
  __int64 (__fastcall **v11)(); // x10
  __int64 v12; // x0
  unsigned int *v13; // x25
  dyld3::MachOFile *Address; // x0
  __int64 v15; // x8
  dyld4::PrebuiltObjC *v16; // x0
  Diagnostics *v17; // x1
  dyld4::RuntimeState *v18; // x2
  __int64 v19; // x8
  dyld4::Loader **v20; // x24
  __int64 v21; // x8
  __int64 v22; // x12
  unsigned __int64 v23; // x23
  __int64 v24; // x9
  __int64 v25; // x10
  dyld4::Loader *v26; // x27
  dyld3::MachOFile *v27; // x28
  unsigned int v28; // w25
  __int64 v29; // x20
  int v30; // w21
  int v31; // w26
  dyld4::RuntimeState *v32; // x1
  unsigned __int64 v33; // x26
  dyld4::PrebuiltObjC *v34; // x22
  __int64 v35; // x8
  __int64 v36; // x9
  dyld4::PrebuiltObjC *hasError; // x0
  Diagnostics *v38; // x1
  dyld4::RuntimeState *v39; // x2
  __int64 v40; // x8
  __int64 v41; // x9
  __int64 v42; // x10
  dyld4::Loader **v43; // x8
  __int64 v44; // x21
  __int64 v45; // x25
  dyld4::PrebuiltObjC *v46; // x0
  Diagnostics *v47; // x1
  dyld4::RuntimeState *v48; // x2
  __int64 v49; // x0
  Diagnostics *v50; // x1
  dyld4::RuntimeState *v51; // x2
  __int16 v52; // w8
  Diagnostics *v53; // x1
  dyld4::RuntimeState *v54; // x2
  __int64 v55; // x8
  __int64 v56; // x27
  __int64 v57; // x23
  __int64 v58; // x22
  __int64 v59; // x28
  const dyld3::MachOAnalyzer *v60; // x0
  __int64 v61; // x8
  __int64 v62; // x20
  const dyld3::MachOAnalyzer *v63; // x0
  dyld3::MachOFile *v64; // x24
  int v65; // w26
  const dyld3::MachOAnalyzer *v66; // x0
  __int64 v67; // x24
  Diagnostics *v68; // x8
  dyld4::RuntimeState *v69; // x9
  __int64 *v70; // x8
  dyld4::RuntimeState *v71; // x26
  __int64 *v72; // x8
  __int64 v73; // x10
  __int64 *v74; // x8
  __int64 v75; // x10
  bool v76; // w0
  dyld4::PrebuiltObjC *v77; // x20
  dyld3::MachOFile *v78; // x0
  unsigned int v79; // w2
  _QWORD *v80; // [xsp+0h] [xbp-3E0h] BYREF
  _QWORD *v81; // [xsp+8h] [xbp-3D8h]
  _QWORD *v82; // [xsp+10h] [xbp-3D0h]
  _QWORD *v83; // [xsp+18h] [xbp-3C8h]
  _QWORD *v84; // [xsp+20h] [xbp-3C0h]
  char *v85; // [xsp+28h] [xbp-3B8h]
  __int64 v86; // [xsp+30h] [xbp-3B0h]
  __int64 *v87; // [xsp+38h] [xbp-3A8h]
  __int64 v88; // [xsp+40h] [xbp-3A0h]
  _QWORD *v89; // [xsp+48h] [xbp-398h]
  Diagnostics *v90; // [xsp+50h] [xbp-390h]
  __int64 *v91; // [xsp+58h] [xbp-388h]
  Diagnostics *v92; // [xsp+60h] [xbp-380h]
  __int64 v93; // [xsp+68h] [xbp-378h]
  metadata_visitor::Visitor *v94; // [xsp+70h] [xbp-370h]
  dyld4::PrebuiltObjC *v95; // [xsp+78h] [xbp-368h]
  void ****v96; // [xsp+80h] [xbp-360h]
  __int64 (__fastcall **v97)(); // [xsp+88h] [xbp-358h]
  metadata_visitor::Visitor *v98; // [xsp+90h] [xbp-350h]
  void ****v99; // [xsp+98h] [xbp-348h]
  __int64 (__fastcall **v100)(); // [xsp+A0h] [xbp-340h]
  dyld4::RuntimeState *v101; // [xsp+A8h] [xbp-338h]
  _QWORD v102[2]; // [xsp+B0h] [xbp-330h] BYREF
  _QWORD v103[4]; // [xsp+C0h] [xbp-320h] BYREF
  unsigned int v104; // [xsp+E0h] [xbp-300h]
  _QWORD v105[5]; // [xsp+E8h] [xbp-2F8h] BYREF
  vm_address_t v106; // [xsp+110h] [xbp-2D0h]
  vm_size_t v107; // [xsp+118h] [xbp-2C8h]
  __int64 v108; // [xsp+130h] [xbp-2B0h]
  vm_address_t v109; // [xsp+138h] [xbp-2A8h]
  vm_size_t v110; // [xsp+140h] [xbp-2A0h]
  void **v111; // [xsp+148h] [xbp-298h] BYREF
  __int64 v112; // [xsp+150h] [xbp-290h]
  __int64 v113; // [xsp+158h] [xbp-288h] BYREF
  __int64 (__fastcall *v114)(); // [xsp+160h] [xbp-280h] BYREF
  void ***v115; // [xsp+168h] [xbp-278h] BYREF
  _QWORD v116[2]; // [xsp+170h] [xbp-270h] BYREF
  char v117; // [xsp+180h] [xbp-260h]
  __int64 v118; // [xsp+188h] [xbp-258h]
  _QWORD *v119; // [xsp+190h] [xbp-250h]
  Diagnostics *v120; // [xsp+198h] [xbp-248h]
  void **v121; // [xsp+1A0h] [xbp-240h] BYREF
  __int64 v122; // [xsp+1A8h] [xbp-238h]
  __int64 v123; // [xsp+1B0h] [xbp-230h] BYREF
  __int64 (__fastcall *v124)(); // [xsp+1B8h] [xbp-228h] BYREF
  void ***v125; // [xsp+1C0h] [xbp-220h] BYREF
  dyld4::Loader *v126; // [xsp+1C8h] [xbp-218h] BYREF
  Diagnostics *v127; // [xsp+1D0h] [xbp-210h]
  dyld4::RuntimeState *v128; // [xsp+1D8h] [xbp-208h]
  _QWORD v129[2]; // [xsp+1E8h] [xbp-1F8h] BYREF
  _QWORD v130[5]; // [xsp+1F8h] [xbp-1E8h] BYREF
  _QWORD v131[2]; // [xsp+220h] [xbp-1C0h] BYREF
  _QWORD v132[5]; // [xsp+230h] [xbp-1B0h] BYREF
  _QWORD v133[2]; // [xsp+258h] [xbp-188h] BYREF
  _QWORD v134[5]; // [xsp+268h] [xbp-178h] BYREF
  _QWORD v135[2]; // [xsp+290h] [xbp-150h] BYREF
  _QWORD v136[5]; // [xsp+2A0h] [xbp-140h] BYREF
  __int64 v137; // [xsp+2C8h] [xbp-118h] BYREF
  __int64 *v138; // [xsp+2D0h] [xbp-110h]
  __int64 v139; // [xsp+2D8h] [xbp-108h]
  char v140; // [xsp+2E0h] [xbp-100h]
  _QWORD v141[2]; // [xsp+2E8h] [xbp-F8h] BYREF
  _QWORD v142[6]; // [xsp+2F8h] [xbp-E8h] BYREF
  _QWORD v143[3]; // [xsp+328h] [xbp-B8h] BYREF
  __int64 v144; // [xsp+340h] [xbp-A0h] BYREF
  __int64 *v145; // [xsp+348h] [xbp-98h]
  __int64 v146; // [xsp+350h] [xbp-90h]
  char v147; // [xsp+358h] [xbp-88h]

  v3 = *((_QWORD *)a3 + 1);
  v4 = *(_QWORD *)(v3 + 248);
  v5 = *(Diagnostics **)(v3 + 264);
  v93 = *(_QWORD *)(v3 + 256);
  if ( v93 )
    v6 = v4 == 0;
  else
    v6 = 1;
  v90 = v5;
  if ( !v6 && v5 != nullptr )
  {
    v8 = a3;
    v10 = this;
    v11 = *(__int64 (__fastcall ***)())(v3 + 232);
    v96 = *(void *****)(v3 + 240);
    v97 = v11;
    v94 = *(metadata_visitor::Visitor **)(v3 + 296);
    v12 = DyldSharedCache::objcOptPtrs(*(DyldSharedCache **)(v3 + 200));
    if ( v12 )
    {
      v13 = (unsigned int *)v12;
      Address = (dyld3::MachOFile *)dyld4::Loader::loadAddress(*((dyld4::Loader **)v8 + 3), v8);
      if ( (unsigned int)dyld3::MachOFile::pointerSize(Address) == 8 )
        v15 = *(_QWORD *)v13;
      else
        v15 = *v13;
      *(_QWORD *)(v10 + 616) = v15 - *(_QWORD *)(*((_QWORD *)v8 + 1) + 200LL);
      *(_BYTE *)(v10 + 624) = 1;
    }
    v95 = (dyld4::PrebuiltObjC *)v10;
    v16 = (dyld4::PrebuiltObjC *)__chkstk_darwin();
    v20 = (dyld4::Loader **)((char *)&v80 - ((v19 + 23) & 0xFFFFFFFFFFFFFFF0LL));
    v21 = *((_QWORD *)v8 + 6);
    v101 = v8;
    v88 = v22;
    v86 = v4;
    if ( v21 )
    {
      v23 = 0;
      v24 = *((_QWORD *)v8 + 5);
      v25 = 8 * v21;
      do
      {
        if ( !v21 )
          dyld4::PrebuiltObjC::make(v16, v17, v18);
        v20[v23 / 8] = *(dyld4::Loader **)(v24 + v23);
        v23 += 8LL;
        --v21;
      }
      while ( v25 != v23 );
      dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::Map(v105);
      v99 = &v115;
      v100 = &v114;
      v98 = (metadata_visitor::Visitor *)&v123;
      v91 = v103;
      v92 = a2;
      do
      {
        v26 = *v20;
        v27 = (dyld3::MachOFile *)dyld4::Loader::mf(*v20, v8);
        v28 = dyld3::MachOFile::pointerSize(v27);
        v111 = nullptr;
        v112 = (__int64)&v111;
        v113 = 0x4002000000LL;
        v114 = __Block_byref_object_copy__41;
        v115 = (void ***)__Block_byref_object_dispose__42;
        LOBYTE(v116[0]) = 0;
        v117 = 0;
        v121 = _NSConcreteStackBlock;
        v122 = 0x40000000;
        v123 = (__int64)___ZN5dyld4L12getImageInfoER11DiagnosticsRNS_12RuntimeStateEPKNS_6LoaderERKN6mach_o12MachOFileRefE_block_invoke;
        v124 = (__int64 (__fastcall *)())&unk_96CD8;
        v127 = a2;
        v128 = v8;
        v125 = &v111;
        v126 = v26;
        dyld3::MachOFile::forEachSection((int)v27);
        v29 = *(_QWORD *)(v112 + 40);
        v30 = *(unsigned __int8 *)(v112 + 48);
        v31 = *(unsigned __int8 *)(v112 + 56);
        _Block_object_dispose(&v111, 8);
        if ( v31 )
        {
          if ( (*((_WORD *)v26 + 2) & 2) != 0 )
          {
            v45 = dyld3::MachOFile::preferredLoadAddress(v27);
            v46 = (dyld4::PrebuiltObjC *)dyld3::MachOFile::is64(v27);
            if ( !v97 )
              dyld4::PrebuiltObjC::make(v46, v47, v48);
            if ( !v96 )
              dyld4::PrebuiltObjC::make(v46, v47, v48);
            if ( (_DWORD)v46 )
            {
              this = objc::objc_headeropt_ro_t<unsigned long long>::get(v97, v94, v45);
              if ( !this )
                goto LABEL_70;
              v49 = objc::objc_headeropt_ro_t<unsigned long long>::index(v97, this);
              if ( *((_DWORD *)v96 + 1) != 8 )
                dyld4::PrebuiltObjC::make((dyld4::PrebuiltObjC *)v49, v50, v51);
              v52 = v49 & 0xFF00;
            }
            else
            {
              this = objc::objc_headeropt_ro_t<unsigned int>::get(v97, v94, v45);
              if ( !this )
                goto LABEL_70;
              v49 = objc::objc_headeropt_ro_t<unsigned int>::index(v97, this);
              if ( *((_DWORD *)v96 + 1) != 4 )
                dyld4::PrebuiltObjC::make((dyld4::PrebuiltObjC *)v49, v53, v54);
              v52 = v49 & 0xFF00;
            }
            LOWORD(v111) = (unsigned __int8)v49 | v52;
            v112 = v45;
            LOBYTE(v113) = 1;
            v114 = (__int64 (__fastcall *)())v26;
            dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::insert(
              v105,
              &v111);
          }
          else
          {
            this = dyld4::Loader::matchesPath(v26, "/usr/lib/libobjc.A.dylib");
            if ( (this & 1) != 0 )
              goto LABEL_70;
            v33 = dyld3::MachOFile::preferredLoadAddress(v27);
            v34 = v95;
            dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCOptimizerImage,4294967295ul>::verifySpace(v95, 1);
            v35 = *(_QWORD *)v34;
            v36 = *((_QWORD *)v34 + 2);
            *((_QWORD *)v34 + 2) = v36 + 1;
            hasError = (dyld4::PrebuiltObjC *)dyld4::PrebuiltObjC::ObjCOptimizerImage::ObjCOptimizerImage(
                                                (dyld4::PrebuiltObjC::ObjCOptimizerImage *)(v35 + 568 * v36),
                                                v26,
                                                v33,
                                                v28);
            v40 = *((_QWORD *)v34 + 2);
            if ( !v40 )
              dyld4::PrebuiltObjC::make(hasError, v38, v39);
            v41 = *(_QWORD *)v34;
            v42 = v40 - 1;
            v43 = (dyld4::Loader **)(*(_QWORD *)v34 + 568 * (v40 - 1));
            *v43 = v26;
            if ( !v30 )
LABEL_81:
              std::__throw_bad_optional_access[abi:v15006](hasError);
            v44 = v41 + 568 * v42;
            *(_QWORD *)(v44 + 488) = v29;
            v102[0] = _NSConcreteStackBlock;
            v102[1] = 0x40000000;
            v103[0] = ___ZN5dyld412PrebuiltObjC4makeER11DiagnosticsRNS_12RuntimeStateE_block_invoke;
            v103[1] = &__block_descriptor_tmp_23;
            v104 = v28;
            v103[2] = v27;
            v103[3] = v43;
            ___ZN5dyld412PrebuiltObjC4makeER11DiagnosticsRNS_12RuntimeStateE_block_invoke(
              v102,
              "__objc_selrefs",
              v44 + 496,
              v44 + 528);
            ((void (__fastcall *)(_QWORD *, const char *, __int64, __int64))v103[0])(
              v102,
              "__objc_classlist",
              v44 + 504,
              v44 + 532);
            ((void (__fastcall *)(_QWORD *, const char *, __int64, __int64))v103[0])(
              v102,
              "__objc_catlist",
              v44 + 512,
              v44 + 536);
            ((void (__fastcall *)(_QWORD *, const char *, __int64, __int64))v103[0])(
              v102,
              "__objc_protolist",
              v44 + 520,
              v44 + 540);
            a2 = v92;
          }
        }
        ++v20;
        v23 -= 8LL;
        v8 = v101;
      }
      while ( v23 );
    }
    else
    {
      dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::Map(v105);
    }
    v55 = *((_QWORD *)v95 + 2);
    if ( v55 )
    {
      v56 = 0;
      v92 = (dyld4::PrebuiltObjC *)((char *)v95 + 384);
      v57 = *(_QWORD *)v95;
      v99 = &v125;
      v100 = &v124;
      v98 = (metadata_visitor::Visitor *)&v126;
      v91 = &v113;
      v97 = &v114;
      v96 = &v115;
      v94 = (metadata_visitor::Visitor *)v116;
      v87 = &v123;
      v89 = v143;
      v84 = v142;
      v85 = (char *)v95 + 80;
      v81 = v134;
      v82 = v136;
      v80 = v132;
      v83 = v130;
      v58 = 568 * v55;
      do
      {
        v59 = v57 + v56;
        if ( !Diagnostics::hasError((Diagnostics *)(v57 + v56 + 32)) )
        {
          if ( *(_DWORD *)(v59 + 532) )
          {
            v121 = nullptr;
            v122 = (__int64)&v121;
            v123 = 0x4802000000LL;
            v124 = __Block_byref_object_copy__8_0;
            v125 = (void ***)__Block_byref_object_dispose__9_0;
            v60 = (const dyld3::MachOAnalyzer *)dyld4::Loader::analyzer(*(dyld4::Loader **)(v57 + v56), v8);
            metadata_visitor::Visitor::Visitor(v98, v60);
            if ( !Diagnostics::hasError((Diagnostics *)(v57 + v56 + 32)) )
            {
              v61 = *(_QWORD *)(*((_QWORD *)v8 + 1) + 216LL);
              v111 = _NSConcreteStackBlock;
              v112 = 0x40000000;
              v113 = (__int64)___ZN5dyld4L19optimizeObjCClassesERNS_12RuntimeStateEPKN4objc14ClassHashTableERKN5dyld33MapItNSt3__14pairI9VMAddressPKNS_6LoaderEEENS_10HashUInt16ENS_11EqualUInt16EEERKNS7_IPKcNSB_10BindTargetENS6_11HashCStringENS6_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke;
              v114 = (__int64 (__fastcall *)())&unk_96D00;
              v115 = &v121;
              v116[0] = v57 + v56;
              v116[1] = v61;
              v117 = 1;
              v118 = v93;
              v119 = v105;
              v120 = v92;
              objc_visitor::Visitor::forEachClass(v122 + 40, &v111);
            }
            _Block_object_dispose(&v121, 8);
          }
          if ( !Diagnostics::hasError((Diagnostics *)(v57 + v56 + 32)) )
          {
            v62 = v57 + v56;
            if ( *(_DWORD *)(v57 + v56 + 540) )
            {
              dyld3::OverflowSafeArray<bool,4294967295ul>::reserve(v62 + 120);
              v111 = nullptr;
              v112 = (__int64)&v111;
              v113 = 0x4802000000LL;
              v114 = __Block_byref_object_copy__8_0;
              v115 = (void ***)__Block_byref_object_dispose__9_0;
              v63 = (const dyld3::MachOAnalyzer *)dyld4::Loader::analyzer(*(dyld4::Loader **)v62, v8);
              metadata_visitor::Visitor::Visitor(v94, v63);
              if ( !Diagnostics::hasError((Diagnostics *)(v57 + v56 + 32)) )
              {
                v121 = _NSConcreteStackBlock;
                v122 = 0x40000000;
                v123 = (__int64)___ZN5dyld4L21optimizeObjCProtocolsERNS_12RuntimeStateEPKN4objc17ProtocolHashTableERKN5dyld33MapItNSt3__14pairI9VMAddressPKNS_6LoaderEEENS_10HashUInt16ENS_11EqualUInt16EEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke;
                v124 = (__int64 (__fastcall *)())&unk_96D28;
                v125 = &v111;
                v126 = (dyld4::Loader *)(v57 + v56);
                v127 = v90;
                v128 = (dyld4::RuntimeState *)v105;
                objc_visitor::Visitor::forEachProtocol(v112 + 40, &v121);
              }
              _Block_object_dispose(&v111, 8);
            }
            if ( !Diagnostics::hasError((Diagnostics *)(v57 + v56 + 32)) )
            {
              v64 = (dyld3::MachOFile *)dyld4::JustInTimeLoader::mf(*(dyld4::JustInTimeLoader **)(v57 + v56), v8);
              v65 = dyld3::MachOFile::pointerSize(v64);
              v144 = 0;
              v145 = &v144;
              v146 = 0x2000000000LL;
              v147 = 0;
              v142[4] = _NSConcreteStackBlock;
              v142[5] = 0x40000000;
              v143[0] = ___ZN5dyld4L21optimizeObjCSelectorsERNS_12RuntimeStateEPKN4objc17SelectorHashTableERKN5dyld33MapIPKcNS_6Loader10BindTargetENS6_11HashCStringENS6_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke;
              v143[1] = &unk_96D50;
              v143[2] = &v144;
              dyld3::MachOFile::forEachSection((int)v64);
              if ( *((_BYTE *)v145 + 24) )
              {
                Diagnostics::error((Diagnostics *)(v57 + v56 + 32), "Old objc section", v80, v81, v82, v83, v84);
              }
              else if ( ((dyld3::MachOFile::isArch(v64, "x86_64") & 1) != 0
                      || (unsigned int)dyld3::MachOFile::isArch(v64, "x86_64h"))
                     && (unsigned int)dyld3::MachOFile::hasObjCMessageReferences(v64) )
              {
                Diagnostics::error(
                  (Diagnostics *)(v57 + v56 + 32),
                  "Cannot handle message refs",
                  v80,
                  v81,
                  v82,
                  v83,
                  v84);
              }
              else
              {
                v111 = nullptr;
                v112 = (__int64)&v111;
                v113 = 0x4802000000LL;
                v114 = __Block_byref_object_copy__8_0;
                v115 = (void ***)__Block_byref_object_dispose__9_0;
                v66 = (const dyld3::MachOAnalyzer *)dyld4::Loader::analyzer(*(dyld4::Loader **)(v57 + v56), v101);
                metadata_visitor::Visitor::Visitor(v94, v66);
                hasError = (dyld4::PrebuiltObjC *)Diagnostics::hasError((Diagnostics *)(v57 + v56 + 32));
                if ( ((unsigned __int8)hasError & 1) == 0 )
                {
                  v67 = v57 + v56;
                  v68 = *(Diagnostics **)(v57 + v56 + 496);
                  v69 = (Diagnostics *)((char *)v68 + (unsigned int)(*(_DWORD *)(v57 + v56 + 528) * v65));
                  v121 = _NSConcreteStackBlock;
                  v122 = 0x40000000;
                  v123 = (__int64)___ZN5dyld4L21optimizeObjCSelectorsERNS_12RuntimeStateEPKN4objc17SelectorHashTableERKN5dyld33MapIPKcNS_6Loader10BindTargetENS6_11HashCStringENS6_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke_2;
                  v124 = (__int64 (__fastcall *)())&unk_96D78;
                  v125 = &v111;
                  v126 = (dyld4::Loader *)(v57 + v56);
                  v127 = v68;
                  v128 = v69;
                  v141[0] = _NSConcreteStackBlock;
                  v141[1] = 0x40000000;
                  v142[0] = ___ZN5dyld4L21optimizeObjCSelectorsERNS_12RuntimeStateEPKN4objc17SelectorHashTableERKN5dyld33MapIPKcNS_6Loader10BindTargetENS6_11HashCStringENS6_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke_3;
                  v142[1] = &unk_96DA0;
                  v142[2] = &v121;
                  v142[3] = &v111;
                  if ( *(_DWORD *)(v59 + 532) )
                  {
                    v137 = 0;
                    v138 = &v137;
                    v139 = 0x2000000000LL;
                    v140 = 0;
                    v135[0] = _NSConcreteStackBlock;
                    v135[1] = 0x40000000;
                    v136[0] = ___ZN5dyld4L21optimizeObjCSelectorsERNS_12RuntimeStateEPKN4objc17SelectorHashTableERKN5dyld33MapIPKcNS_6Loader10BindTargetENS6_11HashCStringENS6_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke_4;
                    v136[1] = &unk_96DC8;
                    v136[3] = &v111;
                    v136[2] = v141;
                    v136[4] = &v137;
                    objc_visitor::Visitor::forEachClassAndMetaClass(v112 + 40, v135);
                    v70 = v138;
                    *(_BYTE *)(v67 + 548) = *((_BYTE *)v138 + 24);
                    *(_BYTE *)(v67 + 545) = *((_BYTE *)v70 + 24);
                    _Block_object_dispose(&v137, 8);
                  }
                  v71 = v101;
                  if ( *(_DWORD *)(v67 + 536) )
                  {
                    v137 = 0;
                    v138 = &v137;
                    v139 = 0x2000000000LL;
                    v140 = 0;
                    v133[0] = _NSConcreteStackBlock;
                    v133[1] = 0x40000000;
                    v134[0] = ___ZN5dyld4L21optimizeObjCSelectorsERNS_12RuntimeStateEPKN4objc17SelectorHashTableERKN5dyld33MapIPKcNS_6Loader10BindTargetENS6_11HashCStringENS6_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke_5;
                    v134[1] = &unk_96DF0;
                    v134[3] = &v111;
                    v134[2] = v141;
                    v134[4] = &v137;
                    objc_visitor::Visitor::forEachCategory(v112 + 40, v133);
                    v72 = v138;
                    v73 = v57 + v56;
                    *(_BYTE *)(v73 + 548) = *((_BYTE *)v138 + 24);
                    *(_BYTE *)(v73 + 545) = *((_BYTE *)v72 + 24);
                    _Block_object_dispose(&v137, 8);
                  }
                  if ( *(_DWORD *)(v62 + 540) )
                  {
                    v137 = 0;
                    v138 = &v137;
                    v139 = 0x2000000000LL;
                    v140 = 0;
                    v131[0] = _NSConcreteStackBlock;
                    v131[1] = 0x40000000;
                    v132[0] = ___ZN5dyld4L21optimizeObjCSelectorsERNS_12RuntimeStateEPKN4objc17SelectorHashTableERKN5dyld33MapIPKcNS_6Loader10BindTargetENS6_11HashCStringENS6_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke_6;
                    v132[1] = &unk_96E18;
                    v132[3] = &v111;
                    v132[2] = v141;
                    v132[4] = &v137;
                    objc_visitor::Visitor::forEachProtocol(v112 + 40, v131);
                    v74 = v138;
                    v75 = v57 + v56;
                    *(_BYTE *)(v75 + 548) = *((_BYTE *)v138 + 24);
                    *(_BYTE *)(v75 + 545) = *((_BYTE *)v74 + 24);
                    _Block_object_dispose(&v137, 8);
                  }
                  v129[0] = _NSConcreteStackBlock;
                  v129[1] = 0x40000000;
                  v130[0] = ___ZN5dyld4L21optimizeObjCSelectorsERNS_12RuntimeStateEPKN4objc17SelectorHashTableERKN5dyld33MapIPKcNS_6Loader10BindTargetENS6_11HashCStringENS6_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke_7;
                  v130[1] = &__block_descriptor_tmp_76;
                  v130[2] = v57 + v56;
                  v130[3] = v86;
                  v130[4] = v85;
                  if ( !*(_BYTE *)(v57 + v56 + 24) )
                    goto LABEL_81;
                  dyld4::PrebuiltObjC::forEachSelectorReferenceToUnique(
                    v71,
                    *(_QWORD *)(v57 + v56),
                    *(_QWORD *)(v57 + v56 + 16),
                    v67 + 488,
                    v129);
                }
                _Block_object_dispose(&v111, 8);
              }
              _Block_object_dispose(&v144, 8);
              v76 = Diagnostics::hasError((Diagnostics *)(v57 + v56 + 32));
              v8 = v101;
              if ( !v76 )
                dyld4::PrebuiltObjC::commitImage(v95, (const dyld4::PrebuiltObjC::ObjCOptimizerImage *)(v57 + v56));
            }
          }
        }
        v56 += 568;
      }
      while ( v58 != v56 );
    }
    v77 = v95;
    dyld4::PrebuiltObjC::generateHashTables(v95, v32);
    v78 = (dyld3::MachOFile *)dyld4::Loader::mf(*((dyld4::Loader **)v8 + 3), v8);
    dyld3::MachOFile::pointerSize(v78);
    this = dyld4::PrebuiltObjC::generatePerImageFixups(v77, v8, v79);
    *((_BYTE *)v77 + 488) = 1;
LABEL_70:
    v108 = 0;
    if ( v109 )
      this = vm_deallocate(mach_task_self_, v109, v110);
    v105[4] = 0;
    if ( v106 )
      return vm_deallocate(mach_task_self_, v106, v107);
  }
  return this;
}
