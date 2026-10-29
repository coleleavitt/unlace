__int64 dyld3::MachOAnalyzer::forEachRebase()
{
  __int64 v0; // x0
  __int64 v1; // x2
  __int64 v2; // x26
  Diagnostics *v3; // x1
  Diagnostics *v4; // x28
  dyld3::MachOFile *v5; // x25
  __int64 result; // x0
  __int64 v7; // x8
  const unsigned __int8 **v8; // x24
  int v9; // w20
  const unsigned __int8 **LinkEditContent; // x0
  const unsigned __int8 **v11; // x24
  unsigned int v12; // w0
  __int64 v13; // x21
  char v14; // w20
  __int64 v15; // x8
  __int64 v16; // x26
  unsigned int *v17; // x27
  const unsigned __int8 *v18; // x3
  const unsigned __int8 **v19; // x8
  unsigned __int8 v20; // w9
  __int64 v21; // x25
  unsigned int v22; // w23
  unsigned int v23; // w8
  unsigned int v24; // w22
  const unsigned __int8 **v25; // x21
  __int64 v26; // x28
  unsigned int *v27; // x24
  __int64 v28; // x25
  unsigned __int8 v29; // w27
  int v30; // w8
  bool v31; // cf
  unsigned __int64 v32; // x24
  unsigned int v33; // w22
  __int64 v34; // x27
  const unsigned __int8 **v35; // x28
  __int64 v36; // x25
  unsigned __int8 v37; // w21
  unsigned __int64 v38; // x9
  bool v39; // cc
  __int64 v40; // x25
  const unsigned __int8 *v41; // x3
  unsigned __int64 uleb128; // x21
  const unsigned __int8 *v43; // x3
  const unsigned __int8 **v44; // x22
  unsigned int v45; // w28
  __int64 v46; // x23
  __int64 v47; // x27
  unsigned __int8 v48; // w25
  unsigned __int64 v49; // x9
  bool v50; // cc
  int v51; // w22
  __int64 v52; // x24
  unsigned __int64 v53; // x26
  unsigned __int64 v54; // x20
  _BOOL4 v55; // w27
  _QWORD *v56; // x0
  __int64 v57; // x4
  __int64 v58; // x5
  __int64 v59; // x6
  char v60; // w23
  int v61; // w28
  const char *v62; // x27
  unsigned int v63; // w8
  __int64 v64; // x9
  __int64 v65; // t1
  unsigned int *v66; // x27
  __int64 v67; // x16
  char *v68; // x26
  const char *v69; // x1
  __int64 v70; // x8
  unsigned __int64 v71; // x12
  bool v72; // w13
  char *v73; // x10
  unsigned __int64 v74; // x14
  const char *v75; // x24
  char *v76; // x8
  __int64 v77; // [xsp+10h] [xbp-4240h] BYREF
  __int64 v78; // [xsp+18h] [xbp-4238h]
  const unsigned __int8 **v79; // [xsp+20h] [xbp-4230h]
  unsigned int v80; // [xsp+2Ch] [xbp-4224h]
  const unsigned __int8 **v81; // [xsp+30h] [xbp-4220h]
  __int64 *v82; // [xsp+38h] [xbp-4218h]
  Diagnostics *v83; // [xsp+40h] [xbp-4210h]
  __int64 v84; // [xsp+48h] [xbp-4208h]
  const unsigned __int8 **v85; // [xsp+50h] [xbp-4200h]
  __int64 v86; // [xsp+58h] [xbp-41F8h]
  unsigned int v87; // [xsp+64h] [xbp-41ECh]
  __int64 v88; // [xsp+68h] [xbp-41E8h]
  unsigned int *v89; // [xsp+70h] [xbp-41E0h]
  __int64 v90; // [xsp+78h] [xbp-41D8h]
  _QWORD v91[7]; // [xsp+80h] [xbp-41D0h] BYREF
  __int128 v92; // [xsp+B8h] [xbp-4198h]
  __int128 v93; // [xsp+C8h] [xbp-4188h]
  __int128 v94; // [xsp+D8h] [xbp-4178h]
  __int128 v95; // [xsp+E8h] [xbp-4168h]
  __int128 v96; // [xsp+F8h] [xbp-4158h]
  __int128 v97; // [xsp+108h] [xbp-4148h]
  __int128 v98; // [xsp+118h] [xbp-4138h]
  Diagnostics *v99; // [xsp+128h] [xbp-4128h]
  int v100; // [xsp+130h] [xbp-4120h]
  char v101; // [xsp+134h] [xbp-411Ch]
  _QWORD v102[2]; // [xsp+138h] [xbp-4118h] BYREF
  __int64 v103; // [xsp+148h] [xbp-4108h]
  vm_address_t v104; // [xsp+150h] [xbp-4100h]
  vm_size_t v105; // [xsp+158h] [xbp-40F8h]
  char v106; // [xsp+167h] [xbp-40E9h] BYREF
  __int128 v107; // [xsp+168h] [xbp-40E8h] BYREF
  __int128 v108; // [xsp+178h] [xbp-40D8h]
  __int128 v109; // [xsp+188h] [xbp-40C8h]
  __int128 v110; // [xsp+198h] [xbp-40B8h]
  _OWORD v111[2]; // [xsp+1A8h] [xbp-40A8h] BYREF
  __int128 v112; // [xsp+1C8h] [xbp-4088h]
  const unsigned __int8 **v113[2049]; // [xsp+1D8h] [xbp-4078h] BYREF

  v0 = __chkstk_darwin();
  v2 = v1;
  v4 = v3;
  v5 = (dyld3::MachOFile *)v0;
  dyld3::MachOLoaded::getLinkEditPointers(v0, v3, (__int64)&v107);
  result = Diagnostics::hasError(v4);
  if ( (result & 1) == 0 )
  {
    __chkstk_darwin();
    v8 = (const unsigned __int8 **)(&v77 - 8 * v7);
    v113[0] = (const unsigned __int8 **)_NSConcreteStackBlock;
    v113[1] = (const unsigned __int8 **)0x40000000;
    v113[2] = (const unsigned __int8 **)___ZNK5dyld313MachOAnalyzer19getAllSegmentsInfosER11DiagnosticsPNS_9MachOFile11SegmentInfoE_block_invoke;
    v113[3] = (const unsigned __int8 **)&__block_descriptor_tmp_58_2;
    v113[4] = v8;
    dyld3::MachOFile::forEachSegment(v5, (__int64)v113);
    result = Diagnostics::hasError(v4);
    if ( (result & 1) == 0 )
    {
      result = dyld3::MachOFile::is64(v5);
      if ( (_DWORD)result )
        v9 = 2;
      else
        v9 = 1;
      v83 = v4;
      v84 = v2;
      v85 = v8;
      if ( (_QWORD)v107 )
      {
        v80 = v9;
        LinkEditContent = (const unsigned __int8 **)dyld3::MachOLoaded::getLinkEditContent(
                                                      (__int64)v5,
                                                      (__int64)v111 + 8,
                                                      *(_DWORD *)(v107 + 8));
        v78 = *(unsigned int *)(v107 + 12);
        v79 = LinkEditContent;
        v11 = (const unsigned __int8 **)((char *)LinkEditContent + v78);
        v113[0] = LinkEditContent;
        v12 = dyld3::MachOFile::pointerSize(v5);
        v13 = 0;
        v87 = 0;
        v14 = 0;
        v15 = v2;
        v16 = 0;
        LOBYTE(v102[0]) = 0;
        v17 = (unsigned int *)(v15 + 16);
        v86 = v12;
        v81 = v11;
        v82 = &v77;
        v89 = (unsigned int *)(v15 + 16);
        do
        {
          result = Diagnostics::noError(v4);
          if ( !(_DWORD)result )
            break;
          v19 = v113[0];
          if ( v113[0] >= v11 )
            break;
          v20 = *(_BYTE *)v113[0]++;
          if ( (unsigned __int8)(v20 >> 4) > 8u )
          {
LABEL_20:
            result = Diagnostics::error(v4, "unknown rebase opcode 0x%02X", v20 & 0xF0);
          }
          else
          {
            v21 = v13;
            v22 = v20 & 0xF;
            switch ( v20 >> 4 )
            {
              case 0:
                v76 = (char *)v19 + 1;
                if ( (char *)v11 - v76 >= 16 )
                  return Diagnostics::error(
                           v4,
                           "rebase opcodes terminated early at offset %d of %d",
                           (int)v76 - (int)v79,
                           v78);
                return result;
              case 1:
                if ( v22 == 1 )
                {
                  v13 = v80;
                }
                else
                {
                  if ( v22 == 2 )
                    v23 = 4;
                  else
                    v23 = 0;
                  if ( v22 == 3 )
                    v13 = 3;
                  else
                    v13 = v23;
                }
                break;
              case 2:
                result = dyld3::MachOFile::read_uleb128(v4, v113, v11, v18);
                v16 = result;
                v87 = v22;
                v14 = 1;
                goto LABEL_48;
              case 3:
                result = dyld3::MachOFile::read_uleb128(v4, v113, v11, v18);
                v16 += result;
                goto LABEL_48;
              case 4:
                v16 += (unsigned int)v86 * v22;
                goto LABEL_48;
              case 5:
                if ( (v20 & 0xF) == 0 )
                  goto LABEL_48;
                v24 = 1;
                v26 = v84;
                v25 = v85;
                v27 = v17;
                LODWORD(v90) = v21;
                v28 = v86;
                v29 = v87;
                do
                {
                  result = (*(__int64 (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, _QWORD, __int64, _QWORD, __int64, _DWORD, _QWORD *))(v26 + 16))(
                             v26,
                             "REBASE_OPCODE_DO_REBASE_IMM_TIMES",
                             &v107,
                             v25,
                             v14 & 1,
                             v28,
                             v29,
                             v16,
                             v90,
                             v102);
                  v16 += v28;
                  v30 = LOBYTE(v102[0]);
                  if ( LOBYTE(v102[0]) )
                    v31 = 1;
                  else
                    v31 = v24 >= v22;
                  ++v24;
                }
                while ( !v31 );
                v4 = v83;
                v17 = v27;
                v11 = v81;
                v13 = (unsigned int)v90;
                continue;
              case 6:
                result = dyld3::MachOFile::read_uleb128(v4, v113, v11, v18);
                if ( !result )
                  goto LABEL_48;
                v32 = result;
                v33 = 1;
                v34 = v84;
                v35 = v85;
                LODWORD(v90) = v13;
                v36 = v86;
                v37 = v87;
                do
                {
                  result = (*(__int64 (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, _QWORD, __int64, _QWORD, __int64, _DWORD, _QWORD *))(v34 + 16))(
                             v34,
                             "REBASE_OPCODE_DO_REBASE_ADD_ADDR_ULEB",
                             &v107,
                             v35,
                             v14 & 1,
                             v36,
                             v37,
                             v16,
                             v90,
                             v102);
                  v16 += v36;
                  v38 = v33++;
                  if ( LOBYTE(v102[0]) )
                    v39 = 0;
                  else
                    v39 = v32 > v38;
                }
                while ( v39 );
                goto LABEL_47;
              case 7:
                v40 = v86;
                (*(void (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, _QWORD, __int64, _QWORD, __int64, _DWORD, _QWORD *))(v84 + 16))(
                  v84,
                  "REBASE_OPCODE_DO_REBASE_ADD_ADDR_ULEB",
                  &v107,
                  v85,
                  v14 & 1,
                  v86,
                  (unsigned __int8)v87,
                  v16,
                  v13,
                  v102);
                result = dyld3::MachOFile::read_uleb128(v4, v113, v11, v41);
                v16 += v40 + result;
                break;
              case 8:
                uleb128 = dyld3::MachOFile::read_uleb128(v4, v113, v11, v18);
                result = Diagnostics::hasError(v4);
                if ( (result & 1) != 0 || (result = dyld3::MachOFile::read_uleb128(v4, v113, v11, v43), !uleb128) )
                {
LABEL_48:
                  v13 = v21;
                }
                else
                {
                  v44 = v85;
                  v88 = result + v86;
                  v45 = 1;
                  LODWORD(v90) = v21;
                  v46 = v84;
                  v47 = v86;
                  v48 = v87;
                  do
                  {
                    result = (*(__int64 (__fastcall **)(__int64, const char *, __int128 *, const unsigned __int8 **, _QWORD, __int64, _QWORD, __int64, _DWORD, _QWORD *))(v46 + 16))(
                               v46,
                               "REBASE_OPCODE_DO_REBASE_ULEB_TIMES_SKIPPING_ULEB",
                               &v107,
                               v44,
                               v14 & 1,
                               v47,
                               v48,
                               v16,
                               v90,
                               v102);
                    v49 = v45++;
                    v16 += v88;
                    if ( LOBYTE(v102[0]) )
                      v50 = 0;
                    else
                      v50 = uleb128 > v49;
                  }
                  while ( v50 );
LABEL_47:
                  v4 = v83;
                  v11 = v81;
                  v17 = v89;
                  v13 = (unsigned int)v90;
                }
                break;
              default:
                goto LABEL_20;
            }
          }
          v30 = LOBYTE(v102[0]);
        }
        while ( !v30 );
      }
      else if ( !(_QWORD)v108 || (result = dyld3::MachOFile::isFileSet(v5), (_DWORD)result) )
      {
        if ( (_QWORD)v109 )
        {
          v51 = v9;
          v82 = &v77;
          v52 = dyld3::MachOAnalyzer::localRelocBaseAddress(v5, v8, DWORD2(v112));
          v53 = dyld3::MachOLoaded::getLinkEditContent((__int64)v5, (__int64)v111 + 8, *(_DWORD *)(v109 + 72));
          v54 = v53 + 8LL * *(unsigned int *)(v109 + 76);
          v106 = 0;
          v55 = dyld3::MachOFile::is64(v5);
          v56 = (_QWORD *)dyld3::MachOFile::pointerSize(v5);
          v60 = (char)v56;
          v102[0] = v113;
          v102[1] = 2048;
          v104 = 0;
          v105 = 0;
          v103 = 0;
          if ( v54 > v53 )
          {
            if ( v55 )
              v61 = 3;
            else
              v61 = 2;
            v62 = "local relocation has wrong r_length";
            while ( 1 )
            {
              v63 = *(_DWORD *)(v53 + 4);
              if ( ((v63 >> 25) & 3) != v61 )
                break;
              if ( v63 >> 28 )
              {
                v62 = "local relocation has wrong r_type";
                break;
              }
              v56 = dyld3::OverflowSafeArray<relocation_info,4294967295ul>::verifySpace(v102, 1);
              v64 = v103++;
              v65 = *(_QWORD *)v53;
              v53 += 8LL;
              *(_QWORD *)(v102[0] + 8 * v64) = v65;
              if ( v53 >= v54 )
                goto LABEL_67;
            }
            v56 = (_QWORD *)Diagnostics::error(v83, v62);
          }
LABEL_67:
          if ( v103 )
          {
            dyld3::MachOAnalyzer::sortRelocations(v56, v102);
            if ( v103 )
            {
              v66 = (unsigned int *)v102[0];
              v67 = v102[0] + 8 * v103;
              v90 = v84 + 16;
              v68 = (char *)v85 + 52;
              v69 = "local relocation";
              while ( DWORD2(v112) )
              {
                v70 = 0;
                v71 = v52 + *v66;
                v72 = 1;
                v73 = v68;
                while ( 1 )
                {
                  v74 = *(_QWORD *)(v73 - 36);
                  if ( v71 >= v74 && *(_QWORD *)(v73 - 28) + v74 > v71 )
                    break;
                  v72 = ++v70 < (unsigned __int64)DWORD2(v112);
                  v73 += 64;
                  if ( DWORD2(v112) == v70 )
                    goto LABEL_79;
                }
                if ( !v72 )
                  break;
                v88 = v52;
                v89 = (unsigned int *)v67;
                v75 = v69;
                (*(void (__fastcall **)(__int64, const char *))(v84 + 16))(v84, v69);
                v69 = v75;
                v66 += 2;
                v52 = v88;
                v67 = (__int64)v89;
                if ( v66 == v89 )
                  goto LABEL_80;
              }
LABEL_79:
              Diagnostics::error(v83, "local relocation has out of range r_address", &v106, 4);
            }
          }
LABEL_80:
          v91[0] = _NSConcreteStackBlock;
          v91[1] = 0x40000000;
          v95 = v110;
          v96 = v111[0];
          v97 = v111[1];
          v98 = v112;
          v92 = v107;
          v93 = v108;
          v91[2] = ___ZNK5dyld313MachOAnalyzer13forEachRebaseER11DiagnosticsU13block_pointerFvPKcRKNS_11MachOLoaded12LinkEditInfoEPKNS_9MachOFile11SegmentInfoEbjhyNS0_6RebaseERbE_block_invoke;
          v91[3] = &unk_97DD0;
          v91[5] = v5;
          v91[6] = v85;
          v94 = v109;
          v91[4] = v84;
          v101 = v60;
          v100 = v51;
          v99 = v83;
          result = dyld3::MachOAnalyzer::forEachIndirectPointer(v5, v83, 0, v91, v57, v58, v59);
          v103 = 0;
          if ( v104 )
            return vm_deallocate(mach_task_self_, v104, v105);
        }
      }
    }
  }
  return result;
}
