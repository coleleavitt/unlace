__int64 __fastcall dyld3::MachOAnalyzer::forEachRebase_Opcodes(
        dyld3::MachOFile *a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v10; // w8
  const unsigned __int8 **LinkEditContent; // x0
  const unsigned __int8 **v12; // x25
  unsigned int v13; // w0
  int v14; // w22
  __int64 v15; // x26
  unsigned __int8 v16; // w24
  __int64 v17; // x23
  const unsigned __int8 *v18; // x3
  const unsigned __int8 **v19; // x8
  unsigned __int8 v20; // w9
  __int64 v21; // x19
  unsigned int v22; // w8
  unsigned int v23; // w21
  bool v24; // cf
  __int64 v25; // x0
  unsigned __int64 v26; // x23
  unsigned int v27; // w21
  unsigned __int64 v28; // x9
  bool v29; // cc
  const unsigned __int8 *v30; // x3
  unsigned __int64 v31; // x20
  const unsigned __int8 *v32; // x3
  __int64 v33; // x0
  unsigned int v34; // w22
  unsigned __int64 v35; // x9
  bool v36; // cc
  char *v37; // x8
  __int64 v39; // [xsp+18h] [xbp-B8h]
  int v40; // [xsp+20h] [xbp-B0h]
  unsigned int v41; // [xsp+2Ch] [xbp-A4h]
  const unsigned __int8 **v42; // [xsp+30h] [xbp-A0h]
  Diagnostics *v43; // [xsp+38h] [xbp-98h]
  __int64 v44; // [xsp+40h] [xbp-90h]
  __int64 v45; // [xsp+48h] [xbp-88h]
  __int64 v46; // [xsp+50h] [xbp-80h]
  __int64 v47; // [xsp+58h] [xbp-78h]
  __int64 v48; // [xsp+60h] [xbp-70h]
  int v49; // [xsp+70h] [xbp-60h]
  unsigned __int8 v50; // [xsp+77h] [xbp-59h] BYREF
  const unsigned __int8 **v51; // [xsp+78h] [xbp-58h] BYREF

  if ( dyld3::MachOFile::is64(a1) )
    v10 = 2;
  else
    v10 = 1;
  v41 = v10;
  if ( !*(_QWORD *)a3 )
    dyld3::MachOAnalyzer::forEachRebase_Opcodes();
  v46 = a4;
  LinkEditContent = (const unsigned __int8 **)dyld3::MachOLoaded::getLinkEditContent(
                                                (__int64)a1,
                                                a3 + 72,
                                                *(_DWORD *)(*(_QWORD *)a3 + 8LL));
  v45 = a3;
  v39 = *(unsigned int *)(*(_QWORD *)a3 + 12LL);
  v40 = (int)LinkEditContent;
  v12 = (const unsigned __int8 **)((char *)LinkEditContent + v39);
  v51 = LinkEditContent;
  v13 = dyld3::MachOFile::pointerSize(a1);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v50 = 0;
  v43 = a2;
  v44 = a5;
  v48 = v13;
  v42 = v12;
  do
  {
LABEL_6:
    if ( !Diagnostics::noError(a2) )
      break;
    v19 = v51;
    if ( v51 >= v12 )
      break;
    v20 = *(_BYTE *)v51;
    v51 = (const unsigned __int8 **)((char *)v51 + 1);
    if ( (unsigned __int8)(v20 >> 4) <= 8u )
    {
      v21 = v17;
      v17 = v20 & 0xF;
      switch ( v20 >> 4 )
      {
        case 0:
          v37 = (char *)v19 + 1;
          if ( (char *)v12 - v37 >= 16 )
            Diagnostics::error(a2, "rebase opcodes terminated early at offset %d of %d", (_DWORD)v37 - v40, v39);
          return 1;
        case 1:
          if ( (_DWORD)v17 == 1 )
          {
            v17 = v41;
          }
          else
          {
            if ( (_DWORD)v17 == 2 )
              v22 = 4;
            else
              v22 = 0;
            if ( (_DWORD)v17 == 3 )
              v17 = 3;
            else
              v17 = v22;
          }
          continue;
        case 2:
          v15 = dyld3::MachOFile::read_uleb128(a2, &v51, v12, v18);
          v14 = 1;
          v16 = v17;
          goto LABEL_46;
        case 3:
          v15 += dyld3::MachOFile::read_uleb128(a2, &v51, v12, v18);
          goto LABEL_46;
        case 4:
          v15 += (unsigned int)(v48 * v17);
          goto LABEL_46;
        case 5:
          if ( (v20 & 0xF) == 0 )
            goto LABEL_46;
          v23 = 1;
          do
          {
            (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 *))(v44 + 16))(
              v44,
              "REBASE_OPCODE_DO_REBASE_IMM_TIMES",
              v45,
              v46,
              v14 & 1,
              v48,
              v16,
              v15,
              v21,
              &v50);
            v15 += v48;
            if ( v50 )
              v24 = 1;
            else
              v24 = v23 >= (unsigned int)v17;
            ++v23;
          }
          while ( !v24 );
          v12 = v42;
          a2 = v43;
          v17 = v21;
          if ( v50 )
            return v50;
          goto LABEL_6;
        case 6:
          v25 = dyld3::MachOFile::read_uleb128(a2, &v51, v12, v18);
          if ( !v25 )
            goto LABEL_46;
          v26 = v25;
          v27 = 1;
          do
          {
            (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 *))(v44 + 16))(
              v44,
              "REBASE_OPCODE_DO_REBASE_ADD_ADDR_ULEB",
              v45,
              v46,
              v14 & 1,
              v48,
              v16,
              v15,
              v21,
              &v50);
            v15 += v48;
            v28 = v27++;
            if ( v50 )
              v29 = 0;
            else
              v29 = v26 > v28;
          }
          while ( v29 );
          v12 = v42;
          a2 = v43;
          v17 = v21;
          continue;
        case 7:
          v17 = v21;
          (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 *))(v44 + 16))(
            v44,
            "REBASE_OPCODE_DO_REBASE_ADD_ADDR_ULEB",
            v45,
            v46,
            v14 & 1,
            v48,
            v16,
            v15,
            v21,
            &v50);
          v15 += v48 + dyld3::MachOFile::read_uleb128(a2, &v51, v12, v30);
          continue;
        case 8:
          v31 = dyld3::MachOFile::read_uleb128(a2, &v51, v12, v18);
          if ( Diagnostics::hasError(a2) || (v33 = dyld3::MachOFile::read_uleb128(a2, &v51, v12, v32), !v31) )
          {
LABEL_46:
            v17 = v21;
          }
          else
          {
            v47 = v33 + v48;
            v49 = v14;
            v34 = 1;
            v17 = v21;
            do
            {
              (*(void (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 *))(v44 + 16))(
                v44,
                "REBASE_OPCODE_DO_REBASE_ULEB_TIMES_SKIPPING_ULEB",
                v45,
                v46,
                v49 & 1,
                v48,
                v16,
                v15,
                v21,
                &v50);
              v35 = v34++;
              v15 += v47;
              if ( v50 )
                v36 = 0;
              else
                v36 = v31 > v35;
            }
            while ( v36 );
            v12 = v42;
            a2 = v43;
            v14 = v49;
          }
          continue;
        default:
          break;
      }
    }
    Diagnostics::error(a2, "unknown rebase opcode 0x%02X", v20 & 0xF0);
  }
  while ( !v50 );
  return v50;
}
