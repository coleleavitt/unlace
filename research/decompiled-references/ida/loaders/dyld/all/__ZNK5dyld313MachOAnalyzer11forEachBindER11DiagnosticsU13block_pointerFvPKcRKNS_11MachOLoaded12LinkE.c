__int64 __fastcall dyld3::MachOAnalyzer::forEachBind(dyld3::MachOFile *a1, Diagnostics *a2, __int64 a3, __int64 a4)
{
  __int64 result; // x0
  __int64 v9; // x8
  const unsigned __int8 **LinkEditContent; // x0
  const unsigned __int8 **v11; // x0
  __int64 v12; // x27
  char v13; // w22
  __int64 v14; // x28
  _BYTE *v15; // x23
  const unsigned __int8 **v16; // x24
  const unsigned __int8 *v17; // x3
  const unsigned __int8 **v18; // x10
  _BYTE *v19; // x8
  unsigned __int8 v20; // w9
  int v21; // w25
  const unsigned __int8 **v22; // x10
  int v23; // t1
  const unsigned __int8 **v24; // x0
  __int64 v25; // x26
  char v26; // w23
  unsigned __int8 *v27; // x27
  const unsigned __int8 **v28; // x24
  __int64 v29; // x25
  const unsigned __int8 *v30; // x3
  const unsigned __int8 **v31; // x8
  unsigned int v32; // w9
  unsigned __int8 *v33; // x28
  __int64 v34; // x22
  const unsigned __int8 **v35; // x8
  int v36; // t1
  __int64 v37; // x8
  const unsigned __int8 *v38; // x3
  const unsigned __int8 **v39; // x28
  unsigned int v40; // w24
  unsigned __int64 v41; // x22
  const unsigned __int8 *v42; // x3
  __int64 v43; // x28
  unsigned int v44; // w24
  unsigned __int64 v45; // x8
  int *v46; // x24
  int *v47; // x28
  int v48; // w27
  __int64 v49; // x0
  __int64 v50; // x4
  const unsigned __int8 **v51; // x5
  __int64 v52; // x6
  __int64 v53; // x25
  __int64 v54; // x2
  int v55; // w3
  unsigned int v56; // w9
  __int64 v57; // x8
  unsigned __int64 v58; // x13
  bool v59; // w14
  const unsigned __int8 **v60; // x11
  unsigned __int64 v61; // x10
  __int64 v62; // x16
  __int64 v63; // x14
  __int64 v64; // x15
  unsigned int *v65; // x12
  __int64 v66; // x12
  unsigned __int16 *v67; // x13
  unsigned int v68; // w13
  _BYTE *v69; // x14
  _BYTE *v70; // x15
  int v71; // w17
  unsigned int v72; // w0
  unsigned int v73; // w15
  int v74; // w16
  const unsigned __int8 *v75; // x9
  __int64 v76; // x9
  __int64 v77; // x12
  __int64 v79; // x7
  __int64 v80; // x27
  __int64 v81; // x25
  __int64 uleb128; // x24
  const unsigned __int8 **v83; // x28
  __int64 v84; // x23
  const unsigned __int8 *v85; // x3
  const unsigned __int8 **v86; // x10
  unsigned __int8 *v87; // x8
  unsigned int v88; // w9
  __int64 v89; // x22
  const unsigned __int8 **v90; // x10
  int v91; // t1
  const unsigned __int8 *v92; // x3
  __int64 v93; // x28
  unsigned int v94; // w23
  __int64 v95; // x8
  unsigned __int64 v96; // x22
  const unsigned __int8 *v97; // x3
  __int64 v98; // x0
  __int64 v99; // x23
  unsigned int v100; // w28
  unsigned __int64 v101; // x8
  __int64 v102; // [xsp+0h] [xbp-280h]
  int v103; // [xsp+10h] [xbp-270h]
  int v104; // [xsp+20h] [xbp-260h]
  __int64 v105; // [xsp+40h] [xbp-240h] BYREF
  const unsigned __int8 **v106; // [xsp+48h] [xbp-238h]
  __int64 v107; // [xsp+50h] [xbp-230h]
  char *v108; // [xsp+58h] [xbp-228h]
  __int64 *v109; // [xsp+60h] [xbp-220h]
  const unsigned __int8 **v110; // [xsp+68h] [xbp-218h]
  unsigned __int8 *v111; // [xsp+70h] [xbp-210h]
  __int64 v112; // [xsp+78h] [xbp-208h]
  __int64 v113; // [xsp+80h] [xbp-200h]
  __int64 v114; // [xsp+88h] [xbp-1F8h]
  __int64 sleb128; // [xsp+90h] [xbp-1F0h]
  __int64 v116; // [xsp+98h] [xbp-1E8h]
  unsigned int v117; // [xsp+A4h] [xbp-1DCh]
  const unsigned __int8 **v118; // [xsp+A8h] [xbp-1D8h]
  unsigned int v119; // [xsp+B4h] [xbp-1CCh]
  _QWORD v120[7]; // [xsp+B8h] [xbp-1C8h] BYREF
  __int128 v121; // [xsp+F0h] [xbp-190h]
  __int128 v122; // [xsp+100h] [xbp-180h]
  __int128 v123; // [xsp+110h] [xbp-170h]
  __int128 v124; // [xsp+120h] [xbp-160h]
  __int128 v125; // [xsp+130h] [xbp-150h]
  __int128 v126; // [xsp+140h] [xbp-140h]
  __int128 v127; // [xsp+150h] [xbp-130h]
  Diagnostics *v128; // [xsp+160h] [xbp-120h]
  unsigned int v129; // [xsp+168h] [xbp-118h]
  unsigned int v130; // [xsp+16Ch] [xbp-114h]
  __int128 v131; // [xsp+170h] [xbp-110h] BYREF
  __int128 v132; // [xsp+180h] [xbp-100h]
  __int128 v133; // [xsp+190h] [xbp-F0h]
  __int128 v134; // [xsp+1A0h] [xbp-E0h]
  __int128 v135; // [xsp+1B0h] [xbp-D0h] BYREF
  __int128 v136; // [xsp+1C0h] [xbp-C0h]
  __int128 v137; // [xsp+1D0h] [xbp-B0h]
  char v138; // [xsp+1E7h] [xbp-99h] BYREF
  const unsigned __int8 **v139[5]; // [xsp+1E8h] [xbp-98h] BYREF

  v119 = dyld3::MachOFile::pointerSize(a1);
  v138 = 0;
  dyld3::MachOLoaded::getLinkEditPointers((__int64)a1, a2, (__int64)&v131);
  result = Diagnostics::hasError(a2);
  if ( (result & 1) == 0 )
  {
    __chkstk_darwin();
    v139[0] = (const unsigned __int8 **)_NSConcreteStackBlock;
    v139[1] = (const unsigned __int8 **)0x40000000;
    v139[2] = (const unsigned __int8 **)___ZNK5dyld313MachOAnalyzer19getAllSegmentsInfosER11DiagnosticsPNS_9MachOFile11SegmentInfoE_block_invoke;
    v139[3] = (const unsigned __int8 **)&__block_descriptor_tmp_58_2;
    v118 = (const unsigned __int8 **)(&v105 - 8 * v9);
    v139[4] = v118;
    dyld3::MachOFile::forEachSegment(a1, (__int64)v139);
    result = Diagnostics::hasError(a2);
    if ( (result & 1) == 0 )
    {
      result = dyld3::MachOFile::dependentDylibCount(a1, nullptr);
      v117 = result;
      if ( (_QWORD)v131 )
      {
        v107 = a4;
        v108 = (char *)&v135 + 8;
        v109 = &v105;
        LinkEditContent = (const unsigned __int8 **)dyld3::MachOLoaded::getLinkEditContent(
                                                      a1,
                                                      (char *)&v135 + 8,
                                                      *(unsigned int *)(v131 + 16));
        v139[0] = LinkEditContent;
        if ( !v138 )
        {
          v80 = 0;
          v81 = 0;
          LODWORD(v112) = 0;
          sleb128 = 0;
          LODWORD(v116) = 0;
          LODWORD(v114) = 0;
          uleb128 = 0;
          LODWORD(v113) = 0;
          v83 = (const unsigned __int8 **)((char *)LinkEditContent + *(unsigned int *)(v131 + 20));
          v110 = (const unsigned __int8 **)(a3 + 16);
          v111 = nullptr;
          v84 = v119;
          v106 = v83;
          do
          {
            if ( !Diagnostics::noError(a2) )
              break;
            v86 = v139[0];
            if ( v139[0] >= v83 )
              break;
            v87 = (unsigned __int8 *)v139[0] + 1;
            v88 = *(unsigned __int8 *)v139[0]++;
            if ( v88 >> 4 <= 0xC )
            {
              v89 = v88 & 0xF;
              switch ( v88 >> 4 )
              {
                case 0u:
                  v138 = 1;
                  goto LABEL_132;
                case 1u:
                  LODWORD(v116) = 1;
                  uleb128 = v88 & 0xF;
                  goto LABEL_132;
                case 2u:
                  uleb128 = dyld3::MachOFile::read_uleb128(a2, v139, v83, v85);
                  goto LABEL_115;
                case 3u:
                  if ( (v88 & 0xF) != 0 )
                    uleb128 = v88 | 0xFFFFFFF0;
                  else
                    uleb128 = 0;
LABEL_115:
                  LODWORD(v116) = 1;
                  goto LABEL_132;
                case 4u:
                  if ( *v87 )
                  {
                    v90 = (const unsigned __int8 **)((char *)v86 + 2);
                    do
                    {
                      v139[0] = v90;
                      v91 = *(unsigned __int8 *)v90;
                      v90 = (const unsigned __int8 **)((char *)v90 + 1);
                    }
                    while ( v91 );
                    v86 = (const unsigned __int8 **)((char *)v90 - 2);
                  }
                  LODWORD(v112) = v88 & 1;
                  v139[0] = (const unsigned __int8 **)((char *)v86 + 2);
                  v111 = v87;
                  goto LABEL_132;
                case 5u:
                  goto LABEL_133;
                case 6u:
                  sleb128 = dyld3::MachOFile::read_sleb128(a2, (Diagnostics *)v139, v83, v85);
                  goto LABEL_132;
                case 7u:
                  v81 = dyld3::MachOFile::read_uleb128(a2, v139, v83, v85);
                  LODWORD(v114) = 1;
                  LODWORD(v113) = v89;
                  goto LABEL_132;
                case 8u:
                  v81 += dyld3::MachOFile::read_uleb128(a2, v139, v83, v85);
                  goto LABEL_132;
                case 9u:
                  LOWORD(v104) = v112 & 1;
                  LOBYTE(v103) = v80;
                  BYTE4(v102) = v113;
                  LODWORD(v102) = v119;
                  (*(void (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, char *))(a3 + 16))(
                    a3,
                    "BIND_OPCODE_DO_BIND",
                    &v131,
                    v118,
                    v114 & 1,
                    v116 & 1,
                    v117,
                    uleb128,
                    v102,
                    v81,
                    v103,
                    v111,
                    v104,
                    sleb128,
                    &v138);
                  v81 += v84;
                  goto LABEL_132;
                case 0xAu:
                  LOWORD(v104) = v112 & 1;
                  LOBYTE(v103) = v80;
                  BYTE4(v102) = v113;
                  LODWORD(v102) = v119;
                  (*(void (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, char *))(a3 + 16))(
                    a3,
                    "BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB",
                    &v131,
                    v118,
                    v114 & 1,
                    v116 & 1,
                    v117,
                    uleb128,
                    v102,
                    v81,
                    v103,
                    v111,
                    v104,
                    sleb128,
                    &v138);
                  v81 += v84 + dyld3::MachOFile::read_uleb128(a2, v139, v83, v92);
                  goto LABEL_132;
                case 0xBu:
                  LOWORD(v104) = v112 & 1;
                  LOBYTE(v103) = v80;
                  BYTE4(v102) = v113;
                  v93 = v84;
                  v94 = v119;
                  LODWORD(v102) = v119;
                  (*(void (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, char *))(a3 + 16))(
                    a3,
                    "BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED",
                    &v131,
                    v118,
                    v114 & 1,
                    v116 & 1,
                    v117,
                    uleb128,
                    v102,
                    v81,
                    v103,
                    v111,
                    v104,
                    sleb128,
                    &v138);
                  v95 = v94 + v94 * (_DWORD)v89;
                  v84 = v93;
                  v83 = v106;
                  v81 += v95;
                  goto LABEL_132;
                case 0xCu:
                  v96 = dyld3::MachOFile::read_uleb128(a2, v139, v83, v85);
                  v98 = dyld3::MachOFile::read_uleb128(a2, v139, v83, v97);
                  if ( !v96 )
                    goto LABEL_132;
                  v105 = v84;
                  v99 = v98 + v84;
                  v100 = 1;
                  do
                  {
                    LOWORD(v104) = v112 & 1;
                    LOBYTE(v103) = v80;
                    BYTE4(v102) = v113;
                    LODWORD(v102) = v119;
                    (*(void (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, char *))(a3 + 16))(
                      a3,
                      "BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB",
                      &v131,
                      v118,
                      v114 & 1,
                      v116 & 1,
                      v117,
                      uleb128,
                      v102,
                      v81,
                      v103,
                      v111,
                      v104,
                      sleb128,
                      &v138);
                    v81 += v99;
                    if ( v138 )
                      break;
                    v101 = v100++;
                  }
                  while ( v96 > v101 );
                  v89 = v80;
                  v84 = v105;
                  v83 = v106;
                  goto LABEL_133;
                default:
                  break;
              }
            }
            Diagnostics::error(a2, "bad bind opcode 0x%02X", *v87);
LABEL_132:
            v89 = v80;
LABEL_133:
            v80 = v89;
          }
          while ( !v138 );
        }
        result = Diagnostics::hasError(a2);
        if ( (result & 1) == 0 )
        {
          if ( *(_DWORD *)(v131 + 36) )
          {
            v11 = (const unsigned __int8 **)dyld3::MachOLoaded::getLinkEditContent(
                                              a1,
                                              v108,
                                              *(unsigned int *)(v131 + 32));
            v12 = 0;
            LODWORD(v113) = 0;
            v116 = 0;
            v13 = 0;
            LODWORD(sleb128) = 0;
            v14 = 0;
            v15 = nullptr;
            LODWORD(v114) = 0;
            v139[0] = v11;
            v16 = (const unsigned __int8 **)((char *)v11 + *(unsigned int *)(v131 + 36));
            v138 = 0;
            v111 = (unsigned __int8 *)v119;
            v112 = a3 + 16;
            do
            {
              if ( !Diagnostics::noError(a2) )
                break;
              v18 = v139[0];
              if ( v139[0] >= v16 )
                break;
              v19 = (char *)v139[0] + 1;
              v20 = *(_BYTE *)v139[0]++;
              if ( (unsigned __int8)(v20 >> 4) > 9u )
              {
LABEL_23:
                Diagnostics::error(a2, "bad lazy bind opcode 0x%02X", v20 & 0xF0);
              }
              else
              {
                v21 = v20 & 0xF;
                switch ( v20 >> 4 )
                {
                  case 0:
                    break;
                  case 1:
                    v13 = 1;
                    v14 = v20 & 0xF;
                    break;
                  case 2:
                    v14 = dyld3::MachOFile::read_uleb128(a2, v139, v16, v17);
                    goto LABEL_17;
                  case 3:
                    if ( (v20 & 0xF) != 0 )
                      v14 = *(_DWORD *)&v20 | 0xFFFFFFF0;
                    else
                      v14 = 0;
LABEL_17:
                    v13 = 1;
                    break;
                  case 4:
                    if ( *v19 )
                    {
                      v22 = (const unsigned __int8 **)((char *)v18 + 2);
                      do
                      {
                        v139[0] = v22;
                        v23 = *(unsigned __int8 *)v22;
                        v22 = (const unsigned __int8 **)((char *)v22 + 1);
                      }
                      while ( v23 );
                      v18 = (const unsigned __int8 **)((char *)v22 - 2);
                    }
                    LODWORD(v113) = v20 & 1;
                    v139[0] = (const unsigned __int8 **)((char *)v18 + 2);
                    v15 = v19;
                    break;
                  case 6:
                    v116 = dyld3::MachOFile::read_sleb128(a2, (Diagnostics *)v139, v16, v17);
                    break;
                  case 7:
                    v12 = dyld3::MachOFile::read_uleb128(a2, v139, v16, v17);
                    LODWORD(sleb128) = 1;
                    LODWORD(v114) = v21;
                    break;
                  case 9:
                    BYTE1(v104) = 1;
                    LOBYTE(v104) = v113 & 1;
                    LOBYTE(v103) = 1;
                    BYTE4(v102) = v114;
                    LODWORD(v102) = v119;
                    (*(void (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, __int64, _QWORD, _QWORD, __int64, __int64, __int64, int, _BYTE *, int, __int64, char *))(a3 + 16))(
                      a3,
                      "BIND_OPCODE_DO_BIND",
                      &v131,
                      v118,
                      sleb128 & 1,
                      v13 & 1,
                      v117,
                      v14,
                      v102,
                      v12,
                      v103,
                      v15,
                      v104,
                      v116,
                      &v138);
                    v12 += (__int64)v111;
                    break;
                  default:
                    goto LABEL_23;
                }
              }
            }
            while ( !v138 );
          }
          result = Diagnostics::hasError(a2);
          if ( (result & 1) == 0 && *(_DWORD *)(v131 + 28) )
          {
            v24 = (const unsigned __int8 **)dyld3::MachOLoaded::getLinkEditContent(
                                              a1,
                                              v108,
                                              *(unsigned int *)(v131 + 24));
            v25 = 0;
            v26 = 0;
            v116 = 0;
            LODWORD(sleb128) = 0;
            v27 = nullptr;
            LODWORD(v114) = 0;
            v139[0] = v24;
            v28 = (const unsigned __int8 **)((char *)v24 + *(unsigned int *)(v131 + 28));
            v138 = 0;
            v112 = v119;
            v113 = a3 + 16;
            v111 = (unsigned __int8 *)(v107 + 16);
            v29 = 1;
            do
            {
              result = Diagnostics::noError(a2);
              if ( !(_DWORD)result )
                break;
              v31 = v139[0];
              if ( v139[0] >= v28 )
                break;
              v33 = (unsigned __int8 *)v139[0] + 1;
              v32 = *(unsigned __int8 *)v139[0]++;
              if ( v32 >> 4 <= 0xC )
              {
                v34 = v32 & 0xF;
                switch ( v32 >> 4 )
                {
                  case 0u:
                    v138 = 1;
                    goto LABEL_52;
                  case 1u:
                  case 2u:
                  case 3u:
                    result = Diagnostics::error(a2, "unexpected dylib ordinal in weak_bind");
                    goto LABEL_52;
                  case 4u:
                    if ( *v33 )
                    {
                      v35 = (const unsigned __int8 **)((char *)v31 + 2);
                      do
                      {
                        v139[0] = v35;
                        v36 = *(unsigned __int8 *)v35;
                        v35 = (const unsigned __int8 **)((char *)v35 + 1);
                      }
                      while ( v36 );
                      v31 = (const unsigned __int8 **)((char *)v35 - 2);
                    }
                    v26 = v32 & 1;
                    v139[0] = (const unsigned __int8 **)((char *)v31 + 2);
                    if ( (v32 & 8) != 0 )
                      result = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v107 + 16))(v107, v33);
                    v27 = v33;
                    goto LABEL_52;
                  case 5u:
                    goto LABEL_53;
                  case 6u:
                    result = dyld3::MachOFile::read_sleb128(a2, (Diagnostics *)v139, v28, v30);
                    v116 = result;
                    goto LABEL_52;
                  case 7u:
                    result = dyld3::MachOFile::read_uleb128(a2, v139, v28, v30);
                    v25 = result;
                    LODWORD(sleb128) = 1;
                    LODWORD(v114) = v34;
                    goto LABEL_52;
                  case 8u:
                    result = dyld3::MachOFile::read_uleb128(a2, v139, v28, v30);
                    v25 += result;
                    goto LABEL_52;
                  case 9u:
                    LOWORD(v104) = v26 & 1;
                    LOBYTE(v103) = v29;
                    BYTE4(v102) = v114;
                    LODWORD(v102) = v119;
                    result = (*(__int64 (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, char *))(a3 + 16))(
                               a3,
                               "BIND_OPCODE_DO_BIND",
                               &v131,
                               v118,
                               sleb128 & 1,
                               1,
                               v117,
                               4294967293LL,
                               v102,
                               v25,
                               v103,
                               v27,
                               v104,
                               v116,
                               &v138);
                    v37 = v112;
                    goto LABEL_51;
                  case 0xAu:
                    LOWORD(v104) = v26 & 1;
                    LOBYTE(v103) = v29;
                    BYTE4(v102) = v114;
                    LODWORD(v102) = v119;
                    (*(void (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, char *))(a3 + 16))(
                      a3,
                      "BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB",
                      &v131,
                      v118,
                      sleb128 & 1,
                      1,
                      v117,
                      4294967293LL,
                      v102,
                      v25,
                      v103,
                      v27,
                      v104,
                      v116,
                      &v138);
                    result = dyld3::MachOFile::read_uleb128(a2, v139, v28, v38);
                    v25 += v112 + result;
                    goto LABEL_52;
                  case 0xBu:
                    LOWORD(v104) = v26 & 1;
                    LOBYTE(v103) = v29;
                    BYTE4(v102) = v114;
                    v39 = v28;
                    v40 = v119;
                    LODWORD(v102) = v119;
                    result = (*(__int64 (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, char *))(a3 + 16))(
                               a3,
                               "BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED",
                               &v131,
                               v118,
                               sleb128 & 1,
                               1,
                               v117,
                               4294967293LL,
                               v102,
                               v25,
                               v103,
                               v27,
                               v104,
                               v116,
                               &v138);
                    v37 = v40 + v40 * (_DWORD)v34;
                    v28 = v39;
LABEL_51:
                    v25 += v37;
                    goto LABEL_52;
                  case 0xCu:
                    v41 = dyld3::MachOFile::read_uleb128(a2, v139, v28, v30);
                    result = dyld3::MachOFile::read_uleb128(a2, v139, v28, v42);
                    if ( !v41 )
                      goto LABEL_52;
                    v110 = v28;
                    v43 = result + v112;
                    v44 = 1;
                    do
                    {
                      LOWORD(v104) = v26 & 1;
                      LOBYTE(v103) = v29;
                      BYTE4(v102) = v114;
                      LODWORD(v102) = v119;
                      result = (*(__int64 (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, char *))(a3 + 16))(
                                 a3,
                                 "BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB",
                                 &v131,
                                 v118,
                                 sleb128 & 1,
                                 1,
                                 v117,
                                 4294967293LL,
                                 v102,
                                 v25,
                                 v103,
                                 v27,
                                 v104,
                                 v116,
                                 &v138);
                      v25 += v43;
                      if ( v138 )
                        break;
                      v45 = v44++;
                    }
                    while ( v41 > v45 );
                    v34 = v29;
                    v28 = v110;
                    goto LABEL_53;
                  default:
                    break;
                }
              }
              result = Diagnostics::error(a2, "bad bind opcode 0x%02X", *v33);
LABEL_52:
              v34 = v29;
LABEL_53:
              v29 = v34;
            }
            while ( !v138 );
          }
        }
      }
      else if ( !(_QWORD)v132 && (_QWORD)v133 )
      {
        v109 = &v105;
        v116 = dyld3::MachOAnalyzer::externalRelocBaseAddress(a1, v118, DWORD2(v137));
        v46 = (int *)dyld3::MachOLoaded::getLinkEditContent(a1, (char *)&v135 + 8, *(unsigned int *)(v133 + 64));
        v47 = &v46[2 * *(unsigned int *)(v133 + 68)];
        v48 = dyld3::MachOFile::is64(a1);
        sleb128 = dyld3::MachOLoaded::getLinkEditContent(
                    a1,
                    (char *)&v135 + 8,
                    *(unsigned int *)(*((_QWORD *)&v132 + 1) + 8LL));
        v49 = dyld3::MachOLoaded::getLinkEditContent(
                a1,
                (char *)&v135 + 8,
                *(unsigned int *)(*((_QWORD *)&v132 + 1) + 16LL));
        if ( v47 > v46 && (v138 & 1) == 0 )
        {
          v53 = v49;
          v54 = *(unsigned int *)(*((_QWORD *)&v132 + 1) + 12LL);
          if ( v48 )
            v55 = 3;
          else
            v55 = 2;
          v114 = a3 + 16;
          LODWORD(v50) = *(_DWORD *)(*((_QWORD *)&v132 + 1) + 20LL);
          v51 = v118 + 2;
          while ( 1 )
          {
            v56 = v46[1];
            if ( ((v56 >> 25) & 3) != v55 )
            {
              Diagnostics::error(a2, "external relocation has wrong r_length", v54);
              goto LABEL_136;
            }
            if ( v56 >> 28 )
            {
              Diagnostics::error(a2, "external relocation has wrong r_type", v54);
              goto LABEL_136;
            }
            if ( !DWORD2(v137) )
              goto LABEL_135;
            v57 = 0;
            v58 = v116 + *v46;
            v59 = 1;
            v60 = v51;
            while ( 1 )
            {
              v61 = v58 - (_QWORD)*v60;
              if ( v58 >= (unsigned __int64)*v60 && &(*v60)[(_QWORD)v60[1]] > (const unsigned __int8 *)v58 )
                break;
              v59 = ++v57 < (unsigned __int64)DWORD2(v137);
              v60 += 8;
              if ( DWORD2(v137) == v57 )
                goto LABEL_135;
            }
            if ( !v59 )
            {
LABEL_135:
              Diagnostics::error(a2, "local relocation has out of range r_address", v54);
              goto LABEL_136;
            }
            v62 = *(_QWORD *)&v56 & 0xFFFFFFLL;
            if ( (v56 & 0xFFFFFF) > (unsigned int)v54 )
            {
              Diagnostics::error(a2, "external relocation has out of range r_symbolnum", v54);
              goto LABEL_136;
            }
            v63 = sleb128 + 16 * v62;
            v64 = sleb128 + 12 * v62;
            if ( v48 )
              v65 = (unsigned int *)(sleb128 + 16 * v62);
            else
              v65 = (unsigned int *)(sleb128 + 12 * v62);
            v66 = *v65;
            v67 = (unsigned __int16 *)(v63 + 6);
            if ( !v48 )
              v67 = (unsigned __int16 *)(v64 + 6);
            v68 = *v67;
            v69 = (_BYTE *)(v63 + 4);
            v70 = (_BYTE *)(v64 + 4);
            if ( !v48 )
              v69 = v70;
            v71 = v68 >> 8;
            v72 = (unsigned __int8)(BYTE1(v68) + 2);
            if ( v72 < 3 )
              v71 = v72 - 2;
            v73 = (*((_BYTE *)a1 + 24) & 0x80) != 0 ? v71 : -2;
            if ( (unsigned int)v66 >= (unsigned int)v50 )
              break;
            v74 = ~v56;
            v75 = &(*v60)[(_QWORD)a1 - v136];
            LODWORD(v113) = v54;
            LODWORD(v112) = v55;
            LODWORD(v111) = v50;
            v110 = v51;
            if ( (v74 & 0x6000000) != 0 )
              v76 = *(unsigned int *)&v75[v61];
            else
              v76 = *(_QWORD *)&v75[v61];
            v77 = v53 + v66;
            if ( (v68 & 0x80) != 0 && (~*v69 & 0xF) == 0 )
              v79 = 4294967293LL;
            else
              v79 = v73;
            LOWORD(v104) = (v68 & 0x40) != 0;
            LOBYTE(v103) = 1;
            BYTE4(v102) = v57;
            LODWORD(v102) = v119;
            (*(void (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, unsigned __int64, int, __int64, int, __int64, char *))(a3 + 16))(
              a3,
              "external relocation",
              &v131,
              v118,
              1,
              1,
              v117,
              v79,
              v102,
              v61,
              v103,
              v77,
              v104,
              v76,
              &v138);
            v46 += 2;
            v54 = (unsigned int)v113;
            v55 = v112;
            v50 = (unsigned int)v111;
            v51 = v110;
            v52 = 4294967294LL;
            if ( v46 >= v47 || (v138 & 1) != 0 )
              goto LABEL_136;
          }
          Diagnostics::error(a2, "external relocation has r_symbolnum=%d which has out of range n_strx", v56 & 0xFFFFFF);
        }
LABEL_136:
        v120[0] = _NSConcreteStackBlock;
        v120[1] = 0x40000000;
        v124 = v134;
        v125 = v135;
        v126 = v136;
        v127 = v137;
        v121 = v131;
        v122 = v132;
        v120[2] = ___ZNK5dyld313MachOAnalyzer11forEachBindER11DiagnosticsU13block_pointerFvPKcRKNS_11MachOLoaded12LinkEditInfoEPKNS_9MachOFile11SegmentInfoEbbjijhyhS4_bbyRbEU13block_pointerFvS4_E_block_invoke;
        v120[3] = &unk_97E70;
        v120[5] = a1;
        v120[6] = v118;
        v123 = v133;
        v120[4] = a3;
        v129 = v117;
        v130 = v119;
        v128 = a2;
        return dyld3::MachOAnalyzer::forEachIndirectPointer(a1, a2, 0, v120, v50, v51, v52);
      }
    }
  }
  return result;
}
