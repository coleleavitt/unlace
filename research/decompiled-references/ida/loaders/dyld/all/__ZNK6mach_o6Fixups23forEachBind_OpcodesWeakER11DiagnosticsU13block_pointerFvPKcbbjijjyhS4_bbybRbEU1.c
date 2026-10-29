bool __fastcall mach_o::Fixups::forEachBind_OpcodesWeak(
        dyld3::MachOFile ***a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v8; // w26
  __int64 v9; // x27
  _BYTE *v10; // x24
  __int64 v11; // x25
  dyld3::MachOFile *v12; // x8
  char v13; // w21
  const unsigned __int8 *v14; // x3
  const unsigned __int8 **v15; // x9
  unsigned int v16; // w8
  _BYTE *v17; // x28
  __int64 v18; // x16
  int v19; // w19
  __int64 v20; // x8
  const unsigned __int8 **v21; // x8
  int v22; // t1
  const unsigned __int8 *v23; // x3
  unsigned __int64 v24; // x28
  const unsigned __int8 *v25; // x3
  __int64 v26; // x0
  __int64 v27; // x22
  unsigned int v28; // w23
  unsigned __int64 v29; // x8
  int v31; // [xsp+8h] [xbp-D8h]
  int v32; // [xsp+18h] [xbp-C8h]
  int v33; // [xsp+28h] [xbp-B8h]
  Diagnostics *v34; // [xsp+38h] [xbp-A8h]
  __int64 v35; // [xsp+40h] [xbp-A0h]
  unsigned __int8 v36; // [xsp+54h] [xbp-8Ch]
  unsigned __int8 **v37; // [xsp+58h] [xbp-88h]
  unsigned int v38; // [xsp+68h] [xbp-78h]
  char v39; // [xsp+6Ch] [xbp-74h]
  char v40; // [xsp+70h] [xbp-70h]
  char v41; // [xsp+74h] [xbp-6Ch]
  __int64 v42; // [xsp+78h] [xbp-68h]
  const unsigned __int8 **v43; // [xsp+80h] [xbp-60h] BYREF
  char v44; // [xsp+8Fh] [xbp-51h] BYREF

  if ( !*((_BYTE *)(*a1)[3] + 348) )
    return 0;
  v8 = dyld3::MachOFile::pointerSize(**a1);
  v44 = 0;
  v38 = dyld3::MachOFile::dependentDylibCount(**a1, nullptr);
  v9 = 0;
  v40 = 0;
  v42 = 0;
  v41 = 0;
  v10 = nullptr;
  v36 = 0;
  v11 = 0;
  v12 = (*a1)[3];
  v37 = (unsigned __int8 **)(*((_QWORD *)v12 + 41) + *((unsigned int *)v12 + 84));
  v43 = *((const unsigned __int8 ***)v12 + 41);
  v13 = 1;
  v39 = 1;
  do
  {
    if ( !Diagnostics::noError(a2) )
      break;
    v15 = v43;
    if ( v43 >= (const unsigned __int8 **)v37 || (((unsigned int)v9 ^ 1) & 1) == 0 )
      break;
    v17 = (char *)v43 + 1;
    v16 = *(unsigned __int8 *)v43;
    v43 = (const unsigned __int8 **)((char *)v43 + 1);
    v18 = v16 >> 4;
    if ( (unsigned int)v18 > 0xC )
    {
      Diagnostics::error(a2, "bad bind opcode 0x%02X");
LABEL_11:
      v20 = v9;
    }
    else
    {
      v19 = v16 & 0xF;
      v20 = 1;
      switch ( v18 )
      {
        case 0LL:
          break;
        case 1LL:
        case 2LL:
        case 3LL:
          Diagnostics::error(a2, "unexpected dylib ordinal in weak_bind");
          goto LABEL_11;
        case 4LL:
          if ( *v17 )
          {
            v21 = (const unsigned __int8 **)((char *)v15 + 2);
            do
            {
              v43 = v21;
              v22 = *(unsigned __int8 *)v21;
              v21 = (const unsigned __int8 **)((char *)v21 + 1);
            }
            while ( v22 );
            v15 = (const unsigned __int8 **)((char *)v21 - 2);
          }
          v40 = v19 & 1;
          v43 = (const unsigned __int8 **)((char *)v15 + 2);
          if ( (v19 & 8) != 0 )
            (*(void (__fastcall **)(__int64, _BYTE *))(a4 + 16))(a4, v17);
          v13 = 1;
          v10 = v17;
          goto LABEL_11;
        case 5LL:
          v39 = v19;
          goto LABEL_11;
        case 6LL:
          v42 = dyld3::MachOFile::read_sleb128(a2, &v43, (const unsigned __int8 **)v37, v14);
          v13 = 1;
          goto LABEL_11;
        case 7LL:
          v11 = dyld3::MachOFile::read_uleb128(a2, &v43, (const unsigned __int8 **)v37, v14);
          v41 = 1;
          v36 = v19;
          goto LABEL_11;
        case 8LL:
          v11 += dyld3::MachOFile::read_uleb128(a2, &v43, (const unsigned __int8 **)v37, v14);
          goto LABEL_11;
        case 9LL:
          LOBYTE(v33) = v13;
          LOWORD(v32) = v40 & 1;
          LOBYTE(v31) = v39;
          (*(void (__fastcall **)(__int64, const char *, _QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD, __int64, int, _BYTE *, int, __int64, int, char *))(a3 + 16))(
            a3,
            "BIND_OPCODE_DO_BIND",
            v41 & 1,
            1,
            v38,
            4294967293LL,
            v8,
            v36,
            v11,
            v31,
            v10,
            v32,
            v42,
            v33,
            &v44);
          v13 = 0;
          v11 += v8;
          goto LABEL_11;
        case 10LL:
          LOBYTE(v33) = v13;
          LOWORD(v32) = v40 & 1;
          LOBYTE(v31) = v39;
          (*(void (__fastcall **)(__int64, const char *, _QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD, __int64, int, _BYTE *, int, __int64, int, char *))(a3 + 16))(
            a3,
            "BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB",
            v41 & 1,
            1,
            v38,
            4294967293LL,
            v8,
            v36,
            v11,
            v31,
            v10,
            v32,
            v42,
            v33,
            &v44);
          v13 = 0;
          v11 += v8 + dyld3::MachOFile::read_uleb128(a2, &v43, (const unsigned __int8 **)v37, v23);
          goto LABEL_11;
        case 11LL:
          LOBYTE(v33) = v13;
          LOWORD(v32) = v40 & 1;
          LOBYTE(v31) = v39;
          (*(void (__fastcall **)(__int64, const char *, _QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD, __int64, int, _BYTE *, int, __int64, int, char *))(a3 + 16))(
            a3,
            "BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED",
            v41 & 1,
            1,
            v38,
            4294967293LL,
            v8,
            v36,
            v11,
            v31,
            v10,
            v32,
            v42,
            v33,
            &v44);
          v13 = 0;
          v11 += v8 + v8 * v19;
          goto LABEL_11;
        case 12LL:
          v24 = dyld3::MachOFile::read_uleb128(a2, &v43, (const unsigned __int8 **)v37, v14);
          v26 = dyld3::MachOFile::read_uleb128(a2, &v43, (const unsigned __int8 **)v37, v25);
          if ( !v24 )
            goto LABEL_11;
          v34 = a2;
          v35 = a4;
          v27 = v26 + v8;
          v28 = 1;
          do
          {
            LOBYTE(v33) = v13;
            LOWORD(v32) = v40 & 1;
            LOBYTE(v31) = v39;
            (*(void (__fastcall **)(__int64, const char *, _QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD, __int64, int, _BYTE *, int, __int64, int, char *))(a3 + 16))(
              a3,
              "BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB",
              v41 & 1,
              1,
              v38,
              4294967293LL,
              v8,
              v36,
              v11,
              v31,
              v10,
              v32,
              v42,
              v33,
              &v44);
            v13 = 0;
            v11 += v27;
            if ( v44 )
              break;
            v29 = v28++;
          }
          while ( v24 > v29 );
          v20 = v9;
          a2 = v34;
          a4 = v35;
          break;
      }
    }
    v9 = v20;
  }
  while ( !v44 );
  return v44 != 0;
}
