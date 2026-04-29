bool __fastcall mach_o::Fixups::forEachBind_OpcodesLazy(dyld3::MachOFile ***a1, Diagnostics *a2, __int64 a3)
{
  unsigned int v6; // w25
  char v7; // w28
  char v8; // w26
  __int64 v9; // x27
  _BYTE *v10; // x22
  __int64 v11; // x24
  dyld3::MachOFile *v12; // x8
  const unsigned __int8 **v13; // x23
  const unsigned __int8 *v14; // x3
  const unsigned __int8 **v15; // x10
  _BYTE *v16; // x8
  unsigned __int8 v17; // w9
  char v18; // w21
  const unsigned __int8 **v19; // x10
  int v20; // t1
  int v22; // [xsp+8h] [xbp-B8h]
  int v23; // [xsp+18h] [xbp-A8h]
  int v24; // [xsp+28h] [xbp-98h]
  unsigned int v25; // [xsp+4Ch] [xbp-74h]
  __int64 v26; // [xsp+50h] [xbp-70h]
  __int64 v27; // [xsp+58h] [xbp-68h]
  const unsigned __int8 **v28; // [xsp+60h] [xbp-60h] BYREF
  char v29; // [xsp+6Fh] [xbp-51h] BYREF

  if ( !*((_BYTE *)(*a1)[3] + 380) )
    return 0;
  v6 = dyld3::MachOFile::pointerSize(**a1);
  v29 = 0;
  v25 = dyld3::MachOFile::dependentDylibCount(**a1, nullptr);
  v7 = 0;
  v26 = 0;
  v27 = 0;
  v8 = 0;
  v9 = 0;
  v10 = nullptr;
  v11 = 0;
  v12 = (*a1)[3];
  v13 = (const unsigned __int8 **)(*((_QWORD *)v12 + 45) + *((unsigned int *)v12 + 92));
  v28 = *((const unsigned __int8 ***)v12 + 45);
  do
  {
    if ( !Diagnostics::noError(a2) )
      break;
    v15 = v28;
    if ( v28 >= v13 )
      break;
    v16 = (char *)v28 + 1;
    v17 = *(_BYTE *)v28;
    v28 = (const unsigned __int8 **)((char *)v28 + 1);
    if ( (unsigned __int8)(v17 >> 4) > 9u )
    {
LABEL_18:
      Diagnostics::error(a2, "bad lazy bind opcode 0x%02X", v17 & 0xF0);
    }
    else
    {
      v18 = v17 & 0xF;
      switch ( v17 >> 4 )
      {
        case 0:
          break;
        case 1:
          v8 = 1;
          v9 = v17 & 0xF;
          break;
        case 2:
          v9 = dyld3::MachOFile::read_uleb128(a2, &v28, v13, v14);
          goto LABEL_12;
        case 3:
          if ( (v17 & 0xF) != 0 )
            v9 = *(_DWORD *)&v17 | 0xFFFFFFF0;
          else
            v9 = 0;
LABEL_12:
          v8 = 1;
          break;
        case 4:
          if ( *v16 )
          {
            v19 = (const unsigned __int8 **)((char *)v15 + 2);
            do
            {
              v28 = v19;
              v20 = *(unsigned __int8 *)v19;
              v19 = (const unsigned __int8 **)((char *)v19 + 1);
            }
            while ( v20 );
            v15 = (const unsigned __int8 **)((char *)v19 - 2);
          }
          v7 = v17 & 1;
          v28 = (const unsigned __int8 **)((char *)v15 + 2);
          v10 = v16;
          break;
        case 6:
          v27 = dyld3::MachOFile::read_sleb128(a2, &v28, v13, v14);
          break;
        case 7:
          v11 = dyld3::MachOFile::read_uleb128(a2, &v28, v13, v14);
          LOBYTE(v26) = v18;
          BYTE4(v26) = 1;
          break;
        case 9:
          LOBYTE(v24) = 1;
          BYTE1(v23) = 1;
          LOBYTE(v23) = v7 & 1;
          LOBYTE(v22) = 1;
          (*(void (__fastcall **)(__int64, const char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, __int64, int, _BYTE *, int, __int64, int, char *))(a3 + 16))(
            a3,
            "BIND_OPCODE_DO_BIND",
            BYTE4(v26) & 1,
            v8 & 1,
            v25,
            v9,
            v6,
            (unsigned __int8)v26,
            v11,
            v22,
            v10,
            v23,
            v27,
            v24,
            &v29);
          v11 += v6;
          break;
        default:
          goto LABEL_18;
      }
    }
  }
  while ( !v29 );
  return v29 != 0;
}
