bool __fastcall dyld3::MachOAnalyzer::forEachBind_OpcodesRegular(
        dyld3::MachOFile *a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v9; // w27
  const unsigned __int8 **LinkEditContent; // x0
  __int64 v11; // x22
  char v12; // w24
  __int64 v13; // x28
  __int64 v14; // x26
  const unsigned __int8 **v15; // x25
  __int64 v16; // x23
  const unsigned __int8 *v17; // x3
  const unsigned __int8 **v18; // x11
  unsigned __int8 *v19; // x9
  unsigned int v20; // w10
  int v21; // w27
  __int64 v22; // x8
  const unsigned __int8 **v23; // x8
  int v24; // t1
  const unsigned __int8 *v25; // x3
  unsigned __int64 v26; // x27
  const unsigned __int8 *v27; // x3
  __int64 v28; // x0
  __int64 v29; // x25
  unsigned int v30; // w20
  unsigned __int64 v31; // x8
  __int64 v33; // [xsp+0h] [xbp-100h]
  int v34; // [xsp+10h] [xbp-F0h]
  int v35; // [xsp+20h] [xbp-E0h]
  int v36; // [xsp+30h] [xbp-D0h]
  const unsigned __int8 **v37; // [xsp+40h] [xbp-C0h]
  Diagnostics *v38; // [xsp+48h] [xbp-B8h]
  unsigned int v39; // [xsp+5Ch] [xbp-A4h]
  unsigned __int8 *v40; // [xsp+60h] [xbp-A0h]
  char v41; // [xsp+6Ch] [xbp-94h]
  __int64 v42; // [xsp+70h] [xbp-90h]
  __int64 v43; // [xsp+78h] [xbp-88h]
  char v44; // [xsp+84h] [xbp-7Ch]
  char v46; // [xsp+94h] [xbp-6Ch]
  const unsigned __int8 **v47; // [xsp+98h] [xbp-68h] BYREF
  _BYTE v48[9]; // [xsp+A7h] [xbp-59h] BYREF

  if ( !*(_QWORD *)a3 || !*(_DWORD *)(*(_QWORD *)a3 + 20LL) )
    return 0;
  v9 = dyld3::MachOFile::pointerSize(a1);
  v48[0] = 0;
  v39 = dyld3::MachOFile::dependentDylibCount(a1, nullptr);
  LinkEditContent = (const unsigned __int8 **)dyld3::MachOLoaded::getLinkEditContent(
                                                (__int64)a1,
                                                a3 + 72,
                                                *(_DWORD *)(*(_QWORD *)a3 + 16LL));
  v41 = 0;
  v43 = 0;
  v11 = 0;
  v12 = 0;
  v46 = 0;
  v42 = 0;
  v13 = 0;
  v40 = nullptr;
  v14 = 0;
  v44 = 0;
  v47 = LinkEditContent;
  v15 = (const unsigned __int8 **)((char *)LinkEditContent + *(unsigned int *)(*(_QWORD *)a3 + 20LL));
  v16 = v9;
  do
  {
    if ( !Diagnostics::noError(a2) )
      break;
    v18 = v47;
    if ( v47 >= v15 || (((unsigned int)v11 ^ 1) & 1) == 0 )
      break;
    v19 = (unsigned __int8 *)v47 + 1;
    v20 = *(unsigned __int8 *)v47;
    v47 = (const unsigned __int8 **)((char *)v47 + 1);
    if ( v20 >> 4 <= 0xC )
    {
      v21 = v20 & 0xF;
      v22 = 1;
      switch ( v20 >> 4 )
      {
        case 0u:
          goto LABEL_34;
        case 1u:
          v46 = 1;
          v13 = v20 & 0xF;
          goto LABEL_33;
        case 2u:
          v13 = dyld3::MachOFile::read_uleb128(a2, &v47, v15, v17);
          goto LABEL_15;
        case 3u:
          if ( (v20 & 0xF) != 0 )
            v13 = v20 | 0xFFFFFFF0;
          else
            v13 = 0;
LABEL_15:
          v46 = 1;
          goto LABEL_33;
        case 4u:
          if ( *v19 )
          {
            v23 = (const unsigned __int8 **)((char *)v18 + 2);
            do
            {
              v47 = v23;
              v24 = *(unsigned __int8 *)v23;
              v23 = (const unsigned __int8 **)((char *)v23 + 1);
            }
            while ( v24 );
            v18 = (const unsigned __int8 **)((char *)v23 - 2);
          }
          v41 = v20 & 1;
          v47 = (const unsigned __int8 **)((char *)v18 + 2);
          v12 = 1;
          v40 = v19;
          goto LABEL_33;
        case 5u:
          v44 = v20 & 0xF;
          goto LABEL_33;
        case 6u:
          v43 = dyld3::MachOFile::read_sleb128(a2, &v47, v15, v17);
          v12 = 1;
          goto LABEL_33;
        case 7u:
          v14 = dyld3::MachOFile::read_uleb128(a2, &v47, v15, v17);
          LOBYTE(v42) = v21;
          BYTE4(v42) = 1;
          goto LABEL_33;
        case 8u:
          v14 += dyld3::MachOFile::read_uleb128(a2, &v47, v15, v17);
          goto LABEL_33;
        case 9u:
          LOBYTE(v36) = v12;
          LOWORD(v35) = v41 & 1;
          LOBYTE(v34) = v44;
          BYTE4(v33) = v42;
          LODWORD(v33) = v16;
          (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, int, _BYTE *))(a5 + 16))(
            a5,
            "BIND_OPCODE_DO_BIND",
            a3,
            a4,
            BYTE4(v42) & 1,
            v46 & 1,
            v39,
            v13,
            v33,
            v14,
            v34,
            v40,
            v35,
            v43,
            v36,
            v48);
          v12 = 0;
          v14 += v16;
          goto LABEL_33;
        case 0xAu:
          LOBYTE(v36) = v12;
          LOWORD(v35) = v41 & 1;
          LOBYTE(v34) = v44;
          BYTE4(v33) = v42;
          LODWORD(v33) = v16;
          (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, int, _BYTE *))(a5 + 16))(
            a5,
            "BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB",
            a3,
            a4,
            BYTE4(v42) & 1,
            v46 & 1,
            v39,
            v13,
            v33,
            v14,
            v34,
            v40,
            v35,
            v43,
            v36,
            v48);
          v12 = 0;
          v14 += v16 + dyld3::MachOFile::read_uleb128(a2, &v47, v15, v25);
          goto LABEL_33;
        case 0xBu:
          LOBYTE(v36) = v12;
          LOWORD(v35) = v41 & 1;
          LOBYTE(v34) = v44;
          BYTE4(v33) = v42;
          LODWORD(v33) = v16;
          (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, int, _BYTE *))(a5 + 16))(
            a5,
            "BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED",
            a3,
            a4,
            BYTE4(v42) & 1,
            v46 & 1,
            v39,
            v13,
            v33,
            v14,
            v34,
            v40,
            v35,
            v43,
            v36,
            v48);
          v12 = 0;
          v14 += (unsigned int)(v16 + v16 * v21);
          goto LABEL_33;
        case 0xCu:
          v26 = dyld3::MachOFile::read_uleb128(a2, &v47, v15, v17);
          v28 = dyld3::MachOFile::read_uleb128(a2, &v47, v15, v27);
          if ( !v26 )
            goto LABEL_33;
          v37 = v15;
          v38 = a2;
          v29 = v28 + v16;
          v30 = 1;
          do
          {
            LOBYTE(v36) = v12;
            LOWORD(v35) = v41 & 1;
            LOBYTE(v34) = v44;
            BYTE4(v33) = v42;
            LODWORD(v33) = v16;
            (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64, int, unsigned __int8 *, int, __int64, int, _BYTE *))(a5 + 16))(
              a5,
              "BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB",
              a3,
              a4,
              BYTE4(v42) & 1,
              v46 & 1,
              v39,
              v13,
              v33,
              v14,
              v34,
              v40,
              v35,
              v43,
              v36,
              v48);
            v12 = 0;
            v14 += v29;
            if ( v48[0] )
              break;
            v31 = v30++;
          }
          while ( v26 > v31 );
          v22 = v11;
          v15 = v37;
          a2 = v38;
          goto LABEL_34;
        default:
          break;
      }
    }
    Diagnostics::error(a2, "bad bind opcode 0x%02X", *v19);
LABEL_33:
    v22 = v11;
LABEL_34:
    v11 = v22;
  }
  while ( !v48[0] );
  return v48[0] != 0;
}
