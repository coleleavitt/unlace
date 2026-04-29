bool __fastcall dyld3::MachOAnalyzer::forEachBind_OpcodesLazy(
        dyld3::MachOFile *a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v9; // w28
  char v10; // w25
  char v11; // w23
  __int64 v12; // x27
  _BYTE *v13; // x20
  __int64 v14; // x26
  const unsigned __int8 **v15; // x24
  const unsigned __int8 *v16; // x3
  const unsigned __int8 **v17; // x10
  _BYTE *v18; // x8
  unsigned __int8 v19; // w9
  char v20; // w28
  const unsigned __int8 **v21; // x10
  int v22; // t1
  __int64 v24; // [xsp+0h] [xbp-D0h]
  int v25; // [xsp+10h] [xbp-C0h]
  int v26; // [xsp+20h] [xbp-B0h]
  int v27; // [xsp+30h] [xbp-A0h]
  __int64 v28; // [xsp+40h] [xbp-90h]
  unsigned int v29; // [xsp+54h] [xbp-7Ch]
  __int64 v31; // [xsp+60h] [xbp-70h]
  __int64 v32; // [xsp+68h] [xbp-68h]
  const unsigned __int8 **LinkEditContent; // [xsp+70h] [xbp-60h] BYREF
  char v34; // [xsp+7Fh] [xbp-51h] BYREF

  if ( !*(_QWORD *)a3 || !*(_DWORD *)(*(_QWORD *)a3 + 36LL) )
    return 0;
  v9 = dyld3::MachOFile::pointerSize(a1);
  v34 = 0;
  v29 = dyld3::MachOFile::dependentDylibCount(a1, nullptr);
  v10 = 0;
  v31 = 0;
  v32 = 0;
  v11 = 0;
  v12 = 0;
  v13 = nullptr;
  v14 = 0;
  LinkEditContent = (const unsigned __int8 **)dyld3::MachOLoaded::getLinkEditContent(
                                                (__int64)a1,
                                                a3 + 72,
                                                *(_DWORD *)(*(_QWORD *)a3 + 32LL));
  v15 = (const unsigned __int8 **)((char *)LinkEditContent + *(unsigned int *)(*(_QWORD *)a3 + 36LL));
  v28 = v9;
  do
  {
    if ( !Diagnostics::noError(a2) )
      break;
    v17 = LinkEditContent;
    if ( LinkEditContent >= v15 )
      break;
    v18 = (char *)LinkEditContent + 1;
    v19 = *(_BYTE *)LinkEditContent;
    LinkEditContent = (const unsigned __int8 **)((char *)LinkEditContent + 1);
    if ( (unsigned __int8)(v19 >> 4) > 9u )
    {
LABEL_19:
      Diagnostics::error(a2, "bad lazy bind opcode 0x%02X", v19 & 0xF0);
    }
    else
    {
      v20 = v19 & 0xF;
      switch ( v19 >> 4 )
      {
        case 0:
          break;
        case 1:
          v11 = 1;
          v12 = v19 & 0xF;
          break;
        case 2:
          v12 = dyld3::MachOFile::read_uleb128(a2, &LinkEditContent, v15, v16);
          goto LABEL_13;
        case 3:
          if ( (v19 & 0xF) != 0 )
            v12 = *(_DWORD *)&v19 | 0xFFFFFFF0;
          else
            v12 = 0;
LABEL_13:
          v11 = 1;
          break;
        case 4:
          if ( *v18 )
          {
            v21 = (const unsigned __int8 **)((char *)v17 + 2);
            do
            {
              LinkEditContent = v21;
              v22 = *(unsigned __int8 *)v21;
              v21 = (const unsigned __int8 **)((char *)v21 + 1);
            }
            while ( v22 );
            v17 = (const unsigned __int8 **)((char *)v21 - 2);
          }
          v10 = v19 & 1;
          LinkEditContent = (const unsigned __int8 **)((char *)v17 + 2);
          v13 = v18;
          break;
        case 6:
          v32 = dyld3::MachOFile::read_sleb128(a2, &LinkEditContent, v15, v16);
          break;
        case 7:
          v14 = dyld3::MachOFile::read_uleb128(a2, &LinkEditContent, v15, v16);
          LOBYTE(v31) = v20;
          BYTE4(v31) = 1;
          break;
        case 9:
          LOBYTE(v27) = 1;
          BYTE1(v26) = 1;
          LOBYTE(v26) = v10 & 1;
          LOBYTE(v25) = 1;
          BYTE4(v24) = v31;
          LODWORD(v24) = v28;
          (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64, int, _BYTE *, int, __int64, int, char *))(a5 + 16))(
            a5,
            "BIND_OPCODE_DO_BIND",
            a3,
            a4,
            BYTE4(v31) & 1,
            v11 & 1,
            v29,
            v12,
            v24,
            v14,
            v25,
            v13,
            v26,
            v32,
            v27,
            &v34);
          v14 += v28;
          break;
        default:
          goto LABEL_19;
      }
    }
  }
  while ( !v34 );
  return v34 != 0;
}
