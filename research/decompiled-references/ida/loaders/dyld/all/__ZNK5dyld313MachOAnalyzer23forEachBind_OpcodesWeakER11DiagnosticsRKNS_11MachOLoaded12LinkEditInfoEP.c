bool __fastcall dyld3::MachOAnalyzer::forEachBind_OpcodesWeak(
        dyld3::MachOFile *a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v10; // w28
  __int64 v11; // x26
  _BYTE *v12; // x25
  __int64 v13; // x27
  char v14; // w21
  const unsigned __int8 *v15; // x3
  const unsigned __int8 **v16; // x9
  unsigned int v17; // w8
  _BYTE *v18; // x19
  __int64 v19; // x16
  int v20; // w24
  __int64 v21; // x8
  const unsigned __int8 **v22; // x8
  int v23; // t1
  const unsigned __int8 *v24; // x3
  unsigned __int64 v25; // x19
  const unsigned __int8 *v26; // x3
  __int64 v27; // x0
  __int64 v28; // x24
  unsigned int v29; // w23
  unsigned __int64 v30; // x8
  __int64 v32; // [xsp+0h] [xbp-100h]
  int v33; // [xsp+10h] [xbp-F0h]
  int v34; // [xsp+20h] [xbp-E0h]
  int v35; // [xsp+30h] [xbp-D0h]
  __int64 v36; // [xsp+50h] [xbp-B0h]
  unsigned __int8 **v37; // [xsp+58h] [xbp-A8h]
  unsigned int v38; // [xsp+6Ch] [xbp-94h]
  char v39; // [xsp+70h] [xbp-90h]
  char v40; // [xsp+74h] [xbp-8Ch]
  __int64 v41; // [xsp+78h] [xbp-88h]
  __int64 v42; // [xsp+80h] [xbp-80h]
  const unsigned __int8 **LinkEditContent; // [xsp+98h] [xbp-68h] BYREF
  _BYTE v46[9]; // [xsp+A7h] [xbp-59h] BYREF

  if ( !*(_QWORD *)a3 || !*(_DWORD *)(*(_QWORD *)a3 + 28LL) )
    return 0;
  v10 = dyld3::MachOFile::pointerSize(a1);
  v46[0] = 0;
  v38 = dyld3::MachOFile::dependentDylibCount(a1, nullptr);
  v11 = 0;
  v41 = 0;
  v42 = 0;
  v12 = nullptr;
  v13 = 0;
  LinkEditContent = (const unsigned __int8 **)dyld3::MachOLoaded::getLinkEditContent(
                                                (__int64)a1,
                                                a3 + 72,
                                                *(_DWORD *)(*(_QWORD *)a3 + 24LL));
  v36 = a6;
  v37 = (unsigned __int8 **)((char *)LinkEditContent + *(unsigned int *)(*(_QWORD *)a3 + 28LL));
  v14 = 1;
  v39 = 1;
  v40 = 0;
  do
  {
    if ( !Diagnostics::noError(a2) )
      break;
    v16 = LinkEditContent;
    if ( LinkEditContent >= (const unsigned __int8 **)v37 || (((unsigned int)v11 ^ 1) & 1) == 0 )
      break;
    v18 = (char *)LinkEditContent + 1;
    v17 = *(unsigned __int8 *)LinkEditContent;
    LinkEditContent = (const unsigned __int8 **)((char *)LinkEditContent + 1);
    v19 = v17 >> 4;
    if ( (unsigned int)v19 > 0xC )
    {
      Diagnostics::error(a2, "bad bind opcode 0x%02X");
LABEL_12:
      v21 = v11;
    }
    else
    {
      v20 = v17 & 0xF;
      v21 = 1;
      switch ( v19 )
      {
        case 0LL:
          break;
        case 1LL:
        case 2LL:
        case 3LL:
          Diagnostics::error(a2, "unexpected dylib ordinal in weak_bind");
          goto LABEL_12;
        case 4LL:
          if ( *v18 )
          {
            v22 = (const unsigned __int8 **)((char *)v16 + 2);
            do
            {
              LinkEditContent = v22;
              v23 = *(unsigned __int8 *)v22;
              v22 = (const unsigned __int8 **)((char *)v22 + 1);
            }
            while ( v23 );
            v16 = (const unsigned __int8 **)((char *)v22 - 2);
          }
          v40 = v20 & 1;
          LinkEditContent = (const unsigned __int8 **)((char *)v16 + 2);
          if ( (v20 & 8) != 0 )
            (*(void (__fastcall **)(__int64, _BYTE *))(v36 + 16))(v36, v18);
          v14 = 1;
          v12 = v18;
          goto LABEL_12;
        case 5LL:
          v39 = v20;
          goto LABEL_12;
        case 6LL:
          v42 = dyld3::MachOFile::read_sleb128(a2, &LinkEditContent, (const unsigned __int8 **)v37, v15);
          v14 = 1;
          goto LABEL_12;
        case 7LL:
          v13 = dyld3::MachOFile::read_uleb128(a2, &LinkEditContent, (const unsigned __int8 **)v37, v15);
          LOBYTE(v41) = v20;
          BYTE4(v41) = 1;
          goto LABEL_12;
        case 8LL:
          v13 += dyld3::MachOFile::read_uleb128(a2, &LinkEditContent, (const unsigned __int8 **)v37, v15);
          goto LABEL_12;
        case 9LL:
          LOBYTE(v35) = v14;
          LOWORD(v34) = v40 & 1;
          LOBYTE(v33) = v39;
          BYTE4(v32) = v41;
          LODWORD(v32) = v10;
          (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, __int64, _QWORD, __int64, __int64, __int64, int, _BYTE *, int, __int64, int, _BYTE *))(a5 + 16))(
            a5,
            "BIND_OPCODE_DO_BIND",
            a3,
            a4,
            BYTE4(v41) & 1,
            1,
            v38,
            4294967293LL,
            v32,
            v13,
            v33,
            v12,
            v34,
            v42,
            v35,
            v46);
          v14 = 0;
          v13 += v10;
          goto LABEL_12;
        case 10LL:
          LOBYTE(v35) = v14;
          LOWORD(v34) = v40 & 1;
          LOBYTE(v33) = v39;
          BYTE4(v32) = v41;
          LODWORD(v32) = v10;
          (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, __int64, _QWORD, __int64, __int64, __int64, int, _BYTE *, int, __int64, int, _BYTE *))(a5 + 16))(
            a5,
            "BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB",
            a3,
            a4,
            BYTE4(v41) & 1,
            1,
            v38,
            4294967293LL,
            v32,
            v13,
            v33,
            v12,
            v34,
            v42,
            v35,
            v46);
          v14 = 0;
          v13 += v10 + dyld3::MachOFile::read_uleb128(a2, &LinkEditContent, (const unsigned __int8 **)v37, v24);
          goto LABEL_12;
        case 11LL:
          LOBYTE(v35) = v14;
          LOWORD(v34) = v40 & 1;
          LOBYTE(v33) = v39;
          BYTE4(v32) = v41;
          LODWORD(v32) = v10;
          (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, __int64, _QWORD, __int64, __int64, __int64, int, _BYTE *, int, __int64, int, _BYTE *))(a5 + 16))(
            a5,
            "BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED",
            a3,
            a4,
            BYTE4(v41) & 1,
            1,
            v38,
            4294967293LL,
            v32,
            v13,
            v33,
            v12,
            v34,
            v42,
            v35,
            v46);
          v14 = 0;
          v13 += v10 + v10 * v20;
          goto LABEL_12;
        case 12LL:
          v25 = dyld3::MachOFile::read_uleb128(a2, &LinkEditContent, (const unsigned __int8 **)v37, v15);
          v27 = dyld3::MachOFile::read_uleb128(a2, &LinkEditContent, (const unsigned __int8 **)v37, v26);
          if ( v25 )
          {
            v28 = v27 + v10;
            v29 = 1;
            do
            {
              LOBYTE(v35) = v14;
              LOWORD(v34) = v40 & 1;
              LOBYTE(v33) = v39;
              BYTE4(v32) = v41;
              LODWORD(v32) = v10;
              (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, __int64, _QWORD, __int64, __int64, __int64, int, _BYTE *, int, __int64, int, _BYTE *))(a5 + 16))(
                a5,
                "BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB",
                a3,
                a4,
                BYTE4(v41) & 1,
                1,
                v38,
                4294967293LL,
                v32,
                v13,
                v33,
                v12,
                v34,
                v42,
                v35,
                v46);
              v14 = 0;
              v13 += v28;
              if ( v46[0] )
                break;
              v30 = v29++;
            }
            while ( v25 > v30 );
          }
          v21 = v11;
          break;
      }
    }
    v11 = v21;
  }
  while ( !v46[0] );
  return v46[0] != 0;
}
