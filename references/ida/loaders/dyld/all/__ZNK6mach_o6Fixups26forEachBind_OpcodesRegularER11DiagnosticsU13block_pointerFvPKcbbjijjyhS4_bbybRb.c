bool __fastcall mach_o::Fixups::forEachBind_OpcodesRegular(dyld3::MachOFile ***a1, Diagnostics *a2, __int64 a3)
{
  unsigned int v6; // w24
  __int64 v7; // x20
  char v8; // w22
  __int64 v9; // x27
  __int64 v10; // x25
  dyld3::MachOFile *v11; // x8
  const unsigned __int8 **v12; // x23
  const unsigned __int8 *v13; // x3
  const unsigned __int8 **v14; // x11
  unsigned __int8 *v15; // x9
  unsigned int v16; // w10
  int v17; // w26
  __int64 v18; // x8
  const unsigned __int8 **v19; // x8
  int v20; // t1
  const unsigned __int8 *v21; // x3
  unsigned __int64 v22; // x26
  const unsigned __int8 *v23; // x3
  __int64 v24; // x0
  __int64 v25; // x23
  unsigned int v26; // w21
  unsigned __int64 v27; // x8
  int v29; // [xsp+8h] [xbp-D8h]
  int v30; // [xsp+18h] [xbp-C8h]
  int v31; // [xsp+28h] [xbp-B8h]
  const unsigned __int8 **v32; // [xsp+38h] [xbp-A8h]
  Diagnostics *v33; // [xsp+40h] [xbp-A0h]
  unsigned __int8 v34; // [xsp+4Ch] [xbp-94h]
  unsigned int v35; // [xsp+5Ch] [xbp-84h]
  unsigned __int8 *v36; // [xsp+60h] [xbp-80h]
  char v37; // [xsp+68h] [xbp-78h]
  char v38; // [xsp+6Ch] [xbp-74h]
  __int64 v39; // [xsp+70h] [xbp-70h]
  char v40; // [xsp+78h] [xbp-68h]
  char v41; // [xsp+7Ch] [xbp-64h]
  const unsigned __int8 **v42; // [xsp+80h] [xbp-60h] BYREF
  char v43; // [xsp+8Fh] [xbp-51h] BYREF

  if ( !*((_BYTE *)(*a1)[3] + 316) )
    return 0;
  v6 = dyld3::MachOFile::pointerSize(**a1);
  v43 = 0;
  v35 = dyld3::MachOFile::dependentDylibCount(**a1, nullptr);
  v37 = 0;
  v39 = 0;
  v7 = 0;
  v8 = 0;
  v41 = 0;
  v38 = 0;
  v9 = 0;
  v36 = nullptr;
  v34 = 0;
  v10 = 0;
  v40 = 0;
  v11 = (*a1)[3];
  v42 = *((const unsigned __int8 ***)v11 + 37);
  v12 = (const unsigned __int8 **)((char *)v42 + *((unsigned int *)v11 + 76));
  do
  {
    if ( !Diagnostics::noError(a2) )
      break;
    v14 = v42;
    if ( v42 >= v12 || (((unsigned int)v7 ^ 1) & 1) == 0 )
      break;
    v15 = (unsigned __int8 *)v42 + 1;
    v16 = *(unsigned __int8 *)v42;
    v42 = (const unsigned __int8 **)((char *)v42 + 1);
    if ( v16 >> 4 <= 0xC )
    {
      v17 = v16 & 0xF;
      v18 = 1;
      switch ( v16 >> 4 )
      {
        case 0u:
          goto LABEL_33;
        case 1u:
          v41 = 1;
          v9 = v16 & 0xF;
          goto LABEL_32;
        case 2u:
          v9 = dyld3::MachOFile::read_uleb128(a2, &v42, v12, v13);
          goto LABEL_14;
        case 3u:
          if ( (v16 & 0xF) != 0 )
            v9 = v16 | 0xFFFFFFF0;
          else
            v9 = 0;
LABEL_14:
          v41 = 1;
          goto LABEL_32;
        case 4u:
          if ( *v15 )
          {
            v19 = (const unsigned __int8 **)((char *)v14 + 2);
            do
            {
              v42 = v19;
              v20 = *(unsigned __int8 *)v19;
              v19 = (const unsigned __int8 **)((char *)v19 + 1);
            }
            while ( v20 );
            v14 = (const unsigned __int8 **)((char *)v19 - 2);
          }
          v37 = v16 & 1;
          v42 = (const unsigned __int8 **)((char *)v14 + 2);
          v8 = 1;
          v36 = v15;
          goto LABEL_32;
        case 5u:
          v40 = v16 & 0xF;
          goto LABEL_32;
        case 6u:
          v39 = dyld3::MachOFile::read_sleb128(a2, &v42, v12, v13);
          v8 = 1;
          goto LABEL_32;
        case 7u:
          v10 = dyld3::MachOFile::read_uleb128(a2, &v42, v12, v13);
          v38 = 1;
          v34 = v17;
          goto LABEL_32;
        case 8u:
          v10 += dyld3::MachOFile::read_uleb128(a2, &v42, v12, v13);
          goto LABEL_32;
        case 9u:
          LOBYTE(v31) = v8;
          LOWORD(v30) = v37 & 1;
          LOBYTE(v29) = v40;
          (*(void (__fastcall **)(__int64, const char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, __int64, int, unsigned __int8 *, int, __int64, int, char *))(a3 + 16))(
            a3,
            "BIND_OPCODE_DO_BIND",
            v38 & 1,
            v41 & 1,
            v35,
            v9,
            v6,
            v34,
            v10,
            v29,
            v36,
            v30,
            v39,
            v31,
            &v43);
          v8 = 0;
          v10 += v6;
          goto LABEL_32;
        case 0xAu:
          LOBYTE(v31) = v8;
          LOWORD(v30) = v37 & 1;
          LOBYTE(v29) = v40;
          (*(void (__fastcall **)(__int64, const char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, __int64, int, unsigned __int8 *, int, __int64, int, char *))(a3 + 16))(
            a3,
            "BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB",
            v38 & 1,
            v41 & 1,
            v35,
            v9,
            v6,
            v34,
            v10,
            v29,
            v36,
            v30,
            v39,
            v31,
            &v43);
          v8 = 0;
          v10 += v6 + dyld3::MachOFile::read_uleb128(a2, &v42, v12, v21);
          goto LABEL_32;
        case 0xBu:
          LOBYTE(v31) = v8;
          LOWORD(v30) = v37 & 1;
          LOBYTE(v29) = v40;
          (*(void (__fastcall **)(__int64, const char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, __int64, int, unsigned __int8 *, int, __int64, int, char *))(a3 + 16))(
            a3,
            "BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED",
            v38 & 1,
            v41 & 1,
            v35,
            v9,
            v6,
            v34,
            v10,
            v29,
            v36,
            v30,
            v39,
            v31,
            &v43);
          v8 = 0;
          v10 += v6 + v6 * v17;
          goto LABEL_32;
        case 0xCu:
          v22 = dyld3::MachOFile::read_uleb128(a2, &v42, v12, v13);
          v24 = dyld3::MachOFile::read_uleb128(a2, &v42, v12, v23);
          if ( !v22 )
            goto LABEL_32;
          v32 = v12;
          v33 = a2;
          v25 = v24 + v6;
          v26 = 1;
          do
          {
            LOBYTE(v31) = v8;
            LOWORD(v30) = v37 & 1;
            LOBYTE(v29) = v40;
            (*(void (__fastcall **)(__int64, const char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, __int64, int, unsigned __int8 *, int, __int64, int, char *))(a3 + 16))(
              a3,
              "BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB",
              v38 & 1,
              v41 & 1,
              v35,
              v9,
              v6,
              v34,
              v10,
              v29,
              v36,
              v30,
              v39,
              v31,
              &v43);
            v8 = 0;
            v10 += v25;
            if ( v43 )
              break;
            v27 = v26++;
          }
          while ( v22 > v27 );
          v18 = v7;
          v12 = v32;
          a2 = v33;
          goto LABEL_33;
        default:
          break;
      }
    }
    Diagnostics::error(a2, "bad bind opcode 0x%02X", *v15);
LABEL_32:
    v18 = v7;
LABEL_33:
    v7 = v18;
  }
  while ( !v43 );
  return v43 != 0;
}
