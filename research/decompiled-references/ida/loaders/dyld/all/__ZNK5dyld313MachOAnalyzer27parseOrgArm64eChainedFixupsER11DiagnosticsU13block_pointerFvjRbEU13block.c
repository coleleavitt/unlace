__int64 __fastcall dyld3::MachOAnalyzer::parseOrgArm64eChainedFixups(
        dyld3::MachOFile *a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // x0
  __int64 v11; // x8
  const unsigned __int8 **v12; // x23
  const unsigned __int8 **LinkEditContent; // x0
  __int64 uleb128; // x26
  __int64 v15; // x24
  const unsigned __int8 **v16; // x25
  const unsigned __int8 *v17; // x3
  const unsigned __int8 **v18; // x10
  _BYTE *v19; // x8
  unsigned int v20; // w9
  int v21; // w28
  __int64 v22; // x0
  const unsigned __int8 **v23; // x10
  int v24; // t1
  unsigned __int64 v25; // x0
  int v26; // [xsp+8h] [xbp-168h]
  __int64 v27; // [xsp+20h] [xbp-150h] BYREF
  __int64 v28; // [xsp+28h] [xbp-148h]
  __int64 v29; // [xsp+30h] [xbp-140h]
  unsigned int v30; // [xsp+38h] [xbp-138h]
  int v31; // [xsp+3Ch] [xbp-134h]
  __int64 v32; // [xsp+40h] [xbp-130h]
  int v33; // [xsp+4Ch] [xbp-124h]
  _BYTE *v34; // [xsp+50h] [xbp-120h]
  int v35; // [xsp+5Ch] [xbp-114h]
  __int64 sleb128; // [xsp+60h] [xbp-110h]
  int v37; // [xsp+6Ch] [xbp-104h]
  _QWORD v38[9]; // [xsp+70h] [xbp-100h] BYREF
  __int64 v39; // [xsp+B8h] [xbp-B8h] BYREF
  char v40; // [xsp+E7h] [xbp-89h] BYREF
  const unsigned __int8 **v41[5]; // [xsp+E8h] [xbp-88h] BYREF

  v40 = 0;
  dyld3::MachOLoaded::getLinkEditPointers((__int64)a1, a2, (__int64)v38);
  result = Diagnostics::hasError(a2);
  if ( (result & 1) == 0 )
  {
    __chkstk_darwin();
    v12 = (const unsigned __int8 **)(&v27 - 8 * v11);
    v41[0] = (const unsigned __int8 **)_NSConcreteStackBlock;
    v41[1] = (const unsigned __int8 **)0x40000000;
    v41[2] = (const unsigned __int8 **)___ZNK5dyld313MachOAnalyzer19getAllSegmentsInfosER11DiagnosticsPNS_9MachOFile11SegmentInfoE_block_invoke;
    v41[3] = (const unsigned __int8 **)&__block_descriptor_tmp_58_2;
    v41[4] = v12;
    dyld3::MachOFile::forEachSegment(a1, (__int64)v41);
    result = Diagnostics::hasError(a2);
    if ( (result & 1) == 0 )
    {
      result = dyld3::MachOFile::dependentDylibCount(a1, nullptr);
      if ( v38[0] )
      {
        v30 = result;
        LinkEditContent = (const unsigned __int8 **)dyld3::MachOLoaded::getLinkEditContent(
                                                      a1,
                                                      &v39,
                                                      *(unsigned int *)(v38[0] + 16LL));
        v35 = 0;
        sleb128 = 0;
        v37 = 0;
        v33 = 0;
        uleb128 = 0;
        v34 = nullptr;
        v31 = 0;
        v32 = 0;
        v15 = 0;
        v41[0] = LinkEditContent;
        v16 = (const unsigned __int8 **)((char *)LinkEditContent + *(unsigned int *)(v38[0] + 20LL));
        v28 = a5 + 16;
        v27 = a3 + 16;
        v29 = a4 + 16;
        do
        {
          if ( !Diagnostics::noError(a2) )
            break;
          v18 = v41[0];
          if ( v41[0] >= v16 )
            break;
          v19 = (char *)v41[0] + 1;
          v20 = *(unsigned __int8 *)v41[0];
          v21 = v20 & 0xF;
          ++v41[0];
          if ( v20 >> 4 <= 0xD )
          {
            v22 = v20 & 0xF;
            switch ( v20 >> 4 )
            {
              case 0u:
                goto LABEL_9;
              case 1u:
                v37 = 1;
                v22 = v15;
                uleb128 = v20 & 0xF;
                goto LABEL_34;
              case 2u:
                uleb128 = dyld3::MachOFile::read_uleb128(a2, v41, v16, v17);
                goto LABEL_15;
              case 3u:
                if ( (v20 & 0xF) != 0 )
                  uleb128 = v20 | 0xFFFFFFF0;
                else
                  uleb128 = 0;
LABEL_15:
                v37 = 1;
                goto LABEL_33;
              case 4u:
                if ( *v19 )
                {
                  v23 = (const unsigned __int8 **)((char *)v18 + 2);
                  do
                  {
                    v41[0] = v23;
                    v24 = *(unsigned __int8 *)v23;
                    v23 = (const unsigned __int8 **)((char *)v23 + 1);
                  }
                  while ( v24 );
                  v18 = (const unsigned __int8 **)((char *)v23 - 2);
                }
                v35 = v20 & 1;
                v41[0] = (const unsigned __int8 **)((char *)v18 + 2);
                v22 = v15;
                v34 = v19;
                goto LABEL_34;
              case 5u:
                goto LABEL_34;
              case 6u:
                sleb128 = dyld3::MachOFile::read_sleb128(a2, (Diagnostics *)v41, v16, v17);
                goto LABEL_33;
              case 7u:
                v32 = dyld3::MachOFile::read_uleb128(a2, v41, v16, v17);
                v33 = 1;
                v22 = v15;
                v31 = v21;
                goto LABEL_34;
              case 9u:
                if ( a4 )
                {
                  LOBYTE(v26) = v35 & 1;
                  (*(void (__fastcall **)(__int64, _QWORD *, const unsigned __int8 **, _QWORD, _QWORD, __int64, _QWORD, _BYTE *, __int64, int, char *))(a4 + 16))(
                    a4,
                    v38,
                    v12,
                    v37 & 1,
                    v30,
                    uleb128,
                    (unsigned __int8)v15,
                    v34,
                    sleb128,
                    v26,
                    &v40);
                }
                goto LABEL_33;
              case 0xDu:
                if ( v21 == 1 )
                {
                  if ( a5 )
                    (*(void (__fastcall **)(__int64, _QWORD *, const unsigned __int8 **, _QWORD, _QWORD, __int64, __int64, char *, __int64, __int64, __int64))(a5 + 16))(
                      a5,
                      v38,
                      v12,
                      (unsigned __int8)v31,
                      v33 & 1,
                      v32,
                      1,
                      &v40,
                      v27,
                      v28,
                      v29);
                }
                else if ( (v20 & 0xF) != 0 )
                {
                  Diagnostics::error(a2, "bad BIND_OPCODE_THREADED sub-opcode 0x%02X");
                }
                else
                {
                  v25 = dyld3::MachOFile::read_uleb128(a2, v41, v16, v17);
                  if ( v25 < 0x10000 )
                  {
                    if ( a3 )
                      (*(void (__fastcall **)(__int64, unsigned __int64, char *))(a3 + 16))(a3, v25, &v40);
                  }
                  else
                  {
                    Diagnostics::error(a2, "BIND_SUBOPCODE_THREADED_SET_BIND_ORDINAL_TABLE_SIZE_ULEB size too large");
LABEL_9:
                    v40 = 1;
                  }
                }
                goto LABEL_33;
              default:
                break;
            }
          }
          Diagnostics::error(a2, "bad bind opcode 0x%02X");
LABEL_33:
          v22 = v15;
LABEL_34:
          v15 = v22;
        }
        while ( !v40 );
        return Diagnostics::hasError(a2);
      }
    }
  }
  return result;
}
