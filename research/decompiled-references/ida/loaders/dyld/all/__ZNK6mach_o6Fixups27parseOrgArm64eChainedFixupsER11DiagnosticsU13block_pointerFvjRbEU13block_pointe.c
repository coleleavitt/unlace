__int64 __fastcall mach_o::Fixups::parseOrgArm64eChainedFixups(
        dyld3::MachOFile ***a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // x0
  dyld3::MachOFile *v11; // x8
  char v12; // w23
  __int64 v13; // x26
  _BYTE *v14; // x27
  __int64 v15; // x25
  const unsigned __int8 **v16; // x24
  const unsigned __int8 *v17; // x3
  const unsigned __int8 **v18; // x10
  _BYTE *v19; // x8
  unsigned int v20; // w9
  int v21; // w28
  __int64 v22; // x0
  const unsigned __int8 **v23; // x10
  int v24; // t1
  unsigned __int64 v25; // x0
  unsigned int v26; // [xsp+20h] [xbp-80h]
  unsigned __int8 v27; // [xsp+24h] [xbp-7Ch]
  __int64 v28; // [xsp+28h] [xbp-78h]
  __int64 v29; // [xsp+30h] [xbp-70h]
  __int64 v30; // [xsp+38h] [xbp-68h]
  const unsigned __int8 **v31; // [xsp+40h] [xbp-60h] BYREF
  char v32; // [xsp+4Fh] [xbp-51h] BYREF

  v32 = 0;
  result = dyld3::MachOFile::dependentDylibCount(**a1, nullptr);
  v11 = (*a1)[3];
  if ( *((_BYTE *)v11 + 316) )
  {
    v26 = result;
    v27 = 0;
    v29 = 0;
    v30 = 0;
    v12 = 0;
    v13 = 0;
    v14 = nullptr;
    v28 = 0;
    v15 = 0;
    v31 = *((const unsigned __int8 ***)v11 + 37);
    v16 = (const unsigned __int8 **)((char *)v31 + *((unsigned int *)v11 + 76));
    do
    {
      if ( !Diagnostics::noError(a2) )
        break;
      v18 = v31;
      if ( v31 >= v16 )
        break;
      v19 = (char *)v31 + 1;
      v20 = *(unsigned __int8 *)v31;
      v21 = v20 & 0xF;
      v31 = (const unsigned __int8 **)((char *)v31 + 1);
      if ( v20 >> 4 <= 0xD )
      {
        v22 = v20 & 0xF;
        switch ( v20 >> 4 )
        {
          case 0u:
            goto LABEL_7;
          case 1u:
            v12 = 1;
            v22 = v15;
            v13 = v20 & 0xF;
            goto LABEL_32;
          case 2u:
            v13 = dyld3::MachOFile::read_uleb128(a2, &v31, v16, v17);
            goto LABEL_13;
          case 3u:
            if ( (v20 & 0xF) != 0 )
              v13 = v20 | 0xFFFFFFF0;
            else
              v13 = 0;
LABEL_13:
            v12 = 1;
            goto LABEL_31;
          case 4u:
            if ( *v19 )
            {
              v23 = (const unsigned __int8 **)((char *)v18 + 2);
              do
              {
                v31 = v23;
                v24 = *(unsigned __int8 *)v23;
                v23 = (const unsigned __int8 **)((char *)v23 + 1);
              }
              while ( v24 );
              v18 = (const unsigned __int8 **)((char *)v23 - 2);
            }
            BYTE4(v29) = v20 & 1;
            v31 = (const unsigned __int8 **)((char *)v18 + 2);
            v22 = v15;
            v14 = v19;
            goto LABEL_32;
          case 5u:
            goto LABEL_32;
          case 6u:
            v30 = dyld3::MachOFile::read_sleb128(a2, &v31, v16, v17);
            goto LABEL_31;
          case 7u:
            v28 = dyld3::MachOFile::read_uleb128(a2, &v31, v16, v17);
            LOBYTE(v29) = 1;
            v22 = v15;
            v27 = v21;
            goto LABEL_32;
          case 9u:
            if ( a4 )
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, _BYTE *, __int64, _QWORD, char *))(a4 + 16))(
                a4,
                v12 & 1,
                v26,
                v13,
                (unsigned __int8)v15,
                v14,
                v30,
                BYTE4(v29) & 1,
                &v32);
            goto LABEL_31;
          case 0xDu:
            if ( v21 == 1 )
            {
              if ( a5 )
                (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, char *))(a5 + 16))(
                  a5,
                  v27,
                  v29 & 1,
                  v28,
                  1,
                  &v32);
            }
            else if ( (v20 & 0xF) != 0 )
            {
              Diagnostics::error(a2, "bad BIND_OPCODE_THREADED sub-opcode 0x%02X");
            }
            else
            {
              v25 = dyld3::MachOFile::read_uleb128(a2, &v31, v16, v17);
              if ( v25 < 0x10000 )
              {
                if ( a3 )
                  (*(void (__fastcall **)(__int64, unsigned __int64, char *))(a3 + 16))(a3, v25, &v32);
              }
              else
              {
                Diagnostics::error(a2, "BIND_SUBOPCODE_THREADED_SET_BIND_ORDINAL_TABLE_SIZE_ULEB size too large");
LABEL_7:
                v32 = 1;
              }
            }
            goto LABEL_31;
          default:
            break;
        }
      }
      Diagnostics::error(a2, "bad bind opcode 0x%02X");
LABEL_31:
      v22 = v15;
LABEL_32:
      v15 = v22;
    }
    while ( !v32 );
    return Diagnostics::hasError(a2);
  }
  return result;
}
